#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int FormulaCondition();

int b,h, S;

int main()
{
    setlocale(LC_ALL, "ru-RU");
    FormulaCondition();
    return 0;
}



int FormulaCondition()
{
    cout<<"Input b: ";
    cin>>b;
    cout<<"\n Input h: ";
    cin>>h;
    S = (double)1/2*b*h;
    cout<< S;
    return 0;
}