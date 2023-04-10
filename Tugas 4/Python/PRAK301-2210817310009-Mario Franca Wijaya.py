a = int(input("Masukan nilai pertama yang ingin diurutkan:"))
b = int(input("Masukan nilai ke dua yang ingin diurutkan:"))
c = int(input("Masukan nilai ke tiga yang ingin diurutkan:"))

if a > b and a > c and b > c:
    print("{}, {}, {}".format(c, b, a))
elif a > b and a > c and b < c:
    print("{}, {}, {}".format(b, c, a))
elif b > a and b > c and a > c:
    print("{}, {}, {}".format(c, a, b))
elif b > a and b > c and a < c:
    print("{}, {}, {}".format(a, c, b))
elif c > a and c > b and a > b:
    print("{}, {}, {}".format(b, a, c))
else:
    print("{}, {}, {}".format(a, b, c))