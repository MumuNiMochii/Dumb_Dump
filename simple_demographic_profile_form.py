print("\nSimple Demographic Profile Form\n\nInput:")

x = str(input("\tEnter your name: "))
if x == '':
    print("\n\tError: Empty input.\n")
    x = 'None - \'no valid input found\''
elif not x == str and x == int or x == float:
    print("\n\tError: Invalid input.\n")
    x = str(x)+" - \'it is not a valid name\'"
else:
    x = x

y = input("\tEnter your age: ")
msg1 = [" year", " years", " year old", " years old", " year of age", " years of age"]
if y == int:
    y = y
elif y == str and y + msg1[0] or y + msg1[1] or y + msg1[2] or y + msg1[3] or y + msg1[4] or y + msg1[5]:
    y = y
else:
    print("\n\tError: Invalid input.\n")

z = str(input("\tEnter your sex: "))
if z == 'M' or z == 'm' or z == 'Male' or z == 'male':
    z = 'Male'
elif z == 'F' or z == 'f' or z == 'Female' or z == 'female':
    z = 'Female'
elif not z == str and not z == 'M' or z == 'm' or z == 'Male' or z == 'male' or z == 'F' or z == 'f' or z == 'Female' or z == 'female' and z == int or z == float:
    print("\n\tError: Invalid input.\n")
    z = str(z)+" - \'it is not a valid input\'"
else:
    print("\n\tError: Failed to input right answer.\n")
    z = str(z) + " - \'it is not a valid input\'"

a = str(input("\tEnter your occupation: "))
if a == str:
    a = a
elif a == '' or a == 'N/A' or a == 'NA' or a == 'n/a' or a == 'na':
    a = 'None'
elif not a == str and a == int or a == float:
    print('\n\tError: Invalid input.\n')
    a = 'None - \'no valid input found\''
else:
    a = a

b = str(input("\tEnter your citizenship: "))
if b == '' or b == 'N/A' or b == 'NA' or b == 'n/a' or b == 'na':
    b = 'None'
elif not b == str and b == int or b == float:
    print('\n\tError: Invalid input.\n')
    b = 'None - \'no valid input found\''
else:
    b = b

print("""\nOutput:
\tName: """+x+"""
\tAge: """+str(y)+"""
\tSex: """+z+"""
\tOccupation: """+a+"""
\tCitizenship: """+b)
