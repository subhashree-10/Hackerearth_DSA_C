//Takeoff
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, p, q, r, res = 0;
        scanf("%d %d %d %d", &n, &p, &q, &r);
        int arr[n + 1];
        for (int i = 0; i <= n; ++i)
            arr[i] = 0;
        
        for (int i = p; i <= n; i += p)
            arr[i]++;
        
        for (int i = q; i <= n; i += q)
            arr[i]++;
        
        for (int i = r; i <= n; i += r)
            arr[i]++;
        
        for (int i = 0; i <= n; ++i)
            if (arr[i] == 1)
                res++;

        printf("%d\n", res);
    }
    return 0;
}

