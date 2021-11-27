import re

string1= "June 15, 1987"

regex= r"^(?P<month>\w+)\s(?P<day>\d+)\,?\s(?P<year>\d+)"

matches= re.search(regex, string1)

print("Month: ", matches.group('month'))
print("Day: ", matches.group('day'))
print("Year: ", matches.group('year'))
