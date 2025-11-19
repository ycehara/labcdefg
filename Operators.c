#include <stdio.h>

int main()
{
    int q = 22, w = 33;
    int add = q + w;
    int e = q - w;
    int r = q * w;
    int t = q / w;

    int s = 1;
    int d = 0;
    int f = s && d;
    int m = 1;
    int v = d ||m;
    int k = 0;
    int x = d || k;


    printf("%d", add);
    printf("%d", e);
    printf("%d", r);
    printf("%d", t);

    printf("%d", f);
    printf("%d", v);
    printf("%d", !x);

    printf("%d\n", q = w);
    printf("%d\n", q += w);
    printf("%d\n", q -= w);
    printf("%d\n", q *= w);
    printf("%d\n", q /= w);
    printf("%d\n", q %= w);


    return 0;
}
