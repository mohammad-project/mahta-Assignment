#include <iostream>
#include <unordered_set>
#include <algorithm> 
void inserting( std::unordered_set<int>* mySet, int n);
void show(std::unordered_set<int> result,std::string type);
int main()
{
   //Create two set<int> objects, insert values into both, and then find the union and intersection of these sets. Print the results.
	std::unordered_set<int> set1;
    std::unordered_set<int> set2;
    std::unordered_set<int> unions;
    std::unordered_set<int> intersections;
    inserting(&set1 , 1);
    inserting(&set2 , 2);
    std:: set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(unions ,unions.begin()));
    std:: cout << "the union is: \n";
    show(unions,"union");
    std:: set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(intersections ,intersections.begin()));
    std:: cout << "\n the intersectoin is: \n" ;
    show(intersections,"intersection");
}	
void inserting( std::unordered_set<int>* mySet, int n)
{
    int input;
    std:: cout << " how many elment in set " << n << " : ";
    std:: cin >> input;
    for (int i = 0; i < input; i++)
    {
        int number;
        std:: cout << " number : ";
        std:: cin >> number;
        mySet->insert(number);
        std:: cout << '\n';
    }

}
void show(std::unordered_set<int> result, std::string type)
{
    if(!result.empty())
    {
        for (auto number : result )
        {
            std:: cout << number << " ";
        }
    }else{
        std:: cout << " there is no element in the " << type; 
    }
}
// O(n) n = size set1 + size set2


