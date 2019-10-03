/*
// Author: Xanieros
// Challenge Number: 6
// Challenge Description : The sum of the squares of the first ten natural numbers is,
// 1^2 + 2^2 + ... + 10^2 = 385.
// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)^2 = 55^2 = 3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
// 3025 - 385 = 2640
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
//
*/
#include <iostream>

int main()
{
	int limit = 100;
	int sumOfSqr = 0;
	int sqrOfSum = 0;
	int diff = 0;

	for (int i = 1; i <= limit; i++)
	{
		sumOfSqr += i * i;
		sqrOfSum += i;
	}

	sqrOfSum = sqrOfSum * sqrOfSum;

	diff = sqrOfSum - sumOfSqr;

    std::cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is " << diff << std::endl;
}