import pandas as pd

def combine_two_tables(person: pd.DataFrame, address: pd.DataFrame) -> pd.DataFrame:
    merged  = pd.merge(person,address, on ='personId' , how='left' )

    selected = merged[['firstName' ,'lastName' ,  'city' , 'state']  ]

    return (selected)