#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru-RU");
    const int n = 4;
    int num,i,j,Array[n][n];
    srand (time(NULL));
    for (i = 0; i<n; i++)
    {
        for (j = 0;j<n; j++)
        {
            num =1 + rand() % 9 ;
            Array[i][j]= num;
        }
    }
    for (i = 1; i<=n; i++)
    {
        for (j = 1;j<=n; j++)
        {
            cout<< Array[i][j]<< " ";
        }
        cout<< "\n";
    }
    for (i = 0; i<n; i++)
    {
        for (j = 0;j<n; j++)
        {
            if ( i+j == n + 1) cout<< Array[i][j]<< " ";
        }
        cout<< "\n";
    }
return 0;
}