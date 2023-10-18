// Linear search in array

#include <iostream>
using namespace std;

// bool find(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             // present
//             return true;
//         }
//         // not present
//         return false;
//     }
// }
int main()
{
    /*
    int arr[6] = {2, 4, 5, 3, 7, 8};
    int size = 6;
    int key;
    cout << "enter key to find" << endl;
    cin >> key;
    if (find(arr, size, key))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    */

// other method without function

int arr[6] = {2, 4, 5, 3, 7, 8};
    int size = 6;
    int key = 9;
    bool flag = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            // found
            flag=1;
            break;
        }
    }
    
    if (flag)
    {
        cout<<"present";
    }
    else
    cout<<"not present";

   return 0;
}