import re

s = "Welcome to Python"

# here x is the match object
res = re.search(r"\D{2} t", s)

print(res.group())
