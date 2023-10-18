// to find minimum number in array
#include <iostream>
#include <limits.h>

using namespace std;
int main()
{
    int arr[] = {7, 8, 4, 3, 9, 8, 0, 4,-2};
    int size = 9;
    int minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minimum)
        {
            // found a number lesser than minimum, update minimum
            minimum = arr[i];
        }
    }
    cout << "minimum number is : " << minimum << endl;
    return 0;
}