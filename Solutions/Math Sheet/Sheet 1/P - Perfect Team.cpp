//111111111111111111111111111
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
    ll c, m, x;
    cin >> c >> m >> x;
    if(min(c, m) <= x){
        cout << min(c, m) << endl;
    }
    else{
        if(c > x && m > x){
            c -= x; m -= x;
            cout << x + (c+m)/3 << endl;
        }
    }
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
//22222222222222222222222222222222222222
//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
ll mod=1e9+7;
bool isPossible(ll c, ll m, ll x){
    if(c == m){
        if((c+m)/3 - x >= 0) return true;
        else return false;
    }
    if(min(c, m) - x >= 0 && max(c, m) - 2*x >= 0) return true;
    else return false;
}
void Dalia()
{
    ll c, m, x;
    cin >> c >> m >> x;
    if(min(c, m) <= x){
        cout << min(c, m) << endl;
    }
    else{
        c -= x; m -= x;
        ll l = 1, r = 1e18, mid;
        // TTTTTTFFFF -->> find the last occurrence of T;
        while(r-l > 1){
            mid = (l+r)/2;
            if(isPossible(c, m, mid)) l = mid;
            else r = mid - 1;
        }
        if(isPossible(c, m, r)) cout << x+r << endl;
        else cout << x+l << endl;
    }
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
///33333333333333333333333333333
//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
ll mod=1e9+7;
bool isPossible(ll c, ll m, ll x, ll k) {
    return c >= k && m >= k && (c+m+x) >= 3*k;
}
 
void Dalia()
{
    ll c, m, x;
    cin >> c >> m >> x;
    if(min(c, m) <= x){
        cout << min(c, m) << endl;
    }
    else{
        ll n = (c+m+x)/3;
        ll l = 1, r = n+1, mid;
        // TTTTTTFFFF -->> find the last occurrence of T;
        while(r-l > 1){
            mid = (l+r)/2;
            if(isPossible(c, m, x, mid)) l = mid;
            else r = mid - 1;
        }
        if(isPossible(c, m, x, r)) cout << r << endl;
        else cout << l << endl;
    }
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
///// correct solution 
//وَمَن رامَ العُلا مِن غَيرِ كَدٍ
//أضاعَ العُمرَ في طَلَبِ المُحالِ
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
ll mod=1e9+7;
bool isPossible(ll c, ll m, ll x, ll k) {
    return c >= k && m >= k && (c+m+x) >= 3*k;
}

void Dalia()
{
    ll c, m, x;
    cin >> c >> m >> x;
    ll n = (c+m+x)/3;
    ll l = 0, r = n+1, mid;
    // TTTTTTFFFF -->> find the last occurrence of T;
    while(r-l > 1){
        mid = (l+r)/2;
        if(isPossible(c, m, x, mid)) l = mid;
        else r = mid - 1;
    }
    if(isPossible(c, m, x, r)) cout << r << endl;
    else cout << l << endl;
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
















