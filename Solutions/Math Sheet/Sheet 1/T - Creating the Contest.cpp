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
    int n;
    cin>>n;
 
vi a(n);
for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    vi ans;
    for (int i=1;i<n;i++) {
        if (a[i]<=a[i-1]*2) ans.push_back(1);
        else ans.push_back(0);
    }
    int cnt=0;
    int maxi=0;
    for (int i=0;i<n;i++) {
        if (ans[i]==1) {
            cnt++;
            maxi=max(maxi,cnt);
        }
        else cnt=0;
    }
    cout <<maxi+1<< endl;
 
}
 
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        Dalia();
    }
 
 
}
