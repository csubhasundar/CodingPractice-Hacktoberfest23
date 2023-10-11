import pandas as pd
import random

# Generate random data for the specified range
data = {
    'Serial No.': range(1, 2001),  # Adjust the range as needed
    'GRE Score': [random.randint(280, 340) for _ in range(2000)],
    'TOEFL Score': [random.randint(80, 120) for _ in range(2000)],
    'University Rating': [random.randint(1, 5) for _ in range(2000)],
    'SOP': [round(random.uniform(2.0, 5.0), 1) for _ in range(2000)],
    'LOR': [round(random.uniform(2.0, 5.0), 1) for _ in range(2000)],
    'CGPA': [round(random.uniform(6.0, 10.0), 2) for _ in range(2000)],
    'Research': [random.randint(0, 1) for _ in range(2000)],
    'Chance of Admit': [round(random.uniform(0.5, 1.0), 2) for _ in range(2000)]
}

# Create a DataFrame
df = pd.DataFrame(data)

# Save the DataFrame to a CSV file
df.to_csv('custom_data.csv', index=False)

print("Custom CSV file 'custom_data.csv' has been created and saved.")
