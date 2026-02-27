#include <stdio.h>

int main() {
    int n, temp;
    float avgwt = 0, avgta = 0;

    printf("Enter no of process: ");
    // Removed spaces inside quotes for cleaner input handling
    scanf("%d", &n);

    int pid[n], ar[n], bt[n], ct[n], ta[n], wt[n];

    for (int i = 0; i < n; i++) {
        printf("Enter process %d arrival time: ", (i + 1));
        scanf("%d", &ar[i]);
        printf("Enter process %d burst time: ", (i + 1));
        scanf("%d", &bt[i]);
        pid[i] = i + 1;
    }

    // Sorting logic
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - (i + 1); j++) {
            if (ar[j] > ar[j + 1]) {
                // Fix: Removed the extra 'l' after the '=' signs
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;

                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;

                temp = pid[j];
                pid[j] = pid[j + 1];
                pid[j + 1] = temp;
            }
        }
    }

    // Calculation logic
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            ct[i] = ar[i] + bt[i];
        } else {
            if (ar[i] > ct[i - 1]) {
                ct[i] = ar[i] + bt[i];
            } else {
                ct[i] = ct[i - 1] + bt[i];
            }
        }
        ta[i] = ct[i] - ar[i];
        wt[i] = ta[i] - bt[i];
        avgwt += wt[i];
        avgta += ta[i];
    }

    // Output Results
    printf("\npid\tarrival\tburst\tcomplete\tturn\twaiting\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t\t%d\t%d\n", pid[i], ar[i], bt[i], ct[i], ta[i], wt[i]);
    }

    printf("\nAverage waiting time: %.2f", (avgwt / n));
    printf("\nAverage turnaround time: %.2f\n", (avgta / n));

    return 0;
}