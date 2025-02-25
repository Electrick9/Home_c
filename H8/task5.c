#include <stdio.h>


void Input_Arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void Average_Arr(int arr[], int size)
{
    int sum=0;

    for (int i = 0; i < 12; i++)
    {
        if (arr[i] > 0)
        {
            sum+=arr[i];
        }
    }

    printf("%d",sum);

}

int main()
{
    const int size = 12;
    int arr[size];

    Input_Arr(arr, size);
    Average_Arr(arr,size);

    return 0;
}
