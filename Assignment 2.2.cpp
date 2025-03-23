#include <iostream>
#include <cmath>
 void doit (int number ,  int& sum)
{
    if(  number == 0){return;}
    sum += number % 10 ;
    number = number / 10;    
    doit(number , sum);
}
int main()
{
   //Write a recursive function to compute the sum of the digits of a given number. For example, sumOfDigits(1234) should return 1 + 2 + 3 + 4 = 10.
    int  my;
    std:: cout << " give me big number ";
    std:: cin >> my;
    int size = log10(my);
    int sum {0};
    doit(my , sum);
    std:: cout << sum;
   
   
}



