from prettytable import PrettyTable

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
elif y == '':
    print("\n\tError: Empty input.\n")
    y = 'None - \'no valid input found\''
else:
    print("\n\tError: Invalid input.\n")

z = str(input("\tEnter your sex: "))
msg2 = ['M', 'm', 'Male', 'male', 'F', 'f', 'Female', 'female']
if z == msg2[0] or z == msg2[1] or z == msg2[2] or z == msg2[3]:
    z = 'Male'
elif z == msg2[4] or z == msg2[5] or z == msg2[6] or z == msg2[7]:
    z = 'Female'
elif not z == str and not z == msg2[0] or z == msg2[1] or z == msg2[2] or z == msg2[3] or z == msg2[4] or z == msg2[5] or z == msg2[6] or z == msg2[7] and z == int or z == float:
    print("\n\tError: Invalid input.\n")
    z = str(z)+" - \'it is not a valid input\'"
elif z == '':
    print("\n\tError: Empty input.\n")
    z = 'None - \'no valid input found\''
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

db = PrettyTable()
db.field_names = ['Name', 'Age', 'Sex', 'Occupation', 'Citizenship']
db.add_row([x, y, z, a, b])
print("\n\t")
print(db)
