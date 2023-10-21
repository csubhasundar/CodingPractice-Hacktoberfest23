import random
import os
import copy

# Initialize the game board
def initialize_board():
    board = [[0] * 4 for _ in range(4)]
    add_new_tile(board)
    add_new_tile(board)
    return board

# Add a new tile (2 or 4) to a random empty cell
def add_new_tile(board):
    empty_cells = [(i, j) for i in range(4) for j in range(4) if board[i][j] == 0]
    if empty_cells:
        row, col = random.choice(empty_cells)
        board[row][col] = random.choice([2, 4])

# Display the game board
def print_board(board):
    os.system('clear')  # Clears the terminal (for Unix-based systems)
    print("2048 - The Game")
    for row in board:
        print(" | ".join(f"{val:4d}" if val > 0 else "    " for val in row))
        print("-" * 29)

# Slide tiles in a single row or column
def slide(row):
    row = [val for val in row if val != 0]  # Remove zeros
    new_row = []
    i = 0
    while i < len(row):
        if i + 1 < len(row) and row[i] == row[i + 1]:
            new_row.append(2 * row[i])  # Merge identical tiles
            i += 2
        else:
            new_row.append(row[i])
            i += 1
    while len(new_row) < len(row):
        new_row.append(0)
    return new_row

# Transpose the game board (swap rows and columns)
def transpose(board):
    return [list(row) for row in zip(*board)]

# Move the tiles in a specific direction (left, right, up, or down)
def move(board, direction):
    if direction == 'left':
        board = [slide(row) for row in board]
    elif direction == 'right':
        board = [row[::-1] for row in board]
        board = [slide(row) for row in board]
        board = [row[::-1] for row in board]
    elif direction == 'up':
        board = transpose(board)
        board = [slide(row) for row in board]
        board = transpose(board)
    elif direction == 'down':
        board = transpose(board)
        board = [row[::-1] for row in board]
        board = [slide(row) for row in board]
        board = [row[::-1] for row in board]
        board = transpose(board)
    return board

# Check if the game is over
def is_game_over(board):
    for row in board:
        if 0 in row:
            return False
    for i in range(4):
        for j in range(3):
            if board[i][j] == board[i][j + 1] or board[j][i] == board[j + 1][i]:
                return False
    return True

# Check if the player has won
def has_won(board):
    for row in board:
        if 2048 in row:
            return True
    return False

# Main game loop
def main():
    board = initialize_board()
    while True:
        print_board(board)
        if has_won(board):
            print("Congratulations! You won!")
            break
        if is_game_over(board):
            print("Game Over. Try again!")
            break
        direction = input("Enter a direction (left, right, up, down): ").lower()
        if direction in ['left', 'right', 'up', 'down']:
            previous_board = copy.deepcopy(board)
            board = move(board, direction)
            if board != previous_board:
                add_new_tile(board)
        else:
            print("Invalid direction! Use left, right, up, or down.")

if __name__ == "__main__":
    main()