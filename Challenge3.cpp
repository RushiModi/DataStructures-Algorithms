/* Find Two Numbers that Add upto "Value"
Problem Statement: Implement function findSum(int arr[], int value, int size)
Input: An array Valuem and size of the array-> arr=[1,21,3,14,5,60,7,6]
Output: arr = [21,60]
*/

#include <iostream>
#include <unordered_set>

using namespace std;

int * findSum(int arr[], int sum, int size)
{
    unordered_set<int> US;
    int * result = new int[2];
    for(int i =0; i < size; ++i)
    {
        int secondNum = sum - arr[i];
        if(US.find(secondNum)!= US.end())
        {
            result[0] = secondNum;
            result[1] = arr[i];
            return result;
        }
        else { US.insert(arr[i]);}
    }
    return result;
}

int main()
{
     int size = 6, value = 18;
  int arr[size] = {2,5,7,8,9,10};

  if(size > 0){
    int * arr2 = findSum(arr, value, size);
    int num1 = arr2[0];
    int num2 = arr2[1];

      if((num1 + num2) != value)
        cout << "Not Found" << endl;
      else {
        cout << "Number 1 = " << num1 << endl;
        cout << "Number 2 = " << num2 << endl;
        cout << "Sum = " << num1+num2 << endl;

      }
    } else {
      cout << "Input Array is Empty!" << endl;
    }
}