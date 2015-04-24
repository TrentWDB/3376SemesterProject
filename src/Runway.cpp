#include "Runway.h"
bool Runway::isOccupied(){
	if(timeleft>0) return true;
	return false;
}
void Runway::addPlane(int completiontime){
	timeleft=completiontime;
}
void Runway::stepMinute(){
	--timeleft;
}
