# Entraînement — 01_Exam_C-language

Simulateur d'examen 42 : 4 niveaux, un exercice tiré au hasard par niveau,
corrigé comme par la moulinette (compilation `-Wall -Wextra -Werror`,
fonctions autorisées, sortie comparée à une référence sur les exemples du sujet,
des cas limites et 25 tests aléatoires).

## Installation

Il faut `python3` et `cc`.

```sh
git clone https://github.com/UgoRastell/42-exam-rank02.git ~/42/exam
mkdir -p ~/.local/bin && ln -sf ~/42/exam/exam ~/.local/bin/exam   # ~/.local/bin doit être dans le PATH
exam start
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
