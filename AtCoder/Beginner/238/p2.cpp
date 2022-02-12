#include<bits/stdc++.h>
using namespace std;
int n, a, at;
bool angles[360];
int get_larger_angle() {
    int tmp = 0, mx = INT_MIN;
    for(int i = 1; i <= 360; i++) {
        tmp++;
        if(angles[i % 360] == true) {
            mx = max(mx, tmp);
            tmp = 0;
        }
    }
    return mx;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cin >> n;
    at = 0;
    angles[0] = true;
    for(int i = 0; i < n; i++) {
        cin >> a;
        at = (360 + at - a) % 360;
        angles[at] = true;
    }
    cout << get_larger_angle() << "\n";
    return 0;
}