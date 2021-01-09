# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
  while( cin>>n>>m){
        int x=n/2;
    if(m==0) cout<<1<<endl;
 
   else if(m<=x) cout<<m<<endl;
    else cout<<n-m<<endl;
  }
 
}
