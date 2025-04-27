#include <iostream>
#include <stack>
#include <string>
int main()
{
   //Read a string from the user, push each character onto a stack<char>, and then pop them to print the reversed string.

	std:: stack<char> doit;
    std:: string input;
    std:: cout << "give me a string ";
    std:: getline(std::cin, input);
    
    for (auto c : input)
    {
        doit.push(c);
    }
    while (!doit.empty())
    {
        std::cout << doit.top();  
        doit.pop(); 
    }
}
// O(n)



