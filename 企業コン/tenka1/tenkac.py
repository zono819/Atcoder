N=int(input())
S=list(input())
p=0
count=0
ketu=0
a=0
d=0
#左から黒をカウントして、黒を返すだけで済むならそっちを採用する、
#そうでないなら特定の黒より右で、少ない方に応じて色を変える
#黒がシャープ白がドット
for i in range(N):
    if S[i]=='#':
        count=S[i:].count('#')
        p=i
        break
    else:
        pass
for i in range(p,N):
    if S[i]=='#':
        a=a+1
    else:
        break
S_reverse=S[::-1]
for i in range(N):
    if S_reverse[i]=='.':
        d=d+1
    else:
        break
for i in range(N):
    if S_reverse[i]=='#':
        ketu=ketu+1
    else:
        break

print(min(count-ketu,N-p-count,a+d))
#この後にケツからシャープ数えて引ける可能性もある
#白と黒の少ない方をとったつもり
