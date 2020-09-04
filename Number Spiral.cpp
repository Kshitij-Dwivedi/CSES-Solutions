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
    cin>>T;
    fr(i,T)
    {
        cin>>n>>m;
        lli x=max(n,m);
        if(x&1)
        {
            if(m==x) ans=x*x-n+1;
            else ans=(x-1)*(x-1)+m;
        }
        else
        {
            if(n==x) ans=x*x-m+1;
            else ans=(x-1)*(x-1)+n;
        }
        cout<<ans<<endl;
    } 
}
