let printAnswer = derp =>
  Js.Json.stringifyAny(derp)
  ->Option.mapWithDefault("", Js.String.replace(" ", ""))
  ->Js.log;

let p1 = [
  "late",
  "night",
  "programming",
  "is",
  "very",
  "very",
  "fun",
  "it",
  "just",
  "so",
  "happens",
  "thats",
  "what",
  "we",
  "did",
  "to",
  "prepare",
  "for",
  "this",
  "dojo",
];

let p2 = List.concatMany([|p1, p1, p1|]);

let p3 = List.keep(p2, someString => !Js.String.includes("at", someString));

let p4 = ["d", "e", "s", "r", "e", "v", "e", "r"];

let p5 = ["x", "y", "z", "z", "t", "u", "i", "u", "t", "z", "y", "x"];

let p6 = [
  "its",
  "so",
  "so",
  "so",
  "very",
  "very",
  "very",
  "amazing",
  "amazing",
  "amazing",
  "amazing",
  "amazing",
  "amazing",
  "amazing",
  " ",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
  "What is the meaning of life?",
];

let p7 = p6;

let p8 = ["this", "list", "is", "a", "string"];

let p12 = [
  1,
  3,
  5,
  7,
  9,
  0,
  2,
  5,
  34,
  6,
  9,
  3,
  7,
  2,
  5,
  7,
  2,
  3,
  56,
  567,
  23,
  5,
  0,
];
