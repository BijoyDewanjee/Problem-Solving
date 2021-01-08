#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,x,n;
	cin>>t;
	while(t--){
		cin>>n>>x;
		int odd=0,flag=0, a[n];
 
		for (int i = 0; i < n; i++)
		{
 
			cin>>a[i];
			if(a[i]%2==1){
                odd++;}
		}
		for(int i=1;i<=odd && i<=x;i+=2){
			if(n-odd>=x-i){
				cout<<"Yes"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)cout<<"No"<<endl;
	}
	return 0;
}
