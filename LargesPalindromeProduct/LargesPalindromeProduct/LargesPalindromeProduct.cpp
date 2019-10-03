/*
// Author: Xanieros
// Challenge Number: 4
// Challenge Description : A palindromic number reads the same both ways. 
// The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.
//
*/

#include <iostream>
#include <string>
using namespace std;

static bool isPalindrome(int x);

int main()
{
	int a_answer = 0;
	int b_answer = 0;
	int answer = 0;
	
	for (int a = 1; a < 1000; a++)
	{
		for (int b = 1; b < 1000; b++)
		{
			int current = a * b;
			if (isPalindrome(current) && current > answer)
			{
				answer = current;
				a_answer = a;
				b_answer = b;
			}
		}
	}

    cout << "The largest palindrome made from the product of two 3-digit numbers is " << answer << endl << "made from numbers " << a_answer << " and " << b_answer << endl;
}

static bool isPalindrome(int x)
{
	string tempStr = to_string(x);
	char const *temp = tempStr.c_str();
	int reversed = tempStr.length()-1;

	for (int i = 1; i <= reversed; i++)
	{
		if (temp[i - 1] != temp[reversed--])
		{
			return false;
		}
	}
	return true;
}