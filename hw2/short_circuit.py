"""
Kay Sweebe
CS 471 - Programming Languages
S. Cooper
Programming2 - Short Circuit Evaluation
"""

def test_short_circuit():
    """ Helper Function

    If contents get printed, then short circuiting does not happen
    Else short circuiting occurs
    """
    print("I just got executed.")
    return True

def main():
    print("Start short circuit test...")
    if False and test_short_circuit():
        pass
    print("...End short circuit test")

    print("Helper function never prints")
    print("Short circuiting is used in Python")

if __name__ == '__main__':
    main() 
