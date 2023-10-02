import sqlite3

# Create a SQLite database or connect to an existing one
conn = sqlite3.connect('crud_example.db')
cursor = conn.cursor()

# Create a table to store data
cursor.execute('''
    CREATE TABLE IF NOT EXISTS students (
        id INTEGER PRIMARY KEY,
        name TEXT NOT NULL,
        age INTEGER
    )
''')

# Function to create a new student record
def create_student(name, age):
    cursor.execute('INSERT INTO students (name, age) VALUES (?, ?)', (name, age))
    conn.commit()
    print(f"Student {name} added successfully.")

# Function to read all student records
def read_students():
    cursor.execute('SELECT * FROM students')
    students = cursor.fetchall()
    for student in students:
        print(f"ID: {student[0]}, Name: {student[1]}, Age: {student[2]}")

# Function to update a student record by ID
def update_student(id, name, age):
    cursor.execute('UPDATE students SET name=?, age=? WHERE id=?', (name, age, id))
    conn.commit()
    print(f"Student with ID {id} updated successfully.")

# Function to delete a student record by ID
def delete_student(id):
    cursor.execute('DELETE FROM students WHERE id=?', (id,))
    conn.commit()
    print(f"Student with ID {id} deleted successfully.")

# Example usage
create_student('Alice', 25)
create_student('Bob', 22)
read_students()
update_student(1, 'Alice Johnson', 26)
delete_student(2)
read_students()

# Close the database connection
conn.close()
