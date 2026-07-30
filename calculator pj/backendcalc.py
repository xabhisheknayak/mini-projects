from flask import Flask, render_template, request
import os

app = Flask(__name__, template_folder=".")

@app.route("/")
def home():
    return render_template("calculator.html", result="")

@app.route("/calculate", methods=["POST"])
def calculate():
    try:
        num1 = float(request.form["num1"])
        num2 = float(request.form["num2"])
        operation = request.form["operation"]

        if operation == "add":
            result = num1 + num2
        elif operation == "subtract":
            result = num1 - num2
        elif operation == "multiply":
            result = num1 * num2
        elif operation == "divide":
            if num2 == 0:
                result = "Error: Cannot divide by zero"
            else:
                result = round(num1 / num2, 5)
        else:
            result = "Invalid operation"
    except ValueError:
        result = "Error: Please enter valid numbers"

    return render_template("calculator.html", result=f"Result: {result}")

if __name__ == "__main__":
    app.run(debug=True)
