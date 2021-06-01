N=int(input())
S=list(input())
count=0
countdot=0
countdot2=0
x=0
for i in range(N-1):
    if S[i]=='#' and S[i+1]=='.':
        count=S[:i].count('#')
        p=i
        break
    else:
        pass
for i in range(p,N):
    if S[i]=='#':
        countdot=S.count('.')
        break
    else:
        pass
x=min(count,countdot)
for i in range(N):
    if S[i]=='.':
        countdot2=countdot2+1
    else:
        pass
print(min(cout+countdot2,countdot))
