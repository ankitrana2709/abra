words = set()
def check(word):
    if word in words:
        return True
    else:
        return False
def load(dictionary):
    file = open(dictionaries, "r")
    for l
