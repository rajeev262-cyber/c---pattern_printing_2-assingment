#include<iostream>
using namespace std ;
int main ()
{
    int n ;
    cout << "enter the height ";
    cin >> n ;
    for (int i=1 ; i<=n ; i++)
    {
        int a = i ;
        for (int j=1 ;j<= n+1-i ; j++)
        {
            cout << " ";
        }
        for (int k=1 ; k<= 2*i - 1 ; k++)
        {
            if ((k==1)|| k== (2*i-1)) cout << a;
            else cout << " ";
        }
        cout << endl ;
    }
}