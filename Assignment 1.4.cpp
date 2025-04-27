#include <iostream>
#include <unordered_set>
int main()
{
   //Write a program that stores numbers {1, 3, 5, 7, 9} in a set<int>. Then, take a number as input and remove it from the set if it exists. Print the updated set
	std::unordered_set<int> mySet {1,3,5,7,9};
    int input;
    std:: cout << " waht number you want to delete";
    std:: cin >> input;
    if (mySet.count(input))
    {
        mySet.erase(input);
    }
    for (auto number : mySet)
    {
        std:: cout << number << " ";
    }
    //  O(n) n = size of the set 
    
}	



