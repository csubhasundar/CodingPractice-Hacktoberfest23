# Import the necessary modules
import os

# Initialize an empty list to store tasks
tasks = []

# Define functions for each feature
def add_task(task):
    tasks.append(task)

def view_tasks():
    if tasks:
        for index, task in enumerate(tasks, 1):
            print(f"{index}. {task}")
    else:
        print("No tasks in the to-do list.")

def mark_task_complete(index):
    if 1 <= index <= len(tasks):
        print(f"Marking task '{tasks[index - 1]}' as complete.")
        del tasks[index - 1]
    else:
        print("Invalid task index.")

def remove_task(index):
    if 1 <= index <= len(tasks):
        print(f"Removing task '{tasks[index - 1]}'.")
        del tasks[index - 1]
    else:
        print("Invalid task index.")

def save_tasks(filename):
    with open(filename, 'w') as file:
        for task in tasks:
            file.write(task + '\n')

def load_tasks(filename):
    if os.path.exists(filename):
        with open(filename, 'r') as file:
            tasks.extend(file.read().splitlines())

# Main program loop
if __name__ == "__main__":
    filename = "todo.txt"  # Change the filename to store tasks persistently

    load_tasks(filename)

    while True:
        print("\nTo-Do List Menu:")
        print("1. Add Task")
        print("2. View Tasks")
        print("3. Mark Task as Complete")
        print("4. Remove Task")
        print("5. Save and Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            task = input("Enter a new task: ")
            add_task(task)
        elif choice == "2":
            view_tasks()
        elif choice == "3":
            index = int(input("Enter the index of the task to mark as complete: "))
            mark_task_complete(index)
        elif choice == "4":
            index = int(input("Enter the index of the task to remove: "))
            remove_task(index)
        elif choice == "5":
            save_tasks(filename)
            print("Tasks saved. Goodbye!")
            break
