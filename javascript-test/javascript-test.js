// javascript-test.js, jpad 2025

function pickGreeting() {
    const greetings = [
        "hello",
        "hi",
        "hey",
        "greetings",
        "what's up",
        "yo",
    ]
    const i = Math.floor(Math.random() * greetings.length);
    return greetings[i];
}

function greet(howMany) {
    for (let i = 0; i < howMany; i++) {
        console.log(pickGreeting());
    }
}

function main() {
    console.log("testing javascript in a github codespace");
    greet(3);
}

main()
