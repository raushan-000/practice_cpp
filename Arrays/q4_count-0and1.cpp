// to count 0 and 1 in array
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0};
    int size = 15;
    int numOne = 0;
    int numZero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            // if zero found increment numZero
            numZero++;
        }
        // if zero found increment numOne
        if (arr[i] == 1)
        {
            numOne++;
        }
    }
    cout << "number of one : " << numOne << endl;
    cout << "number of zero : " << numZero << endl;
    return 0;
}