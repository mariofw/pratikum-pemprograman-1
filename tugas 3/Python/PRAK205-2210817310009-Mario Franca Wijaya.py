import math
print("INPUT")
a = int(input("Masukan Nilai a\t:"))
b = int(input("Masukan Nilai b\t:"))
c = math.sqrt(b * b - a * a)
luas = 0.5 * c * a
keliling = a + b + c
print("OUTPUT")
print("Alas = {:.0f} cm".format(c))
print("Tinggi = {:.0f} cm".format(a))
print("Keliling = {:.0f} cm".format(keliling))
print("Luas = {:.0f} cm^2".format(luas))