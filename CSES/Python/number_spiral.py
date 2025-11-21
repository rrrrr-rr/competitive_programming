for _ in range(int(input())):
    y, x = map(int, input().split())
    if y % 2 == 0:
        if y >= x:
            print(y**2 - x + 1)
        else:
            if x % 2 == 0:
                print((x -1) **2 + y)
            else:    
                print(x**2 - y + 1)
    else:
        if y >= x:
            print((y - 1)**2 + x)
        else:
            if x % 2 == 0:
                print((x - 1) ** 2 + y)
            else:    
                print(x**2 - y + 1)