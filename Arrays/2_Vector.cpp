// vector is dynamic array means its size is not fixed
// vector doubles its size when it gets full

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector declaration
    vector<int> arr;

    // vector initialisation
    // vector<int> arr1{10, 20, 30}; // 3 elememt vector
    // vector<int> arr2(10, -1);     // 10 element all initialised with -1
    // vector<int> arr3(n);          // vector created at run time with size n
    int ans = (sizeof(arr) / sizeof(int)); // compiler dependent
    cout << ans << endl;
    cout << arr.size() << endl;     // return how many element is present in array
    cout << arr.capacity() << endl; // max capacity how many element array can hold

    // insert

    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(10);

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove/delete
    arr.pop_back(); // remove last element from array

    // print after removing
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove/delete
    arr.pop_back();

    // print after removing
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> brr(10); // vector with defined size
    cout << "size of brr : " << brr.size() << endl;
    cout << "capacity of brr : " << brr.capacity() << endl;

    // printing brr
    cout << "checking which element is present in array" << endl;
    for (int i = 0; i < brr.size(); i++)
    {

        cout << brr[i] << " ";
    }
    cout << endl;

    // vector with defined size 10 and initialise with -1
    cout << "vector with defined size 10 and initialise with -1" << endl;
    vector<int> brr1(10, -1);

    // printing brr1
    for (int i = 0; i < brr1.size(); i++)
    {
        cout << brr1[i] << " ";
    }
    cout << endl;

    // creating vector at rum time
    // vector with defined size n and initialise with -1
    cout << "vector with defined size n and initialise with -1" << endl;
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    vector<int> brr2(n, -1);
    cout << "size of brr2 : " << brr2.size() << endl;
    cout << "capacity of brr2 : " << brr2.capacity() << endl;
    // printing brr2
    for (int i = 0; i < brr2.size(); i++)
    {
        cout << brr2[i] << " ";
    }
    cout << endl;

    vector<int> crr{10, 20, 30, 40};
    for (int i = 0; i < crr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "vector crr empty or not : " << crr.empty() << endl;
    vector<int> drr;
    cout << "vector drr empty or not : " << drr.empty() << endl;

    vector<int> err(3);
    cout << "size of err before element addition : " << err.size() << endl;
    cout << "capacity of err before element addition : " << err.capacity() << endl;
    err.push_back(5);
    err.push_back(6);
    err.push_back(7);
    err.push_back(8);
    err.push_back(9);
    for (int i = 0; i < err.size(); i++)
    {
        cout << err[i] << " ";
    }
    cout << endl;
    cout << "size of err after element addition : " << err.size() << endl;
    cout << "capacity of after before element addition : " << err.capacity() << endl;
    return 0;
}
