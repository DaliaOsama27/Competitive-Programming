//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
ll mod=1e9+7;

void Dalia()
{
    int n;cin>>n;
    vi a(32,0);
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        int h=31-__builtin_clz(x);
        a[h]++;
    }
    ll res=0;
    for (int i = 0; i < 32; ++i) {
        ll k=a[i];
        res+=k*(k-1)/2;
    }
    cout<<res<<endl;

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
