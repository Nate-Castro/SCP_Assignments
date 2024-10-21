#Nathaniel Castro Financial calculuhtore

print("Hello, welcome to your financial calculator!")

income = int(input("What is your monthly income?: "))
rent = int(input("What is your monthly rent?: "))
utilities = int(input("What is your monthly utilities?: "))
groceries = int(input("What is your monthly groceries?: "))
transportation = int(input("What is your monthly transportation?: "))
savings = int(input("How much money will you save?: "))

#Put all of these print statements into one function that changes for all of them

def word(user, name):
    print("Your monthly", name, "is $", user)
    return


#print("Your monthly income is $", income)
word(income, "income")
#print("Your monthly rent is $", rent)
word(rent, "rent")
#print("Your monthly utilities is $", utilities)
word(utilities, "utilities")
#print("Your monthly groceries is $", groceries)
word(groceries, "groceries")
#print("Your monthly transportation is $", transportation)
word(transportation, "transportation")
#print("Every month you save $", savings)
word(savings, "savings")

def per(num):
    print(int(num / income * 100))
    return


#prent = int(rent)# / income * 100)
per(rent)
#putilities = int(utilities / income * 100)
per(utilities)
#pgroceries = int(groceries / income * 100)
per(groceries)
#ptransportation = int(transportation / income * 100)
per(transportation)
#savings = int(savings / income * 100)
per(savings)
spending = int((income - (rent + utilities + groceries + transportation + savings)))

print("Your rent is %", rent,"of your monthly income")
print("Your utilities is %", utilities, "of yout monthly income")
print("Your groceries is %", groceries, "of your monthly income")
print("Your transportation is %", transportation, "of your monthly income")
print("You have $", spending, " left to spend of your income")
print("You save %", savings, "of your income")