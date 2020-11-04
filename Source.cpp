#include <iostream>
#include "arrays.h"
using namespace std;

int main()
{
    cout << "Introdueix 10 nombres per completar l'array: " << endl;
    int arr[10];

    ReadArray(arr, 10);
    InvertArray(arr, 10);
    
}