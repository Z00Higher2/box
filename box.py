#this program prints out the width and height of the box by the user input

width = int(input("Enter the width: "))
height = int(input("Enter the height: "))

for row in range(0 , height):
        for col in range(0, width-1):
            print("*", end=' ')

        print("*")   
    