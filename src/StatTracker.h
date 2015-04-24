class StatTracker {
private:
  static float totalLandTime, totalTakeoffTime;
  static int landcount, takecount, crashcount;
public:
  static void addLanding(int waittime);
  static void addTakeoff(int waittime);
  static void addCrash();
};
