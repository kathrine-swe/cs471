"""
Kay Sweebe
CS 471 - Programming Languages
S. Cooper
Programming2 - Short Circuit Evaluation
"""

def test_short_circuit():
    print("No Short Circuit.")
    return True

def main():
    print("Begin test for Python")

    if False and test_short_circuit():
        pass

    print("End test for Python")

if __name__ == '__main__':
    main() 
