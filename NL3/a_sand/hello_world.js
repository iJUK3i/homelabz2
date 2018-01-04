let say = "hello";
let outer = "An outer variable";

if (say === "hello") {
	let say = "goodbye";

	console.log(say);

	console.log(outer);

	let inner = "an inner var";
	console.log(inner);
	//
}

console.log(say);

let inner = ([a, b] = [2, 4], {x: c} = {x: a + b}) => a + b + c;
console.log(inner());
