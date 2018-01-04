
// this function picks a random number between the (min, max) parameters using math.floor() to make that number a whole number. ex: 42 instead of 42.0843020238
function random(min, max) {
	return Math.floor(Math.random() * (max - min + 1)) + min;
}


// this creates the base monster class that will be expanded on
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


// here Dragon is created as a subclass of Monster it has all the monster attributes plus a couple specific to this sub class
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


// this is how you create a dragon. assign a variable to the value of the function and the newly created variable will have all the attributes of the monster/dragon classes
//	let fluffy = new Dragon(10, "somewhat", "furballs");
//	fluffy.speak();


// that was good and all but i didn't want to have to manually type in the values of the monster stats. so this is why i have the random(generator) created previously, so this will randomly create a dragon with different attributes randomly.

	function dragonRngCreate(x) {
		let hp = random(1, 10);
		let scary = ["massively", "somewhat", "not very"];
		let level = scary[random(0, 2)];
		let weapon = ["flame breath", "flame breath + fire shield", "flame breath, fire shield, aura"];
		let wpn = weapon[random(0, 2)];
		return x = new Dragon(hp, level, wpn);
	}


	// here you can see that creating a dragon is quick and the stats are random
//	let sparky = dragonRngCreate();
//  sparky.speak();
//
//  its all more of the same here now i create a person class and a subclass with attributes that i am going to use for fighting them later

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
	   let hp = random(15, 30);
	   let howBrave = ["very brave", "kinda brave", "not very brave"];
	   this.hitPoints = hp;
	   this.braveness = howBrave[random(0, 2)];
	   let breed = ["Warrior", "Bitch", "Average person"];
	   this.name = breed[random(0, 2)];
	   let weapons = ["Dragon Sword", "Old Rusty Sword", "Wooden Pitchfork", "broom"];
	   this.weapon = weapons[random(0, 3)];
	}
}


// that is pretty much it for the characters in this game so far. we have Monster>Dragons and Person/fightOR
// here i name red and blue and create them with random stats 


	let red = new fightOR();
	let blue = new fightOR();

// this pretty much gives the same stats in a different way
	blue.speak();
	console.log(blue);

	red.speak();
	console.log(red);



// this shows how to search for a specific stat on a char
//
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


// at first i was creating people to fight dragons but it just turned in to people vs people so now this function checks the random stats that were assigned previously to the blue person and the red person.
// so it checks each stat gives it a value and then adds them up to make the attack damage.

	makeFIGHT();
	function makeFIGHT() {
		var x = 0;
		x = blueName(x);
		x = blueWpn(x);
		x = blueBrave(x);

		var y = 0;
		y = redName(y);
		y = redWpn(y);
		y = redBrave(y);

console.log("blue: " + blue["name"] +" attack value: " + x);	
console.log("red: " + red["name"] + " attack value: " + y);


// the original hitPoints value that was assigned at creation is put in to a variable
		var hp_blue = blue["hitPoints"];
		var hp_red = red["hitPoints"];


// this is the loop that checks rng to see who will attack. it is NOT turn by turn. rng always decides who will attack

		var fights = 0;
		while (hp_blue > 0 && hp_red > 0) {
			first = goFirst();
			if (first === "blue") {
				hp_red = blueAttack(x, hp_red);
				if (hp_red <= 0)
					console.log("blue has slain red");
			}
			else if (first === "red") {
				hp_blue = redAttack(y, hp_blue);
				if (hp_blue <= 0)
					console.log("red has slain blue");
			}
			else if (first === "tie") {
				console.log("attacks collided and 0 damage was done");
			}
			fights++;
		}


console.log("this is the number of attacks total " + fights);
console.log("red hp after blue attack: " + hp_red);
console.log("blue hp after red attack: " + hp_blue);
console.log("blue had this before: " + blue["hitPoints"]);
console.log("red had this before: " + red["hitPoints"]);






}

function goFirst() {

	let b = random(1, 100);
	let r = random(1, 100);
	if (b > r) {
		console.log("blue attacked");
		return "blue";
	}
	else if (r > b) {
		console.log("red attacked");
		return "red";
	}
	else {
		return "tie";
	}
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













































































