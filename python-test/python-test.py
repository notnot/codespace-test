# python-test.py, jpad 2025

import random

def pick_greeting():
    greetings = [
        "hello", 
        "hi", 
        "hey",
        "greetings",
        "whats up",
        "yo",      
    ]
    return greetings[random.randint(0, len(greetings) - 1)]

def greet(how_many):
    for i in range(how_many):
        print(pick_greeting())

def main():
    print("testing python in a github codespace")    
    greet(3)

if __name__ == "__main__":
    main()