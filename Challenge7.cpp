/* Find Second Maximum Value in an Array
Problem Statement: Implement a function findSecondMaximum(int arr[], int size) 
Input: [9,2,3,6] output: 6  */
#include <iostream>
using namespace std;
int findSecondMaximum(int arr[], int size)
{
    int max = -2147483648;
    int secondMax = -2147483648;
    for(int i =0; i < size; ++i)
    {
        if(arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if(max == arr[i])
        {
            continue;
        }
        else if(arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
    
}
int main()
{
  int size = 5;
  int arr[size] = {2,3,3,1,3,3};
  
  cout << "Array: ";
  for(int i=0; i<size; i++)
    cout << arr[i] << " ";
  cout << endl;
  
  int secMax = findSecondMaximum(arr,size);
  cout << "Second maximum: " << secMax << endl;
  return 0;
}