# Credits to Avilash Nethala, Apr 26, 2017
# You can check him at:
# https://medium.com/programminginpython-com/python-program-to-calculate-the-sum-of-elements-in-a-list-ed2b80db8268

lst = []
num = int(input("Input the number of items: -> "))
for n in range(num):
    numbers = int(input("Enter the value: -> "))
    lst.append(numbers)
print("The sum of the values is :", sum(lst))
print("The mean is equal to: ", float(sum(lst) / num))
