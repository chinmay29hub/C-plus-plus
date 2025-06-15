import sqlite3

# Connect to in-memory DB
conn = sqlite3.connect(':memory:')
cursor = conn.cursor()

# Create table
cursor.execute('''
CREATE TABLE employees (
    id INTEGER PRIMARY KEY,
    name TEXT,
    salary REAL
)
''')

# Insert using tuple
cursor.execute("INSERT INTO employees (id, name, salary) VALUES (?, ?, ?)", (1, 'Chinmay', 70000))

# Fetch result
cursor.execute("SELECT * FROM employees")
row = cursor.fetchone()
print(row)  # ➝ (1, 'Chinmay', 70000.0)

conn.close()
