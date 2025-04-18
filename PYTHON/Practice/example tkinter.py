from tkinter import *
from tkinter import scrolledtext, messagebox, ttk
from functools import partial


window = Tk()
# to rename the title of window
window.title(" Hey...")
# pack is used to show the output in the window
# Lebel = tk.Label(window, text=" Hello World!").pack()
# l2 = Label(window, text=" Aman Kumar Singh",fg="blue", font=("Times New Roman",90)).grid(column=0,row=0)
# l3 = tk.Label(window, text=" Aman Kumar Singh", font=("Times New Roman",90)).grid(column=0,row=1)
# window.geometry("1100x500")

# # Entry
# txt = Entry(window, width=10).grid(column=0,row=1)

# def click():
#     res = ("Welcome to "+str(txt))
#     print(l2.configure(Text = res))
#     # l2.configure(text = res)
#     # l2.config(text="Button was Clicked!")
#     # print("Hello EveryBody")
# # button
# bt = Button(window, text="Hello",command=click ,bg="orange",fg="red" ,font=("Arial Bold",20)).grid(column=0, row=2)

# infinix = ttk.Combobox(window)
# infinix['values'] = ("choose",1,2,3,4,5,"Aman")
# infinix.current(0)
# infinix.grid(column=0,row=3)

# chk_box = BooleanVar()
# chk_box.set(False)
# chk = Checkbutton(window, text="I agree and accept Privacy and Policy of this Website", variable=chk_box).grid(column=0, row=4)

# rad1 = Radiobutton(window, text="Python", value=1).grid(column=0,row=5)
# rad1 = Radiobutton(window, text="Java", value=2).grid(column=0,row=6)
# rad1 = Radiobutton(window, text="JavaScript", value=3).grid(column=0,row=7)
# rad1 = Radiobutton(window, text="C Language", value=4).grid(column=0,row=8)

# txt = scrolledtext.ScrolledText(window, width=40, height=10).insert(index="1.0",chars="Hey This is Aman Kumar Singh")

# messagebox.showinfo("Message Title", "Message Content")
# def clicked():
#     messagebox.showinfo("Message Title", "Message Content")
# btn = Button(window, text="Enter", command=clicked).grid(column=0,row=10)

# spin = Spinbox(window, from_=1, to=100, width=6).grid(column=0,row=9)

# # frame
# top_frame = Frame(window).pack()
# bottom_frame = Frame(window).pack(side='bottom')
# bt1 = Button(top_frame, text="Button", fg="red").pack()
# bt1 = Button(top_frame, text="Button", fg="red").pack()
# bt1 = Button(bottom_frame, text="Button", fg="red").pack(side="left")
# bt1 = Button(bottom_frame, text="Button", fg="red").pack(side="left")

# # creating 3 simple Labels containing any text
# # sufficient width
# Label(window, text="Suf. width", fg="green", bg="purple").pack()
# # width of x
# Label(window, text="Taking all width of x", fg="yellow",bg="green").pack(fill="x")
# # height of y
# Label(window, text="Taking all height of y", fg="blue",bg="black").pack(side="left",fill="y")

# # creating two text lebels and Input Lebels
# Label(window, text="UserName").grid(row=0)
# Entry(window).grid(row=0, column=1)
# Label(window, text="Password").grid(row=2)
# Entry(window).grid(row=2, column=1)
# Checkbutton(window, text="Keep me Loged In").grid(columnspan=2)

# # binding
# def hii():
#     Label(window, text="hii").pack()
# Button(window, text="Click ME", command=hii).pack()

# # event
# def left(event):
#     Label(window, text="You Clicked Left Button of Your Mouse").pack()
# def middle(event):
#     Label(window, text="You Clicked Middle Button of Your Mouse").pack()
# def right(event):
#     Label(window, text="You Clicked Right Button of Your Mouse").pack()
# window.bind("<Button-1>", left)
# window.bind("<Button-2>", middle)
# window.bind("<Button-3>", right)

# # displaying image
# icon = PhotoImage(file  ="C:/xampp/htdocs/aman/aks.png")
# label = Label(window, Image=icon).pack()
# label.pack()

# def printInput():
#     inp = inputtxt.get(1.0, "end-1c")
#     sum = int(inp) + int(inp)
#     lbl.config(text = "\nProvided Input: "+str(sum))
  
# # TextBox Creation
# inputtxt = Text(window,height = 5,width = 20)
# inputtxt.pack()

# # Button Creation
# printButton = Button(window,text = "\n   Print   \n", command = printInput)
# printButton.pack()
  
# # Label Creation
# lbl = Label(window, text = "")
# lbl.pack()

def validateLogin(username, password):
	print("username entered :", username.get())
	print("password entered :", password.get())
	return


#username label and text entry box
usernameLabel = Label(window, text="User Name").grid(row=0, column=0)
username = StringVar()
usernameEntry = Entry(window, textvariable=username).grid(row=0, column=1)  

#password label and password entry box
passwordLabel = Label(window,text="Password").grid(row=1, column=0)  
password = StringVar()
passwordEntry = Entry(window, textvariable=password, show='*').grid(row=1, column=1)  

validateLogin = partial(validateLogin, username, password)

#login button
loginButton = Button(window, text="Login", command=validateLogin).grid(row=4, column=0)  

window.mainloop()
