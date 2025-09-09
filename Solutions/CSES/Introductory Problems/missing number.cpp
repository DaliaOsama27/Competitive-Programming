////////////////////////////////////////code 1
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
#define pb(x) push_back(x)
ll mod=1e9+7;
void Dalia()
{
 ll n;
    cin>>n;
    vi v(n-1);
    for(int i=0;i<n-1;i++)
    {
      cin>>v[i];
    }
    sort(all(v));
    if(n==2)
    {
        if(v[0]==1)
        {
            cout<<"2";
            return;
        }
        else
        {
            cout<<"1";
            return;
        }
    }
    for(int i=1;i<n-1;i++)
    {
        if(v[0]!=1)
        {
            cout<<1;
            return;
        }
        if(v[n-2]!=n)
        {
            cout<<n;
            return;
        }
       if(v[i]-v[i-1]==1) continue;
        else
        {
            cout<<v[i]-1;
            break;
        }
    }
 
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
 //cin>>t;
    while(t--)
    {
        Dalia();
    }
    return 0;
}
/////////////////////////////////////////////////////////////////code 2
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
#define pb(x) push_back(x)
ll mod=1e9+7;
void Dalia()
{
 ll n;
    cin>>n;
    vi v(n-1);
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
      cin>>v[i];
        sum+=v[i];
    }
    int ss=(n*(n+1))/2;
    cout<<ss-sum;
 
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
 //cin>>t;
    while(t--)
    {
        Dalia();
    }
    return 0;
}

