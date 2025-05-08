#include<iostream.h>
using namespace std;
int main()
{
int n,a=0,b=1,next;
cout<<"enter number of terms:";
cin>>n;
cout<<"fibonacci series:";
for(int i=/;i<=n;++)
{
    cout<<a<<"";
    next=a+b;
    a=b;
    b=next;
}
return0;
}