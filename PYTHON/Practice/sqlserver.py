# import pyodbc
# import pandas as pd
from print_color import print
from tabulate import tabulate

# def read(conn):
#     print("Read")
#     cursor = conn.cursor()
#     cursor.execute("select * from flight")
#     for row in cursor:
#         print(row)
try:
    conn_string = "driver={SQL SERVER}; server=localhost; database=aman; trusted_connection=YES;"
    # conn = pyodbc.connect(conn_string)
except:
    print(" Connection Error")
# cursor = conn.cursor()

print("\n\t\t Flight Details",color='purple')

# import mysql.connector

# mydb = mysql.connector.connect(
#                 host="localhost",
#                 user="root",
#                 passwd="password",
#                 database="testDB"
#               )

# mycursor = mydb.cursor()
# mycursor.execute("SELECT emp_name, salary FROM emp_table")

# cursor = conn.cursor()
# cursor.execute("SELECT * from flight")
# myresult = cursor.fetchall()

# print(tabulate(myresult, headers=['Flight ID', 'Flight Status', 'Departure Point', 'Destination Time', 'Time'], tablefmt='psql'),color="blue")


# query = "Select top 100 * from flight"
# query = "SELECT Flight_ID as 'FLIGHT ID   ', Flight_Status as 'Flight Status', Departure as 'DEPARTURE POINT', Destination as 'DESTINATION POINT', Flight_time as 'Time' from flight"
# df = pd.read_sql(query, conn)
# print("===========================================",color="green")
# print("|    FLIGHT ID   | DEPARTURE| DESTINATION |",color="red")
# print("|-----------------------------------------|",color="green")
# print("|",df.head(100),color='blue')
# print("===========================================\n",color="green")


# cursor = conn.cursor()
# cursor.execute("SELECT Flight_ID as 'FLIGHT ID   ', Flight_Status as 'Flight Status', Departure as 'DEPARTURE POINT', Destination as 'DESTINATION POINT', Flight_time as 'Time' from flight")
# print("\n   ============================================")
# # print("   |  Flight Number  |Departure| Destination  |")
# for row in cursor:
#     print("   |------------------------------------------|")
#     print("   |",row)
# print("   ============================================\n")

# print("\n\t\t Flight Details",color='purple')
# query = "SELECT Flight_ID as ' ', Departure as ' ', Destination as ' ' from flight"
# df = pd.read_sql(query, conn)
# print("============================================",color="green")
# print("|  FLIGHT ID     | DEPARTURE| DESTINATION  |",color="red")
# print("|------------------------------------------|",color="green")
# print("|",df.head(100),color='blue')
# print("============================================\n",color="green")
# print("\n\n")

# read(conn)
# conn.close()


# import urllib
# import pandas as pd
# from sqlalchemy import create_engine

# params = urllib.parse.quote_plus("driver={SQL SERVER}; server=localhost; database=aman; trusted_connection=YES;")
# engine = create_engine("mssql+pyodbc:///?odbc_connect=%s" % params)
# df = pd.read_sql_table("ticket",engine)
# print(df)