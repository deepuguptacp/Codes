let game = {}; // Object

game.rooms = ["Library", "Lab", "Pool", "Dining", "Class Room", "Court"]; // Property of the object game

game["weapons"] = [
  // Property of the object game
  { type: "Rod", location: "Storage" },
  { type: "Ball", location: "Court" },
  { type: "Stick", location: "Storage" },
];

game.murderer = "??";

game.characters = []; // Property of the object game
game.characters.push("Peter");
game.characters.push("Parker");
game.characters.push("Johnson");

// Using Destructuring

let { name, room, weapon } = { name: "Peter", weapon: "Ball", room: "Kitchen" };

let suspects = [
  {
    name: "Peter",
    color: "Red",
  },
  {
    name: "Parker",
    color: "Orange",
  },
];
let [color1, color2] = [suspects[0].color, suspects[1].color];
let [{ color: firstColor }, { color: secondColor }] = suspects;
console.log(color1);
console.log(color2);
