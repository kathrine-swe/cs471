"""
K. Sweebe
CS471 - S. Cooper
Programming3 - Comparing interpreted and compiled code
"""

import numpy.matlib
import numpy as np

# Create matrices
sizes = [ 250, 500, 1000, 1500, 2000 ]

for size in sizes:
    print("MATRIX ", size)
    m1 = np.random.random( (size, size) )
    m2 = np.random.random( (size, size) )
    m3 = np.dot(m1,m2)
    print(m3)
