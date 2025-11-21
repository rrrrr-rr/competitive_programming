n = int(input())
res = []
if n > 1 and n <= 3:
    print("NO SOLUTION")
elif n % 2 == 0:
    for i in range(2, n + 1, 2):
        res.append(i)
    for i in range(1, n, 2):
        res.append(i)
else:
    for i in range(2, n, 2):
        res.append(i)
    for i in range(1, n + 1, 2):
        res.append(i)
print(*res)

# this works better
def solution():
    n = int(input())
    if n == 2 or n == 3:
        print("NO SOLUTION")
    else:
        res = list(range(2, n+1, 2)) + list(range(1, n+1, 2))
    print(*res)
# take even first, then insert odd
