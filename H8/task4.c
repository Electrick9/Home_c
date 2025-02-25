#include <stdio.h>


void Input_Arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void Max_A_Max_B_Sum(int arr[], int size)
{
    int max_a,max_b;

    if (arr[0] > arr[1])
    {
        max_a = arr[0];
        max_b = arr[1];
    }

    else
    {
        max_a = arr[1];
        max_b = arr[0];
    }

    for (int i = 2; i < 10; i++)
    {
        if (arr[i] > max_a)
        {
            max_b = max_a;
            max_a = arr[i];
        }

        else if (arr[i] > max_b)
        {
            max_b = arr[i];
        }
    }

    printf("%d",max_a + max_b);

}

int main()
{
    const int size = 10;
    int arr[size];

    Input_Arr(arr, size);
    Max_A_Max_B_Sum(arr,size);

    return 0;
}
