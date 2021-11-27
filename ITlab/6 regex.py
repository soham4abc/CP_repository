import re

regex = r"([a-zA-Z]+) (\d+)"

match = re.search(regex, "I was born on June 24")

if match != None:
    # So this will print "June 24"
    print("Full match: %s" % (match.group(0)))

    # So this will print "June"
    print("Month: %s" % (match.group(1)))

    # So this will print "24"
    print("Day: %s" % (match.group(2)))

else:
    print("The regex pattern does not match.")
