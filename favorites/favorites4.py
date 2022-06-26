import csv

Title = set()
with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    next(reader)
    for row in reader:
        title = row["title"].strip().upper()
        Title.add(title)
        
    for title in sorted(Title):
        print(title)