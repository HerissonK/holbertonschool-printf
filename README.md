# _printf

Une ré-implémentation personnalisée de la fonction standard `printf` en langage C.

## 🎯 Objectif

Reproduire le comportement de `printf` (version standard C) avec un ensemble limité de spécificateurs de format. Ce projet met en pratique :

- La manipulation de chaînes de caractères
- Les fonctions variadiques (`stdarg.h`)
- Les pointeurs vers fonctions
- Le design modulaire en C

## 📦 Fonctionnalités

Actuellement, la fonction `_printf` supporte les spécificateurs suivants :

| Spécificateur | Description               |
|---------------|---------------------------|
| `%c`          | Affiche un caractère       |
| `%s`          | Affiche une chaîne         |
| `%%`          | Affiche le caractère `%`   |

⚠️ Le comportement est volontairement limité (projet pédagogique). La gestion de `%d`, `%i`, `%u`, `%x`, etc., peut être ajoutée ultérieurement.

## 🧪 Exemple d'utilisation

```c
#include "main.h"

int main(void)
{
    _printf("Hello %s!\n", "world");
    _printf("Character: %c\n", 'A');
    _printf("Percent: %%\n");
    return (0);
}
