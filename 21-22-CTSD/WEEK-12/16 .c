#include <stdio.h>

int main() {
    long long int c, i, g, m, n, x, la, lb;
    long long int a[100010], b[100010];
    scanf("%lld", &g);
    while (g--) {
        la = lb = 0;
        scanf("%lld%lld%lld", &n, &m, &x);
        scanf("%lld", &a[1]);
        for (i = 1; ++i <= n;) {
            scanf("%lld", &a[i]);
            a[i] += a[i - 1];
        }
        scanf("%lld", &b[1]);
        for (i = 1; ++i <= m;) {
            scanf("%lld", &b[i]);
            b[i] += b[i - 1];
        }
        la = 1;
        while (la <= n && a[la] <= x)
            la++;
        la--;
        c = la;
        lb = 1;
        while (lb <= m && b[lb] <= x) {
            if (la && b[lb] + a[la] > x)
                la--;
            else {
                if (c < la + lb)
                    c = la + lb;
                lb++;
            }
        }
        printf("%lld\n", c);
    }
    return 0;
}