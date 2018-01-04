

function random(min, max) {
	return Math.floor(Math.random() * (max - min + 1)) + min;
}


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
//fluffy.speak();

function dragonRngCreate(x) {
	let hp = random(1, 10);
	let scary = ["massively", "somewhat", "not very"];
	let level = scary[random(0, 2)];
	let weapon = ["flame breath", "flame breath + fire shield", "flame breath, fire shield, aura"];
	let wpn = weapon[random(0, 2)];
	return x = new Dragon(hp, level, wpn);
}

let sparky = dragonRngCreate();
//sparky.speak();

























class Person {
	constructor(hitPoints, braveness) {
		this.name = "Person";
		this.hitPoints = hitPoints;
		this.braveness = braveness;
	}
	speak() {
			console.log(
					`I'm a ${this.braveness}
					 ${this.name}
					with ${this.hitPoints} health,
					and a ${this.weapon}!`
					);
	}
	skill() {
		console.log(
				`My skill is ${this.skill}`
				);
	}
}

class fightOR extends Person {
	constructor(hitPoints, braveness, weapon) {
	   super(hitPoints, braveness);
	   let hp = random(6, 20);
	   let howBrave = ["very brave", "kinda brave", "not very brave"];
	   this.hitPoints = hp;
	   this.braveness = howBrave[random(0, 2)];
	   let breed = ["Warrior", "Bitch", "Average person"];
	   this.name = breed[random(0, 2)];
	   let weapons = ["Dragon Sword", "Old Rusty Sword", "Wooden Pitchfork", "broom"];
	   this.weapon = weapons[random(0, 3)];
	}
}

let seth = new fightOR();
//seth.speak();

let guy = new fightOR();
//guy.speak();

let red = new fightOR();
let blue = new fightOR();


blue.speak();
console.log(blue);

red.speak();
console.log(red);


/*function statCheck() {
	if (blue["name"] === "Warrior") {
		console.log("He is a warrior!");
		return true;
	}
   	else {
		console.log("Nope no tough guys...");
		return false;
	}
}*/

console.log(blue["name"]);
//console.log(red["name"]);


makeFIGHT();
function makeFIGHT() {
	var x = 0;
	x = blueName(x);
	x = blueWpn(x);
	x = blueBrave(x);

console.log(x);

	var y = 0;
	y = redName(y);
	y = redWpn(y);
	y = redBrave(y);

console.log(y);



hp_blue = blue["hitPoints"];
hp_red = red["hitPoints"];

var fights = 0;
	while (hp_blue > 0 && hp_red > 0) {

	first = goFirst();
	if (first === "blue") {
		hp_red = blueAttack(x, hp_red);
	console.log("blue attacked");
	}
	else if (first === "red") {
		hp_blue = redAttack(y, hp_blue);
		console.log("red attacked");
	}
	else
		console.log("this shouldn't pop ever");
	fights++;
		}

console.log(fights);


console.log("this is the value of blue attack: " + x);	
console.log("this is the value of red attack: " + y);
console.log("on to the hp");
console.log("red hp after blue attack: " + hp_red);
console.log("blue hp after red attack: " + hp_blue);
console.log("blue had this before: " + blue["hitPoints"]);
console.log("red had this before: " + red["hitPoints"]);






}


console.log(blue);
console.log(red);



/*
function makeFight(x, y) {
*/
// still needs a fight function. a damage reduction function. a confirm function. an outcome function.
// also needs a defensive / offensive calc/stat



function redAttack(y, hp_blue) {
	hp_blue -= y;
	return hp_blue;
}


function blueAttack(x, hp_red) {
	hp_red -= x;
	return hp_red;
}























function redWpn (y) {
	var z = 0;
	if (red["weapon"] === "Dragon Sword")
		z = y + 6;
	else if (red["weapon"] === "Old Rusty Sword")
		z = y + 4;
	else if (red["weapon"] === "Wooden Pitchfork")
		z = y + 2;
	else
		z = y + 1;
	return z;
}

function blueWpn (x) {
	var z = 0;
	if (blue["weapon"] === "Dragon Sword")
		z = x + 6;
	else if (blue["weapon"] === "Old Rusty Sword")
		z = x + 4;
	else if (blue["weapon"] === "Wooden Pitchfork")
		z = x + 2;
	else
		z = x + 1;
	return z;
}


function blueName (x) {
	var z = 0;
		if (blue["name"] === "Warrior")
			z = x + 6;
		else if (blue["name"] === "Average person")
			z = x + 3;
		else
			z = x + 0;
		return z;
}

function redBrave (y) {
	var z = 0;
	if (red["braveness"] === "very brave")
		z = y + 3;
	else if (red["braveness"] === "kinda brave")
		z = y + 2;
	else
		z = y + 1;
	return z;
}

function blueBrave (x) {
	var z = 0;
	if (blue["braveness"] === "very brave")
		z = x + 3;
	else if (blue["braveness"] === "kinda brave")
		z = x + 2;
	else
		z = x + 1;
	return z;
}

function redName (y) {
	var z = 0;
	if (red["name"] === "Warrior")
		z = y + 6;
	else if (red["name"] === "Average person")
		z = y + 3;
	else
		z = y + 0;
	return z;
}




function goFirst(i) {

	let b = random(1, 100);
	let r = random(1, 100);
	if (b > r) {
		console.log("blue won");
		return "blue";
	}
	else {
		console.log("red won");
		return "red";
	}
}











































































