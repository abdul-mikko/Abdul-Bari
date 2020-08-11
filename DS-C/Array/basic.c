#include <stdio.h>
#include <stdlib.h>

struct newArray
{
    int A[10];
    int size;
    int length;
};

void Display(struct newArray arr)
{

    int i;
    for (i = 0; i < arr.length; i++)
    {
        printf(" \n %d ", arr.A[i]);
    }
}

void Append(struct newArray *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void Insert(struct newArray *arr, int index, int value)
{
    int i;
    if (index > 0 && index <= arr->length)
    {
        for (i = arr->length; i >= index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = value;
        arr->length++;
    }
}
int Delete(struct newArray *arr, int index)
{
    {
        int i;
        int x = 0;
        if (index >= 0 && index <= arr->length)
        {
            int x = arr->A[index];
            for (i = index; i < arr->length - 1; i++)
            {
                arr->A[i] = arr->A[i + 1];
            }
            arr->length--;
            return x;
        }
    }
}
int main()
{
    int i, n;
    struct newArray arr = {{10, 20, 30, 40, 50}, 10, 5};
    // Append(&arr, 60);
    // Insert(&arr, 1, 33);
    int delValue = Delete(&arr, 4);
    Display(arr);
    printf("\nDeleted value is %d", delValue);
    printf("\nLength of append array is %d", arr.length);
}