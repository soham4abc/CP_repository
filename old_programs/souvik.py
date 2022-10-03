import random

choice = ["rock", "paper", "scissors"]
while True:
    print("Rock Paper Scissors game")
    youwin, computerwin = 0, 0
    for i in range(1, 6):
        print("Round", i, "start:")
        print("select any option")
        print("1 for rock,2 for paper,3 for scisssors", sep="\n")
        yourchoice = int(input())
        if yourchoice == 1:
            print("you selected rock")
            yourchoice='rock'
        elif yourchoice == 2:
            print("you selected paper")
            yourchoice='paper'
        elif yourchoice == 3:
            print("you selected scissors")
            yourchoice='scissors'
        else:
            print("invalid choice")
            break
        computerchoice = random.choice(choice)
        print("computer choice", computerchoice)

        if (yourchoice == computerchoice):
            youwin += 1
            computerwin += 1
            print("this round is draw")
        elif (yourchoice == "paper" and computerchoice == "rock") or (
                yourchoice == "rock" and computerchoice == "scissors") or (
                yourchoice == "scissors" and computerchoice == "paper"):
            youwin += 1
            print("You win the round")
        else:
            computerwin += 1
            print("computer wins the round")

    if youwin > computerwin:
        print("you win")
        print("score is", "your score", youwin, "computer score", computerwin, sep=" ")
    elif computerwin > youwin:
        print("you loose")
        print("score is", "your score", youwin, "computer score", computerwin, sep=" ")
    else:
        print("Match draw")
        print("score is", "your score", youwin, "computer score", computerwin, sep=" ")
    user_choice = input("Do you want to play again?(yes/exit)")
    if user_choice == 'yes' or user_choice == 'Yes' or user_choice == 'YES':
        continue
    else:
        break