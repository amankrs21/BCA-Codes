#Import the required libraries
from tkinter import *

#Create an instance of tkinter frame
win= Tk()

#Set the geometry of frame
win.geometry("600x250")

#Create a frame
frame = Frame(win)
frame.pack(side="top", expand=True, fill="both")

#Create a text label
Label(frame,text="Enter the Password", font=('Helvetica',20)).pack(pady=20)

def clear_frame():
   for widgets in frame.winfo_children():
      widgets.destroy()

#Create a button to close the window
Button(frame, text="Clear", font=('Helvetica bold', 10), command=
clear_frame).pack(pady=20)

win.mainloop()

# import tkinter
from tkinter import *
  
# make an object of Tk interface
window = Tk()
  
# Give the title to out window
window.title('GFG')
  
# creating canvas
canvas = Canvas(window, width=300, height=200)
canvas.pack()
  
# draw line to out canvas
canvas.create_line(0, 0, 300, 200)
canvas.create_line(0, 200, 300, 0)
  
# draw oval to out canvas
canvas.create_oval(50, 25, 250, 175, fill="yellow")
  
# clear the canvas
canvas.delete('all')
  
window.mainloop()
