//
// Created by cupid on 2017/9/11.
//

#include <stdio.h>

int main() {
    int n = 0;
    int m = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    int a[n + 1];
    for (int i = 1; i <= n; ++i) {
        a[i] = i;
    }
    for (int j = 0; j < m; ++j) {
        int p = 0, q = 0;
        scanf("%d %d", &p, &q);
        if (q > 0) {
            for (int i = 1; i <= n; ++i) {
                if (a[i] > a[p] && a[i] <= a[p] + q)
                    a[i]--;
            }
            a[p] += q;
        }
        if (q < 0) {
            for (int i = 1; i <= n; ++i) {
                if (a[i] < a[p] && a[i] >= a[p] + q)
                    a[i]++;
            }
            a[p] += q;
        }
    }

    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            if (a[i] == k)
                printf("%d ", i);
        }
    }
    return 0;
}

//void throwCoin() {
//    int times = 1;
//    int in = 0;
//    double x, y, distance;
//    srand(time(NULL));
//
//    for (;;) {
//
//        x = rand()*1.0 / RAND_MAX;
//        y = rand()*1.0 / RAND_MAX;
//
//        distance = sqrt((x - 1) * (x - 1) + (y - 1) * (y - 1));
//        printf("x=%.8f,y=%.8f,distance=%.8f", x, y, distance);
//
//        if (distance < 1)
//            in += 1;
//
//        printf("π是：%.8f\n", 4 * (in * 1.0 / times));
//        if (times > 8000) {
//            Sleep(500);
//        }
//        times++;
//    }
//
//}

//void guess() {
//    srand(time(NULL));
//    int hit = 0;
//    int change = 0;
//    for (int i = 1; i < 10000; ++i) {
//        int goat = rand() % 3;
//
//        int choose = rand() % 3;
//        if (goat == choose)
//            hit++;
//        printf("命中：%d\n", hit);
//        printf("命中的概率为：%.5f\n", hit * 1.0 / i);
//
//        if (choose !=goat)
//            change++;
//        printf("命中的概率为：%.5f\n", change * 1.0 / i);
//    }
//}