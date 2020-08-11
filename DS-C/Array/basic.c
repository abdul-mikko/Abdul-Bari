#include <stdio.h>
#include <stdlib.h>

struct newArray
{
    int A[15];
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
int LinearSearch(struct newArray *arr, int key)
{

    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
        {
            int temp = arr->A[0];
            arr->A[0] = key;
            arr->A[i] = temp;

            return i;
        }
    }
    return 000;
}

int BinarySearch(struct newArray *arr, int key)
{
    int mid;
    int h = arr->length - 1;
    int l = 0;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr->A[mid] == key)
        {
            return mid;
        }
        else if (arr->A[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int i, n;
    struct newArray arr = {{10, 20, 30, 40, 50, 60, 70, 80, 90}, 15, 9};
    // Append(&arr, 60);
    // Insert(&arr, 1, 33);
    // int delValue = Delete(&arr, 4);
    // printf("\nDeleted value is %d", delValue);
    // int position = LinearSearch(&arr, 50);
    // printf("\n\nElement found at position %d", position);
    int keyIndex = BinarySearch(&arr, 30);
    printf("\nKey found at array index %d", keyIndex);
    Display(arr);
    // printf("\nLength of append array is %d", arr.length);
}