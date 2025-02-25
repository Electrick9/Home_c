#include <stdio.h>


void Input_Arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void Output_Arr(int arr[], int size)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}

void Shift_Ell_Arr(int arr[], int size)
{
    int temp=arr[9];
    int i;

    for ( i = 9; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[i]=temp;

    // return temp;
}
int main()
{
    const int size = 10;
    int arr[size];

    Input_Arr(arr, size);
    Shift_Ell_Arr(arr,size);
    Output_Arr(arr,size);

    return 0;
}
