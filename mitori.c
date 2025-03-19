#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wipe(int x) {
    for (int i = 0; i < x; ++i) {
        printf("\n");
    }
}

void draw(int x1, int x2, char c) {
    printf("%c", c);
    printf("%2d\n", x1);

    printf("%c", c);
    printf("%2d\n", x2);
    printf("___\n");
}

int main() {
    srand(time(NULL));
    int x1 = rand() % 100;
    int x2 = rand() % 100;

    time_t time_beg = time(NULL);

    int u;
    int tries = 0;
    for (;;) {
        wipe(100);
        draw(x1, x2, '+');
        scanf("%d", &u);
        tries += 1;
        if (u == x1 + x2) {
            time_t time_end = time(NULL);
            double diff = difftime(time_end, time_beg);
            printf("=> took %f seconds and %d tries\n", diff, tries);
            return(0);
        }
    }
    return(0);
}
