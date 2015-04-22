#include "PlaneQueue.h"
using namespace std;

void PlaneQueue::queue(Plane& plane)
{
    planeList.push_back(plane);
    return;
}

Plane& PlaneQueue::dequeue()
{
    Plane& tempPlane = planeList.front();
    planeList.pop_front();

    return tempPlane;
}

int PlaneQueue::getQueueLength()
{
    return planeList.size();
}
