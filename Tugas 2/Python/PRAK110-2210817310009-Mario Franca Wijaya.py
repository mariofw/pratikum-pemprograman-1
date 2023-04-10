import math
alas = 5
tinggi = 12
miring = alas * alas + tinggi + tinggi
keliling = alas + tinggi + math.sqrt(miring)
luas = alas * tinggi * 1/2

print("Diketahui :")
print("Alas =", alas)
print("Tinggi =", tinggi)
print("\nJawab :")
print("Sisi A =", tinggi)
print("Sisi B =", int(math.sqrt(miring)))
print("Sisi C =", alas)
print("Keliling =", int(keliling))
print("Luas =", int(luas))