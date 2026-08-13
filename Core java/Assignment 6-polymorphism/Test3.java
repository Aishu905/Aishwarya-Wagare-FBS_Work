class Player
{
	String name;
	int age;
	String country;
	int matchesPlayed;
	int jersyNumber;
	Player(String name, int age, String country, int matchesPlayed, int jersyNumber) {
		this.name = name;
		this.age = age;
		this.country = country;
		this.matchesPlayed = matchesPlayed;
		this.jersyNumber = jersyNumber;
	}
	Player() {
		this.name = "Not Given";
		this.age = 0;
		this.country = "Not Given";
		this.matchesPlayed = 0;
		this.jersyNumber = 0;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this.age = age;
	}
	String getCountry() {
		return country;
	}
	void setCountry(String country) {
		this.country = country;
	}
	int getMatchesPlayed() {
		return matchesPlayed;
	}
	void setMatchesPlayed(int matchesPlayed) {
		this.matchesPlayed = matchesPlayed;
	}
	int getJersyNumber() {
		return jersyNumber;
	}
	void setJersyNumber(int jersyNumber) {
		this.jersyNumber = jersyNumber;
	}
	void Display()
	{
		System.out.println("Player name is: "+this.name);
		System.out.println("Player age is: "+this.age);
		System.out.println("Player country is: "+this.country);
		System.out.println("No of matches played: "+this.matchesPlayed);
		System.out.println("Jersy Number is: "+this.jersyNumber);
	}
	void Playing()
	{
		System.out.println("This is playing");
	}
}

class CricketPlayer extends Player
{
	int totalRuns;
	int totalWickets;
	String battingStyle;
	String bowlingStyle;
	
	CricketPlayer(String name, int age, String country, int matchesPlayed, int jersyNumber, int totalRuns,
			int totalWickets, String battingStyle, String bowlingStyle) {
		super(name, age, country, matchesPlayed, jersyNumber);
		this.totalRuns = totalRuns;
		this.totalWickets = totalWickets;
		this.battingStyle = battingStyle;
		this.bowlingStyle = bowlingStyle;
	}
	CricketPlayer() {
		super();
		this.totalRuns = 0;
		this.totalWickets = 0;
		this.battingStyle = "Not Given";
		this.bowlingStyle = "Not Given";
	}
	int getTotalRuns() {
		return totalRuns;
	}
	void setTotalRuns(int totalRuns) {
		this.totalRuns = totalRuns;
	}
	int getTotalWickets() {
		return totalWickets;
	}
	void setTotalWickets(int totalWickets) {
		this.totalWickets = totalWickets;
	}
	String getBattingStyle() {
		return battingStyle;
	}
	void setBattingStyle(String battingStyle) {
		this.battingStyle = battingStyle;
	}
	String getBowlingStyle() {
		return bowlingStyle;
	}
	void setBowlingStyle(String bowlingStyle) {
		this.bowlingStyle = bowlingStyle;
	}
	void Display()
	{
		super.Display();
		System.out.println("No of runs: "+this.totalRuns);
		System.out.println("No of wickets: "+this.totalWickets);
		System.out.println("Batting style is :"+this.battingStyle);
		System.out.println("Bowling style is: "+this.bowlingStyle);
		System.out.println();
	}
	void Playing()
	{
		System.out.println("This is Cricket playing");
	}
}

class FootballPlayer extends Player
{
	int totalGoals;
	String playingPosition;
	FootballPlayer(String name, int age, String country, int matchesPlayed, int jersyNumber, int totalGoals,
			String playingPosition) {
		super(name, age, country, matchesPlayed, jersyNumber);
		this.totalGoals = totalGoals;
		this.playingPosition = playingPosition;
	}
	FootballPlayer() {
		super();
		this.totalGoals = 0;
		this.playingPosition = "Not Given";
	}
	int getTotalGoals() {
		return totalGoals;
	}
	void setTotalGoals(int totalGoals) {
		this.totalGoals = totalGoals;
	}
	String getPlayingPosition() {
		return playingPosition;
	}
	void setPlayingPosition(String playingPosition) {
		this.playingPosition = playingPosition;
	}
	void Display()
	{
		super.Display();
		System.out.println("Total goals are: "+this.totalGoals);
		System.out.println("Playing position is: "+this.playingPosition);
		System.out.println();
	}
	void Playing()
	{
		System.out.println("This is Football playing");
	}
}

class Test3 {

	public static void main(String[] args) {
		Player[] arr=new Player[3];
		arr[0]=new Player("Virat Kohli",37,"India",550,18);
		arr[1]=new CricketPlayer("Rohit Sharma",39,"India",500,45,12000,20,"Righ hand batsman","Right arm off break");
		arr[2]=new FootballPlayer("Lionel Messi",39,"Argenita",1000,10,850,"Forward winger");

		for(int i=0;i<arr.length;i++)
		{
			arr[i].Display();
			arr[i].Playing();
		}
	}
	

}
