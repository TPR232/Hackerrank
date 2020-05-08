#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;)
    {
        if(arr[i]==arr[i+1]){
            count++;
            i+=2;
        }
        else
        {
            i++;
        }
    }
    cout<<count;
}
