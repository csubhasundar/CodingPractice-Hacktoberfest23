/** @format */

const characters = [
  "A",
  "B",
  "C",
  "D",
  "E",
  "F",
  "G",
  "H",
  "I",
  "J",
  "K",
  "L",
  "M",
  "N",
  "O",
  "P",
  "Q",
  "R",
  "S",
  "T",
  "U",
  "V",
  "W",
  "X",
  "Y",
  "Z",
  "a",
  "b",
  "c",
  "d",
  "e",
  "f",
  "g",
  "h",
  "i",
  "j",
  "k",
  "l",
  "m",
  "n",
  "o",
  "p",
  "q",
  "r",
  "s",
  "t",
  "u",
  "v",
  "w",
  "x",
  "y",
  "z",
  "0",
  "1",
  "2",
  "3",
  "4",
  "5",
  "6",
  "7",
  "8",
  "9",
  "~",
  "`",
  "!",
  "@",
  "#",
  "$",
  "%",
  "^",
  "&",
  "*",
  "(",
  ")",
  "_",
  "-",
  "+",
  "=",
  "{",
  "[",
  "}",
  "]",
  ",",
  "|",
  ":",
  ";",
  "<",
  ">",
  ".",
  "?",
  "/",
];

let password1El = document.querySelector("#password1");
let password2El = document.querySelector("#password2");
let passlengthEl = document.querySelector("#pass-length");
let length = 8;

passlengthEl.textContent = "Length = " + length;

function addPassLength() {
  length += 1;
  passlengthEl.textContent = "Length = " + length;
}

function subtractPassLength() {
  if (length > 1) {
    length -= 1;
  }
  passlengthEl.textContent = "Length = " + length;
}

function generatePass() {
  password1El.textContent = "";
  password2El.textContent = "";

  for (let i = 1; i <= length; i++) {
    let pass = Math.floor(Math.random() * characters.length);
    password1El.textContent += characters[pass];
  }

  for (let i = 1; i <= length; i++) {
    let pass = Math.floor(Math.random() * characters.length);
    password2El.textContent += characters[pass];
  }
}
