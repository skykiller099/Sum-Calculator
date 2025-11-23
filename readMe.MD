# Gestion Interactif de Notes en C

---

## Description

Programme en C permettant la gestion interactive d'un tableau de notes flottantes.  
Il offre la saisie de plusieurs notes, le calcul de leur moyenne, ainsi que la possibilité de mettre à jour les notes à volonté avant de recalculer la moyenne.

---

## Fonctionnalités principales

- Saisie d’un nombre de notes (max 20) avec valeurs décimales autorisées
- Calcul automatique de la moyenne des notes saisies
- Mise à jour interactive des notes via une boucle de questions Oui/Non
- Recalcule dynamique de la moyenne après modifications

---

## Prérequis

- Un compilateur C (gcc, clang, etc.)
- Un terminal compatible pour l'exécution interactive

---

## Compilation

Pour compiler le programme, utilisez la commande suivante dans le terminal :

`gcc -o gestion_notes gestion_notes.c -lm`

(L'option `-lm` permet d'inclure la bibliothèque mathématique si besoin)

---

## Utilisation

Lancez le programme compilé :

`./main.exe`

Vous serez invité à :

1. Entrer le nombre total de notes (maximum 20)
2. Saisir chaque note (valeurs décimales possibles)
3. Visualiser la moyenne calculée
4. Opter pour modifier une ou plusieurs notes (répondre 'y' ou 'n')
5. Indiquer l’index et la nouvelle valeur des notes choisies à modifier
6. Visualiser la moyenne mise à jour à la fin

---

## Structure du code

Le programme est organisé en plusieurs fonctions :

- `max_notes()`: Limite et lit le nombre de notes
- `ask_for_notes()`: Saisie des notes dans un tableau float
- `calculate_average()`: Calcule la moyenne des notes
- `update_value()`: Met à jour une note selon un index donné
- `choice()` : Gestion du choix utilisateur pour mise à jour
- `update_notes()` : Boucle d’interaction pour modifier plusieurs notes

---

## Contributions

Les contributions, suggestions ou corrections sont les bienvenues !  
Merci d’ouvrir une issue ou de proposer une pull request.

---

## Licence

Ce projet est distribué sous licence MIT.

---

_Ce README accompagne un projet simple mais fonctionnel de gestion interactive de notes en C, idéal pour apprendre la manipulation de tableaux, les entrées/sorties et l’interactivité utilisateur en console._
