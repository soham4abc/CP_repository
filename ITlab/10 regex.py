import re
regex=r"([a-zA-Z0-9._-]+@[a-zA-Z0-9._-]+\.[a-zA-Z0-9_-]+)"
string1="My email is: sohambanerjee4abc@hotmail.com"
res=re.search(regex,string1)
if res!=None:
    print(res.group())
else:
    print("invalid")
