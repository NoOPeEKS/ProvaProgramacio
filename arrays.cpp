#include <iostream>
using namespace std;

void ReadArray(int arr[], int n_positions)
{
    for (int i = 0; i < n_positions; i++)
    {
        cin >> arr[i];        
    }
    
}

void PrintArray(int arr[], int n_positions)
{
    for (int i = 0; i < n_positions; i++)
    {
        cout << arr[i] << " ";
    }
    
}

void InvertArray(int arr[], int n_positions)
{
    int arrInv[n_positions];
    int index = n_positions - 1;
    for (int i = 0; i < n_positions; i++)
    {
        arrInv[i] = arr[index];
        index--;
    }
    cout << "The inverted array is: ";

    for (int i = 0; i < n_positions; i++)
    {
        cout << arrInv[i] << " ";
    }
    
}