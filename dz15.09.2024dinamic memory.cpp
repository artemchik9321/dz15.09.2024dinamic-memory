// dz15.09.2024dinamic memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enter:";
    cin >> size;

    int* arr = new int[size];
    cout << "enter " << size << " elements:";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }

    cout << "massive1:";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int* arr2 = new int[size + 1];
    for (int i = 0; i < size; i++) 
    {
        arr2[i] = arr[i];
    }
    arr2[size] = 100;

    cout << "massive2:";
    for (int i = 0; i < size + 1; i++) 
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    delete[] arr;
    delete[] arr2;
}
