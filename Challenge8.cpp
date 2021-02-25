/* RIght Rotate an array by 1
Input: [1,2,3,4,5] Output: [5,1,2,3,4]  */
#include <iostream>
using namespace std;
void rotateArray(int arr[], int size)
{
     //Store Last Element of Array.
    //Start from last and Right Shift the Array by one.
    //Store the last element saved to be the first element of array.
    int lastElement = arr[size - 1];

    for (int i = size - 1; i > 0; i--) {
      arr[i] = arr[i - 1];
    }
    arr[0] = lastElement;
}
int main()
{
    int size = 6;
  int arr[size] = {3,6,1,8,4,2};
  cout << "Array before rotation: ";
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  
  rotateArray(arr,size);
  
  cout << "Array after rotation: ";
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}