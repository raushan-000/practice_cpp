#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void incr(int arr[], int size)
{
    arr[0] = arr[0] + 10; // increase element at 0 index by 10
    printArray(arr, size);
}
int main()
{
    // // array declare
    // int arr[10];          // created array of size 10
    // cout << arr << endl;  // to find address
    // cout << &arr << endl; // to find address using &
    // std::cout << "array created" << endl;
    // int a[53];   // array of size 53 of int type
    // char b[106]; // array of size 106 of char type
    // bool c[12];  // array of size 12 of bool type

    // // array initialisation

    // int arr1[] = {2, 3, 4, 5, 67, 8};
    // int arr2[10] = {2, 3, 4, 5, 67, 8};
    // // int arr1[4]= {2,3,4,5,67,8};
    // int arr3[6] = {2, 3, 4, 5, 67, 8};

    // cout << "array initialised successfully" << endl;
    // cout<<arr1[4]<<endl;
    // cout<<arr2[2]<<endl; // garbage value or segmentation fault -- compiler dependent
    // cout<<arr1[4]<<endl;

    // int arr4[5]={1,2,3,4,5};
    // for (int index = 0; index < 5; index++){
    //     cout<<arr4[index]<<endl;
    //     //cout<<arr4[i]<<"";
    // }

    /*
// printing by taking user input
    int arr5[10];
    cout<<"enter the input value in array"<<endl;
    // taking input
    for (int i = 0; i < 10; i++)
    {
        // int n;
        // cin>>n;
        // arr5[i]=n;

        cin>>arr5[i];
    }
    //printing
    cout<<"value in array"<<endl;
    for (int i = 0; i < 10; i++)
    {

        cout<<arr5[i]<<"";
    }

*/
    // arr[0] means --> value at(array base address + index*size of data type)

    // Arrays and Function

    // array is always pass by reference means change will be in original array
    int arr[] = {2, 3};
    int size = 2;
    incr(arr, size); // in function of array , we always have to pass size
    printArray(arr, size);

    return 0;
}