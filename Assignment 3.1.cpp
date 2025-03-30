#include <iostream>
#include <map>
#include <string>
int main()
{
   //Write a program that reads a paragraph from the user and counts the occurrences of each word. Print the words and their frequencies in 
   //alphabetical order.|
   std:: string paragraph;
   std:: cout << " write me a paragraph : ";
   std:: getline(std::cin,paragraph);

   std::map<std:: string, int> occur;
   std:: string word;
   for (int i = 0; i < paragraph.size(); i++)
   {
     if((paragraph[i] >= 'a' && paragraph[i] <= 'z') || (paragraph[i] >= 'A' && paragraph[i] <= 'Z') || (paragraph[i] >= '0' && paragraph[i] <= '9'))
     {
      word += paragraph[i];
     }else{
      occur[word] ++;
      word.clear();
     }
   }
   for(auto words : occur ){
      std:: cout << words.first << " " << words.second << "\n";
   }
}



