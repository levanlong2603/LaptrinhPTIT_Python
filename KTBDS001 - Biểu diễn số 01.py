from math import*
MOD = 10**9 + 7


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        dp = [0]*100001
        dp[0] = 1
        for x in range(1, n + 1):
            for i in range(x, n + 1):
                dp[i] = dp[i] + dp[i-x]
                dp[i] = dp[i] % MOD
        print(dp[n] - 1)
