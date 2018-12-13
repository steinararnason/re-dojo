/*
    6. Find out whether a list is a palindrome. (easy)
    HINT: a palindrome is its own reverse.

    Use a recursive function

    - You can use List.reverse
 */
open Data;

/* let solve = list => true; */

let solve = list => list == List.reverse(list);

printAnswer([
  solve(p5),
  solve([]),
  solve(["a", "b", "a", "b"]),
  solve(["a", "b", "b", "a"]),
]);
