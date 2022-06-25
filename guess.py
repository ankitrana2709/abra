secret_word = "Ankit"
Guess_count = 3
guess = ""
while guess != secret_word and Guess_count < 1
    guess = input("Your Guess: ")
    if guess == secret_word:
         print("Correct choice")
    else
    print("Wrong guess")
    Guess_count -= 1
    print("Guesses remaining: " + Guess_count)
if guess == secret_word:
    print("Correct choice")


