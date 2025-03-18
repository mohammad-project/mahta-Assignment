#include <iostream>
#include <set>
using namespace std;

void tower(int disk, char left , char middle , char right );

int main ()
{
    int n {3};

    tower(n, 'A', 'C', 'B');



}
void tower(int disk, char A , char C , char B )
{
    if (disk == 0) return;

    tower (disk - 1 ,  A , B ,  C );
    cout << "disk  " << disk << " from " << A << " to " << C << "\n";

    tower( disk - 1 , B ,  C , A );
}
         
