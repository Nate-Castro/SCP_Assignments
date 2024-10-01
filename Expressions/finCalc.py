#Nathaniel Castro Financial calculuhtore

print("Hello, welcome to your financial calculator!")

income = int(input("What is your monthly income?: "))
rent = int(input("What is your monthly rent?: "))
utilities = int(input("What is your monthly utilities?: "))
groceries = int(input("What is your monthly groceries?: "))
transportation = int(input("What is your monthly transportation?: "))
savings = int(input("How much money will you save?: "))

print("Your monthly income is$", income)
print("Your monthly rent is $", rent)
print("Your monthly utilities is $", utilities)
print("Your monthly groceries is $", groceries)
print("Your monthly transportation is $", transportation)
print("Every month you save $", savings)

prent = int(rent / income * 100)
putilities = int(utilities / income * 100)
pgroceries = int(groceries / income * 100)
ptransportation = int(transportation / income * 100)
savings = int(savings / income * 100)
spending = int((income - (prent + putilities + pgroceries + ptransportation + savings)))

print("Your rent is %", prent,"of your monthly income")
print("Your utilities is %", putilities, "of yout monthly income")
print("Your groceries is %", pgroceries, "of your monthly income")
print("Your transportation is %", ptransportation, "of your monthly income")
print("You have $", spending, " left to spend of your income")
print("You save %", savings, "of your income")