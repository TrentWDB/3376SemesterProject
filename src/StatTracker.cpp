#include "StatTracker.h"
void addLanding(int waittime){
  landCount++;
}
void addTakeoff(int waittime){
  takeCount++;
}
void addCrash(){
  crashcount++;
}
int getTotalLandings(){
  return landCount;
}
int getTotalTakeoffs(){
  return takeCount;
}
int getTotalCrashes(){
  return crashCount;
}
float getAvgLandTime(){
  return ((float)totalLandTime)/landCount;
}
float getAvgTakeoffTime(){
  return ((float)totalTakeoffTime)/takeCount;
}
