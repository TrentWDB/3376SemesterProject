#include "StatTracker.h"
void addLanding(int waittime){
  landcount++;
}
void addTakeoff(int waittime){
  takecount++;
}
void addCrash(){
  crashcount++;
}
void getStats(){
  
