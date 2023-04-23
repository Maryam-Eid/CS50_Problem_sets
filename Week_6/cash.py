from cs50 import get_float

coins = 0

while True:
    cents = get_float("Change owed: ")
    if cents > 0:
        break

cents = round(cents * 100)

# quarters
while cents >= 25:
    cents -= 25
    coins += 1

# dimes
while cents >= 10:
    cents -= 10
    coins += 1

# nickles
while cents >= 5:
    cents -= 5
    coins += 1

# pennies
while cents >= 1:
    cents -= 1
    coins += 1

print(coins)

