console.log('Hello World!');

//Variables
let name = 'Deepu';
console.log(name);
let lastName = 'Gupta';
console.log(lastName);

//Constants
let interestRate = 10.2;    // can be reassigned
const rate = 10.2;          // can't be reassigned
console.log(interestRate);
console.log(rate);

// Primitive Types
let firstName = 'Deepu';    // string
let age = 21;               // number
let isApproved = true;      // boolean
let middleName = null;      // null (type is an Object)

// Object
    // {} :- object literal
let person = {
    name: 'Deepu',
    age: 22
};
// dot notation {short and consize :- default choice}
person.name = 'Pavan';
// bracket notation
person['age'] = 25;
console.log(person.name);

// Arrays (Almost same as cpp)
    // [] :- Array literal
let favFood = ['Pizza', 'Burger', 'Paratha', 'Chicken'];
console.log(favFood);
favFood[4] = 'Biryani';
console.log(favFood.length);

// Functions
function welcome(name){
    console.log(`WELCOME ${name}!`);
}
welcome(firstName);
welcome('Pavan');

// Factorial Recurssive function call
function factorial(num){
    if(num <= 1){
        return num;
    }
    return num * factorial(num - 1);
}
let result = factorial(5);
console.log(result);

//Multi Parameter passing into Function
function greater(num1, num2){
    if(num1 > num2){
        return num1;
    }
    return num2;
}
console.log(greater(40, 20));

// Object Oriented Programming
let employee = {
    baseSalary: 30_000,
    overtime: 10,
    rate: 2,
    getWage : function(bonus){
        return this.baseSalary + (this.overtime * this.rate) + bonus;
    }
};
console.log(employee.getWage(3));

//Factory Function
function createCircle(radius){
    return {
        radius,             // If the name of variable and value is same we can write radius = radius as simply radius.
        draw: function(){
            console.log('Draw');
        }
    };
}
const circle = createCircle(1);

// Constructor Function
function Circle(radius) {           // COnstructors naming convention
    this.radius = radius;
    this.draw = function(){
        console.log('Draw');
    }
}
const anotherCircle = new Circle(1);    // also written as Circle.call({}, 1);
anotherCircle.location = { x: 1 }       // Adding a Property
delete anotherCircle.location;          // Deleteing a property

for(let key in anotherCircle){          // Enumerating the object
    console.log(key, anotherCircle[key]);
}

for(let key in anotherCircle){          // Enumerating the object only for properties
    if(typeof anotherCircle[key] != 'function')
        console.log(key, anotherCircle[key]);
}

if('radius' in anotherCircle){          // Checking for properties
    console.log('Circle has radius');
}

// References

let x = { value: 10};   // x being an object
let y = x;              // y.value = 10 at the moment but here reference of x is copied to y
x.value = 20;           // x value is change thus the y value bcz x.value is reference to some memory location

// Conclusion : Primitives are copied by value while Objects are copied by references.

// How to hide the details ABSTRACTION
// For hiding purpose we basically declare the properties as local variables
function Square(side) {
    this.side = side;
    let location = { x: 1, y: 1};       // Abstracted or Hidden
    let computeOptimalLocation = function(factor){
        //......
    }
    this.draw = function(){
        computeOptimalLocation(0.1);
        console.log('draw');
    };
    // if we want to read the private members from otside
    Object.defineProperty(this, 'location', {
        get: function(){
            return location;
        }                   // can be set using set: function(value){ location = value; }
    });
}
const square = new Square(1);
console.log(square.location);

