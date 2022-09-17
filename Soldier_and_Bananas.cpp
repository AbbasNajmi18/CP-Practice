#include<iostream>
using namespace std;

int main(){
int k,n,w;
int sum=0;
cin>>k>>n>>w;

for (int i = 1; i <= w; i++)
{
    int temp=k*i;
    sum=sum+temp;
}

if (sum-n>0)
{
    cout<<sum-n;
}
else cout<<"0";


return 0;
}