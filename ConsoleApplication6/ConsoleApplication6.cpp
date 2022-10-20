#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    system("color B0");
    cout << "Введите размер поля: \n";
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 21 - 10;
        cout << " * " ;
        
    }
    cout << endl;
    delete[]arr;

    int sizey;
    cin >> sizey;
    int* arrd = new int[sizey];
    for (int i = 0; i < sizey; i++)
    {
        *(arrd + i) = rand() % 21 - 10;
        cout << " * "<<endl;

    }
    cout << endl;
    delete[]arrd;

    char** arrofStr = new char* [size];
    for (size_t i = 0; i < size; i++)
    {
        arrofStr[i] = new char[size]{};
        
        gets_s(arrofStr[i], size);
        puts(arrofStr[i]);
    }
    for (size_t i = 0; i < size; i++)
    {
        delete arrofStr[i];
    }
    delete[] arrofStr;
}
