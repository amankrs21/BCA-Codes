# Program to make a calculator

from tkinter import *
calculator = Tk()
calculator.title("Calculator...")
calculator.geometry("312x324")
calculator.resizable(0, 0)

def bt_click(inp):
    global expression
    expression = expression + str(inp)
    input_text.set(expression)

def bt_clear():
    global expression
    expression = ""
    input_text.set("")

def bt_equal():
    global expression
    result = str(eval(expression))
    input_text.set(result)
    expression = ""

expression = ""
input_text = StringVar()
input_frame = Frame(calculator, width=312, height=50, bd=0, highlightbackground="black",highlightcolor="black", highlightthickness=2)
input_frame.pack(side =TOP)
input_field = Entry(input_frame, font=('Times New Roman',21,'bold'), textvariable=input_text, width=50, bg="green", bd=0, justify=RIGHT)
input_field.grid(row=0, column=0)
input_field.pack(ipady=10)
btns_frame = Frame(calculator, width=312, height=275.5, bg="grey")
btns_frame.pack()

# first row
clear = Button(btns_frame, text="Clear", fg="black", width=21, height=3, bd=0, bg="orange", cursor="hand2", command=lambda: bt_clear()).grid(row=0,column=0,columnspan=2,padx=1,pady=1)
equal = Button(btns_frame,text="=",fg="black",width=21,height=3,bd=0,bg='yellow',cursor='hand2',command=lambda: bt_equal()).grid(row=0,column=2,columnspan=2,padx=1,pady=1)

# second row
seven = Button(btns_frame,text="7",fg="white",width=10,height=3,bd=0,bg='black',cursor='hand2',command=lambda: bt_click(7)).grid(row=1,column=0,padx=1,pady=1)
eight = Button(btns_frame,text="8",fg="white",width=10,height=3,bd=0,bg='black',cursor='hand2',command=lambda: bt_click(8)).grid(row=1,column=1,padx=1,pady=1)
nine = Button(btns_frame,text="9",fg="white",width=10,height=3,bd=0,bg='black',cursor='hand2',command=lambda: bt_click(9)).grid(row=1,column=2,padx=1,pady=1)
div = Button(btns_frame, text="/", fg="blue", width=10, height=3, bd=0, bg="cyan", cursor="hand2", command=lambda: bt_click("/")).grid(row=1,column=3,padx=1,pady=1)

# third row
four = Button(btns_frame,text="4",fg="white",width=10,height=3,bd=0,bg='black',cursor='hand2',command=lambda: bt_click(4)).grid(row=2,column=0,padx=1,pady=1)
five = Button(btns_frame,text="5",fg="white",width=10,height=3,bd=0,bg='black',cursor='hand2',command=lambda: bt_click(5)).grid(row=2,column=1,padx=1,pady=1)
six = Button(btns_frame,text="6",fg="white",width=10,height=3,bd=0,bg='black',cursor='hand2',command=lambda: bt_click(6)).grid(row=2,column=2,padx=1,pady=1)
mul = Button(btns_frame,text="*",fg="blue",width=10,height=3,bd=0,bg='cyan',cursor='hand2',command=lambda: bt_click("*")).grid(row=2,column=3,padx=1,pady=1)

# fourth row
one = Button(btns_frame,text="1",fg="white",width=10,height=3,bd=0,bg='black',cursor='hand2',command=lambda: bt_click(1)).grid(row=3,column=0,padx=1,pady=1)
two = Button(btns_frame,text="2",fg="white",width=10,height=3,bd=0,bg='black',cursor='hand2',command=lambda: bt_click(2)).grid(row=3,column=1,padx=1,pady=1)
three = Button(btns_frame,text="3",fg="white",width=10,height=3,bd=0,bg='black',cursor='hand2',command=lambda: bt_click(3)).grid(row=3,column=2,padx=1,pady=1)
sub = Button(btns_frame,text="-",fg="blue",width=10,height=3,bd=0,bg='cyan',cursor='hand2',command=lambda: bt_click("-")).grid(row=3,column=3,padx=1,pady=1)

# fifth row
zero = Button(btns_frame,text="0",fg="white",width=21,height=3,bd=0,bg='black',cursor='hand2',command=lambda: bt_click(0)).grid(row=4,column=0,columnspan=2,padx=1,pady=1)
point = Button(btns_frame,text=".",fg="white",width=10,height=3,bd=0,bg='black',cursor='hand2',command=lambda: bt_click(".")).grid(row=4,column=2,padx=1,pady=1)
add = Button(btns_frame,text="+",fg="blue",width=10,height=3,bd=0,bg='cyan',cursor='hand2',command=lambda: bt_click("+")).grid(row=4,column=3,padx=1,pady=1)

calculator.mainloop()
