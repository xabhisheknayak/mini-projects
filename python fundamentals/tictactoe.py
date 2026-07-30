import tkinter as tk
from tkinter import messagebox

def check_winner():
    for combo in [(0, 1, 2), (3, 4, 5), (6, 7, 8), # rows
                  (0, 3, 6), (1, 4, 7), (2, 5, 8), # columns
                  (0, 4, 8), (2, 4, 6)]: # diagonals
        if buttons[combo[0]]['text'] == buttons[combo[1]]['text'] == buttons[combo[2]]['text'] != "":
            for idx in combo:
                buttons[idx].config(bg="lightgreen")
            messagebox.showinfo("Game Over", f"{buttons[combo[0]]['text']} wins!")
            play_again()
            return
    if all(button['text'] != "" for button in buttons):
        for button in buttons:
            button.config(bg="red")
        messagebox.showinfo("Game Over", "It's a draw!")
        play_again()

def on_button_click(i):
    if buttons[i]['text'] == "":
        buttons[i]["text"] = current_player
        check_winner()
        toggle_player()

def toggle_player():
    global current_player
    current_player = "x" if current_player == "0" else "0"
    label.config(text=f"{current_player}'s turn")

def play_again():
    answer = messagebox.askyesno("Play Again?", "Do you want to play again?")
    if answer:
        for button in buttons:
            button.config(text="", bg="SystemButtonFace")
        global current_player
        current_player = "x"
        label.config(text=f"{current_player}'s turn")
    else:
        root.destroy()

root = tk.Tk()
root.title("Tic Tac Toe")

buttons = [tk.Button(root, text="", font=('normal', 20), width=5, height=2, command=lambda i=i: on_button_click(i)) for i in range(9)]

for i, button in enumerate(buttons):
    button.grid(row=i//3, column=i%3)

current_player = "x"
label = tk.Label(root, text=f"{current_player}'s turn", font=('normal', 15))
label.grid(row=3, column=0, columnspan=3)

root.mainloop()
  
  