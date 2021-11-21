#include <iostream>
#include <clocale>

using namespace std;

double* giveMemoryToArr(double* startPtr, int sizeOfArr);
void fillArr(double* ptrArr, int sizeOfArr);
void showArr(double* ptrArr, int sizeOfArr);
 void SumProdEvenNumb(double* ptrArr, int sizeOfArr);
double* freeMemory(double* ptrArr);

int main()
{
    setlocale(LC_ALL, "ru-Ru");
    double* pArrForFill = 0;
    char userAnswer = 0;

    do
    {
        int sizeOfArray = 0;
        cout << "Размер массива: ";
        cin >> sizeOfArray;

        pArrForFill = giveMemoryToArr(pArrForFill, sizeOfArray);
        fillArr(pArrForFill, sizeOfArray);
        showArr(pArrForFill, sizeOfArray);
          SumProdEvenNumb( pArrForFill, sizeOfArray);
        pArrForFill = freeMemory(pArrForFill);

        cout << "\nПродолжить (1). Выйти (0): ";
        cin >> userAnswer;
    } while (userAnswer != '0');

    system("pause");
    return 0;
}

double* giveMemoryToArr(double* ptrArr, int sizeOfArr)
{
    ptrArr = new double[sizeOfArr];
    return ptrArr;
}
void fillArr(double* ptrArr, int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        ptrArr[i] = i + 1.0;
    }


}
void showArr(double* ptrArr, int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << ptrArr[i] << "  ";
    }
    cout << endl;
}


 void SumProdEvenNumb(double* ptrArr, int sizeOfArr)
 {
  int SumEvenNumb=1;
  for (int i = 0; i < sizeOfArr; i++)
  {
      int check;
      check = ptrArr[i];
      if (check%2==0)
      {
          SumEvenNumb *= ptrArr[i];
      }
  }
  cout << SumEvenNumb << endl;
 }


double* freeMemory(double* ptrArr)
{
    delete[] ptrArr;
    ptrArr = 0;

    return ptrArr;
}