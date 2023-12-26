from math import *
# Exercice 1
# S1
S1 = 1
div = 2
val = 1/div
signe = -1
N = int(input("Entrer un nombre entier : "))
while div <= N:
    S1 = S1 + signe * val
    signe = -1 * signe
    div = div + 2
    val = 1/div
print(S1)

# S2
B = int(input("Entrer un nombre entier : "))
x = float(input("Entrer un nombre : "))
S2 = 1
for i in range(1, B+1):
    S2 += (x**i/i)
print(S2)

# Exercice 2
N = int(input("Entrer un nombre entier : "))
nbprem = []
nbnonprem = []
for i in range(2, N+1):
    nbprem.append(i)
    for j in range(1, i+1):
        if (i % j == 0) and (j != 1 and j != i):
            if i not in nbnonprem:
                nbnonprem.append(i)
for c in range(len(nbnonprem)):
    supp = nbnonprem[c]
    nbprem.remove(supp)
print(nbprem)

# Exercice 3
N = int(input("Entrer un nombre entier : "))
if N % 2 == 0:
    print("Le nombre", N, "est pair")
else:
    print("Le nombre", N, "est impair")

# Exercice 4
N = int(input("Entrer un nombre entier : "))
n = int(sqrt(N))
divi = []
divi.append(1)
divi.append(N)
for i in range(1, n+1):
    if N % i == 0:
        x = int(N/i)
        if x not in divi:
            divi.append(x)
        if i not in divi:
            divi.append(i)
print(divi)

# Exercice 5
# Cas 1
list1 = [-1, 6, 27.5, 50, 139, 500]
list2 = [-2, 6, 50, 51]
listf = []
N = len(list1) + len(list2)
while len(listf) < N:
    if not list2:
        listf.append(list1[0])
        list1.remove(list1[0])
    else:
        if list1[0] <= list2[0]:
            listf.append(list1[0])
            list1.remove(list1[0])
        else:
            listf.append(list2[0])
            list2.remove(list2[0])
print(listf)

# Cas 2
list1 = [1, 3, 5, 7, 8.5, 9]
list2 = [0, 6, 10]
listf = []
ready = False
while ready == False:
    if not list2:
        if not list1:
            ready = True
        else:
            listf.append(list1[0])
            list1.remove(list1[0])
    elif not list1:
        if not list2:
            ready = True
        else:
            listf.append(list2[0])
            list2.remove(list2[0])
    else:
        if list1[0] <= list2[0]:
            if list1[0] == list2[0]:
                listf.append(list1[0])
                list1.remove(list1[0])
                list2.remove(list2[0])
            else:
                listf.append(list1[0])
                list1.remove(list1[0])
        else:
            listf.append(list2[0])
            list2.remove(list2[0])
if ready == True:
    print(listf)
