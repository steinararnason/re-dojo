/*
    11. Modified run-length encoding. (easy)

    It should a list of tuples that specifies how many occurrences in a row a certain string appears.

    Make use of the occurrences type.

    e.g.
    solve(["a","a","a","a","b","c","c","a","a","d","e","e","e","e"]) = [(4, "a"), ("b"), (2, "c"), (2, "a"), ("d"), (4, "e")]
 */
open Data;

type occurrences('a) =
  | One('a)
  | Many(int, 'a);

let solve = list => list;

printAnswer(solve(Data.p7));
