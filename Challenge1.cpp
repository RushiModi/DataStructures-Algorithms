/*
Challenge 1: Remove Even Integers From an Array
Problem statement: Implement a function removeEven( int *& Arr, int size ) 
                    which takes an array arr and its size and removes all the even elements from a given array.
Example: Sample Input -> Arr = [1,2,4,5,10,6,3] 
         outpu -> Arr = [1,5,3]
*/

#include <iostream>
using namespace std;

int * removeEven( int *& Arr, int size ) { //O(N) Time, O(N) Space Complexity
  // Write your code here
  int m =0;
  for(size_t i = 0; i < size; ++i)
  {
      if(Arr[i]%2 != 0)
      {
          Arr[m] = Arr[i];
          ++m;
      }
  }
  int* temp = new int[m];
  for(size_t i = 0; i < m; ++i)
  {
      temp[i] = Arr[i];
  }
  delete[] Arr;
  Arr = temp;
  return Arr; 
}

int main()
{
    int *arr;
    arr = new int[10];
    cout<<"Before remove even: ";
    for(int i =0; i < 10; ++i)
    {
        arr[i] = i;
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    arr = removeEven(arr,10);
    cout<<"After remove even: ";
    for(size_t i= 0; i < 5; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete [] arr;
    return 0;
}