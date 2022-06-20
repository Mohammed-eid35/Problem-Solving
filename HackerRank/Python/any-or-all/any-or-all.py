# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
ar = input().split(" ")
print(all(int(num) >= 0 for num in ar) and any(num == num[::-1] for num in ar))