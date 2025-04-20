// go-test.go, jpad 2025

package main

import (
	"fmt"
	"math/rand"
)

func pickGreeting() string {
	greetings := []string{
		"hello", 
		"hi", 
		"hey", 
		"greetings", 
		"what's up", 
		"yo",
	}
	// pick a random greeting
	return greetings[rand.Intn(len(greetings))]
}

func greet(howMany int) {
	for i := 0; i < howMany; i++ {
		fmt.Println(pickGreeting())
	}
}

func main() {
	fmt.Println("testing go in a github codespace")
	greet(3)
}
