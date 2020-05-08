#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=0,b=0,c=0,d=0,e=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            a++;
        }
        else if(arr[i]==2)
        {
            b++;
        }
        else if(arr[i]==3)
        {
            c++;
        }
        else if(arr[i]==4)
        {
            d++;
        }
        else
        {
            e++;
        }
    }
    if(a>=b && a>=c && a>=d && a>=e)
    {
        cout<<"1";
    }
    else if(b>=a && b>=c && b>=d && b>=e)
    {
        cout<<"2";
    }
    else if(c>=b && c>=a && c>=d && c>=e)
    {
        cout<<"3";
    }
    else if(d>=b && d>=c && d>=a && d>=e)
    {
        cout<<"4";
    }
    else
    {
        cout<<"5";
    }
    

}

