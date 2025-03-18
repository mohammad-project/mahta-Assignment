#include <iostream>
#include <set>
using namespace std;


int main()
{
    //Write a program that reads N integers from the user and stores them in a set<int>. Print the elements in sorted order.

    int input;
    set <int> store;
    cout << "how many integers you want to have in the set";
    cin >> input;

    for (int i = 0; i < input;i++)
    {
        int n;
        cout << "input your nummber : ";
        cin >> n;
        cout << "\n";
        store.insert(n);    
    }
    for (auto number : store)
    {
        cout << number << " ";
    }

}
