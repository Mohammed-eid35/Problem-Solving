# Enter your code here. Read input from STDIN. Print output to STDOUT
def keyFunction(x):
    if x.islower(): return (1, x)
    if x.isupper(): return (2, x)
    if int(x) & 1 : return (3, x)
    return (4, x)

print(''.join(sorted(input(), key = keyFunction)))