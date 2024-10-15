#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long q;
    cin >> q;
    vector<long long> k(q);

    for (long long i = 0; i < q; i++) {
        cin >> k[i];
    }

    for (long long i = 0; i < q; i++) {
        auto it = lower_bound(v.begin(), v.end(), k[i]);

        if (it != v.end() && *it == k[i]) {
            cout << "Yes " << (it - v.begin()) + 1 << endl;
        } else {
            cout << "No " << (it - v.begin()) + 1 << endl;
        
    }
}
    return 0;
}
