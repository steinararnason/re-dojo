/*
    Given two lists, return a list with all elements that are unique to both lists
    In a certain programming language (Ada) identifiers are defined by the syntax diagram (railroad chart) opposite.
    Transform the syntax diagram into a system of syntax diagrams which do not contain loops; i.e. which are purely recursive.
    Using these modified diagrams, write a function identifier : string -> bool that can check whether or not a given string is a legal identifier.
 */
open Data;

let solve = (listA, listB) => [];

printAnswer([
  solve(["a", "b", "c"], ["c", "d", "e"]),
  solve(["a", "b", "c"], []),
  solve([], ["c", "d", "e"]),
]);
