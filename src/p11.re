/*
    7. Flatten a nested list structure. (medium)
 */
open Data;

type node('a) =
  | One('a)
  | Many(list(node('a)));

let solve = list => list;

printAnswer(
  solve([
    One("a"),
    Many([One("b"), Many([One("c"), One("d")]), One("e")]),
  ]),
);
