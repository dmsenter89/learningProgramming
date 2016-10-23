from graphics import *
#An archery target consists of a central circle of yellow surrounded by concentric
#rings of red, blue, black and white. Each ring has the same width,
#which is the same as the radius of the yellow circle. Write a program
#that draws such a target.

def main():
    # initial set up
    win = GraphWin("Archery Target", 400, 400, autoflush=False)
    win.setCoords(0.0, -1.0, 11.0, 11.0)
    message = Text(Point(5.5, -0.5), "Press any key to quit.")
    message.draw(win)
    center = Point(5.5,5.5)

    # white circle
    whitecirc = Circle(center, 5)
    whitecirc.setFill("white")
    whitecirc.setWidth(2)
    whitecirc.draw(win)

    # black circle
    blackcirc = Circle(center,4)
    blackcirc.setFill("black")
    blackcirc.draw(win)

    # blue circle
    bluecirc = Circle(center,3)
    bluecirc.setFill("blue")
    bluecirc.setWidth(2)
    bluecirc.draw(win)

    # red circle
    redcirc = Circle(center, 2)
    redcirc.setFill("red")
    redcirc.setWidth(2)
    redcirc.draw(win)

    # innermost circle
    incirc = Circle(center, 1)
    incirc.setFill("yellow")
    redcirc.setWidth(2)
    incirc.draw(win)

    # way to exit out of the program
    win.update()
    win.getKey()
    win.close()

main()
