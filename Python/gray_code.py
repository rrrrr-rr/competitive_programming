n = int(input())

def gray_code(n):
    if n == 1:
        return ["0", "1"]
    
    prev_gray = gray_code(n - 1)
    rev_prev_gray = prev_gray[::-1]

    i = 0
    size = len(prev_gray)
    while (i < size):
        zero = "0" + prev_gray[i]
        prev_gray[i] = "1" + rev_prev_gray[i]
        prev_gray.append(zero)
        i += 1
    
    return prev_gray

res = gray_code(n)
for i in res:
    print(i)