#include <iostream>
using namespace std;

class ArrayList
{
    int *arr; //array growing dynamically
    int num_elements; //number of elements in array;
    int capacity; //current capacity of an array

public:
    ArrayList(int size)
    {
        arr = new int[size]{0};
        num_elements = 0;
        capacity = size;
       
    }
    void resize()
    {
        int *temparray = new int[capacity*2]; //created a temp array dynamic
        capacity *= 2;

        //you moved elements into temp array
        for(size_t i = 0; i<num_elements; ++i) 
        {
            temparray[i] = arr[i];
        }

        delete [] arr;//deleting the allocated space of old array
        arr = temparray; //pointing to new allocated memory
    }

    void insert(int val)
    {
        if (num_elements < capacity)
        {
           arr[num_elements] = val;
            ++num_elements;
        }
        else{
            resize();
            arr[num_elements] = val;
            ++num_elements;
        }
    }
    int getAt(int index)
    {
        return arr[index];
    }

    int length()
    {
        return num_elements;
    }

    void print()
    {
        for(size_t i =0; i< num_elements;++i)
        {
            cout<<arr[i]<<endl;
        }
    }
    ~ArrayList(){
        delete[] arr;
    }


};

int main()
{
    ArrayList arr(1);
    cout << "Arr length : " << arr.length() << endl;
    arr.insert(1);
    arr.insert(2);
    arr.insert(3);
    arr.insert(4);
    arr.insert(5);
    arr.insert(6);
    arr.insert(7);
    arr.insert(8);
    cout <<  "Arr length : " << arr.length() << endl;
    cout << "Array : ";
    arr.print();  
    cout << "Element at index 5 is " << arr.getAt(4) << endl; 
}