#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,a,b,c,x;
   cin>>t;
   while(t--){
    cin>>a>>b>>c;
    int sum=a+b+c;
    if(sum%9!=0) cout<<"NO"<<endl;
    else{
            x=sum/9;
    if(x<=a&&x<=b&&x<=c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }
   }
}

