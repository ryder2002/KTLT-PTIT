#include<iostream>
using namespace std;
void tong(long long l, long long r);
int main() {
int t;
long long l, r;
cin >> t;
while (t--) {
cin >> l >> r;
tong(l,r);
}
return 0;
}
void tong(long long l, long long r){
long long sum = 0, ssh = 0;
if (l % 2 != 0 && r % 2 != 0) {
ssh = ((r - l) / 2) + 1;
sum = ((r + l) * ssh) / 2;
}
if (l % 2 == 0 && r % 2 != 0) {
ssh = ((r - l-1) / 2) + 1;
sum = ((r + l+1) * ssh) / 2;
}
if (l % 2 != 0 && r % 2 == 0) {
ssh = ((r-1 - l) / 2) + 1;
sum = ((r-1 + l) * ssh) / 2;
}
if (l % 2 == 0 && r % 2 == 0) {
ssh = ((r - l-2) / 2) + 1;
sum = ((r + l) * ssh) / 2;
}
    cout << sum << endl;
}