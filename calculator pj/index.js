// DOM Elements
const inputLabel = document.getElementById('input');
const numberButtons = document.querySelectorAll('#numbers .buttons');
const addButton = document.getElementById('add');
const subtractButton = document.getElementById('subtract');
const multiplyButton = document.getElementById('multiply');
const divideButton = document.getElementById('divide');
const equalsButton = document.getElementById('equals');
const clearButton = document.getElementById('clear');
const ansButton = document.getElementById('ans');

// State Variables
let currentInput = '0';
let previousValue = null;
let operator = null;
let ans = null;

// Update display
function updateDisplay() {
    inputLabel.textContent = currentInput;
}

// Handle number button clicks
numberButtons.forEach(button => {
    button.addEventListener('click', () => {
        const digit = button.textContent;
        currentInput = (currentInput === '0' || currentInput === 'Error') ? digit : currentInput + digit;
        updateDisplay();
    });
});

// Operator setup
function setOperator(op) {
    if (currentInput === 'Error') return;

    if (operator && previousValue !== null) {
        compute();
        previousValue = parseFloat(currentInput);
    } else {
        previousValue = parseFloat(currentInput);
    }

    operator = op;
    currentInput = '0';
    updateDisplay();
}

// Operator buttons
[addButton, subtractButton, multiplyButton, divideButton].forEach((btn, i) => {
    const ops = ['+', '-', '*', '/'];
    btn.addEventListener('click', () => setOperator(ops[i]));
});

// Compute result
function compute() {
    if (!operator || previousValue === null) return;

    const curr = parseFloat(currentInput);
    let result;

    switch (operator) {
        case '+': result = previousValue + curr; break;
        case '-': result = previousValue - curr; break;
        case '*': result = previousValue * curr; break;
        case '/':
            if (curr === 0) {
                currentInput = 'Error';
                resetState();
                return updateDisplay();
            }
            result = previousValue / curr;
            break;
    }

    if (Number.isFinite(result)) {
        currentInput = Number.isInteger(result)
            ? String(result)
            : String(parseFloat(result.toFixed(10))).replace(/\.?0+$/, '');
        ans = currentInput;
    } else {
        currentInput = 'Error';
    }

    updateDisplay();
}

// Reset state
function resetState() {
    previousValue = null;
    operator = null;
}

// Equals button
equalsButton.addEventListener('click', () => {
    if (operator && previousValue !== null) {
        compute();
        resetState();
    }
});

// Clear button
clearButton.addEventListener('click', () => {
    currentInput = '0';
    resetState();
    updateDisplay();
});

// Ans button
ansButton.addEventListener('click', () => {
    if (ans !== null) {
        currentInput = (currentInput === '0' || currentInput === 'Error') ? ans : currentInput + ans;
        updateDisplay();
    }
});
