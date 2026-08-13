class Artist
{
	String name;
	int age;
	Artist(String name, int age) {
		this.name = name;
		this.age = age;
	}
	Artist() {
		this.name = "Not Given";
		this.age = 0;
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
	void Display()
	{
		System.out.println("Artist name is: "+this.name);
		System.out.println("Artist age is: "+this.age);	
	}
}

class Painter extends Artist
{
	String paintingStyle;
	String mediumUsed;
	int noOfPainting;
	Painter(String name, int age, String paintingStyle, String mediumUsed, int noOfPainting) {
		super(name, age);
		this.paintingStyle = paintingStyle;
		this.mediumUsed = mediumUsed;
		this.noOfPainting = noOfPainting;
	}
	Painter() {
		super();
		this.paintingStyle = "Not Given";
		this.mediumUsed = "Not Given";
		this.noOfPainting = 0;
	}
	String getPaintingStyle() {
		return paintingStyle;
	}
	void setPaintingStyle(String paintingStyle) {
		this.paintingStyle = paintingStyle;
	}
	String getMediumUsed() {
		return mediumUsed;
	}
	void setMediumUsed(String mediumUsed) {
		this.mediumUsed = mediumUsed;
	}
	int getNoOfPainting() {
		return noOfPainting;
	}
	void setNoOfPainting(int noOfPainting) {
		this.noOfPainting = noOfPainting;
	}
	void Display()
	{
		super.Display();
		System.out.println("Painting style is: "+this.paintingStyle);
		System.out.println("Medium used is: "+this.mediumUsed);
		System.out.println("Number of painting are: "+this.noOfPainting);
		System.out.println();
	}
}

class Musician extends Artist
{
	String instrument;
	String musicGenre;
	int noOfAlbums;
	Musician(String name, int age, String instrument, String musicGenre, int noOfAlbums) {
		super(name, age);
		this.instrument = instrument;
		this.musicGenre = musicGenre;
		this.noOfAlbums = noOfAlbums;
	}
	Musician() {
		super();
		this.instrument = "Not Given";
		this.musicGenre = "Not Given";
		this.noOfAlbums = 0;
	}
	String getInstrument() {
		return instrument;
	}
	void setInstrument(String instrument) {
		this.instrument = instrument;
	}
	String getMusicGenre() {
		return musicGenre;
	}
	void setMusicGenre(String musicGenre) {
		this.musicGenre = musicGenre;
	}
	int getNoOfAlbums() {
		return noOfAlbums;
	}
	void setNoOfAlbums(int noOfAlbums) {
		this.noOfAlbums = noOfAlbums;
	}
	void Display()
	{
		super.Display();
		System.out.println("Instruments are: "+this.instrument);
		System.out.println("Music genre is: "+this.musicGenre);
		System.out.println("No of albums are :"+this.noOfAlbums);
		System.out.println();
	}
}

class Actor extends Artist
{
	String filmIndustry;
	int noOfMovie;
	Actor(String name, int age, String filmIndustry, int noOfMovie) {
		super(name, age);
		this.filmIndustry = filmIndustry;
		this.noOfMovie = noOfMovie;
	}
	Actor() {
		super();
		this.filmIndustry = "Not Given";
		this.noOfMovie = 0;
	}
	String getFilmIndustry() {
		return filmIndustry;
	}
	void setFilmIndustry(String filmIndustry) {
		this.filmIndustry = filmIndustry;
	}
	int getNoOfMovie() {
		return noOfMovie;
	}
	void setNoOfMovie(int noOfMovie) {
		this.noOfMovie = noOfMovie;
	}
	void Display()
	{
		super.Display();
		System.out.println("Film industry is: "+this.filmIndustry);
		System.out.println("No of movies are: "+this.noOfMovie);
		System.out.println();
	}
	
}
class Test5 {

	public static void main(String[] args) {
		Artist a1=new Artist("Salman Khan",47);
		a1.Display();
		
		Painter p1=new Painter("Ashish kumar",40,"Fast","Roller",150);
		p1.Display();
		
		Musician m1=new Musician ("A.R.Rahman",59,"Piano","Film Music",100);
		m1.Display();

		Actor a2=new Actor("Madhuri Dikshit",60,"Bollywod",50);
		a2.Display();
	}

}
