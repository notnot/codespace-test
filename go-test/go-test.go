// go-test.go, jpad 2025

package main

import (
	"fmt"
)

func hello(howMany int) {
	for i := 0; i < howMany; i++ {
		fmt.Println("hello")
	}
}

func main() {
	fmt.Println("testing go in a github codespace")
	hello(3)
}
