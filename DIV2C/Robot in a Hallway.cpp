#include<iostream>
using namespace std;
int t,m,a[2][222222],p[2][222222],ans,n;
int main(){
cin>>t;
while(t--){
cin>>m;
for(int j=0;j<2;j++)
for(int i=0;i<m;i++)
cin>>a[j][i];
a[0][0]=-1;
p[0][m]=0;
p[1][m]=0;
for(int i=m-1;i>=0;i--)
for(int j=0;j<2;j++)
p[j][i]=max(max(a[1-j][i]+1,a[j][i]+(m-i)*2),p[j][i+1]+1);
ans=1111111111;
n=0;
for(int i=0;i<m;i++){
int c=i&1;
ans=min(ans,max(n, p[c][i]));
n=max(n,max(a[c][i]+(m-i)*2,a[1-c][i]+(m-i)*2-1));
}
cout<<ans<<endl;
}
return 0;
}
