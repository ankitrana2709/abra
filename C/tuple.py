''' tuples are IMMUTABLE. THEY CANT BE MODIFIED. THAT IS THE DIFFERENCE
BETWEEN LIST AND A TUPLE '''
coordinate = (4, 5)
print(coordinate[1])
coordinates = [(1,2), (2,3), (3,4)]
coordinates.insert(1,(5,6))
print(coordinates)
coordinates.sort()
print(coordinates)
list = [(1,2),3,4]
coordinates.extend(list)
print(coordinates)