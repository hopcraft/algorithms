package main

import (
	"fmt"
	"math"
)

// Sqrt compute square root
func Sqrt(x float64) float64 {
	z := float64(10000)
	i := 0
	const PRECISION = 0.0000001
	lastz := z
	for {
		// Newton's core equation：x = x/2 - 1/x
		z -= (z*z - x) / (2 * z)
		fmt.Printf("[%d]\t intermediate result z = %f \n", (i + 1), z)
		i++
		if math.Abs(z-lastz) < PRECISION {
			break
		}
		lastz = z
	}
	return z
}

func main() {
	fmt.Println(Sqrt(2))
}
