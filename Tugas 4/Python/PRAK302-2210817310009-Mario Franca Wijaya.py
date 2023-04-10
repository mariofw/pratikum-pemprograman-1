bil = int(input("Masukan nilai kamu:"))

if bil >= 80:
    print("Nilai kamu setelah di konversi adalah A")
elif bil >= 70 and bil <= 79:
    print("Nilai kamu setelah di konversi adalah B")
elif bil >= 60 and bil <= 69:
    print("Nilai kamu setelah di konversi adalah C")
elif bil >= 50 and bil <= 59:
    print("Nilai kamu setelah di konversi adalah D")
else :
    print("Nilai kamu setelah di konversi adalah E")