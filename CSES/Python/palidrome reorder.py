n = input()
freq = {}
for i in n:
    if i in freq:
        freq[i] += 1
    else:
        freq[i] = 1

def check():
    flag = False
    mid = '\0'
    for k, v in freq.items():
        if v % 2 != 0:
            if(flag):
                mid = "NO SOLUTION"
                break
            flag = True
            mid = k
    return mid


a = ''
for k, v in freq.items():
    if v % 2 == 0:
        a += k * (v // 2)
mid = check()

if mid == "NO SOLUTION":
    palindrome = mid
elif mid != '\0':
    palindrome = a + mid * freq[mid] + a[::-1]
else:   
    palindrome = a + a[::-1]

print(palindrome)


