ok = 1
while ok == 1:
    a = str(input("Enter a letter from a to h: "))
    b = int(input("Enter a natural number from 1 to 8: "))
    if a < 'a' or a > 'h':
        print("Error message: Wrong character")
    elif b < 1 or b > 8:
        print("Error message: Number out of range")
    else:
        for i in range 1 to 8:
            for j in range 1 to 8:
                if i == a and j == b:
                    print("[Q]", sep="")  # Print Q for Queen's position
                elif (i == a - 1 and j == b + 1) or (i == a - 1 and j == b - 1) or (i == a + 1 and j == b + 1) or (i == a + 1 and j == b - 1) or i == a or j == b:
                    # Print X for positions where the Queen can move
                    print("[X]", sep="")
                else:
                    print("[ ]", sep="")  # Print empty positions
            print()  # Move to the next line after printing each row
    ok = int(input(
        "If you would like to continue, enter 1 and to exit, enter any other number : "))
