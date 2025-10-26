ok = 1
while ok == 1:
    a = str(input("Enter a letter from a to h: "))
    n = int(input("Enter a natural number from 1 to 8: "))
    num_display = 8
    if a < 'a' or a > 'h':
        print("Error message: Wrong character")
    elif n < 1 or n > 8:
        print("Error message: Number out of range")
    else:
        a_num = ord(a) - ord('a') + 1  # Convert letter to number
        for y in range(9, 1, -1):
            print(num_display, end="")  # Print row position number
            print(" ", end="")
            num_display = num_display - 1
            for x in range(1, 9):
                if x == a_num and y == n + 1:
                    print("[Q]", end="")  # Print Q for Queen's position
                elif x == a_num or y == n + 1 or abs(x - a_num) == abs(y - (n + 1)):
                    print("[X]", end="") # Print X for positions where the Queen can move
                else:
                    print("[ ]", end="")  # Print empty positions
            print()  # Move to the next line after printing each row
        print("   a  b  c  d  e  f  g  h  ")  # Print column position letters
    print()  # Print an empty line after the board
    ok = int(input("If you would like to continue, enter 1 and to exit, enter any other number : "))
