"""
Kay Sweebe
CS 471 - Programming Languages
S. Cooper
Programming2 - Short Circuit Evaluation

Demonstrate whether the Python programming language utilizes the concept of
short circuiting.

Short circuiting occurs when only part of an expression needs to be evaluated
before finding the value.
See the following logical rules:
    if a and b and not a then False
    if a or  b and a     then True

"""

def test_short_circuit():
    """ Helper Function

    If contents get printed, then short circuiting does not happen
    Else short circuiting occurs
    """
    print("I just got executed.")
    return True

def main():
    print("Start short circuit test AND...")
    if False and test_short_circuit():
        pass
    print("...End short circuit test")

    print("Start short circuit test OR...")
    if True or test_short_circuit():
        pass
    print("...End short circuit test")

    print("Helper function never prints")
    print("Short circuiting is used in Python")

if __name__ == '__main__':
    main() 
