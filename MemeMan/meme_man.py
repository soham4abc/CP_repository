# Once there was a programmer who was living in The Pit. While he was teaching an advanced data structure,
# he suddenly turned into Meme-Man, the greatest superhero of Kundura City.
# Meme-Man’s arch-nemesis Treap-Man created a giant staircase to attack the city.
# The only way to stop the giant staircase is to reach its top by climbing x or y
# stairs at a time. Meme-Man wonders how many different ways there are to do this.
# Help our hero by satisfying his curiosity.

# Hint: Stair N is accessible only from stair N − x and stair N − y.
# That is, the number of ways to climb N is the sum of the number of ways to climb N − x and N − y.

# Sample Input 1
# 2
# 1 2
# Sample Output 1
# 2
# Explanation 1
# There are three ways of climbing. Meme-Man can climb two steps, then one.
# Meme-Man can climb one step, then two. Meme-Man can climb one step three times.

import math


def perm(a, b):
    return math.factorial(a + b) / (math.factorial(a) * math.factorial(b))


n = int(input())
input_l = input().split(' ')

x = int(input_l[0])
y = int(input_l[1])

i = 0
j = 0

result = 0
while i <= (n / x):

    if i * x + j * y == n:
        result += perm(i, j)

    while j <= (n / y):
        j += 1
        if i * x + j * y == n:
            result += perm(i, j)

    i += 1
    j = 0
print(int(result))
