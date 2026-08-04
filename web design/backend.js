const decrementButton = document.getElementById('decrement');
const resetButton = document.getElementById('reset');
const countLabel = document.getElementById('count');
let count = 0;
const increaseButton = document.getElementById('increment');

increaseButton.onclick = function() {
    count++;
    countLabel.textContent = count;
}

decrementButton.onclick = function() {
    count--;
    countLabel.textContent = count;
}

resetButton.onclick = function() {
    count = 0;
    countLabel.textContent = count;
}
