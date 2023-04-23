while True:
    height = int(input("Please, Enter the height: "))
    if height > 0 and height < 9:
        break

for row in range(height):
    for space in range(height):
        if (row + space < height - 1):
            print(" ", end="")
        else:
            print("#", end="")
    print()
