#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int i ,j ;
    int a[3][5] = {{1,4,6,4,3},{4,5,4,6,3},{4,5,7,4,6}};
    for (i = 0;i<3;i++)
    {
        for (j = 0;j<5;j++)
            cout<<a[i][j]<<endl;
    }
    return 0;
}