package main

import (
  "fmt"
)

func main() {
  inputs := []int{
    34, 99, 90, 1999, 4, 1, -10,
  }
  mergeSort(&inputs)
  inputs = append(inputs, 9888)
  mergeSort(&inputs)
}

func mergeSort(inputs *[]int) {
  fmt.Println(inputs)
}
