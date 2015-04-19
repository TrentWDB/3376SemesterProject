class BoolSource

{
private:
float landchance;
float takeoffchance;
public:
BoolSource(int lchance, int tchance);
bool addToTakeoffQueue();
bool addToLandingQueue();
};
