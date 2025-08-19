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

    ll n;
    cin >> n;
    vi arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++)
    {
        if(abs(arr[i]-arr[i+1]) >= 2)
        {
            cout << "YES" << endl;
            cout << i+1 << " " << i+2 << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
