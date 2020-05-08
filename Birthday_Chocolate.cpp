#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *s=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int d,m;
    cin>>d>>m;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<i+m;j++)
        {
            sum+=s[j];
        }
        if(sum==d)
        {
            count++;
        }
    }
    cout<<count;

}
