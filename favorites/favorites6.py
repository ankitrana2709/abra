import csv

Title = {}
with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    next(reader)
    for row in reader:
        title = row["title"].strip().upper()
        if title in Title:
            Title[title] += 1
        else:
            Title[title] = 1
def get_value(title):
    return Title[title]        
for title in sorted(Title, key = get_value, reverse = True):
    print(title, Title[title])