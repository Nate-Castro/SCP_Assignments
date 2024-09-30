#Nathaniel Castro Financial calculuhtore

print("Hello, welcome to your financial calculator!")
income = int(input("What is your monthly income?: "))

rent = int(input("What is your monthly rent?: "))
utilities = int(input("What is your monthly utilities?: "))
groceries = int(input("What is your monthly groceries?: "))
transportation = int(input("What is your monthly transportation?: "))

print("Your monthly income is$", income)
print("Your monthly rent is $", rent)
print("Your monthly utilities is $", utilities)
print("Your monthly groceries is $", groceries)
print("Your monthly transportation is $", transportation)

prent = int(rent / income * 100)
putilities = int(utilities / income * 100)
pgroceries = int(groceries / income * 100)
ptransportation = int(transportation / income * 100)
savings = int((income))
spending = int(((prent + putilities + pgroceries + ptransportation) / income * 100))

print("Your rent is %", prent,"of your monthly income")
print("Your utilities is %", putilities, "of yout monthly income")
print("Your groceries is %", pgroceries, "of your monthly income")
print("Your transportation is %", ptransportation, "of your monthly income")
print("You are spending %", spending, "of your income")
print("You save %", savings, "of your income")