#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru-RU");
    const int n = 4;
    int num,i,j;
    int sum=0;
    int Array[4][4] = {{00,01,02,03},{10,11,12,13},{20,21,22,23},{30,31,32,33}};
    // srand (time(NULL));
    // for (i = 0; i<n; i++)
    // {
    //     for (j = 0;j<n; j++)
    //     {
    //         num =1 + rand() % 9 ;
    //         Array[i][j]= num;
    //     }
    // }
    for (i = 0; i<n; i++)
    {
        for (j = 0;j<n; j++)
        {
            if ( i+j == n-1 )
            {
                cout<<" *" << Array[i][j]<<"* ";
            }
            else
            {
                sum+= Array[i][j];
                cout<<"  "<< Array[i][j]<< "  ";
            }
        }
        cout<< "\n";
    }
    cout<< sum;
    // for (i = 0; i<n; i++)
    // {
    //     for (j = 0;j<n; j++)
    //     {
    //         if ( i+j == n + 1) cout<< Array[i][j];
    //     }
    //     cout<< "\n";
    // }
return 0;
}