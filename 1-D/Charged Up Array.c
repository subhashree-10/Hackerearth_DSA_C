//Charged Up Array
#include <stdio.h>
#include <stdint.h>

const int MX = 1e5;
const int MOD = 1e9 + 7;
typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll n;
        scanf("%lld", &n);
        ll arr[n];
        for (int i = 0; i < n; ++i)
            scanf("%lld", &arr[i]);

        if (n >= 63)
            printf("0\n");
        else {
            ll powerset = ((1LL << n) >> 1), res = 0;
            for (int i = 0; i < n; ++i)
                if (arr[i] >= powerset)
                    res = ((res % MOD) + (arr[i] % MOD)) % MOD;
            printf("%lld\n", res);
        }
    }
    return 0;
}
