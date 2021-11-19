#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru-RU");
    const int n = 4;
    int Switch,i,j,Array[n][n];
    int sum=0;
    for (i = 0; i<=3; i++)
    {
        for (j = 0;j<=3; j++)
        {
            cout<<"Enter value for "<< i<<j << " cell"<<endl;
            cin>>Array[i][j];
        }
        cout<< "\n";
    }
    cout<<"Select the action applicable to the array\nenter 1 to display the sum of all positive numbers\nenter 2 to display the sum of all negative numbers: ";
    cin>> Switch;
    if (Switch == 1)
    {
        for (i=0; i<=3;i++)
        {
            for(j=0;j<=3;j++)
            {
                if (Array[i][j]>=0)
                {
                    sum+=Array[i][j];
                }
            }
        }
        cout<<sum;
    }
    else if(Switch == 2)
    {
        for (i=0; i<=3;i++)
        {
            for(j=0;j<=3;j++)
            {
                if (Array[i][j]<=0)
                {
                    sum+=Array[i][j];
                }
            }
        }
        cout<<sum;
    }
    else
    {
        cout<<"У Вас слищком жирные пальцы из-за которых вы промахнулись по нужным символам";
    }
    system("pause");
    return 0;
}