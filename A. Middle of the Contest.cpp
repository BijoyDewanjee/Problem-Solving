#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int h1,h2,m1,m2;
    char c;
    cin>>h1>>c>>m1;
    cin>>h2>>c>>m2;
    int t1=(h1*60)+m1;
    int t2=(h2*60)+m2;
    int r=(t1+t2)/2;
 
    //cout<<r/60<<c<<r%60<<endl;
    printf("%02d:%02d\n", r / 60, r % 60);
 
}
 
