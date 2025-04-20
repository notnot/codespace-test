// C++-test.cpp, jpad 2025

#include <cstdio>
#include <random>
#include <vector>
#include <string>

using namespace std;
    
string pickGreeting() {
    vector<string> greetings = {
        "hello",
        "hi",
        "hey",
        "greetings",
        "what's up",
        "yo"
    };
    // pick a random greeting
    return greetings[rand() % greetings.size()];
}

void greet(int howMany) {
    for (int i = 0; i < howMany; ++i) {
        printf("%s\n", pickGreeting().c_str());
    }
}

int main() {
    printf("testing C++ in a github codespace\n");
    srand(time(nullptr));
    greet(3);
    return 0;
}
