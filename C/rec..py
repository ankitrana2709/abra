def main():
    while True:
        try:
            n = int(input("Height: "))
            if n > 0 and n < 9:
                break
            else:
                print("Not a Positive integer")
        except ValueError:
            print("Not an Integer")

    rec(n)
def rec(j):
    while j > 0:
        print("#" * j)
        j -= 1
main()
