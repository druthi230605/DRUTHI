while True:
    a = int(input("ENTER THE VALUE OF 'a': "))
    b = int(input("ENTER THE VALUE OF 'b': "))
    c = int(input("ENTER THE VALUE OF 'c': "))
    
    if a == 0:
        print("Value of 'a' should not be zero for a quadratic equation.")
        continue  # Skip the rest of the loop and ask for inputs again
    
    D = (b * b) - (4 * a * c)
    
    if D > 0:
        print("ROOTS ARE REAL AND DISTINCT")
        root1 = (-b + D**0.5) / (2 * a)
        root2 = (-b - D**0.5) / (2 * a)
        print("root1 =", root1)
        print("root2 =", root2)
    elif D == 0:
        print("ROOTS ARE REAL AND EQUAL")
        root1 = -b / (2 * a)
        print("root1 = root2 =", root1)
    else:
        print("ROOTS ARE IMAGINARY")
        real_part = -b / (2 * a)
        imaginary_part = (-D)**0.5 / (2 * a)
        print("root1 =", real_part, "+", imaginary_part, "i")
        print("root2 =", real_part, "-", imaginary_part, "i")
    
    continue_choice = input("Do you want to enter another set of values? (yes/no): ").strip().lower()
    if continue_choice != 'yes':
        break

   



