class Runway
{
private:
	int timeleft;
public:
	bool isOccupied();
	void addPlane(int completiontime);
	void stepMinute();
};
