import csv

Title = []
with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    next(reader)
    for row in reader:
        if not row["title"] in Title:
            Title.append(row["title"])
    for title in Title:
        print(title)