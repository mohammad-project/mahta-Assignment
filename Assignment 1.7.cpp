#include <iostream>
#include <vector>
#include <algorithm> 
void show (std:: vector<int> myVector);
bool descending(int i,int j){ return i > j;}
int main()
{
   //Read N integers into a vector<int>, then sort the vector in ascending and descending order and print both results.
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
    std:: sort(myVector.begin(), myVector.end());
    std:: cout << " ascending : ";
    show(myVector);
    std:: sort(myVector.begin(), myVector.end(), descending);
    std:: cout << " descending : ";
    show(myVector);



    
}	
void show (std:: vector<int> myVector)
{
    for(auto number: myVector)
    {
        std:: cout << number << ' ';
    }
    std:: cout << '\n';
}
// o(nlogn)





