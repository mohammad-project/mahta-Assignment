#include <iostream>
#include <vector>
const int row{3};
const int col{4};
char grid[row][col]{{'a','b','c','e'},{'s', 'f', 'c', 's'},{'a','d','e','e'}};
std:: string target {"abcced"};

bool search( int row2, int col2, int count, std::vector<std::vector<bool>> visited);
bool check ();
int main()
{

   if(check())
   {
    std:: cout << "it is in the grid ";
   }else{
    std:: cout << "it is not in the grid ";
   }
   
}
bool search(int row2, int col2, int count,std::vector<std::vector<bool>> visited )
{
    if (count >= target.size())
    {
        return true;
    }
    if (row2 >= row || col2 >= col || row2 < 0 || col2 < 0){return false;}
    if (visited[row2][col2] || grid[row2][col2] != target[count]){return false;}
   
    visited[row2][col2] = true;
        
if(    search(row2 + 1, col2 , count + 1,visited)|| 
       search(row2 - 1, col2 , count + 1,visited)|| 
       search(row2 , col2 + 1, count + 1,visited)||
       search(row2 , col2 - 1, count + 1,visited)){return true;}
       return false;
}
bool check ()
{
    std:: vector<std::vector<bool>> visited(row, std::vector<bool>(col, false));;
    for(int i = 0; i < row; i ++)
    {
        for (int j = 0 ; j < col ; j++)
        {
            if(search(i,j,0, visited)){
                return true;
            }
        }
    }
    return false;
}


