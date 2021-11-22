//sortowanie bąbelkowe
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
template <typename T>
void bubble (T* ptr, int left, int right)
{
    for(int i=left;i<right;i++)
    {
		for(int j=left+1;j<right-i;j++)
        {
		    if(ptr[j-1]>ptr[j])
            {
			    swap(ptr[j-1], ptr[j]);
            }
        }
    }
}


int main (int argc, char *argv[])
{
    int n = 0;
    int ptr[] = {5,2,13,8,6,19,1,4,0,10,8, 77};
    n = sizeof (ptr) / 4;
    bubble (ptr,0, n);
    for (int i = 0; i < n; i++)
    {
        cout << " "<< ptr[i] << " ";
    }
    return 0;
}