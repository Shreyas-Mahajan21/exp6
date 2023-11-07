#include<iostream>
using namespace std;
class sswap
{
private:
int a[10];
int b[10];
int c;
public:
sswap(int x[],int y[],int n){
int i;
c=n;
for(i=0;i<c;i++){
a[i]=x[i];
b[i]=y[i];
}
}
friend class T;
};
class T{
public:
int temp,i;
void change(sswap & t){
for(i=0;i<t.c;i++){
cout<<"Before swap p"<<i<<"="<<t.a[i]<<" q"<<i<<"="<<t.b[i]<<"\n";
}
for(i=0;i<t.c;i++){
temp=t.b[i];
t.b[i]=t.a[i];
t.a[i]=temp;
cout<<"\nAfter swap p"<<i<<"="<<t.a[i]<<" q"<<i<<"="<<t.b[i]<<"\n";
}
}
};
int main()
{
int n,i;
cout<<"Enter size of array:";
cin>>n;
int p[n],q[n];
for(i=0;i<n;i++){
cout<<"Enter values of 1st array:";
cin>>p[i];
}
for(i=0;i<n;i++){
cout<<"Enter values of 2nd array:";
cin>>q[i];
}
sswap s(p,q,n);
T ti;
ti.change(s);
return 0;
}
