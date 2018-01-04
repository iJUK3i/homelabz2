let planets = ["jupiter", "venus", "saturn", "mars", "earth"];
for (let i = 0; i < planets.length; i++) {
	planet = planets[i];
	console.log(planet);
}

let races = ["black", "brown", "red", "yellow"];
races.forEach(race => console.log(race));

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

let index = planets.findIndex(x => x === "earth");
console.log(index);

let num2d = [[73, 12], [27, 14], [9, 3]];

let num1d = num2d.reduce(flatArray);
let err = num1d.findIndex(x => x === "73");
console.log(err);
function flatArray(a, b) {
	return a.concat(b);
}
