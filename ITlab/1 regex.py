import re

regex = "[aeiouAEIOU]+"


def check(string):

    if re.search(regex, string):
        print("Valid")

    else:
        print("Invalid")


if __name__ == "__main__":

    string = input()

    check(string)
