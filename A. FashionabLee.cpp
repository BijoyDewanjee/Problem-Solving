# include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
    cin>>t;
   long long int a[t];
    for(int i=1;i<=t;i++){
        cin>>a[i];
 
    }
     for(int i=1;i<=t;i++){
        if(a[i]%4==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
}
