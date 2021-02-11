'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''

 
 
from random import random
minx = 9999
N = 4
a = []
summator = 0
summix=0
for i in range(N):
    b = []
    for j in range(N):
        n = int(random()*10)
        b.append(n)
        print("%3d" % n, end='')
    a.append(b)
    print()

i = 0

while i < N:
    if a[i][i] < minx:
        minx = a[i][i];
    i += 1
 
print("Минимальное значение диагонали: ",minx)
for i in range(N):
    for j in range(N):
        if a[i][j]>minx:
            summator+=a[i][j]
        summix +=a[i][j]
print("Сумма значений больших чем минимальное ",summator)

test1 = False
test2 = False

if summix>summator:
    test1 = True
    print("Тестирование на правильность выполнения расчета суммы: ",test1)

if N%2 == 0:
    test2 = True
    print("Тестирование на соблюдение вводных значений матрицы: ",test2)

