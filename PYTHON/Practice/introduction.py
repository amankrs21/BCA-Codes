# WAP to print Itroduction using UDF
import tkinter      # tkinter is used to make GUI

root = tkinter.Tk()
T = tkinter.Text(root, height=50, width=80)
T.pack()
Aman = """My Name is Aman Kumar Singh\n
I'm From Vaishali, Bihar\n
My Hobby is to Read Novels and to Being Alone\n
Curently I'm studying BCA in Parul University\n
I felt very happy when I CODE"""
T.insert(tkinter.END, Aman)
tkinter.mainloop()