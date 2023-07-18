//Ahnaf Ojayer 2121949642
//Recursion assignment

#include<bits/stdc++.h>
using namespace std;
int fib(int n);
int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int sum(int n)
{
    if(n/10==0)
        return n;
    else
        return n%10+sum(n/10);
}

int findmin(int a[],int i, int s)
{
    if(i==0)
    {
        return s;
    }
    else
    {
        if(a[i]<s)
            s=a[i];

        return findmin(a,i-1,s);
    }
}
int dectobin(int n)
{
    if(n/2==0)
        return n%2;
    else
        return dectobin(n/2)*10+n%2;
}
double ser(double n)
{
    if(n==0)
        return 1;
    else
        return 1.00/pow(2,n)+ser(n-1);
}
int main()
{
    cout<<"Enter a value:";
    int a;
    cin>>a;
    int c = fib(a-1);
    cout<<a<<"-th Fibonacci number:"<<c<<endl;

    cout<<"Enter a value:";
    cin>>a;
    c=fact(a);
    cout<<"Factorial of "<<a<<": "<<c<<endl;

    cout<<"Enter a value :";
    cin>>a;
    c=sum(a);
    cout<<"Sum of digits: "<<c<<endl;

    cout<<"Enter array size:";
    cin>>a;
    int arr[a];
    cout<<"Enter "<<a<<" values:";
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    int d = arr[0];
    c = findmin(arr,a-1,d);
    cout<<"Minimum element: "<<c<<endl;
    cout<<"Enter a value:";
    int f;
    cin>>f;
    c = dectobin(f);
    cout<<"Binary value: "<<c<<endl;

    cout<<"Enter a value:";
    double n;
    cin>>n;
    double b = ser(n-1);
    cout<<"Answer: "<<b<<endl;

    return 0;
}
