/*
0
1 1
2 3 5
8 13 21 for n rows MANIPULATORS
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()

{

    int f,l,n;

    int fibo(int first,int last);
    static int first=0,last=1;
    cout<<"Enter the first number";
    cin>>f;
    cout<<"Enter the last number";
    cin>>l;
    fibo(f,l);
    return 0;
}
int fibo(int first,int last)
    {
     int next,a[20],j,i,n,x;
     cout<<"Enter the number of rows";
     cin>>n;
          next=first+last;
     first=last;
     last=first;
     x=first+last;

    for(i=0;i<n;i++)
    {

        a[i]=a[1-i]+a[2-i];
        cout<<a[i];

    }
    }
