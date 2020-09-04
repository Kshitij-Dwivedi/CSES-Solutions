#include<bits/stdc++.h>
using namespace std;
#define fr(i,t) for(i=0;i<t;i++)
#define fr1(i,r,t) for(i=r;i<t;i++)
typedef long long int lli;
typedef unsigned long long int ulli;
#define ff first
#define ss second 
double pie=3.14159265358979323846;
#define dbug(x) cout<<#x<<"="<<x<<endl;
lli M=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	  lli T,n,i,j,k=0,m,j1,co=0,check,mi,l,sum;
    lli ans=0;
    cin>>n>>m>>k;
    lli a[n],b[m];
    fr(j,n) cin>>a[j];
    fr(j,m) cin>>b[j];
    sort(a,a+n);
    sort(b,b+m);
    lli x=0;
    co=0;
    j=0;
    while(j<n)
    {
        if(x==m) break;
        else if(a[j]<b[x]-k) j++;
        else if(a[j]<=b[x]+k&&a[j]>=b[x]-k) {co++,x++,j++;}
        else x++;
    }
    cout<<co<<endl;
}
