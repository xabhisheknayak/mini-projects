// 1. Write a program to implement SJF scheduling algorithm
#include <stdio.h>

struct Process {
    int pid;
    int burst_time;
    int waiting_time;
    int turnaround_time;
};

int main() {
    int n, i, j;
    struct Process p[20];
    struct Process temp;
    float avg_wt = 0, avg_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    // Input burst time
    for (i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter burst time for Process P%d: ", i + 1);
        scanf("%d", &p[i].burst_time);
    }

    // Sort processes according to burst time
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (p[i].burst_time > p[j].burst_time) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    // Calculate waiting time
    p[0].waiting_time = 0;

    for (i = 1; i < n; i++) {
        p[i].waiting_time =
            p[i - 1].waiting_time + p[i - 1].burst_time;
    }

    // Calculate turnaround time
    for (i = 0; i < n; i++) {
        p[i].turnaround_time =
            p[i].waiting_time + p[i].burst_time;

        avg_wt += p[i].waiting_time;
        avg_tat += p[i].turnaround_time;
    }

    // Display results
    printf("\nSJF Scheduling:\n");
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");

    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\n",
               p[i].pid,
               p[i].burst_time,
               p[i].waiting_time,
               p[i].turnaround_time);
    }

    avg_wt /= n;
    avg_tat /= n;

    printf("\nAverage Waiting Time = %.2f", avg_wt);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat);

    return 0;
}