#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int FormulaCondition();

int x,y;

int main()
{
    setlocale(LC_ALL, "ru-RU");
    FormulaCondition();
    return 0;
}



int FormulaCondition()
{
    cout<<"Input x: ";
    cin>>x;
    cout<<"\n Input y: ";
    cin>>y;
    if (x<y)
    {
        cout<<"Y greater than x and equal:"<< y;
    }
    else if(x>y)
    {
        cout<<"X greater than y and equal:"<< x;
    }
    else
    {
        cout<< "X and y are equal:"<< x;
    }
    return 0;
}