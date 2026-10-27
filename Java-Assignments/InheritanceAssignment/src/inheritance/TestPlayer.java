package inheritance;

class Player {

    String name;
    int age;
    String country;
    int matchesPlayed;
    int jerseyNumber;

    Player(String name, int age, String country,
           int matchesPlayed, int jerseyNumber) {

        this.name = name;
        this.age = age;
        this.country = country;
        this.matchesPlayed = matchesPlayed;
        this.jerseyNumber = jerseyNumber;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Country: " + country);
        System.out.println("Matches Played: " + matchesPlayed);
        System.out.println("Jersey Number: " + jerseyNumber);
    }
}

class CricketPlayer extends Player {

    int totalRuns;
    int totalWickets;
    String battingStyle;
    String bowlingStyle;

    CricketPlayer(String name, int age, String country,
                  int matchesPlayed, int jerseyNumber,
                  int totalRuns, int totalWickets,
                  String battingStyle, String bowlingStyle) {

        super(name, age, country, matchesPlayed, jerseyNumber);

        this.totalRuns = totalRuns;
        this.totalWickets = totalWickets;
        this.battingStyle = battingStyle;
        this.bowlingStyle = bowlingStyle;
    }

    void display() {
        super.display();
        System.out.println("Total Runs: " + totalRuns);
        System.out.println("Total Wickets: " + totalWickets);
        System.out.println("Batting Style: " + battingStyle);
        System.out.println("Bowling Style: " + bowlingStyle);
    }
}

class FootballPlayer extends Player {

    int totalGoals;
    String playingPosition;

    FootballPlayer(String name, int age, String country,
                   int matchesPlayed, int jerseyNumber,
                   int totalGoals, String playingPosition) {

        super(name, age, country, matchesPlayed, jerseyNumber);

        this.totalGoals = totalGoals;
        this.playingPosition = playingPosition;
    }

    void display() {
        super.display();
        System.out.println("Total Goals: " + totalGoals);
        System.out.println("Playing Position: " + playingPosition);
    }
}

class TestPlayer {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		 CricketPlayer cp = new CricketPlayer(
	                "Virat Kohli", 37, "India",
	                550, 18, 27000, 5,
	                "Right Handed", "Right Arm Medium");

	        FootballPlayer fp = new FootballPlayer(
	                "Lionel Messi", 39, "Argentina",
	                1000, 10, 850,
	                "Forward");

	        System.out.println("----- Cricket Player -----");
	        cp.display();

	        System.out.println();

	        System.out.println("----- Football Player -----");
	        fp.display();
	}

}
