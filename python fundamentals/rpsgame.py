# Rock Paper Scissors Game
import random

a=input("Enter your name: ")
b=input("Enter your choice (rock, paper, scissors): ")

choices = ["rock", "paper", "scissors"]
c = random.choice(choices)
print(f"{a} chose:  {b}")
print(f"Computer chose: {c}")

if b == c:
    print("both chose the same thing! It's a tie!")
elif (b == "rock" and c == "scissors"):
    print(f"{a} wins! rock smashes scissors")
elif (b == "paper" and c == "rock"):
    print(f"{a} wins! paper covers rock")
elif (b == "scissors" and c == "paper"):
    print(f"{a} losses! computer wins! scissors cuts paper")
elif (c == "rock" and b == "scissors"):
    print(f"{a} losses! computer wins! rock smashes scissors")
elif (c == "paper" and b == "rock"):
    print(f"{a} losses! computer wins! paper covers rock")
elif (c == "scissors" and b == "paper"):
    print(f"{a} losses! computer wins! scissors cut paper")

print("Thanks for playing! run code again to play another round.")
