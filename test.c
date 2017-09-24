#include <stdio.h>
#include <time.h>
#include <windows.h>


int main(int argc, char const *argv[]) {

    //SetConsoleTitle("循环世界\n");

    /**
    srand(time(NULL));
    int Player1 = 100;
    int Player2 = 100;

    // 玩家1的攻击力
    int HurtOfPlayer1 = 0;
    // 玩家2的攻击力
    int HurtOfPlayer2 = 0;
    while (Player1 >= 0 && Player2 >= 0) {
        // 默认Player1先攻击
        HurtOfPlayer1 = rand() % 11 + 5;
        HurtOfPlayer2 = rand() % 11 + 5;
        // 玩家2受到玩家1的攻击
        Player2 -= HurtOfPlayer1;
        printf("玩家2受到玩家1的攻击，损失 %d 的生命值，还剩 %d 的生命值 \n",HurtOfPlayer1,Player2);
        // 玩家1受到玩家2的攻击
        Player1 -= HurtOfPlayer2;
        printf("玩家1受到玩家2的攻击，损失 %d 的生命值，还剩 %d 的生命值 \n",HurtOfPlayer2,Player1);
        printf("%d \n",12 );
        Sleep(3000);
    }
    if (Player1 > Player2)
        printf("玩家1赢得了比赛");
    else
        printf("玩家2赢得了比赛");
    */

    int count = 7;
    for (size_t i = 0; i < count; i++) {
        for (size_t j = 0; j < count - i; j++) {
            printf(" ");
        }
        for (size_t j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
