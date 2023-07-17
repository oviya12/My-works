a = int(input("Enter first number : "))
b = int(input("Enter second number : "))

print("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division ")
print("\nChoose operation: ", end='')
choice = int(input())

if choice == 1:
    print("Answer : ", a + b)
elif choice == 2:
    print("Answer : ", a - b)
elif choice == 3:
    print("Answer : ", a * b)
elif choice == 4:
    print("Answer : ", a / b)
else:
    print("Wrong operation")