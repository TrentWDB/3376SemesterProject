#ifndef STATTRACKER_H
#define STATTRACKER_H

class StatTracker {
private:
  static int totalLandTime, totalTakeoffTime;
  static int landCount, takeCount, crashCount;
public:
  static void addLanding(int waittime);
  static void addTakeoff(int waittime);
  static void addCrash();
  static int getTotalLandings();
  static int getTotalTakeoffs();
  static int getTotalCrashes();
  static float getAvgLandTime();
  static float getAvgTakeoffTime();
};

#endif
