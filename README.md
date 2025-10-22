# Holberton School – Low Level Programming  
Ce dépôt contient une série d’exercices en langage C (et quelques scripts shell) issus du cursus de la Holberton School « Low Level Programming ».  
Il a pour but de renforcer les bases de la programmation bas-niveau, la gestion mémoire, les pointeurs, les boucles, conditions, fonctions, etc.

## Contenu  
Chaque dossier correspond à un projet ou un chapitre :  
- `hello_world` : premier programme « Hello, World! »  
- `variables_if_else_while` : variables, conditions, boucles while/if/else  
- `functions_nested_loops` : fonctions, boucles imbriquées, logique plus complexe  
- …  
Le code est écrit essentiellement en C (≈ 98 %) avec quelques scripts shell (≈ 1.8 %). :contentReference[oaicite:3]{index=3}  
Le style de code suit les exigences de Holberton : respect des normes de nommage, indentation, lisibilité, etc.

## Prérequis  
- Un compilateur C (ex : `gcc`)  
- Un environnement Unix/Linux ou macOS (pour les scripts shell)  
- Connaissances de base : variables, types, opérateurs, fonctions, pointeurs

## Instructions  
1. Clonez le dépôt :  
   ```bash
   git clone https://github.com/ZimEthane/holbertonschool-low_level_programming.git
   cd holbertonschool-low_level_programming
'''

---

## Fiche de révision  
| Thème | Points clés | À retenir |
|-------|------------|-----------|
| Variables & types | types fondamentaux (int, char, float…), conversion implicite/explicite | toujours initialiser les variables |
| Conditions (`if`/`else`) | comparaison, opérateurs logiques (`&&`, `||`), blocs | bien parenthéser les tests complexes |
| Boucles (`while`, `for`) | initialisation, condition, incrémentation | éviter boucles infinies, gestion de l’index |
| Fonctions | prototype, définition, appel, valeur de retour | privilégier fonctions courtes et lisibles |
| Pointeurs | adresse (`&`), contenu (`*`), pointeurs de pointeurs | lecture & écriture, attention aux null & mémoire |
| Tableaux et chaînes de caractères | manipulation d’indices, chaînes terminées par `\0` | boucle jusqu’à ce caractère terminal |
| Mémoire & allocation (à venir) | stack vs heap, `malloc`, `free` | toujours libérer la mémoire allouée |
| Style de code / Norme | nommage clair, indentation, commentaires utiles | couleur de code + vérification automatique (ex : `betty` pour Holberton) |

### Astuces de révision  
- Refaire les exercices sans regarder la solution.  
- Écrire à la main un programme simple (ex : manipuler un tableau, pointeur).  
- Expliquer à voix haute ce que fait chaque ligne de code.  
- Se chronométrer : coder un petit exerice en 15 min.  
- Relire les erreurs de compilation/traduites et comprendre.  
- Garder un carnet d’erreurs fréquentes (ex : segmentation fault, mauvais pointeur…).

### Checklist avant de rendre un exercice  
- [ ] Le fichier compile sans erreurs ni warnings (`-Wall -Wextra -Werror`).  
- [ ] Le programme fonctionne correctement pour tous les cas tests.  
- [ ] Le style de code est respecté.  
- [ ] Le code est commenté si nécessaire.  
- [ ] Aucun code inutile/commenté restant.  
- [ ] Vérification des fuites mémoire (si applicable).

---

Si tu veux, je peux te générer **automatiquement un README complet** formaté (Markdown) avec des sections personnalisées (objectif, planning, exemples) **et** une version **PDF/printable** de la fiche de révision. Veux-tu que je fasse cela ?
::contentReference[oaicite:4]{index=4}
