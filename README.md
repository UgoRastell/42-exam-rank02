# Entraînement — 01_Exam_C-language

Simulateur d'examen 42 : 4 niveaux, un exercice tiré au hasard par niveau,
corrigé comme par la moulinette (compilation `-Wall -Wextra -Werror`,
fonctions autorisées, sortie comparée à une référence sur les exemples du sujet,
des cas limites et 25 tests aléatoires).

## Installation

### Prérequis

- `git`
- `python3` (3.7 ou plus récent), sans aucune bibliothèque à installer
- `cc` (gcc ou clang) et `nm` (binutils, pour vérifier les fonctions autorisées)

Sur les postes de 42, tout est déjà installé.

### 1. Cloner le dépôt

```sh
git clone https://github.com/UgoRastell/42-exam-rank02.git ~/42/exam
```

Tu peux le cloner ailleurs : les dossiers `rendu/` et `subjects/` sont toujours
créés à côté du script `exam`.

### 2. Rendre la commande `exam` disponible partout

```sh
mkdir -p ~/.local/bin
ln -sf ~/42/exam/exam ~/.local/bin/exam
```

Si `~/.local/bin` n'est pas dans ton `PATH` (`exam` renvoie *command not found*),
ajoute-le puis ouvre un nouveau terminal :

```sh
echo 'export PATH="$HOME/.local/bin:$PATH"' >> ~/.zshrc    # ou ~/.bashrc
```

Sans lien, tu peux aussi lancer `~/42/exam/exam start` directement.

### 3. Vérifier

```sh
exam list     # doit afficher les 57 exercices
exam start    # démarre un examen au niveau 1
```

### Ne pas voir les solutions (VS Code)

Les sujets, les solutions et les tests sont dans le dossier caché `.exercises/`.
Pour ne pas tomber dessus dans VS Code, crée `.vscode/settings.json` dans le dossier :

```json
{
  "files.exclude": {
    ".exercises": true,
    ".state.json": true,
    "exam": true
  }
}
```

### Mettre à jour / désinstaller

```sh
cd ~/42/exam && git pull                     # mise à jour (ta progression est conservée)
rm -rf ~/42/exam ~/.local/bin/exam ~/.cache/42exam   # désinstallation
```

## Utilisation

```sh
exam start            # niveau 1, sujet tiré au hasard (exam start 3 pour commencer au niveau 3)
                       # ⚠ efface tout ce qui est dans rendu/ : nouvel examen, dossier vide
# écris ton code dans ~/42/exam/rendu/<exercice>/
exam grademe          # correction ; réussi → niveau suivant
exam status           # niveau, score, temps
exam trace            # détail du dernier échec (entrée, sortie attendue, obtenue)
exam skip             # autre exercice du même niveau
exam pick <nom>       # travailler un exercice précis
exam list             # les 57 exercices du Rank 02, ✓ ceux réussis
exam solution         # la référence (seulement après avoir vraiment essayé)
```

## En conditions d'examen

- pas d'internet, pas d'IA, pas de libft : juste `vim` ou VS Code, `cc` et ton cerveau ;
- `cc -Wall -Wextra -Werror` toi-même avant `exam grademe` ;
- teste avec tes propres `main` (hors du dossier `rendu`, ou supprime-les avant de rendre) ;
- pour une **fonction**, ne rends **pas** de `main`.

## Contenu

| Niveau | Exercices |
| --- | --- |
| 1 | first_word, fizzbuzz, ft_putstr, ft_strcpy, ft_strlen, ft_swap, repeat_alpha, rev_print, rot_13, rotone, search_and_replace, ulstr |
| 2 | alpha_mirror, camel_to_snake, do_op, ft_atoi, ft_strcmp, ft_strcspn, ft_strdup, ft_strpbrk, ft_strrev, ft_strspn, inter, is_power_of_2, last_word, max, print_bits, reverse_bits, snake_to_camel, swap_bits, union, wdmatch |
| 3 | add_prime_sum, epur_str, expand_str, ft_atoi_base, ft_list_size, ft_range, ft_rrange, hidenp, lcm, paramsum, pgcd, print_hex, rstr_capitalizer, str_capitalizer, tab_mult |
| 4 | flood_fill, fprime, ft_itoa, ft_list_foreach, ft_list_remove_if, ft_split, rev_wstr, rostring, sort_int_tab, sort_list |

Sujets : dépôt Dorad89/42_Common_Core_Exam_ProgrammingFundamentals_ExercisesWithAnswers
(rotone, ft_atoi et hidenp réécrits : le dépôt n'avait pas leur sujet).
Les solutions de référence de `.exercises/` sont réécrites et vérifiées
(celles du dépôt sont fausses pour 13 exercices).
19 exercices ajoutés depuis https://rank02.42exam.net/ (sujets du site, références et tests écrits ici).
