def hitung(num1, num2):
    return (int(num1)- int(num2))
def mutlak(hasil):
    return abs(int(hasil))

a, b, c, d = input().split()
hasil = hitung(a, c) + hitung(b, d)
print("", mutlak(hasil))