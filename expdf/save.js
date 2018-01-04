let gameData = {
	playerName: "Rex",
	levelCompleted: 5,
	scored: 84,
	items: ["hat", "umbrella", "katana"]
};

let gameDataJSON = JSON.stringify(gameData);

localStorage.setItem("gameData", gameDataJSON);

