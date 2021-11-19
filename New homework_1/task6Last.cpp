#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int FormulaCondition();

string Number;
int i;

int main()
{
    setlocale(LC_ALL, "ru-RU");
    FormulaCondition();
    return 0;
}

int FormulaCondition()
{
    cout<<"\n Enter number:";
    cin>>Number;
    cout<<"\n";
    for(i=0;i<=2;i++)
    {
        cout<<"**"<<Number[i];
    }
    system("pause");
    return 0;
}