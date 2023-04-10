print("INPUT")
jari = float(input("Masukan Nilai jari-jari\t:"))
tinggi = float(input("Masukan Nilai tinggi\t:"))
volume = 22 * tinggi * (jari * jari) /7 
luas = 2 * 22 * jari * (jari + tinggi) / 7
keliling = 2 * 22 * jari / 7
print("OUTPUT")
print("Volume = {:.2f} cm".format(volume))
print("Luas = {:.2f} cm".format(luas))
print("Keliling = {:.2f} cm".format(keliling))