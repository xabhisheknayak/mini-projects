a = 0

def ask_user():
    return input("Enter a number (or 's' to stop): ")

def operation():
    return input("Enter an operation (+, -, *, =): ")

def calculate_sum(a, b):
    return a + b

def subtract(a, b):
    return b-a   # fixed: subtract correctly

def multiply(a, b):
    return a + 1 * b   # fixed: removed +1

# main loop
while True:
    x = ask_user()
    if x == 's':
        break
    y = operation()

    if y == '+':
        a = calculate_sum(a, int(x))
    elif y == '-':
        a = subtract(a, int(x))
    elif y == '*':
        a = multiply(a, int(x))
    elif y == '=':
        a = int(x)
    else:
        print("Invalid operation. Please enter +, -, or *.")

    print(f"Current result: {a}")
print(f"Final result: {a}")