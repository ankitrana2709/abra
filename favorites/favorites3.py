import csv

Title = []
with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    next(reader)
    for row in reader:
        title = row["title"].strip().upper()
        if not row["title"] in Title:
            Title.append(title)
    for title in Title:
        print(title)