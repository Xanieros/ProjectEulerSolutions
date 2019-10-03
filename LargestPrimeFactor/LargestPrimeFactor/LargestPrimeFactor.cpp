/*
// Author: Xanieros
// Challenge Number: 3
// Challenge Description : The prime factors of 13195 are 5, 7, 13 and 29. 
// What is the largest prime factor of the number 600851475143 ?
// 
*/

#include <iostream>
using namespace std;

static bool isPrime(int x);

int main()
{
	int answer = 0;
	unsigned long long int target = 600851475143;

	for (int i = 1; i < (target / 2); i++)
	{
		if (target % i == 0)
		{
			if (isPrime(i))
			{
				answer = i;
			}
		}
	}

    cout << "The largest prime factor of the number 600851475143 is " << answer;
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
	for (int i = 3; i < (x / 2); i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}

	return true;
}