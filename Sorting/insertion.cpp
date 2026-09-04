//insertion sorting algorithm
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4, 3, 1, 9, 0};

    cout << "Before sorting: ";
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int n = 5;

    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "After sorting: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}