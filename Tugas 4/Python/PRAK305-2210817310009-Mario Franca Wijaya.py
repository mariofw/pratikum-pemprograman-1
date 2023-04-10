import math
angka = float(input("Masukan angka yang akan di konversi ke hari, jam, menit, detik:"))
hari = angka / 86400
sisa = angka % 86400
jam = sisa / 3600
sisa1 = angka % 3600
menit = sisa1 / 60
detik = angka % 60

if angka >= 86400:
    print("{:.0f} hari {:.0f}:{:.0f}:{:.0f}".format(math.floor(hari), math.floor(jam), math.floor(menit), math.floor(detik)))
elif angka >= 3600 and angka <= 86399:
    print("{:.0f}:{:.0f}:{:.0f}".format(math.floor(jam), math.floor(menit), math.floor(detik)))
elif angka >= 60 and angka <= 3599:
    print("00:{:.0f}:{:.0f}".format(math.floor(menit), math.floor(detik)))
else:
    print("00:00:", math.floor(angka))