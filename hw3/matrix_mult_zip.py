"""
K. Sweebe
CS471 - S. Cooper
Programming3 - Comparing interpreted and compiled code

Purpose of the Program:
    The following program takes a CLI argument size that gives the size of
    an NxN matrix. Then two matrices are filled with random floating point
    numbers between 0 and 1. These two matrices are then multiplied and the
    result is stored in a third matrix.

Purpose of the Assignment:
    To see how long it takes to run through various sizes of data processing
    for an interpreted language like Python. This is to be compared to a
    compiled language like C.
"""
import random
import sys

# Make sure only 1 argument is given at a time
if len(sys.argv) == 2:

    # Get input size
    size = int(sys.argv[1])

    # Fill matrices m1 and m2
    m1 = [[random.random() for y in range(size)] for x in range(size)]
    m2 = [[random.random() for y in range(size)] for x in range(size)]

    # Store product of matrices m1 and m2 in resultant matrix m3
    m3 = [[ sum(a * b for a, b in zip(x, y)) for y in zip(*m2)] for x in m1]
