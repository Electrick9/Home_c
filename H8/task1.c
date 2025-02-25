#include <stdio.h>


void Input_Arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

double Calculate_Average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (double)sum / size;
}

void Output_Res(double average)
{
    printf("%.3f\n", average);
}

int main()
{
    const int size = 5;
    int arr[size];

    Input_Arr(arr, size);
    double average = Calculate_Average(arr, size);
    Output_Res(average);

    return 0;
}
