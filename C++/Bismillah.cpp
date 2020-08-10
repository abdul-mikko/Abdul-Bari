#include <iostream>
using namespace std;

int main()
{

    int arr[] = {4, 5, 6, 7, 8, 9, 10, 11};
    int l = 0, key, h = 8, mid;

    cout << "Enter a number to search";
    cin >> key;

    while (l <= h)
    {
        mid = (l + h) / 2;

        if (key == arr[mid])
        {
            cout << "Number at Index : " << mid;
            return 0;
        }
        else if (key < arr[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    cout << "key not found";
    return 0;
}