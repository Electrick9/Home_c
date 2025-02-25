#include <stdio.h>


void Input_Arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int Min_Arr(int arr[], int size)
{
    int min=arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int Min_Pos_Arr(int arr[], int size)
{
    int min=arr[0], pos=0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    return pos;
}

int Max_Arr(int arr[], int size)
{
    int max=arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int Max_Pos_Arr(int arr[], int size)
{
    int max=arr[0], pos=0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            pos=i;
        }
    }
    return pos;
}

int main()
{
    const int size = 10;
    int arr[size];

    Input_Arr(arr, size);
    printf("%d %d %d %d",Max_Pos_Arr(arr,size), Max_Arr(arr,size), Min_Pos_Arr(arr,size), Min_Arr(arr,size) );

    return 0;
}
