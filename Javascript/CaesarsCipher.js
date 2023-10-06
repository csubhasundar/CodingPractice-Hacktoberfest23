// One of the simplest and most widely known ciphers is a Caesar cipher, also known as a shift cipher. In a shift cipher the meanings of the letters are shifted by some set amount.
// A common modern use is the ROT13 cipher, where the values of the letters are shifted by 13 places. Thus A ↔ N, B ↔ O and so on.
// Write a function which takes a ROT13 encoded string as input and returns a decoded string.
// All letters will be uppercase. Do not transform any non-alphabetic character (i.e. spaces, punctuation), but do pass them on.

//This is my solution to Caesars Cipher//

function rot13(str) {

  const arr13 = ['N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M']
  const arr= ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
  const resultArr = []

  const arr13Index = arr13.indexOf(str[0])
  // console.log(arr13Index)
  const arrIndex = arr[arr13Index]
  // console.log(arrIndex)

  for(let i = 0; i < str.length; i++) {
    
    let arr13Index = arr13.indexOf(str[i])
    let arrIndex = arr[arr13Index]
    
    if(arr13Index < 0) {
      resultArr.push(str[i])
    } else
    // console.log(arr13Index)
    if(arr13Index >= 0) {
      resultArr.push(arrIndex)
    } else {
      resultArr.push(" ")
    }
    console.log(resultArr.join(''))
  }  

  return resultArr.join('')
}

rot13("SERR PBQR PNZC")
rot13("SERR CVMMN!")
rot13("SERR YBIR?")
rot13("GUR DHVPX OEBJA SBK WHZCF BIRE GUR YNML QBT.")