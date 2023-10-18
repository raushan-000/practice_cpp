// convert element in array to other element

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int arr[5] = {2, 3, 4, 5, 6}; // convert all to 2

    for (int i = 0; i < 5; i++)
    {
        arr[i] = 2; // assignt 2 to all element
    }

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    // other method
    // using memset function
    memset(arr, 0, sizeof(arr)); // set all element to 0
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    memset(arr, -1, sizeof(arr)); // set all element to -1
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    memset(arr, 2, sizeof(arr)); // garbage | does not work for other values
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    // We can use memset() to set all values as 0 or -1 for integral data types also.
    // It will not work if we use it to set as other values. The reason is simple, memset works byte by byte.
    // for string

    char str[] = "geeksforgeeks";
    memset(str, 't', sizeof(str));
    cout << str << endl;
    memset(str, 'u', sizeof(str));
    cout << str;
    return 0;
}