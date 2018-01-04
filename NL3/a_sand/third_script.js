
let room = {
	door: "open",
	light: "on",
	contents: ["carpet", "mouse", "katana"]
};

console.log(Object.keys(room));

Object.keys(room).forEach(key => {
	let value = room[key];
	console.log("key: " + key + ", value: " + value);
});




// make an array and assign the values to another array for 2d

let stats = [16, 170, 10];
let [age, height, grade] = stats;

console.log(`Age: ${age} Height: ${height} Grade: ${grade}`);



// object.defineProperty //

let jar = {};
Object.defineProperty(jar, "cookies", {
	get() {
		return this.value;
	},
	set(newValue) {
		if (newValue >= 0 && newValue <= 10) {
			this.value = newValue;
		} else {
			throw new Error("Number should be between 0 and 10");
		}
	},
	enumerable: true,
	configurable: true
});

jar.cookies = 10;
console.log(jar);



// creating objects

let bird = {
	legs: 2,
	eyes: 2,
	speak() {
		console.log("Chirp!");
	}
};

bird.speak();
bird.canFly = true;
console.log(bird.canFly);
bird.wings = 2;
console.log(bird.wings);



/* newProp funct

makeNewProp(bird, "beak", 1);

function makeNewProp(object, propName, value) {
	object[propName] = value;
}
*/

// make templates from previous code

function animal() {
	return {
		legs: 4,
		eyes: 2,
		ears: 2,
		say: "Wtf!?",
		speak() {
			console.log(this.say);
		}
	};
}

var cat = animal();

cat.speak();
cat.say = "Wtf!?... I mean Meow!";
cat.speak();


// R N G odz

function random(min, max) {
	return Math.floor(Math.random() * (max - min + 1)) + min;
}

var x = random(1, 10);
console.log(x);
if (x > 5) {
	console.log("above 5");
}






















