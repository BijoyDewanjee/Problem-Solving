# include<stdio.h>
# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    /*
    #ifdef Bijoy
    freopen("in.txt","r",stdin);
    #endif // Bijoy
    */
    char ch[105];
    int tc,n,cnt;
    cin>>tc;
    while(tc--&&cin>>n){
        scanf("%s",ch);
        cnt=-1;
        for(int i=0;i<=n;i++)
        {
            if(ch[i]=='8')
            {
                cnt=i;
                break;
            }
        }
        if(cnt==-1){
            cout<<"NO\n";
        }
        else if(n-cnt>=11){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
 
    }
}
