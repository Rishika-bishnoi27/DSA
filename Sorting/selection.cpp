// Selection sort
#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {4, 3, 1, 9, 0};

    cout << "Before sorting: ";
    print(arr, 5);

    int n = 5;

    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        swap(arr[i], arr[min]);
    }

    cout << "After sorting: ";
    print(arr, n);

    return 0;
}