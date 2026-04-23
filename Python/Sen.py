angulo = int(input())
i = int(input())
angulo = ((angulo * 3.14159) / (180))
n = 0
sum = 0
while n < i:
    a = 1
    factor = 1
    while a <= ((2 * n) + 1) :
        factor = (factor * a)
        a = a + 1
    sum = sum + ((((-1) ** n) * (angulo ** ((2 * n) + 1))) / factor)
    print(sum)
    n = n + 1
print(sum)
