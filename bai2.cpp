#include <iostream>
using namespace std;

int main() {
    int n=10;
    long sum = 0, ans = 0;
    int pointer = 1;
    pair<int,int> Index;
    for(int i = 1; i <= n; i++) {
        int v;
        cin >> v;    
        sum += v;
        if (ans < sum ||(ans == sum /* && i-tracki > Index.se - Index.fi) */)) {
            ans = sum;
            Index.first = pointer;
            Index.second = i;
        }
        if (sum < 0) {
            sum = 0;
            pointer = i + 1;
        }    
    }
    if (ans <= 0) cout << "Loi";
    else cout << Index.first << " " << Index.second << ' ' << ans;
}
