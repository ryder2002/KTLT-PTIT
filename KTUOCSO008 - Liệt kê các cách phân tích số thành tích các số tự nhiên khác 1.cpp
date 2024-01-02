#include<bits/stdc++.h>
using namespace std ;
#define int long long
void factorize(int n, int i, vector<int>& factors, int& count, bool print) {
    if (n == 1 && factors.size() > 1) {
        if (print) {
            for (int i = 0; i < factors.size(); i++) {
                cout << factors[i] << " ";
            }
            cout << endl;
        }
        count++;
        return;
    }
    
    for (int x = i; x  <= n; x++) {
        if (n % x == 0) {
            factors.push_back(x);
            factorize(n / x, x, factors, count, print);
            factors.pop_back();
        }
    }
}

void implement() {
    int n;
    cin >> n;
    vector<int>factors;
    int count = 0;
    factorize(n, 2, factors, count, false);
    cout << count << endl;
    count = 0;
    factorize(n, 2, factors, count, true);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        implement();
    }
    return 0;
}