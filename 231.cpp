#include <iostream>
using namespace std;
int main(){
    int t;
    int ans=0;
    cin>>t;
    int x,y,z;
   while (t--){
      cin>>x>>y>>z;
     
      if (x+y+z>=2){
          ans++;
      }
     
  }
   cout<<ans;
  
}
