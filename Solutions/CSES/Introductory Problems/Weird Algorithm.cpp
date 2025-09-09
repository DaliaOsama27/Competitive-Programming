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
    cin >>n;
    cout<<n<<" ";
    while(n!=1)
    {
        if (n&1)
        {
            n=(n*3)+1;
            cout<<n<<" ";
        } else
        {
            n=n/2;
            cout<<n<<" ";
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
