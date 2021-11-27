import re

regex = "zo+"
# matches 1 or more occurences


def check(string):

    if re.search(regex, string):
        print("Valid")

    else:
        print("Invalid")


if __name__ == "__main__":

    string = input()

    check(string)
