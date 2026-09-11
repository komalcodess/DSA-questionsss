#include <stdio.h>

int main() {
    int n, tq;
    int bur[10], rem[10];
    int time = 0, done = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter burst times:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &bur[i]);
        rem[i] = bur[i];
    }

    printf("Enter time quantum: ");
    scanf("%d", &tq);

    while (done < n) {
        for (int i = 0; i < n; i++) {

            if (rem[i] > 0) {

                if (rem[i] <= tq) {
                    time += rem[i];
                    rem[i] = 0;
                    done++;

                    printf("P%d finished at time %d\n", i + 1, time);
                }
                else {
                    rem[i] -= tq;
                    time += tq;

                    printf("P%d executed, time = %d\n", i + 1, time);
                }
            }
        }
    }

    return 0;
}