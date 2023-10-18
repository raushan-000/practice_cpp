// to find maximum number in array
#include <iostream>
#include <limits.h>

using namespace std;
int main()
{
    int arr[] = {7, 8, 4, 3, 9, 8, 0, 4};
    int size = 8;
    // initialise maximum variable with minimum possible integr value
    int maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            // found a number greater than maximum, update maximum
            maximum = arr[i];
        }
    }
    cout << "maximum number is : " << maximum << endl;

    return 0;
}