
#include<bits/stdc++.h>
using namespace std;
int comb(int n)
{
    int div=0;
    for(int i=n-1; i>=1; i--)
    {
        if(n%i==0)
        {
            div=i;
            break;
        }
    }
    if(div==1)
    {
        div=n;
    }
    return div;
}

int main()
{
    while(1)
    {
        int t;
        cin>>t;
        for(int i=0; i<t; i++)
        {
            int n;
            cin>>n;

        }

    }
    return 0;
}

