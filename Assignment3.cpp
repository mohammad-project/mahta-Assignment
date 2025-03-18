#include <iostream>
#include <vector>
#include <set>
int main()
{
   //Given a vector of integers, write a program that uses a set<int> to remove duplicates and print the unique elements in sorted order.
	std::vector<int> myVector;
	std::set <int> sol;
	int n{ 5 };
	for (int i = 0; i < n; i++) {
		int input;
		std::cout << "give number : ";
		std::cin >> input;
		myVector.push_back(input);
	}
	for (auto number : myVector)
	{
		sol.insert(number);
	}
	for (auto number : sol)
	{
		std::cout << number << " ";
	}
    // O(nlogn) n = number in first for of loop


}		




