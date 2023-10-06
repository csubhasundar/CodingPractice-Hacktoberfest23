function calculateFactorial(number) {
    if (number === 0 || number === 1) {
      return 1;
    } else {
      return number * calculateFactorial(number - 1);
    }
  }


  var num = 5;
  const result = calculateFactorial(num);
  console.log(`Factorial of ${num} is: ${result}`);