#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int FormulaCondition();

int SquareSide, SquareDiagonal, FormulaCheck,S;

int main()
{
    setlocale(LC_ALL, "ru-RU");
    FormulaCondition();
    return 0;
}



int FormulaCondition()
{
    cout<<"Input 1 if you have a square side and 2 if diagonal: ";
    cin>> FormulaCheck;
    if (FormulaCheck == 1)
    {
        cout<< "Input square side:";
        cin>> SquareSide;
        cout<<"Square area:"<< pow(SquareSide, 2);
    }
    else if (FormulaCheck == 2)
    {
        cout<< "Input square diagonal:";
        cin>>SquareDiagonal;
        cout<<"Square area:"<< (double)1/2 * pow(SquareDiagonal, 2);
    }
    else
    {
        cout<<"Ha-ha, nice joke";
        FormulaCondition();
    }
    return 0;
}