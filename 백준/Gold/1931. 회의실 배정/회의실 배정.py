n=int(input())
meeting=[]
for _ in range(n):
    s,e=map(int,input().split(' '))
    meeting.append([s,e])
meeting.sort(key=lambda x: (x[1], x[0]))
answer=0
end=0
for m in meeting:
    if end<=m[0]:
        end=m[1]
        answer+=1
print(answer)