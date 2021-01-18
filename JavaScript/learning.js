const murderGame = {
  suspects: [
    {
      name: "Peter",
      weapon: "Ball",
    },
    {
      name: "Scarlet",
      weapon: "Laser",
    },
  ],
};

let gameLoop = function () {
  for (let i = 0; i < murderGame.suspects.length; i++) {
    console.log("Outer loop");
    for (var key in murderGame.suspects[i]) {
      console.log("Inner Loop");
      if (murderGame.suspects[i][key] === "Peter") {
        console.log("Found him!");
      } else {
        console.log("Next Time !");
      }
    }
  }
};

//gameLoop();

// _.each/forEach function
// _.each = function(list, callback){}
const _ = {};

_.each = function (list, callback) {
  if (Array.isArray(list)) {
    // true
    for (let i = 0; i < list.length; i++) {
      // Call the callback with list item
      callback(list[i], i, list);
    }
  } else {
    // Loop through the object
    for (var key in list) {
      // Call the callback with list item
      callback(list[key], key, list);
    }
  }
};

_.each(["Hanuman", "Ram", "Laxman", "Bharat"], function (name, i, list) {
  if (list[i + 1]) {
    console.log(name, "is younger than", list[i + 1]);
  } else {
    console.log(name, "is the youngest");
  }
});

// MAP FUNCTION
// _.map()/.map() function
_.map = function (list, callback) {
  let storage = [];
  for (var key in list) {
    storage.push(callback(list[key], key, list));
  }
  console.log(storage); // return storage
};
_.map([1, 2, 3], function (v) {
  return v + 1;
});
