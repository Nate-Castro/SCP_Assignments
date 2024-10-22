#Nathaniel Castro Time of Day 


time = int(input('What time is it for you?: '))



if time <= 11:
    print("Good morning")
    
if time >= 12 and time <= 18:
    print("Good afternoon")

if time >= 20:
    print("Good night")

#else:
#    print("Go to bed NOW!")