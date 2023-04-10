def maksimal(maks, nilai):
    if maks > nilai:
        return int(maks)
    else:
        return int(nilai)
def minimal(minim, nilai):
    if minim < nilai:
        return int(minim)
    else:
        return int(nilai)

for i in range(3):
    batas = 0
    maks = -100000
    minim = 100000
    bilangan = int(input())
    while batas < bilangan:
        nilai = map(int, input().split())
        for angka in nilai:
            maks = maksimal(maks, angka)
            minim = minimal(minim, angka)
            batas +=1
    print("%d %d"%(maks, minim))