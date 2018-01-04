
/*
// R N G odz

function random(min, max) {
	return Math.floor(Math.random() * (max - min + 1)) + min;
}

var x = random(1, 120);
console.log(x);
if (x > 5) {
	console.log("above 5");
}



// more closure / RrNnGg

function animal() {
	let newObject, words;
	words = ["food!", "sleep!", "video games!"];
	function speak() {
		let say = words[random(0, 2)];
		console.log(say);
	}
	newObject = {};
	newObject.speak = speak;
	return newObject;
}

let cat = beast ({
	say: "meow",
	fur: "black"
});

function beast(config) {
	var newObject = {
		legs: 4,
		eye: 2,
		claws: true,
		speak() {
			console.log(this.say);
		}
	};
	Object.assign(newObject, config);
	return newObject;
}

console.log(Object.keys(cat));
cat.speak();
cat.say = "i'll eat yo face!";
cat.speak();
*/

// multiple objects
/*
function robot() {
	return {
		skill: "vaporizing death ray"
	};
}

function human() {
	return {
		hobby: "bake cookies"
	};
}

function cyborg() {
	let newObject = {};
	Object.assign(newObject, robot());
	Object.assign(newObject, human());

	function speak() {
		console.log("I like to " + this.hobby + " using a " + this.skill);
	}
	newObject.speak = speak;
	return newObject;
}

let zorb = cyborg();
zorb.speak();

// new class of animal

class Animal {
	constructor() {
		this.legs = 4;
		this.eyes = 2;
		this.say = "grrrowl"
	}
	speak() {
		console.log(this.say);
	}
}

let cat = new Animal();
cat.speak();
console.log(Object.keys(cat));
*/

class Monster {
	constructor(hitPoints, scariness) {
		this.name = "Monster";
		this.hitPoints = hitPoints;
		this.scariness = scariness;
	}
	speak() {
		console.log(
				`I'm a ${this.scariness}
				scary ${this.name}
				with ${this.hitPoints} hit points`
				);
	}
	attck(skill) {
		console.log(`The ${this.name} attacks with ${skill}!`);
		}
	}

class Dragon extends Monster {
	constructor(hitPoints, scariness, weapon) {
		super(hitPoints, scariness);
		this.name = "Dragon";
		this.weapon = weapon;
	}
	breatheFire () {
		super.attack(`flaming ${this.weapon}`);
	}
}

let fluffy = new Dragon(10, "somewhat", "furballs");
fluffy.speak();

function myRng(x) {
	let hp = random(1, 10);
	let scary = ["massively", "somewhat", "not very"];
	let level = scary[random(0, 2)];
	let weapon = ["furballs", "sword", "snot rag"];
	let wpn = weapon[random(0, 2)];
	return x = new Dragon(hp, level, wpn);
}

let sparky = myRng();
sparky.speak();



function random(min, max) {
	return Math.floor(Math.random() * (max - min + 1)) + min;
}























































