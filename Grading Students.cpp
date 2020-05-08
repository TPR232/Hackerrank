#include <bits/stdc++.h>
#include <utility>

using namespace std;

int main()
{   
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>=38 && x%5>=3)
        {
            while(x%5!=0)
            {
                x++;
            }
            cout<<x<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
}
