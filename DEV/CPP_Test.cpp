#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> tails;
    for (int num : a) {
        auto it = lower_bound(tails.begin(), tails.end(), num);
        if (it == tails.begin()) {
            tails.insert(tails.begin(), num);
        } else {
            *(it - 1) = num;
        }
    }
    cout << tails.size() << endl;
    return 0;
}