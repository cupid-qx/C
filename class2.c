//
// Created by cupid on 2017/9/13.
//

#include <stdio.h>

int main()
{
    int n,k;
    printf("输入 n,k :");
    scanf("%d,%d",&n,&k);

    int a[n];
    for (int i = 0; i < n; ++i) {
        printf("输入第%d蛋糕重量:",i);
        scanf("%d",&a[i]);
    }
    int num=0,sum=0;
    for (int j = 0; j < n; ++j) {
        sum += a[j];
        if(sum>=k)
        {
            num++;
            sum=0;
        }
    }
    if(sum>0)
        num++;
    printf("最多的人数是：%d",num);
    return 0;
}