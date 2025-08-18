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
    int n, k; cin >> n >> k;
    int n1 = n-k+1;
    if (n1 > 0 && n1%2 == 1){
        cout << "YES" << endl;
        for (int i = 1; i <= k-1; i++){
            cout << 1 << ' ';
        }
        cout << n1 << endl;
        return;
    }
    int n2 = n-2*(k-1);
    if (n2 > 0 && n2%2 == 0){
        cout << "YES" << endl;
        for (int i = 1; i <= k-1; i++){
            cout << "2 ";
        }
        cout << n2 << endl;
        return;
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
