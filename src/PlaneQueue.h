#ifndef PLANEQUEUE_H
#define PLANEQUEUE_H

#include <list>

using namespace std;

class PlaneQueue {
  list<Plane> planeList;
  public:
    void queuePlane(Plane& plane);
    void dequeuePlane();
    int getQueueLength();
}

#endif
