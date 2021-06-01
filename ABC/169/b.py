n = int(input())
a = list(map(int,input().split()))
INF = 10**18
ans = 1
for e in a:
    ans*=e

if ans > INF:
    ans = -1

print(ans)