/* Merge Two Sorted Arrays
Problem Statement: Implement a function mergeArrays(int arr1[], int arr2[], int arr1Size,int arr2Size) 
                   which merges two sorted arrays into another sorted array. Definition of the function is given.
Example: 
    Sample Input -> Two Sorted arrays and thier sizes 
                    arr1=[1,3,4,5] , arr2 = [2,6,7,8]
    Output -> A merged sorted array consisting of all elements of both input arrays.
              arr = [1,2,3,4,5,6,7,8]
*/
#include <iostream>
using namespace std;

int * mergeArrays(int arr1[], int arr2[], int arr1Size,int arr2Size)
{
    int * arr3 = new int[arr1Size+arr2Size]; // creating new array
    // Write your code here
    int i =0;
    int j =0;
    int k =0;
    while(i < arr1Size && j< arr2Size)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
            
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
        
    }
    if(i<arr1Size)
    {
        while(i<arr1Size)
        {
            arr3[k++] = arr1[i++];
            
        }
    }
    else if(j< arr2Size){
        while(j< arr2Size)
        {
            arr3[k++] = arr2[j++];
            
        }
    }
    return arr3; // returning array
}

int main()
{
    int size1 = 5, size2 = 3;
    int arr[size1] = {1,12,14,17,23}; // creating array 1
    int arr1[size2] = {11,19,27};  // creating array 2
    int * arr2 = mergeArrays(arr, arr1, size1, size2); // calling mergeArrays
    for(int i=0; i< size1+size2 ; i++) {
        cout << arr2[i] << " ";
    }
    cout<<endl;
    delete arr2;  // deleting pointer
    return 0;
}