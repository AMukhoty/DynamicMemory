def TOH(source,destination,aux,n):
    count=0  
    if n>0:
        count=TOH(source, aux, destination, n-1)
        print(f'Move Disc from {source} to {destination}')
        count+=1
        count+=TOH(aux,destination,source,n-1)
    return count

print(TOH('A','B','C',3))