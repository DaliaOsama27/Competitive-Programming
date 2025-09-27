  
//
// /*
// Two Knights :
// basic concept : الحصان فى الشطرنج بيتحرك حرف L 
//فاحنا هنجيب كل الاحتمالات ونطرح منهم اماكن الهجوم 
// Now total attacks = 2*(total 2*3 matrix possible) + 2*(total 3*2 matrix possible)
// Now 2*3 = row have (k-1) options as 0, 1, 2,...k-1, and col has (k-2) options as 0, 1, 2,.. k-2
// and 3*2 = row (k-2) & col (k-1)
 
// now total = 2*(k-1)(k-2) + 2*(k-2)(k-1);
// total possible nC2..
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
#define pb emplace_back
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 2e5 + 5;
 
 
void Dalia()
{
int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1)cout<<0<<en;
        else if (i==2)cout<<6<<en;
        else cout<<(((i*i)*((i*i)-1))/2)-(4*(i-1)*(i-2))<<en;
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
      // cout<<en;
    }
    return 0;
}
