#include <iostream>
#include <string>

class Team
{
	private:
    string name;
    string coachName;
    string homeCity;
    bool homeStatus;
		int score;
		int timeoutCount;
    

  public:
    Team() // default constructor
    {
      score = 0;
      homeStatus = false;
      name = "Default Team Name";
			coachName = "Coach Default";
			homeCity = "Default City";
			homeStatus = true;
			timeoutCount = 0;   
    }
		// setters
		void setName(string n) {name = n;}
		void setCoachName(string cn) {coachName = cn;}
		void setHomeCity(string hc) {homeCity = hc;}
		void setHomeStatus(bool hs) {homeStatus = hs;}
		void setScore(int s) {score = s;}
		void setTimeoutCount(int tc) {timeoutCount = tc;}
		// getters
		string getName() const {return name;}
		string getCoachName() const {return coachName;}
		string getHomeCity() const {return homeCity;}
		bool getHomeStatus() const {return homeStatus;}
		int getScore() const {return score;}
		int getTimeoutCount() const {return timeoutCount ;}
};

class Scoreboard
{
  private:
    int qtr;
    int down;
    int toGo;
    Team home;
    Team visitor;
		
  public:
    Scoreboard() // default constructor
    {
      qtr = 1;
			down = 1;
			toGo = 10;
    }
		// setters
    void setQTR(int q) {qtr = q;}
    void setDown(int d) {down = d;}
    void setToGo(int t) {toGo = t;}
		void setHome(Team hSet) {home = hSet;}
    void setVisitor(Team vSet) {visitor = vSet;}
		// getters
		int getQtr() const {return qtr;}
		int getDown() const {return down;}
		int getToGo() const {return toGo;}
		Team getHome() const {return home;}
		Team getVisitor() const {return visitor;}


		void showScoreboard()
		{
			string yellow = ""; 
			string orange = "";
      string reset = "\x1b[0m";
      yellow = "\x1b[32;93m"; //red
			orange = "\x1b[33;7m"; //orange
      string score = "\x1b[36;1m"; //score color 
      cout << orange << "Football Scoreboard" << reset << endl; 
      cout << home.getName() << "\t\t" << visitor.getName() << endl; 
      cout << yellow << home.getScore() << "\t\t\t\t\t\t" << visitor.getScore() << reset << endl; 
			cout << "QTR: " << getQtr() << endl; 
			cout << "DOWN: " << getDown() << "\t\t" << "To Go: " << getToGo() << endl; 
		}
};
