#include <iostream>
#include <unordered_map>
#include <string>
char show(unordered_map)
int main()
{
   // Given a string, find the first non-repeating character. If all characters repeat, return -1.
   // Input: "swiss"
   // Output: 'w'
   std:: unordered_map <char,int> yes;
   std:: string  names;
   std:: cout << " give somthing " ;
   cin >> names;
   for (name : names )
   {
      yes[name] ++;
   }
   for(name : names)
   {
      if(yes[name] == 1)
      {
         std:: cout <<  name;
         return 0;
      }
   }

   cout << "no non repeating character ";
  
   
   
   
   
}



