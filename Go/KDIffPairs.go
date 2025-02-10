package main

import "fmt"

func KDiffPairs(A []int, k int) int {
	count := 0
	for i := 0; i < len(A)-1; i++ {
		for j := i + 1; j < len(A); j++ {
			if A[j]-A[i] == k {
				count++
			} else if A[j]-A[i] > k {
				break
			}
		}
	}

	return count
}

func main() {
	for {
		fmt.Print("Number of elements: ")
		count := 0
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		fmt.Print("Please enter the sorted arrar: ")
		vec := make([]int, count)
		for i := 0; i < count; i++ {
			fmt.Scan(&vec[i])
		}

		fmt.Print("Please enter number k:")
		k := 0
		fmt.Scan(&k)

		fmt.Print("The number of unique pairs which have a difference of ")
		fmt.Print(k)
		fmt.Print(" is ")
		fmt.Println(KDiffPairs(vec, k))
	}
}
