#include <stdio.h>

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void bubblesort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < (n - 1); i++)
    {
        printf("pass required to sort %d\n", i + 1);

        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//best performance
void bubblesortpro(int arr[], int n)
{
    int is_sorted = 0;
    int temp;
    for (int i = 0; i < (n - 1); i++)
    {
        printf("pass required to sort %d\n", i + 1);
        is_sorted = 1;
        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                //swaping
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                is_sorted = 0;
            }
        }
        if (is_sorted)
        {
            return;
        }
    }
}

int main()
{
    int size = 6;
    int array[] = {3,4,12,86,23,85};
    printarr(array, size); // print elements before the sorting
    bubblesort(array, size);
    //bubblesortpro(array, size); //use this for less passes required
    printf("The sorted array :\n");
    printarr(array, size); // print after the sorting
    return 0;
}
