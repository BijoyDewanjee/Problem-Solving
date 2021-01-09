# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,k,ans=0,h,p;
        cin>>x>>y>>k;
        h=k+(k*y);
        h=h-x;
        ans=1;
        p=h/(x-1);
        ans+=p;
        if(p*(x-1)<h)ans++;
        ans+=k;
        cout<<ans<<endl;
    }
}
