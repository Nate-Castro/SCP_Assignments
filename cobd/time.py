#Nathaniel Castro Time of Day 
import time




if time.day <= 12:
    print("Good morning")

if time.noon >= 12:
    print("Good afternoon")

if time.night >= 20:
    print("Good night")

else:
    print("Go to bed NOW!")