totalLine = int(input())
database = {}

for iteration in range(totalLine):
    inputString = input()

    if inputString in database:
        print(inputString+str(database[inputString]))
        database[inputString] += 1
    else:
        print("OK")
        database[inputString] = 1
