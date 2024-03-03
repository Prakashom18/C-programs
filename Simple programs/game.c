import random

def play_game():
    print("Welcome to the Number Guessing Game!")
    print("I'm thinking of a number between 1 and 100.")
    secret_number = random.randint(1, 100)
    attempts = 0
    max_attempts = 7

    while attempts < max_attempts:
        print("\nAttempts remaining:", max_attempts - attempts)
        guess = int(input("Enter your guess: "))
        attempts += 1

        if guess < secret_number:
            print("Too low! Try a higher number.")
        elif guess > secret_number:
            print("Too high! Try a lower number.")
        else:
            print(f"Congratulations! You guessed the number ({secret_number}) in {attempts} attempts!")
            break
    else:
        print(f"\nSorry, you've run out of attempts! The number was {secret_number}.")

    play_again = input("\nDo you want to play again? (yes/no): ").lower()
    if play_again == "yes":
        play_game()
    else:
        print("Thank you for playing!")

# Start the game
play_game()





