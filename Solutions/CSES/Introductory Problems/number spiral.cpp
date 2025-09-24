//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define en endl
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pi 3.14159265358979323
#define all(v) v.begin() , v.end()
#define rall(v) v.rbegin(),v.rend()
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 2e5 + 5;
 
 
void Dalia()
{
  ll y,x,ans=0;
 cin>>y>>x;
    if(y>=x)
    {
        if(y&1) ans=((y-1)*(y-1))+x;
        else
            ans=(y*y)-x+1;
    }
    else
    {
        if(x&1)
            ans=(x*x)-y+1;
        else
            ans=((x-1)*(x-1))+y;
    }
    cout<<ans;
 
}
 
 
 
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
   cin>>t;
    while(t--)
    {
      Dalia();
      cout<<en;
    }
    return 0;
}
