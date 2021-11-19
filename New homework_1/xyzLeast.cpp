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
    cout<<"\nInput x: "<<endl;
    cin>>x;
    cout<<" Input y: "<<endl;
    cin>>y;
    cout<<" Input z: "<<endl;
    cin>>z;
    if (x<y&& x<z)
    {
        cout<<"X the lesser of the numbers :"<< pow(x,2)<<endl;
    }
    else if(y<z && y<x)
    {
        cout<<"Y the lesser of the numbers:"<< pow(y,2)<<endl;
    }
    else if(z<y && z<x)
    {
        cout<< "Z the lesser of the numbers:"<< pow(z,2)<<endl;
    }
    else
    {
        cout<<"Numbers are equal";
    }
    system("pause");
    return 0;
}