import re
dob= r"\d{2}-\d{2}-\d{4}"
ph=r"[0-9]{10}[^0-9]*$"

string1="phone number : 1234567890 DOB: 30-04-2002"
dob1 = re.search(dob,string1)
ph1 = re.search(ph,string1)
if dob1!=None and ph1!=None:
    print(dob1.group())
    print(ph1.group())
