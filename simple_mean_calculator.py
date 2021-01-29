lst = []
num = int(input("Input the number of items: "))
for n in range(num):
    # Arguments for Ordinal Numbers in a Set
    ord = str(n+1)
    if n == 0:
        ord += "st"
    elif n == 1:
        ord += "nd"
    elif n == 2:
        ord += "rd"
    else:
        ord += "th"
    numbers = int(input("Enter the "+ ord +" value: "))
    lst.append(numbers)
print("The sum of the values is: ", sum(lst))
print("The mean is equal to: ", float(sum(lst) / num))
