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
#define dbug2(x,y) 
lli M=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	lli T,n,i,j,k=0,m,j1,co=0,check,mi,l,sum;
	lli ans=0;
    // cin>>T;
    // fr(i,T)
    // {
        cin>>n;
        lli a[n],b[n];
        fr(j,n) cin>>a[j]>>b[j];
        pair<lli,lli> P[2*n];
        fr(j,n)
        {
            P[j].ff=a[j];
            P[j].ss=0;
            P[j+n].ff=b[j];
            P[j+n].ss=1;
        }
        sort(P,P+2*n);
        co=0;
        ans=0;
        fr(j,2*n)
        {
            if(P[j].ss==0) co++;
            else co--;
            ans=max(ans,co);
        }
        cout<<ans<<endl;
    // } 
}
