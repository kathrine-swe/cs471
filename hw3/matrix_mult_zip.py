"""
K. Sweebe
CS471 - S. Cooper
Programming3 - Comparing interpreted and compiled code
"""
import random
import sys

if len(sys.argv) == 2:
    size = int(sys.argv[1])


m1 = [[random.random() for y in range(size)] for x in range(size)]
m2 = [[random.random() for y in range(size)] for x in range(size)]
m3 = [[ sum(a * b for a, b in zip(x, y)) for y in zip(*m2)] for x in m1]
