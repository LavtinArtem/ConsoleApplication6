#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    system("color B0");
    int size;
    /*int dotcount = 3;*/
    cin >> size;
    char** arrofStr = new char* [size];
    
    for (size_t i = 0; i < size; i++)
    {
        arrofStr[i] = new char[size] {};
        gets_s(arrofStr[i], size);
        puts(arrofStr[i]);
    }
    for (size_t i = 0; i < size; i++)
    {
        delete arrofStr[i];
    }
    
}