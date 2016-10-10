#! /usr/bin/python3

import argparse
parser = argparse.ArgumentParser()

parser.add_argument('--v0', '--initial_velocity', type=float, default=0.0, 
                    help='initial velocity',metavar='v')
parser.add_argument('--s0', '--initial_position', type=float, default=0.0,
                    help='initial position', metavar='s')
parser.add_argument('--a', '--acceleration', type=float, default=1.0,
                    help='acceleration', metavar='a')
parser.add_argument('--t','--time', type=float, default=1.0,
                    help='time', metavar='t')
                    
args = parser.parse_args()

s0 = args.s0; v0 =args.v0; a = args.a; t = args.t
s = s0 + v0*t + 0.5*a*t**2
print('The solution is ', s)
