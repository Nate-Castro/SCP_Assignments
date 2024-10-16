#Nathaniel Castro Old enough

age = int(input("How old are you?: "))
vote = 21
drive = 16
permit = 15
school = 5


if age >= vote:
    print("You are old enough to vote!")
else:
    print("You cannot vote yet :(")

if age >= drive:
    print("You are old enough to drive!")
else:
    print("You cannot drive yet :(")

if age == permit:
    print("You can get your permit!")

elif age<permit:
    print("No driving for you")

if age >= school:
    print("Yay, you went to school!")

else:
    print("You shouldnt be here")