import re

regex = "ve?"
# Matches the preceding character zero or one time


def check(string):

    if re.search(regex, string):
        print("Valid")

    else:
        print("Invalid")


if __name__ == "__main__":

    string = input()

    check(string)
