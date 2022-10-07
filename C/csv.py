import csv
def get_string(prompt):
    if type(prompt) is not str:
        raise TypeError("prompt must be of type str")
    try:
        return input(prompt)
    except EOFError:
        return None

file = open("phonebook.csv","a")

name = get_string("Name:" )
number = get_string("Number: ")

writer = csv.writer(file)
writer.writerow([name, number])

file.close()