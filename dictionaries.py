items = []

def Add_to_Classy():
    items = []
    items.append(input("Add into items: "))
    print(items)


def Classiness_points(points=0):
    if "tophat" in items:
        points += 2
    if "bowtie" in items:
        points += 4
    if "monocle" in items:
        points += 5
    else:
        pass
    return points

Add_to_Classy()
print(Classiness_points())
