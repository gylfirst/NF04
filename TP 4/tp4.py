# Exercice 1
nom = input("Entrer votre nom : ")
age = int(input("Entrer voter âge : "))
if age < 18:
    print(nom, "vous êtes mineur !")
elif age >= 18:
    print(nom, "vous êtes Majeur !")

# Exercice 2
chaine = input("Entrer une chaîne de caratères : ")
for i in range(len(chaine)):
    print(chaine[i])

# Exercice 3
s = input("Entrer une chaîne de caratères : ")
for i in range(len(s)):
    if s[i] == "a":
        print("La chaîne contient le caratère a, à la position :", i+1)
    else:
        print("Il n'y pas pas le caractère a dans la chaîne.'")

# Exercice 4
chaine1 = input("Entrer une chaîne de caratères : ")
prem = chaine1[0]
last = chaine1[-1]
chaine2 = ""
chaine2 = chaine2 + last
for i in range(1, len(chaine1)-1):
    chaine2 = chaine2 + chaine1[i]
chaine2 = chaine2 + prem
print(chaine2)

# Exercice 5
annei = 1900
N = int(input("Entrer une année après 1900 : "))
compteur = 0
while annei <= N:
    if (annei % 4 == 0) and (annei % 100 != 0 or annei % 400 == 0):
        compteur += 1
        print(annei)
    annei += 1
print("Le nombre d'années bissextiles dans l'intervale donné est :", compteur)
