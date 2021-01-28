# Link : https://www.hackerrank.com/challenges/ginorts/problem

l = u = e = o = ""
for i in sorted(input()) :
    if i.isalpha() and i.islower() :
        l += i
    elif i.isalpha() and i.isupper() :
        u += i
    elif int(i) % 2 == 0 :
        e += i
    else :
        o += i

print(l, u, o, e, sep = "")
