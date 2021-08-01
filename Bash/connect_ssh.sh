#!/bin/bash

pach_key="/home/dmitry/Documents/key_a/pem"
my_pach="/Users/dmitrybublikov/Documents"
remote_pach="/home/ubuntu"
name=(
'*::*;*@*;;*;;;*'
'Server-ssh::ssh-key.pem;ec2-user@18.198.201.66;;mysql;;;33015'
)

IFS=$'\n' name=($(sort <<<"${name[*]}")); unset IFS

ssh_idx=1
for index in "${name[@]:1}" ; do
    str_name=${index%%::*}

    str_k=${index%%;*}
    str_key=${str_k##*::}

    str_u=${index%%@*}
    str_user=${str_u##*;}

    str_i=${index%%;;*}
    str_ip=${str_i##*@}

    echo -e "\n $ssh_idx. $str_name ssh -i $str_key $str_user@$str_ip"
    ((ssh_idx++))
done
echo -e "\n"


 read -p "Please enter your number server for ssh (01 for copy file; 02 connect sql):" number

a=${#name[@]}
cd $pach_key


case $number in

 01)
 for index in "${name[@]:1}" ; do
     str_name=${index%%::*}

     str_k=${index%%;*}
     str_key=${str_k##*::}

     str_u=${index%%@*}
     str_user=${str_u##*;}

     str_i=${index%%;;*}
     str_ip=${str_i##*@}

     echo $str_name
     echo "scp -i $str_key $str_user@$str_ip:remote_pach/*.bz2 $my_pach && tar xvf *.bz2"

     echo "tar cjf *.bz2 ** && scp -i $str_key $my_pach/*.bz2 $str_user@$str_ip:remote_pach"
 done
 ;;

 02)
 for index in "${name[@]:1}" ; do
     str_name=${index%%::*}

     str_i=${index%%;;*}
     str_ip=${str_i##*@}

     str_s=${index%%;;;*}
     str_sql=${str_s##*;;}

     str_port=${index##*;;;}

     echo "$str_name"

     case $str_sql in
     mysql)
     echo "Connect to sql"
     echo "mysql -uroot -p -h $str_ip --port=$str_port"

     echo "Create dump all base"
     echo "mysqldump -u root -p -A -h $str_ip --port=$str_port > master_db.sql"

     echo "Restore dump base";
     echo "mysql -u root -p  -h $str_ip --port=$str_port  < master_db.sql"
     ;;
     postgre)
     echo "Connect to sql"
     echo "psql -U hci-kidz -h $str_ip -p $str_port -d hci-kidz"

     echo "Create dump all base"
     echo "pg_dumpall -U hci-kidz -h $str_ip -p $str_port > dump_hci-kidz_dev.sql"

     echo "Restore dump base"
     echo "pg_dumpall -U hci-kidz -h $str_ip -p $str_port < dump_hci-kidz_dev.sql"
     ;;
   esac
   done
   ;;

 *)
 index=${name[$number]};
 str_k=${index%%;*}
 str_key=${str_k##*::}

 str_u=${index%%@*}
 str_user=${str_u##*;}

 str_i=${index%%;;*}
 str_ip=${str_i##*@}

 if [[ $number =~ ^[0-9]+$ && $number -le $a && $number -gt 0 ]]
 then
  chmod 400 $str_key
  clear
  ssh -i $str_key $str_user@$str_ip
 else
    echo "Parameter Unknow, sorry!"
 fi
 ;;

esac
