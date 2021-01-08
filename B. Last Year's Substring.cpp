#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int f=0;
		for(int i=0;i<5;i++){
			string t="";
			for(int j=0;j<i;j++)t+=s[j];
			for(int j=n-4+i;j<n;j++)t+=s[j];
			if(t=="2020"){cout<<"YES\n";f=1;break;}
		}
		if(f)continue;
		cout<<"NO\n";
	}
}
