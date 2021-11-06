//sortowanie bąbelkowe
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;
template <typename T>
void bubble (T* ptr, T n)
{
    for(int i=0;i<n;i++)
    {
		for(int j=1;j<n-i;j++)
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
    cout << n <<"\n";
    bubble (ptr, n);
    for (int i = 0; i < n; i++)
    {
        cout << " "<< ptr[i] << " ";
    }
    return 0;
}