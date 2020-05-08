#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,*arr;
    int max,min;
    int cmax=0,cmin=0;
    cin>>n;
    arr=new int[n];
    for(int i=0;i<n;i++){

        cin>>arr[i];

    }

    max=arr[0];
    min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            cmin++;
        }
        if(arr[i]>max){
            max=arr[i];
            cmax++;
        }

    }
    cout<<cmax<<" "<<cmin;

    return 0;

}
