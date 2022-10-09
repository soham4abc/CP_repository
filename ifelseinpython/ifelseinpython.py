#!/bin/python3

import math
import os
import random
import re
import sys

n = int(input().strip())
check = n%2
if check !=0:
    print("Weird")

if ((check == 0) and (n<=20)):
    if ((n>= 2) and (n<= 5)):
        print("Not Weird")
    elif ((n>= 6) and (n<= 20)):
        print("Weird")
if ((check== 0) and (n>20)):
    print("Not Weird")
    #elif (n> 20):
      #  print("Not Weird")
