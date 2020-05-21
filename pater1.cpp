#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="0123456789";
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=(n*2)-1;j>=(i*2);j--)
        {
            cout<<" ";
        }
        if(i==0)
            cout<<"0";
        else{
        for(j=0;j<=i;j++)
        {
            cout<<s[j]<<" ";
        }}
        for(j=(i-1);j>0;j--)
        {
            cout<<s[j]<<" ";
        }
        if(i!=0)
            cout<<"0";
        cout<<"\n";
    }
    for(i=0;i<=n;i++)
        cout<<i<<" ";
    for(i=(n-1);i>0;i--)
    {
        cout<<i<<" ";
    }
    cout<<"0";
    cout<<"\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(i*2);j++)
        {
            cout<<" ";
        }
        if(i==n)
        {
            cout<<"0";
        }
        else{
        for(j=0;j<=(n-i);j++)
        {
            cout<<s[j]<<" ";
        }}
        for(j=(n-i-1);j>0;j--)
        {
            cout<<s[j]<<" ";
        }
       if(i!=n)
         cout<<"0";

        cout<<"\n";

    }

    return(0);
}


