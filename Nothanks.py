rango=int(input())
list=[]
j=1

for i in range(rango):
    list.append(int(input()))

list.sort()
sum=0
aux=list[0]


for i in range(rango-1):
    
    if aux+j != list[i+1]:
        
        sum+=aux
        
        aux=list[i+1]
        
    else: 
        
        j+=1
    
sum+=aux
print(sum)  