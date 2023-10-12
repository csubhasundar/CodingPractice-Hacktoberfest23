<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <meta name="viewport",content="width=device-width,intial-scale=1.0">
        <title>Snake Game</title>
        <link rel="stylesheet" href="snake.css">
        
    </head>
    <body>
        <h1>Snake game</h1>
        <canvas id="board"></canvas>
        <script> 
  //board
var blocsize=25;
var l=20;
var c=20;
var board, context;
//snakehead
var snakeX=blocsize*5;
var snakeY=blocsize*5;
var velocityX=0;
var velocityY=0;
//var snakeBody[];
//food
var foodX;
var foodY;
window.onload=function(){
    board=document.getElementById("board");
    board.height=l*blocsize;
    board.width=c*blocsize;
    context=board.getContext("2d");
    placeFood();
    document.addEventListener("keyup",changeDirection);
    //update();
    setInterval(update,1000/10);
}
function update(){
    //board_styling
    context.fillStyle="black";
    context.fillRect(0,0,board.width,board.height);
    //food_style
    context.fillStyle="red";
    context.fillRect(foodX,foodY,blocsize,blocsize);

    if(snakeX==foodX && snakeY==foodY){
        snakeBody.push([foodX,foodY]);
        placeFood();
    }
    //head_snake_style
    context.fillStyle="lime"; // the problem is here ..the snake doessn't move :(
    snakeX += velocityX * blocsize;
    snakeY += velocityY * blocsize;
    context.fillRect(snakeX, snakeY, blocsize, blocsize);

    /*for(let i=0;i<snakeBody.length;i++){
        context.fillRect(snakeBody[i][0],snakeBody[i][1],blocsize,blocsize);
    }*/
    
}
function placeFood(){
    foodX=Math.floor(Math.random(foodX)*c)*blocsize;
    foodY=Math.floor(Math.random(foodY)*l)*blocsize;
}
function changeDirection(e){
    if(e.code=="ArrowUp" && velocityY!=1){
        velocityX=0;
        velocityY=-1;
    }
    else if(e.code=="Arrowdown" && velocityY!=-1){
        velocityX=0;
        velocityY=1;
    }
    else if(e.code=="Arrowleft" && velocityX!=1){
        velocityX=-1;
        velocityY=0;
    }
    else if(e.code=="Arrowright" && velocityX!=-1){
        velocityX=1;
        velocityY=0;
    }

}
  </script>
    </body>
</html>
