/*
// Author: Xanieros
// Challenge Number: 5
// Challenge Description : 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
//
*/

#include <iostream>

int main()
{
	int answer = 0;
	bool isFound = false;
	do
	{
		answer++;
		isFound = true;

		for (int i = 1; i < 20; i++)
		{
			if (answer % i != 0)
			{
				isFound = false;
			}
		}

	} while (!isFound);

    std::cout << "The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is " << answer << std::endl;
}