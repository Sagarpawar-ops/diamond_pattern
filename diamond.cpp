#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i, j,k, n;
    cin>>n;
    for(i=1; i<= n/2 + 1;++i)
    {
        for(j=1; j<=((n/2) +1)-i; j++){
            cout << " ";
        }
        for(j=1; j<=2*i-1;++j)
        {
            cout << '*';
        }
        cout<<endl;
    }
    for(i= n/2; i>=1;i--)
    {
        for(j=1; j<=((n/2) +1)-i; j++){
            cout << " ";
        }
        for(j=1; j<=2*i-1;++j)
        {
            cout << '*';
        }
        cout<<endl;
    }
    return 0;
}
