const input = document.getElementById('textbox');
const celsiusButton = document.getElementById('to-celsius');
const fahrenheitButton = document.getElementById('to-fahrenheit');
const resultLabel = document.getElementById('result');
let temp;

function updateResult() {
    if (!input) return;
    const value = Number(input.value);
    if (Number.isNaN(value)) {
        resultLabel.textContent = 'Please enter a valid number';
        return;
    }

    if (celsiusButton.checked) {
        temp = (value - 32) * 5 / 9;
        resultLabel.textContent = temp.toFixed(2) + ' °C';
    } else if (fahrenheitButton.checked) {
        temp = (value * 9 / 5) + 32;
        resultLabel.textContent = temp.toFixed(2) + ' °F';
    } else {
        resultLabel.textContent = 'Please choose a conversion type';
    }
}

