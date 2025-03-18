#include <iostream>
#include <vector>
#include <algorithm> 
int main()
{
   //Write a program that reads N integers into a vector<int>, then reverses and prints the elements.
	std:: vector<int> myVector;
    int input;
    std:: cout << "how many element: ";
    std:: cin>> input;
    for (int i = 0; i < input; i++)
    {
        int n;
        std:: cout << "input number ";
        std:: cin >> n;
        myVector.push_back(n);
    }
    std::reverse(myVector.begin(), myVector.end());

   for( auto number : myVector)
   {
        std::cout << number << " ";
   }
   // av O(n) worst O(n^2)
}	



