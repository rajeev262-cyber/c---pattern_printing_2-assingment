#include<iostream>
using namespace std ;
int main ()
{
    int n ;
    cout << "enter the edge ";
    cin >> n ;
    for (int i=1 ; i<=n-1 ; i++)
    {
        for (int j=1 ; j<= n-i;j++)
        {
            cout << " ";
        }
        for (int k=1 ; k<=2*i-1;k++)
        {
            int a = ((2*i-1)/2)+1;
            if ((k==1)|| k==(2*i-1)|| i==n|| k==a  ) cout << "*";
            else cout << " ";
        }
        cout << endl ;
    }
    for (int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=2*n -1 ; j++)
        {
            if ((i==j)||(i+j)==2*n|| j==n||i==1) cout << "*";
            else cout << " ";
        }
        cout << endl ;
    }
}