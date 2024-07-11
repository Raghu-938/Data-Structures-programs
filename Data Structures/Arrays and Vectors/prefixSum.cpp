#include <iostream>
#include <vector>
using namespace std;

int main() {
    long int t, n, q, f, l;
    scanf("%ld", &t);

    while (t--) {
        scanf("%ld", &n);
        vector<long int> v(n);

        for (int i = 0; i < n; i++) {
            scanf("%ld", &v[i]);
            if (i != 0)
                v[i] += v[i - 1];
        }

        scanf("%ld", &q);
        while (q--) {
            scanf("%ld%ld", &f, &l);
            printf("%ld\n", (f > 1) ? v[l - 1] - v[f - 2] : v[l - 1]);
        }
    }

    return 0;
}
