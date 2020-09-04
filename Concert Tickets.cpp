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
    cin>>n>>m;
    lli a[n],b[m];
    multiset<lli,greater<lli>> s;
    fr(j,n)
    {
        cin>>a[j];
        s.insert(a[j]);
    }
    fr(j,m)
    {
        cin>>b[j];
        auto x=s.lower_bound(b[j]);
        if(x==s.end())
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<*x<<"\n";;
            s.erase(x);
        }
    }
}
