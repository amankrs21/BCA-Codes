from turtle import *
from time import sleep

colormode(255)
bgcolor("#FDD7E4")
speed(10)

red = (223, 35, 35); green = (75, 183, 75); yellow = (252, 210, 9)
blue = (86, 146, 195)
r = 120

seth(-150)
up()

# red petal
color(red)
begin_fill()
fd(r)
down()
right(90)
circle(-r, 120)
fd(r*3**.5)
left(120)
circle(2*r, 120)
left(60)
fd(r*3**.5)
end_fill()

# green petal
left(180)
color(green)
begin_fill()
fd(r*3**.5)
left(120)
circle(2*r, 120)
left(60)
fd(r*3**.5)
left(180)
circle(-r, 120)
end_fill()

# yellow petal
left(180)
circle(r, 120)
color(yellow)
begin_fill()
circle(r, 120)
right(180)
fd(r*3**.5)
right(60)
circle(-2*r, 120)
right(120)
fd(r*3**.5)
end_fill()

# blue disk
up()
left(90)
fd(r/20)
seth(60)
color(blue)
down()
begin_fill()
circle(distance(0,0))
end_fill()
ht()
sleep(1)

# bye bye
# screen = getscreen()
# screen.register_shape("chrome.gif")
# clear()
# ht()
# up()
# goto(-300, 0)
# color('black')
# goto(0, 0)
# write("Bye!",align='right',font=('arial', 30, 'bold'))
