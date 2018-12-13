/*
    96. Syntax checker. (medium)
    In a certain programming language (Ada) identifiers are defined by the syntax diagram (railroad chart) opposite.
    Transform the syntax diagram into a system of syntax diagrams which do not contain loops; i.e. which are purely recursive.
    Using these modified diagrams, write a function identifier : string -> bool that can check whether or not a given string is a legal identifier.
 */
open Data;

let solve = identifier => true;

printAnswer([
  solve("this-is-a-long-identifier"),
  solve("this-ends-in-"),
  solve("two--hyphens"),
  solve("-dash-first"),
]);
