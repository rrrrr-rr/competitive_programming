n, x = map(int, input().split())
nums = list(map(int, input().split()))

dp = [1e9 + 7] * (x + 1)
dp[0] = 0

for i in range(1, x + 1):
    for j in range(n):
        if nums[j] > i:
            pass