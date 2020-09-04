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
lli a[10000001];
lli recur(lli n)
{
    lli ans=0,j;
    if(n==0) return 1;
    if(n>=6)
    {
        fr(j,6)
        {
            if(a[n-j-1]!=-1)
            ans+=a[n-j-1]%M;
            else ans+=recur(n-j-1)%M;
        }
    }
    else
    {
        fr(j,n)
        {
            if(a[n-j-1]!=-1)
            ans+=a[n-j-1]%M;
            else ans+=recur(n-j-1)%M;
        }
    }
    ans=ans%M;
    a[n]=ans;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	  lli T,i,j,j1,k=0,n,m,co=0,check,mi,l,sum;
    lli ans=0;
    cin>>n;
    fr(j,n+1)
    {
        a[j]=-1;
    }
    a[0]=1;
    a[1]=1;
    ans=recur(n);
    cout<<ans<<endl;
}     
