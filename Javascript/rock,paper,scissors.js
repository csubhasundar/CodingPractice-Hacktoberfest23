//Rock,Paper,Scissor Program.
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

const options = ['rock', 'paper', 'scissors'];

function computerChoice() {
  return options[Math.floor(Math.random() * options.length)];
}

function playRound(playerChoice, computerChoice) {
  playerChoice = playerChoice.toLowerCase();

  if (!options.includes(playerChoice)) {
    return "Invalid choice. Please choose rock, paper, or scissors.";
  }

  if (playerChoice === computerChoice) {
    return "It's a tie!";
  }

  if (
    (playerChoice === 'rock' && computerChoice === 'scissors') ||
    (playerChoice === 'paper' && computerChoice === 'rock') ||
    (playerChoice === 'scissors' && computerChoice === 'paper')
  ) {
    return `You win! Computer chose ${computerChoice}.`;
  } else {
    return `Computer wins! Computer chose ${computerChoice}.`;
  }
}

function game() {
  rl.question('Choose rock, paper, or scissors: ', (playerChoice) => {
    const computer = computerChoice();
    console.log(`Computer chose ${computer}.`);
    console.log(playRound(playerChoice, computer));

    rl.question('Play another round? (yes/no): ', (answer) => {
      if (answer.toLowerCase() === 'yes') {
        game();
      } else {
        console.log('Thanks for playing!');
        rl.close();
      }
    });
  });
}

console.log('Welcome to Rock, Paper, Scissors!');
game();
