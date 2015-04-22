#ifndef PLANEQUEUE_H
#define PLANEQUEUE_H

#include <list>
#include "Plane.h"
using namespace std;

class PlaneQueue {
private:
    list<Plane> planeList;

public:
    void queue(Plane& plane);
    Plane& dequeue();
    int getQueueLength();
};

#endif
