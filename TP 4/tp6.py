# Exercice 1
from math import *
from random import randint

dividende = randint(100, 999)
diviseur = randint(2, 9)

est_diviseur = False

if dividende % diviseur == 0:
    est_diviseur = True
else:
    est_diviseur = False

print("Le nombre", dividende, " est t-il divisible par", diviseur, " ?")
reponse = input("Votre réponse (o/n) ? ")
if reponse == 'o' and est_diviseur:
    print("Bravo !")
elif reponse == 'n' and not est_diviseur:
    print("Bravo !")
else:
    print("Perdu !")

# Exercice 2

mystere = randint(1, 100)
borne_deb = randint(1, mystere)
borne_fin = randint(mystere, 100)
essai = 1


def choisir_nombre():
    print("Entrer un nombre compris entre", borne_deb, " et", borne_fin)
    nb_rep = int(input("Votre réponse ? "))
    if nb_rep < mystere:
        print("Plus")
    elif nb_rep > mystere:
        print("Moins")
    elif nb_rep == mystere:
        print("Gagné")


while essai <= 7:
    choisir_nombre()
    essai = essai + 1

# Exercice 3
print("Combien avez-vous d'équations ?")
n = int(input())
a = 0
TabD = [[0 for a in range(2+a)] for a in range(n+a)]
TabR = [0 for a in range(n)]
somme = 0
print(TabD)
print("Entrer le coeff numéro 1")
rep = int(input())
TabD[0][0] = rep
print(TabD)
print("Entrer le résultat numéro 1")
rep = int(input())
TabD[0][1] = rep
print(TabD)
TabR[0] = TabD[0][1] / TabD[0][0]
for i in range(2, n+1):
    for j in range(0, i):
        print("Entrer le coeff", j+1)
        rep = int(input())
        TabD[i-1][j] = rep
        print(TabD)
    print("Enrer le resultat de l'équation", i)
    rep = int(input())
    TabD[i-1][i] = rep
    print(TabD)
    somme = 0
    for k in range(0, i-1):
        somme = somme + (TabD[i-1][k] * TabR[k])
    rep = (TabD[i-1][i] - somme) / TabD[i-1][i-1]
    TabR[i-1] = rep
    sommme = 0
print(TabR)

# Exercice 4

R = []
# val sert à stocker la valeur entrée
val = 0

nb = int(input("Combien avez-vous de cercles ? (max 8) "))
C = [[]for i in range(nb)]
# Cinter sert de repère pour le calcul
Cinter = []
Cintera = []
Cinterb = []

for i in range(nb):
    print("cercle", i+1)
    val = float(input("Entrer la coordonnée X du cercle "))
    C[i].append(val)
    val = float(input("Entrer la coordonnée Y du cercle "))
    C[i].append(val)
    val = float(input("Entrer le rayon du cercle "))
    R.append(val)


def intersection(cercle1, cercle2, rayon1, rayon2, nbcercle):
    d = sqrt((cercle2[0]-cercle1[0])**2+(cercle2[1]-cercle1[1])**2)
    a = (rayon1**2-rayon2**2+d**2)/(2*d)
    h = sqrt(rayon1**2-a**2)
    val = cercle1[0]+(a/d)*(cercle2[0]-cercle1[0])
    Cinter.append(val)
    val = cercle1[1]+(a/d)*(cercle2[1]-cercle1[1])
    Cinter.append(val)

    val = Cinter[nbcercle]+(h/d)*(cercle2[1]-cercle1[1])
    Cintera.append(val)
    val = Cinter[nbcercle+1]-(h/d)*(cercle2[0]-cercle1[0])
    Cintera.append(val)
    val = Cinter[nbcercle]-(h/d)*(cercle2[1]-cercle1[1])
    Cinterb.append(val)
    val = Cinter[nbcercle+1]+(h/d)*(cercle2[0]-cercle1[0])
    Cinterb.append(val)

    print("Point 1 :", Cintera, "\nPoint 2 :", Cinterb)


for i in range(0, nb-1):
    intersection(C[i], C[i+1], R[i], R[i+1], 2*i)
