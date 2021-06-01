N = int(input())
S = [1 if x == '.'  else 0 for x in list(input())]

cost = sum(S)
min_cost = cost
print(cost)
print(min_cost)
#白だけカウントしたのだ
for i in range(N):
    if S[i] == 0:
        cost += 1
    else:
        cost -= 1
    if min_cost > cost:
        min_cost = cost
#costは白の和に注意、左から見て行くと白はコストにはならないので1引くのだ、黒はガンなので1足すのだ
print(min_cost)
