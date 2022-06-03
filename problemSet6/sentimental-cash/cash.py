# TODO
from cs50 import get_float

def main():
    cents = get_cents()
    cents = cents * 100

    quarters = calculate_quarters(cents)
    cents = cents - quarters * 25

    dimes = calculate_dimes(cents)
    cents = cents - dimes * 10

    nickels = calculate_nickels(cents)
    cents = cents - nickels * 5

    pennies = calculate_pennies(cents)
    cents = cents - pennies * 1

    coins = quarters + dimes + nickels + pennies

    print(f"{coins}")

def get_cents():
    while True:
        cents = get_float("Enter cents owed: ")
        if cents > 0:
            break
    return cents

def calculate_quarters(cents):
    quarters = cents // 25
    return quarters

def calculate_dimes(cents):
    dimes = cents // 10
    return dimes

def calculate_nickels(cents):
    nickels = cents // 5
    return nickels

def calculate_pennies(cents):
    pennies = cents / 1
    return pennies

main()