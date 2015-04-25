#include "StatTracker.h"
using namespace std;

void StatTracker::addLanding(int waittime){
  landCount++; //Increments the number of Landings by one
}
void StatTracker::addTakeoff(int waittime){
  takeCount++; //Increments the number of takeoffs by one
}
void StatTracker::addCrash(){
  crashcount++; //Increments the number of crashes by one
}
int StatTracker::getTotalLandings(){ //Accessor function for 
  return landCount; 
}
int StatTracker::getTotalTakeoffs(){
  return takeCount;
}
int StatTracker::getTotalCrashes(){
  return crashCount;
}
float StatTracker::getAvgLandTime(){
  return ((float)totalLandTime)/landCount;
}
float StatTracker::getAvgTakeoffTime(){
  return ((float)totalTakeoffTime)/takeCount;
}
