# include<bits/stdc++.h>
using namespace std;
int main()
{
    int j=0,pos=1;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<t.size();i++){
        if(t[i]==s[j]){
            pos++;
            j++;
        }
      //  j++;
    }
    cout<<pos<<endl;
 
}
