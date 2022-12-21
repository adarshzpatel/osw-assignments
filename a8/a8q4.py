def harmonicSum(n):
    if n == 0:
        return 0
    return 1/n + harmonicSum(n-1)


print(harmonicSum(4))