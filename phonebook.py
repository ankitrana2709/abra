def get_string(prompt):

    if type(prompt) is not str:
        raise TypeError("prompt must be of type str")
    try:
        return input(prompt)
    except EOFError:
        return None
people = {
    "Carter": "8778*-665",
    "aankit": "54454*-2",
    "adas": "5454++"
}
name = get_string("Name: ")
if name in people:
    print("Number: " + people[name])