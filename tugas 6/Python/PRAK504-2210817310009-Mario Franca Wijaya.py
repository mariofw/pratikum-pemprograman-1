def reverse(reversed):
    i = 0
    while reversed != 0:
        i = (10 * i) + reversed % 10
        reversed //= 10
    return i

A, B = input().split()
A = reverse(int(A))
B = reverse(int(B))
C = A + B
print(f'{reverse(C)}\n')