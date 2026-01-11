#include<iostream>
using namespace std;

void insertionsort(int* arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev]; 
            prev--;
        }
        arr[prev + 1] = curr;
    }

    cout << "sorted array is: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[10] = {45,76,98,8,2,3,56,67,87,1,};
    insertionsort(arr,10);
    return 0;
}
