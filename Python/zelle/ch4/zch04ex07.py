from graphics import *
from math import sqrt

def main():
    print("Check out the intersection of a cirlce and a  line.")
    rad = float(input("Enter radius (<10): "))
    yint = float(input("Enter y-intercept: "))
    win = GraphWin("Line Intersection", 500,500)
    win.setCoords(-10,-10,10,10)

    Circle(Point(0,0),rad).draw(win)
    Line(Point(-10,yint), Point(10,yint)).draw(win)
    int1 =  sqrt(rad**2-yint**2)
    int2 = -sqrt(rad**2-yint**2)
    int1pt = Point(int1,yint)
    int1pt.setFill("red")
    int1pt.draw(win)
    Text(Point(int1+0.5,yint+0.5), "x={}".format(round(int1,2))).draw(win)

    int2pt = Point(int2, yint)
    int2pt.setFill("red")
    int2pt.draw(win)
    Text(Point(int2-0.5,yint+0.5), "x={}".format(round(int2,2))).draw(win)
    win.getMouse()
    win.close()

main()
