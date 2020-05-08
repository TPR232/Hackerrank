#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,m,b=0,a;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(i!=k)
        b=(b+arr[i]);
    }
    a=b/2;
    if(a==m)
    {
        cout<<"Bon Appetit";
    }
    else
    {
        cout<<abs(m-a);
    }

}
