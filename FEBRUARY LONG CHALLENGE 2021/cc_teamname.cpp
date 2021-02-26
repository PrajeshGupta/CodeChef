# cook your dish here
def seperate(l1,l2):                                
    ss=len(set(l1+l2))
    return ss
    
for t in range(int(input())):
    n=int(input())
    l=input().split()
    body={}
    for i in l:
        p=i[1:]
        if p in body:
            body[p].append(i[0])
        else:
            body[p]=[i[0]]
    body1=list(body.keys())
    ss=0
    
    for i in range (len(body)):
        for j in range(i+1,len(body)):
            flag=seperate(body[body1[i]],body[body1[j]])
            ss+=(flag-len(body[body1[i]]))*(flag-len(body[body1[j]]))
    print(2*ss)              