#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size;
    cout<<"Enter size of the array: "<<endl;
    cin>>size;
    int *dynamicArray = new int[size];
    for(size_t i = 1; i<=size; ++i)
    {
        cout<<"Please enter the value of each index "<<i<<endl;
        cin>>dynamicArray[i];
    }
    for(size_t i =1; i<=size; ++i)
    {
        cout<<dynamicArray[i]<<endl;
    }
    delete[] dynamicArray;
    return 0;
    
}