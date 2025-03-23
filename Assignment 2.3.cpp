#include <iostream>
#include <algorithm>
 int doit (int number , int sum)
{
    if( number == 0){return sum;}
    sum += number;
    return doit(number - 1, sum);
}
int main()
{
   //Write a recursive function to find the sum of the first N natural numbers.
    int number;
    std:: cout << "give the n : ";
    std:: cin >> number;

    std:: cout <<  "the sum is : " <<  doit(number , 0);
   
}



