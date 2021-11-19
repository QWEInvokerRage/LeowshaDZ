#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int FormulaCondition();

int x,y,z;

int main()
{
    setlocale(LC_ALL, "ru-RU");
    FormulaCondition();
    return 0;
}

int FormulaCondition()
{
    cout<<"\nInput x: ";
    cin>>x;
    cout<<"\nInput y: ";
    cin>>y;
    cout<<"\nInput z: ";
    cin>>z;
    if ( x && y == z)
    {
        cout<< "Sum = "<< x+x+x<<"\n"<< pow(x,6);
    }
    else
    {
        cout<< "Not all numbers are equal ";
    }
    system("pause");
    return 0;
}