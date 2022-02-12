#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    scanf("%d", &n);
    if(n == 2 or n == 3 or n == 4)  printf("No\n");
    else    printf("Yes\n");
    return 0;
}