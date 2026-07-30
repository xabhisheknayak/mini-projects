# rent calculator
rent = input("Enter the monthly rent: ")
months = input("Enter the number of months: ")
people = input("Enter the number of people sharing the rent: ")
try:
    rent = float(rent)
    months = int(months)
    people = int(people)

    if months <= 0 or people <= 0:
        print("Months and people must be greater than zero.")
    else:
        total_rent = rent * months
        rent_per_person = total_rent / people
        print(f"Each person should pay: rs.{rent_per_person:.2f}")
except ValueError:
    print("Please enter valid numbers for rent, months, and people.")
