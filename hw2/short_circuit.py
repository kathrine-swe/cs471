"""
Kay Sweebe
CS 471 - Programming Languages
S. Cooper
Programming2 - Short Circuit Evaluation
"""

def test_short_circuit():
    print("I have been evaluated.")
    return True

def main():
    i = True

    if i == False and test_short_circuit():
        pass

if __name__ == '__main__':
    main() 
