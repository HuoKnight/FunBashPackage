#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    int num;
    srand(time(0));
    num = (rand() % (100 - 1 + 1)) + 1;
    if (num % 2 == 0){
        printf("\x1b[35mHeads!\x1b[0m");
    } else {
        printf("\x1b[35mTails!\x1b[0m");
    }
}
