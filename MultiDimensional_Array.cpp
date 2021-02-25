#include <iostream>
using namespace std;

int main()
{
    const int row = 2, col = 2;

    //Static two-dimentional Array -> data_type[x][y]
    int staticArr[row][col] = { {1,2}, {3,4}};
    cout<<"Static two-dimentional Array "<<endl;
    for(size_t i = 0; i < row; ++i)
    {
        for(size_t j = 0; j < col; ++j)
        {
            cout<<staticArr[i][j]<<" ";
        }
    }
    cout<<endl;
    
    //Dynamic two-dimentional Array 
    int **dynamicArr = new int *[row];
    for(size_t i = 0; i < row; ++i)
    {
        dynamicArr[i] = new int [col];
    }
    int k =0;
    for(size_t i = 0; i<row; ++i)
        for(size_t j = 0; j<col; ++j)
            dynamicArr[i][j] = ++k;
    
    cout<<"Dynamic Two-Dimensional Array: ";
    for(size_t i = 0; i<row; ++i)
        for(size_t j = 0; j< col; ++j)
            cout<<dynamicArr[i][j];
    cout<<endl;

    for(size_t i = 0; i < row; ++i)
        delete[] dynamicArr[i];
    delete[] dynamicArr;
}

//Static two-dimentional Array -> data_type[x][y]
//Dynamic two-dimentional array declaration: 

