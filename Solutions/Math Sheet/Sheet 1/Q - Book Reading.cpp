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
    ll n,m;
    cin >> n >> m;
    vl arr(11);
    for(ll i = 1;i <= 10;i++){
        arr[i] = (m * i) % 10;
    }
    for(int i = 1;i <= 10;i++)arr[i] += arr[i - 1];
    ll d = n / m;
    cout << arr[10] * (d/ 10) + arr[d % 10] <<endl;
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
