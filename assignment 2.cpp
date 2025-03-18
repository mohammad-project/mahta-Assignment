#include <iostream>
#include <unordered_set>
int main()
{
   //Write a program that stores N integers in an unordered_set<int>. Then, take a number as input and check if it exists in the set. Print "Found" or "Not Found".
	std:: unordered_set<int> mySet;
	int input;
	std::cout << "how many integers your set has: ";
	std::cin >> input; 
	for (int i = 0; i < input; i++)
	{
		int n;
		std::cout << "write your number : ";
		std::cin >> n;
		mySet.insert(n);
	}
	std:: cout << "give me a number to check : ";
	std::cin >> input;
	if (mySet.count(input)) 
	{
		std:: cout << "found";
	}else {
		std:: cout << "not found";
	}
}