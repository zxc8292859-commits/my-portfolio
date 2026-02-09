tasks = []

def show_tasks():
    if not tasks:
        print("No tasks yet.")
    for i, task in enumerate(tasks,1):
        print(f"{i}. {task}")

while True:
    print("\nCommands: add, list, delete, exit")
    cmd = input("Enter command: ").strip().lower()
    if cmd == "add":
        task = input("Task: ")
        tasks.append(task)
        print("Added!")
    elif cmd == "list":
        show_tasks()
    elif cmd == "delete":
        show_tasks()
        num = int(input("Task number to delete: "))
        if 1 <= num <= len(tasks):
            removed = tasks.pop(num-1)
            print(f"Removed: {removed}")
        else:
            print("Invalid number")
    elif cmd == "exit":
        break
    else:
        print("Unknown command")
