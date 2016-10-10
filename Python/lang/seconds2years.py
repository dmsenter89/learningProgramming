#! /usr/bin/python3

v = (10**9)
min = v*(1/60)
hrs = min*(1/60)
d = hrs*(1/60)
yrs = d*(1/365)

test= (yrs>= 81.30)

print('''Can a Norwegian baby expect to live for {v:G} seconds? 
That's about {t:.2f} years.
In Norway, the average life expectancy is 81.30 years.
Hence, the answer is {test}.'''.format(v=v,t=yrs,test=test))
