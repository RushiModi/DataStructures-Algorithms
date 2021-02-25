/* Find first Unique Integer in an Array
Problem Statement: Implement a function, findFirstUnique(int arr[], int size) which takes 
an array and its size as input and returns the first unique integer in the array. else return -1
Input: [2,3,9,2,3,6] Output: 9  */
#include <iostream>
#include <unordered_map>
using namespace std;
int findFirstUnique(int arr[], int size)
{
    int unique_element = -1;
    unordered_map<int,int> m;
    for(int i =0; i< size; ++i)
    {
        if(m.find(arr[i]) != m.end())
        {
            m[arr[i]] +=1;
        }
        else{
            m.insert({arr[i], 1});
        }
    }
    for(int i =0; i < size; ++i)
    {
        if(m[arr[i]] == 1)
        {
            unique_element = arr[i];
            return unique_element;
        }
    }
    return unique_element;
}
int main()
{
  int size = 6;
  int arr[size] = {2,54,7,2,6,54};
  
  cout << "Array: " ;
  for(int i=0; i<size; i++)
     cout << arr[i] << " ";
  cout << endl;
  
  int unique = findFirstUnique(arr,size);
  cout << "First Unique in an Array: " << unique << endl;
  return 0;
}