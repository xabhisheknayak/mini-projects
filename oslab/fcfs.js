let n = 10;

let burstTime = [5, 3, 8, 10, 11, 12, 15, 19, 3, 9, 1];
let waitingTime = [];
let turnaroundTime = [];


waitingTime[0] = 0;


for (let i = 1; i < n; i++) {
    waitingTime[i] = waitingTime[i - 1] + burstTime[i - 1];
}


for (let i = 0; i < n; i++) {
    turnaroundTime[i] = waitingTime[i] + burstTime[i];
}


console.log("Process\tBurst Time\tWaiting Time\tTurnaround Time");

for (let i = 0; i < n; i++) {
    console.log(
        `P${i + 1}\t${burstTime[i]}\t\t${waitingTime[i]}\t\t${turnaroundTime[i]}`
    );
}


let totalWaiting = 0;
let totalTurnaround = 0;

for (let i = 0; i < n; i++) {
    totalWaiting += waitingTime[i];
    totalTurnaround += turnaroundTime[i];
}

console.log("Average Waiting Time:", totalWaiting / n);
console.log("Average Turnaround Time:", totalTurnaround / n);