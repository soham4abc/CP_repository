def translator(phase):  # http://192.168.0.1/
    translator1 = " "
    for letter in phase:
        if letter.islower() and letter in "aeiou":

            translator1 = translator1 + "g"
        elif letter.isupper() and letter in "AEIOU":
            translator1 = translator1 + "G"
        else:
            translator1 = translator1 + letter
    return translator1


print(translator(input("enter the letter to translate ")))
