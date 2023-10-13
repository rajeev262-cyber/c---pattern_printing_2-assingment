#include<iostream>
using namespace std ; 
int main ()
{
    int  n ;
    cout << "enter the height of bridge ";
    cin >> n ;
    int m = n-1 ;
    int a =1 ;
    for (int i=1 ; i<=2*n-1;i++)
    { 
        cout << a ;
        if (i>=n) a--;
        else a++;
    }
    cout << endl ;
    for (int i=1 ; i<= m ; i++)
    {
        int b = 0;
        int k= 0;
        for (int j=1 ; j<=m+1-i ; j++)
        {
            b++;
            k++;
            cout << b ;
          
        }
        
        for (int k=1 ; k<= 2*i -1;k++)
        { 
            k++;
            if (k>n) b--;
            else b++;
        
            cout << " ";
        
        }
        for (int l=1 ; l<= m+1 -i ; l++)
        {
            k++;
           if (k>n) b--;
           else b++;
            cout << b ;
          
        }
        cout << endl ;
    }
    return 0 ;
}