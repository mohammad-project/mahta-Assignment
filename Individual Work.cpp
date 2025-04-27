#include <iostream>
#include <vector>
//You’re given a number n.
//You need to generate all possible ways to put n pairs of parentheses () in a balanced way.
void doit(int n, int open, std::string current,std::vector<std::string>& result);
int main()
{
    std::vector<std::string> result;
    int input;
    std::cout << "how many pair you want : ";
    std::cin >> input;
    doit(input, 0,"", result);
    for (auto show : result)
    {
        std:: cout<< show << '\n';
    }
    


}
void doit(int n, int open, std::string current,std::vector<std::string>& result)
{
    if(current.length()== 2*n){ result.push_back(current); return;}
    if(open < n) { doit( n,  open + 1,  current + '(', result);};
    if(current.length() - open < open){doit( n,  open ,  current + ')', result);}
}


