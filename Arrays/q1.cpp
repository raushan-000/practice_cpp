// take  element in array and print their double

#include <iostream>
using namespace std;

int main()
{

    // int arr[500];
    // int n;
    // cout << "enter the number of element you want to add in array" << endl;

    // cin >> n;
    // cout << "enter element" << endl;
    // for (int i = 0; i < n; i++)
    // {

    //     cin >> arr[i];
    // }

    // // prining output
    // cout<<"Double"<<" : ";
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout << 2 * arr[i] << " ";
    // }

    // if array have less element than defind size, it takes ramaining as 0
    int arr1[5] = {1, 2, 3};
    for (int i = 0; i < 5; i++)
    {

        cout << arr1[i] << " ";
    }

    // if we don't assign any value, it will give garbage value
    int arr2[5];
    for (int i = 0; i < 5; i++)
    {

        cout << arr2[i] << " ";
    }

    // if we want to replace garbage value with 0
    int arr3[5] = {0};
    for (int i = 0; i < 5; i++)
    {

        cout << arr3[i] << " ";
    }
    return 0;
}