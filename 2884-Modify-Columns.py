import pandas as pd

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees['salary'] *= 2
    return employees
'''
    # Sample DataFrame
    df = pd.DataFrame({
        'Name': ['Alice', 'Bob', 'Charlie'],
        'Age': [25, 30, 35],
        'Department': ['HR', 'IT', 'Sales']
    })

    # Rename a column
    df.rename(columns={'Name': 'Full Name'}, inplace=True)

    # Add a new column
    df['Country'] = 'USA'

    # Modify an existing column based on a condition
    df['Age'] = df['Age'].apply(lambda x: x + 1)

    # Remove a column
    df.drop(columns=['Department'], inplace=True)

    # Reorder columns
    df = df[['Country', 'Full Name', 'Age']]

    # Change column data type
    df['Age'] = df['Age'].astype(float)

    print(df)
'''
