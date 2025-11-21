def check(a, b):
    if total % 3 == 0 and max(a, b) <= 2 * min(a, b) and a > 0 and b > 0:
        print("YES")
    else:
        print("NO")

for _ in range(int(input())):
    a, b = map(int, input().split())
    total = a + b

    if a == 0 and b == 0:
        print("YES")
    else:
        check(a, b)
    