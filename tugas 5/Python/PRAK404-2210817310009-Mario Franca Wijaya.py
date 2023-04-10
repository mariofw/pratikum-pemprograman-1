print("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
while(True):
    menu = int(input("Masukkan Pilihan: "))
    if menu == 1:
        nilai1 = float(input("Masukkan nilai pertama: "))
        nilai2 = float(input("Masukkan nilai kedua: "))
        hasil = nilai1 + nilai2
        print('Hasil pertambahan antara %.2f dengan %.2f adalah %.2f '%(nilai1, nilai2, hasil))
    elif menu == 2:
        nilai1 = float(input("Masukkan nilai pertama: "))
        nilai2 = float(input("Masukkan nilai kedua: "))
        hasil = nilai1 - nilai2
        print('Hasil pengurangan antara %.2f dengan %.2f adalah %.2f '%(nilai1, nilai2, hasil))
    elif menu == 3:
        nilai1 = float(input("Masukkan nilai pertama: "))
        nilai2 = float(input("Masukkan nilai kedua: "))
        hasil = nilai1 * nilai2
        print('Hasil perkalian antara %.2f dengan %.2f adalah %.2f '%(nilai1, nilai2, hasil))
    elif menu == 4:
        nilai1 = float(input("Masukkan nilai pertama: "))
        nilai2 = float(input("Masukkan nilai kedua: "))
        hasil = nilai1 / nilai2
        print('Hasil pembagian antara %.2f dengan %.2f adalah %.2f '%(nilai1, nilai2, hasil))
    elif menu == 5:
        print('Terimakasih, telah menggunakan kalkulator Mario Franca Wijaya')
        break
    else : 
        print('Input anda salah, silahkan coba lagi')