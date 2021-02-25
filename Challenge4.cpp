/* Array of Products of all Elemenets
Problem Statement: < Implement a function findProduct(int arr[], int size) which takes an array arr 
and its size as an input and returns an array so that each index has a product of all numbers present
int the array except the number stored at the index >
INPUT: arr = [1,2,3,4]
OUTPUT: arr = [24,12,8,6]
*/

#include <iostream>
using namespace std;

int* findProduct(int arr[], int size) //O(N^2)
{
    int* product = new int[size];
    for(int i =0; i < size; ++i)
    {   int pro = 1;
        for(int j = 0; j < size; ++j)
        {
            if(j == i) continue;
            pro *= arr[j];
        }
        product[i] = pro;
    }
    return product;
}

int * findProduct2(int arr[], int size)
{
  int temp = 1;
  int * product = new int[size];
  for(int i = 0; i<size; ++i)
  {
    product[i] = temp;
    temp *= arr[i];
  }
  temp = 1; //Initialize temp to 1 for product on right side
  
  //temp contains product of elements on right side excluding arr[i]
  for(int i = size-1; i>=0; --i)
  {
    product[i] *=temp;
    temp *= arr[i];
  }

  return product;
}

int main()
{
  int size = 4;
  int arr[size] = {1, 3, 4, 5};
  
  cout << "Array before product: ";
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  
  int * prodArray = findProduct2(arr,size);
  
  cout << "Array after product: ";
  for(int i=0; i<size; i++){
    cout << prodArray[i] << " ";
  }
  cout << endl;
  delete[] prodArray;
  return 0;
}
