import re

regex = "42{1,3}5"
# Matches at least 1 and at most 3


def check(string):

    if re.search(regex, string):
        print("Valid")

    else:
        print("Invalid")


if __name__ == "__main__":

    string = input()

    check(string)
