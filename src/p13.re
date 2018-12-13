/*
    26. Generate the combinations of K distinct objects chosen from the N elements of a list. (medium)
    In how many ways can a committee of 3 be chosen from a group of 12 people?
    We all know that there are C(12,3) = 220 possibilities (C(N,K) denotes the well-known binomial coefficients).
    For pure mathematicians, this result may be great. But we want to really generate all the possibilities in a list.

    e.g. solve(["a","b","c","d"], 2) = [["a", "b"], ["a", "c"], ["a", "d"], ["b", "c"], ["b", "d"], ["c", "d"]]
 */
open Data;

let solve = (list, combination) => list;

printAnswer(solve(["a", "b", "c", "d"], 3));
