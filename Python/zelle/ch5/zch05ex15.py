#!/usr/bin/env python
# coding=utf-8

from graphics import *
from tkinter.filedialog  import askopenfilename

def main():

    # process the file and load everything into Python lists
    infilename = askopenfilename()
    infile = open(infilename, 'r')
    studentnum = int(infile.readline())
    names = []
    scores = []
    for i in range(studentnum):
        line = infile.readline()
        studentname, studentscore = line.split()
        names.append(studentname)
        scores.append(studentscore)
    infile.close()

    # generates the window with useful coordinates
    win = GraphWin("Student Scores", 800, 600)
    width = studentnum*10
    win.setCoords(-10,-3, 105, width)
    y = 0   # this is used to help me place the bars in the loop below
    # loop to fill the bar chart
    for i in range(studentnum):
        bar = Rectangle(Point(0,y), Point(scores[i], y+10))
        bar.setFill("green")
        bar.setWidth(2)
        bar.draw(win)
        displayName = Text(Point(-6,y+5), names[i])
        displayName.draw(win)
        y = y+10

    # pause before closing the window
    mess = Text(Point(45, -2), "Press any key to quit.")
    mess.draw(win)
    win.getKey()

if __name__ == '__main__':
    main()
