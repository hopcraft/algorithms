package main

import (
	"fmt"
	"math"
)

type ErrNegativeSqrt float64

func (e ErrNegativeSqrt) Error() string {
	return fmt.Sprintf("cannot Sqrt negative number: %f", float64(e))
}

func Sqrt(x float64) (float64, error) {
	if (x < 0) {
		return x, ErrNegativeSqrt(x)
	}
	z := float64(1)
	i := 0
	const PRECISION = 0.0000001
	lastz := z
	for {
		// Newton's core equation：x = x/2 - 1/x
		z -= (z*z - x) / (2 * z)
		// fmt.Printf("[%d]\t intermediate result z = %f \n", (i + 1), z)
		i++
		if math.Abs(z-lastz) < PRECISION {
			break
		}
		lastz = z
	}
	return z, nil
}

func main() {
	// fmt.Println(Sqrt(2))
	fmt.Println(Sqrt(-2))
}
