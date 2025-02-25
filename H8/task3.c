#include <stdio.h>


void Input_Arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void Max_Min_Index(int arr[], int size)
{
    int max, max_Index=0, min, min_Index=0;
    max=min=arr[0];

    for (int i=1; i< size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_Index = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_Index = i;
        }
    }
    printf("%d %d %d %d",max_Index+1, max, min_Index+1, min);
}
int main()
{
    const int size = 10;
    int arr[size];

    Input_Arr(arr, size);
    Max_Min_Index(arr,size);

    return 0;
}
