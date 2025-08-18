//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
ll fastpower(ll n,ll k)
{
    ll ans = 1;
    while (k>0) {
        if (k%2==1)ans=(ans*n)%mod;
        n=(n*n)%mod;
        k/=2;
    }
    return ans;
}

void Dalia()
{
    ll n,k;
    cin>>n>>k;
    cout<<fastpower(n,k)<<endl;



}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        Dalia();
    }

}
