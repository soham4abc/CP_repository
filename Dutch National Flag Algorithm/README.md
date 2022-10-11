Dutch National Flag Algorithim is use to sort an array containing only elements of 0,1,2.

These are the folowing steps:

Maintain 3 variables low, high and mid
low - all elements before low are 0
mid - all elements between low and mid are 1
high - all elements after high are 2
Initially low, mid are set at 0 and high is at n-1
Now, we iterate mid from 0 to high, and for every element
if it is equal to 0, we swap it with element at low, and increement low and mid
else if it is equal to 2, we swap it with element at high, and decreement high
else we just increement mid (i.e element is equla to 1)
This method ensures partition, as low and high maintain elements according to their values, and then change their positions,
ensuring all elements before low are lower than low_value and all elements after high are higher than high_value


eg:
arr[]={1,0,2,1,0,1,0,2,1,0,1,0}
after sorting the array will become
arr[]={0,0,0,0,0,1,1,1,1,1,2,2}
