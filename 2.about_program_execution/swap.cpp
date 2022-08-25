#include <iostream>
#include <algorithm>
using namespace std;

void swap_min(int *m[], unsigned rows, unsigned cols)
{
    int min = m[0][0];
    int k = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(m[i][j] < min)
            {
                min = m[i][j];
                k = i;
            }
        }
    }
    swap(m[k],m[0]);  
}