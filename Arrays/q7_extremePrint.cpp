// Extreme print in array
// input--> {1,2,3,4,5,6,7,8}
// output--> 1 8 2 7 3 6 4 5

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int start = 0;
    int end = size - 1;

    while (true)
    {
        if (start > end)
            break;
        if (start = end) // to handle odd number of element
        {
            cout << arr[start] << endl;
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
    return 0;
}