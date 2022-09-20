#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int n,h;
int count=0;
cin>>n>>h;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < n; i++)
{
    if (arr[i]>h)
    {
        count+=2;
    }
    else count++;
}
cout<<count;
return 0;
}