/* Find Minimum Value in an Array
Problem Statement: Implement a function findMinumum(int arr[], int size)
which takes an array arr and size and returns the smallest number in the given array.
Input: arr = [9,2,3,6]
Output: 2
*/
#include <iostream>
using namespace std;
int findMinumum(int arr[], int size)
{
    int minimum = arr[0];
    int i =0;
    while(i < size)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
        ++i;
    }
    return minimum;
}

int main()
{
    int arr[] = {10,20,30,5};
    int num = findMinumum(arr, 4);
    cout<<num<<endl;

}