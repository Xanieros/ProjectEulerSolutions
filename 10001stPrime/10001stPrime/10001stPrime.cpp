/*
// Author: Xanieros
// Challenge Number: 7
// Challenge Description : By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10,001st prime number?
//
*/


#include <iostream>

static bool isPrime(int x);

int main()
{
	int count = 0;
	int answer = 0;
	int limit = 10001;
	do
	{
		answer++;

		if (isPrime(answer))
		{
			count++;
		}
		
	} while (count < limit);

    std::cout << "The 10,001st prime number is " << answer << std::endl;
}

static bool isPrime(int x)
{
	if (x < 2)
	{
		return false;
	}
	if (x == 2)
	{
		return true;
	}
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}

	return true;
}