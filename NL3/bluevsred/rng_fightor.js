

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
fluffy.speak();

function dragonRngCreate(x) {
	let hp = random(1, 10);
	let scary = ["massively", "somewhat", "not very"];
	let level = scary[random(0, 2)];
	let weapon = ["flame breath", "flame breath + fire shield", "flame breath, fire shield, aura"];
	let wpn = weapon[random(0, 2)];
	return x = new Dragon(hp, level, wpn);
}

let sparky = dragonRngCreate();
sparky.speak();

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
seth.speak();

let guy = new fightOR();
guy.speak();


































































