#include <iostream>
#include <algorithm>
 void doit (std:: string& haha, int start, int end )
{
    if (start >= end){return;}
   std::swap(haha[start] , haha[end]);
   doit(haha, start + 1, end -1);
}
int main()
{
   //Write a recursive function to reverse a string. For example, reverse("hello") should return "olleh"
    std::string name{ "wasap dog"};
    doit(&name, 0, name.size() - 1);
   
}



