# 👋 hello_world

## 📘 Description  
Ce premier projet en C permet de découvrir les **fondamentaux du langage** et du **processus de compilation**.  
Il initie à l’écriture, à la compilation et à l’exécution d’un programme simple, tout en présentant les outils essentiels comme `gcc`, `printf` et les fonctions de la bibliothèque standard.

## 🎯 Objectifs pédagogiques  
- Comprendre le cycle de vie d’un programme C (édition, compilation, exécution)  
- Découvrir la fonction `main` et la syntaxe de base du C  
- Utiliser les commandes du compilateur `gcc`  
- Découvrir les premières fonctions d’affichage  

## 📂 Contenu du projet  

| Fichier | Description |
|----------|-------------|
| `0-preprocessor` | Exécute uniquement l’étape du préprocesseur et sauvegarde la sortie |
| `1-compiler` | Compile le code sans l’exécuter |
| `2-assembler` | Produit le code assembleur d’un fichier C |
| `3-name` | Compile et crée un exécutable nommé `cisfun` |
| `4-puts.c` | Programme qui affiche une phrase avec `puts` |
| `5-printf.c` | Programme qui affiche une phrase avec `printf` |
| `6-size.c` | Programme qui affiche la taille de différents types de données |
| `100-intel` | Produit le code assembleur au format Intel |
| `101-quote.c` | Programme qui affiche une phrase sur la sortie d’erreur |

## ⚙️ Compilation  
```bash
gcc -Wall -Werror -Wextra -pedantic <nom_du_fichier.c> -o <nom_exécutable>
```
🧠 Exemple
```bash
$ ./4-puts
"Programming is like building a multilingual puzzle"
```
