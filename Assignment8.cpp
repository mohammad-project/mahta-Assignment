#include <iostream>
#include <vector>
#include <algorithm> 
int main()
{
   //Given a vector<int>, find and print the maximum and minimum values using STL functions.
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
    if(!myVector.empty())
    {
        auto max = std::max_element(myVector.begin(), myVector.end());
        auto min = std::min_element(myVector.begin(), myVector.end());
        std:: cout << "max is: " << *max << "\n";
        std:: cout << "min is: " << *min << "\n"; 
    }else{
        std:: cout << "the vector is empty so no min or max";
    }
    
    // O(n)
}	





