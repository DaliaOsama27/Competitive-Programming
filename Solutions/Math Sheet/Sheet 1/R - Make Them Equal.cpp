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
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    if (a.size()==1) {
        cout <<0<< endl;
    }
    else if (a.size() == 2) {
        int diff = a[1]-a[0];
        if (diff%2==0) cout << diff/2 <<endl;
        else cout<<diff<<endl;
    }
    else if (a.size()==3) {
        if (a[1] - a[0]==a[2]-a[1])cout<<a[1]-a[0]<<endl;
        else cout<<-1<<endl;
    }
    else {
        cout<<-1<<endl;
}}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        Dalia();
    }


}
