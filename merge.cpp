//sortowanie przez 
#include <iostream>
#include <cstdlib>
using namespace std;
//int *pomc;
template <typename Iterator>
void scal (Iterator lewy, Iterator srodek, Iterator prawy, Iterator ptr[], int n)
{
    Iterator pomc[n];
    for (int i = lewy; i <= prawy; i++)
    {
        pomc[i] = ptr[i];
    }
    Iterator le = lewy;
    Iterator sr = srodek + 1;
    for(int k=lewy; k<=prawy; k++)
    {
        if(le<=srodek)
            if(sr <= prawy)
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
template <typename Iterator>
void sort (Iterator lewy, Iterator prawy, Iterator ptr[], int n)
{
    
    if (prawy <= lewy)
    {
        return;
    }
    Iterator srodek = (prawy + lewy) / 2;
    sort (lewy, srodek, ptr, n);
    sort (srodek+1, prawy, ptr, n);
    scal (lewy, srodek, prawy, ptr, n);

}

int main (int argc, char* argv[])
{   
    int ptr[] =  { 5,2,13,8,6,19,1,4,0,15,8,77 };
    int n = sizeof (ptr) /4;
    sort (0, n-1 ,ptr, n);
    cout << "Koniec \n";
    for (int i = 0; i < n; i++)
    {
        cout <<ptr[i]<<" ";
    }
    return 0;
}