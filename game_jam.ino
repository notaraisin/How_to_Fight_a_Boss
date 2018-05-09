#include "sprites.h"

#include <Arduboy2.h>
Arduboy2 arduboy;

//variables
int gamestate = 0;
int justpressed = 0;
int abuffer;
int bbuffer;
int upbuffer;
int downbuffer;
int leftbuffer;
int rightbuffer;

void setup() {
// start up the Arduboy
arduboy.begin();

// game is 60 fps
arduboy.setFrameRate(60);

//buffers so that the game won't speed through when a button is pressed
abuffer = 0;

bbuffer = 0;

upbuffer = 0;

downbuffer = 0;

leftbuffer = 0;

rightbuffer = 0;

// clear the screen
arduboy.clear();

};

void loop() {
  // clear the screen
  arduboy.clear();

  //different game states, switched when buttons are pressed
  switch (gamestate) {
    //title screen
    case 0:
    arduboy.drawBitmap(0 ,0, screen2, 128, 64, WHITE);

    if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
      abuffer = 1;
      gamestate = 1;
    }

    break;
    
    case 1:
      arduboy.drawBitmap(0, 0, planet, 128, 64, WHITE);
      arduboy.drawBitmap(5, 15, child1, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien1, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text1, 128, 16, WHITE);
      
      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 2;
      }
      
      break;
      
     case 2:
      arduboy.drawBitmap(0, 0, planet, 128, 64, WHITE);
      arduboy.drawBitmap(5, 15, child1, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien1, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text2, 128, 16, WHITE);
      
      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 3; 
      }
      
      break;
      
      case 3:
      arduboy.drawBitmap(0, 0, planet, 128, 64, WHITE);
      arduboy.drawBitmap(5, 15, child1, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien1, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text3, 128, 16, WHITE);
      
      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 4;
      }
      
      break;

      case 4:
      arduboy.drawBitmap(0, 0, planet, 128, 64, WHITE);
      arduboy.drawBitmap(5, 15, child2, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien2, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text4, 128, 16, WHITE);
      
      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 5;
      }
      
      break;
      
      case 5:
      arduboy.drawBitmap(0, 0, planet, 128, 64, WHITE);
      arduboy.drawBitmap(5, 15, child1, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien1, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text5, 128, 16, WHITE);
      
      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 6;
      }
      
      if(arduboy.pressed(B_BUTTON) and bbuffer == 0) {
        bbuffer = 1;
        gamestate = 7;
      }
      
      break;

      case 6:
      arduboy.drawBitmap(0, 0, planet, 128, 64, WHITE);
      arduboy.drawBitmap(5, 15, child1, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien1, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text6, 128, 16, WHITE);
      
      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(B_BUTTON) and bbuffer == 0) {
        bbuffer = 1;
        gamestate = 8;
      }
      
      break;

      //losing screen
      case 7:
      arduboy.drawBitmap(0, 0, screen1, 128, 40, WHITE);
      arduboy.drawBitmap(0, 49, text7, 128, 16, WHITE);

      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 1;
      }

      break;

      case 8:
      arduboy.drawBitmap(0, 0, planet, 128, 64, WHITE);
      arduboy.drawBitmap(5, 15, child1, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien3, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text8, 128, 16, WHITE);

      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 9;
      }

      break;

      case 9: 
      arduboy.drawBitmap(5, 15, child3, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien4, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text9, 128, 16, WHITE);

      if(arduboy.pressed(B_BUTTON) and bbuffer == 0) {
        bbuffer = 1;
        gamestate = 10;
      }

      if(arduboy.pressed(UP_BUTTON) and upbuffer == 0) {
        upbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(DOWN_BUTTON) and downbuffer == 0) {
        downbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(LEFT_BUTTON) and leftbuffer == 0) {
        leftbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(RIGHT_BUTTON) and rightbuffer == 0) {
        rightbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 7;
      }
      
      break;

      case 10:
      arduboy.drawBitmap(5, 15, child1, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien3, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text10, 128, 16, WHITE);

      if(arduboy.pressed(B_BUTTON) and bbuffer == 0) {
        bbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(UP_BUTTON) and upbuffer == 0) {
        upbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(DOWN_BUTTON) and downbuffer == 0) {
        downbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(LEFT_BUTTON) and leftbuffer == 0) {
        leftbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(RIGHT_BUTTON) and rightbuffer == 0) {
        rightbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 11;
      }

      break;
  
      case 11:
      arduboy.drawBitmap(5, 15, child4, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien4, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text11, 128, 16, WHITE);

      if(arduboy.pressed(B_BUTTON) and bbuffer == 0) {
        bbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(UP_BUTTON) and upbuffer == 0) {
        upbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(DOWN_BUTTON) and downbuffer == 0) {
        downbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(LEFT_BUTTON) and leftbuffer == 0) {
        leftbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(RIGHT_BUTTON) and rightbuffer == 0) {
        rightbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 12;
      }

      break;

      case 12:
      arduboy.drawBitmap(5, 15, child4, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien4, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text12, 128, 16, WHITE);

      if(arduboy.pressed(B_BUTTON) and bbuffer == 0) {
        bbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(UP_BUTTON) and upbuffer == 0) {
        upbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(DOWN_BUTTON) and downbuffer == 0) {
        downbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(LEFT_BUTTON) and leftbuffer == 0) {
        leftbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(RIGHT_BUTTON) and rightbuffer == 0) {
        rightbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 13;
      }

      break;

      case 13:
      arduboy.drawBitmap(5, 15, child4, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien4, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text13, 128, 16, WHITE);

      if(arduboy.pressed(B_BUTTON) and bbuffer == 0) {
        bbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(UP_BUTTON) and upbuffer == 0) {
        upbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(DOWN_BUTTON) and downbuffer == 0) {
        downbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(LEFT_BUTTON) and leftbuffer == 0) {
        leftbuffer = 1;
        gamestate = 14;
      }

      if(arduboy.pressed(RIGHT_BUTTON) and rightbuffer == 0) {
        rightbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 7;
      }

      break;

      case 14:
      arduboy.drawBitmap(5, 15, child5, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien4, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text14, 128, 16, WHITE);

      if(arduboy.pressed(B_BUTTON) and bbuffer == 0) {
        bbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(UP_BUTTON) and upbuffer == 0) {
        upbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(DOWN_BUTTON) and downbuffer == 0) {
        downbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(LEFT_BUTTON) and leftbuffer == 0) {
        leftbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(RIGHT_BUTTON) and rightbuffer == 0) {
        rightbuffer = 1;
        gamestate = 15;
      }

      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 7;
      }

      break;

      case 15:
      arduboy.drawBitmap(5, 15, child4, 32, 32, WHITE);
      arduboy.drawBitmap(85, 13, alien5, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text15, 128, 16, WHITE);

      if(arduboy.pressed(B_BUTTON) and bbuffer == 0) {
        bbuffer = 1;
        gamestate = 16;
      }

      if(arduboy.pressed(UP_BUTTON) and upbuffer == 0) {
        upbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(DOWN_BUTTON) and downbuffer == 0) {
        downbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(LEFT_BUTTON) and leftbuffer == 0) {
        leftbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(RIGHT_BUTTON) and rightbuffer == 0) {
        rightbuffer = 1;
        gamestate = 7;
      }

      if(arduboy.pressed(A_BUTTON) and abuffer == 0) {
        abuffer = 1;
        gamestate = 7;
      }

      break;

      case 16:
      arduboy.drawBitmap(0, 0, planet, 128, 64, WHITE);
      arduboy.drawBitmap(5, 15, child3, 32, 32, WHITE);
      arduboy.drawBitmap(0, 49, text15, 128, 16, WHITE);

      if(arduboy.pressed(A_BUTTON) == true and abuffer == 0) {
        abuffer = 1;
        gamestate = 17;
      }

      break;

      case 17:
      arduboy.drawBitmap(0, 0, screen3, 128, 64, WHITE);
      
  }     
    if(arduboy.notPressed(A_BUTTON) == true) {
      abuffer = 0;
    }

    if(arduboy.notPressed(B_BUTTON) == true) {
      bbuffer = 0;
    }

    if(arduboy.notPressed(UP_BUTTON) == true) {
      upbuffer = 0;
    }

    if(arduboy.notPressed(DOWN_BUTTON) == true) {
      downbuffer = 0;
    }

    if(arduboy.notPressed(LEFT_BUTTON) == true) {
      leftbuffer = 0;
    }

    if(arduboy.notPressed(RIGHT_BUTTON) == true) {
      rightbuffer = 0;
    }
  
  arduboy.display();
  };
