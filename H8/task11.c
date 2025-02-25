#include <stdio.h>

int Last_Num (int num)
{
    int num_1;

    if (num < 0)
    {
        num_1 = -(num%10);
    }

    else
    {
        num_1= num%10;
    }

    return num_1;
}

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

void Sort_Arr_Last_Num(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int temp = arr[j];

            if (Last_Num(arr[j]) > Last_Num(arr[j + 1]))
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    const int size = 10;
    int arr[size];

    Input_Arr(arr, size);
    Sort_Arr_Last_Num(arr,size);
    Output_Arr(arr,size);

    return 0;
}
