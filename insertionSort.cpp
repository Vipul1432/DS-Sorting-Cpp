#include <iostream>
using namespace std;

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j -= 1;
        }
        array[j + 1] = key;
    }
}

int main()
{

    int array[] = {5, 2, 4, 6, 1, 3};
    insertionSort(array, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }
}