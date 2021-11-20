#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru-RU");
    int Switch,i,j;
    int Array[4][4] = {{00,01,02,03},{10,11,12,13},{20,21,22,23},{30,31,32,33}};
    int max, min;
    max = Array[0][0];
    min = Array[0][0];
    for (i = 0; i<=3; i++)
    {
        for (j = 0;j<=3; j++)
        {
            if (Array[i][j]>=max)
            {
                max = Array[i][j];
            }
            else if(Array[i][j]<=min)
            {
                min = Array[i][j];
            }
        }
    }
        cout<< "\nMin: "<<min;
        cout<< "\nMax: "<<max;
        cout<< endl;
    system("pause");
    return 0;
}