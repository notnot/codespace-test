// C-test.c, jpad 2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *pickGreeting() {
    char *greetings[] = {
        "hello",
        "hi",
        "hey",
        "greetings",
        "what's up",
        "yo"
    };
    // pick a random greeting
    return greetings[rand() % (sizeof(greetings) / sizeof(greetings[0]))];
}

void greet(int howMany) {
    for (int i = 0; i < howMany; ++i) {
        printf("%s\n", pickGreeting());
    }
}

void main() {
    printf("testing C in a github codespace\n");
    srand(time(NULL));
    greet(3);
}
