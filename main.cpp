#include <iostream>
using namespace std;

int main(){
  
  intialiseVariables(); // Intialise variables e.g. Money, crewmembers, supplies, provisions etc...
  SpeechObject speechOne;
  speechOne.playSpeech(1);// Start the introductory speech
  Shop firstShop(1, "RandomShopOne", 3); // arg[1] is shop size, argu[2] is shop name, args[3] is amount of items in shop
  getCrew(); // Crew hire shop - 500 each btw, and 60 provisions a month - will work through - maybe have a getSpech as well
  initiateGame(); //go to main game function that'll set off everything after this!
  
  
  return 0;

}
