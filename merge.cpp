//sortowanie przez 
#include <iostream>
#include <cstdlib>
using namespace std;
//int *pomc;
template <typename T>
void scal (int left, int middle,int right, T ptr[])
{
    T pomc[right];
    for (int i = left; i <= right; i++)
    {
        pomc[i] = ptr[i];
    }
    int le = left;
    int sr = middle + 1;
    for(int k=left; k<=right; k++)
    {
        if(le<=middle)
            if(sr <= right)
                if(pomc[sr]<pomc[le])
                    ptr[k] = pomc[sr++];
                else
                    ptr[k] = pomc[le++];
            else
                ptr[k] = pomc[le++];
        else
            ptr[k] = pomc[sr++];
    }
}
template <typename T>
void sort (T *ptr, int left, int right)
{
    
    if (right <= left)
    {
        return;
    }
    int middle = (right + left) / 2;
    sort (ptr,left, middle);
    sort (ptr, middle+1, right);
    scal (left, middle, right, ptr);

}

int main (int argc, char* argv[])
{   
    int ptr[] =  { 5,2,13,8,6,19,1,4,0,15,8,77 };
    int n = sizeof (ptr) /4;
    sort (ptr,0,n-1);
    cout << "Koniec \n";
    for (int i = 0; i < n; i++)
    {
        cout <<ptr[i]<<" ";
    }
    return 0;
}