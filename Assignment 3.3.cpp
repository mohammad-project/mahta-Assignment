#include <iostream>
void makeit(int &x , int &y);

int main()
{
   // Write a function that swaps two integers using references. Do not use pointers or return values.
   int x {5};
   int y{7};
   makeit(x,y);
   std:: cout << x << " " << y;
}
void makeit(int &x , int &y)
{
   int wasaaaaaap;
   wasaaaaaap = x;
   x = y;
   y = wasaaaaaap;
}