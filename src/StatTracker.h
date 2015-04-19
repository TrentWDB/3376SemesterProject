class StatTracker {
private:
static float avglandtime, avgtaketime;
static int landcount, takecount, crashcount;
public:
static void addLanding(int waittime);
static void addTakeoff(int waittime);

};
