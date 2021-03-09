# Dates select from mysql to write in myfile

import pathlib
import MySQLdb

mySQLServer = "database-2.czmdavhidebl.eu-central-1.rds.amazonaws.com"
myDatabase = "ip_prog"
myuser = "user1"
mypass = "Admin1mysql"

conn = MySQLdb.connect(host=mySQLServer,
                       user=myuser,
                       password=mypass,
                       database=myDatabase)
cursor = conn.cursor()

mySQLQuery = ("""
SELECT n_monitor FROM f_monitor
""")
cursor.execute(mySQLQuery)

# Получаем данные
results = cursor.fetchall()
# Разрываем подключение
conn.close()

pn = 0
for row in results:
    modelmonitor = row[0]
    pn += 1
    print("List monitors: " + str(pn) + " " + str(modelmonitor) + " !")

print("\n End all select table! \n")


from pathlib import Path

# Получаем строку, содержащую путь к домашней директории:
dir_path = pathlib.Path.home()
# Объединяем полученную строку с недостающими частями пути
patch_file = Path(dir_path, 'Pychar', 'file_results.txt')
myfile = open(patch_file, mode='w', encoding='utf_8')

pn = 0
for line in results:
    modelmonitor = line[0]
    pn += 1
    print("List monitors: " + str(pn) + " " + str(modelmonitor) + " !")
    myfile.write("List monitors: " + str(pn) + " " + str(modelmonitor) + " !\n")

myfile.close()

print("\n Recording completed!")
