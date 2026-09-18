package inheritance;

class Artist {

    String name;
    int age;

    Artist(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

class Painter extends Artist {

    String paintingStyle;
    String mediumUsed;
    int numberOfPaintings;

    Painter(String name, int age,
            String paintingStyle,
            String mediumUsed,
            int numberOfPaintings) {

        super(name, age);

        this.paintingStyle = paintingStyle;
        this.mediumUsed = mediumUsed;
        this.numberOfPaintings = numberOfPaintings;
    }

    void display() {
        super.display();
        System.out.println("Painting Style: " + paintingStyle);
        System.out.println("Medium Used: " + mediumUsed);
        System.out.println("Number Of Paintings: " + numberOfPaintings);
    }
}

class Musician extends Artist {

    String instrument;
    String musicGenre;
    int numberOfAlbums;

    Musician(String name, int age,
             String instrument,
             String musicGenre,
             int numberOfAlbums) {

        super(name, age);

        this.instrument = instrument;
        this.musicGenre = musicGenre;
        this.numberOfAlbums = numberOfAlbums;
    }

    void display() {
        super.display();
        System.out.println("Instrument: " + instrument);
        System.out.println("Music Genre: " + musicGenre);
        System.out.println("Number Of Albums: " + numberOfAlbums);
    }
}

class Actor extends Artist {

    String filmIndustry;
    int numberOfMovies;

    Actor(String name, int age,
          String filmIndustry,
          int numberOfMovies) {

        super(name, age);

        this.filmIndustry = filmIndustry;
        this.numberOfMovies = numberOfMovies;
    }

    void display() {
        super.display();
        System.out.println("Film Industry: " + filmIndustry);
        System.out.println("Number Of Movies: " + numberOfMovies);
    }
}

class TestArtist {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Painter p = new Painter(
                "M. F. Husain", 80,
                "Modern Art",
                "Oil Paint",
                500);

        Musician m = new Musician(
                "A. R. Rahman", 59,
                "Keyboard",
                "Film Music",
                30);

        Actor a = new Actor(
                "Shah Rukh Khan", 60,
                "Bollywood",
                100);

        System.out.println("----- Painter -----");
        p.display();

        System.out.println();

        System.out.println("----- Musician -----");
        m.display();

        System.out.println();

        System.out.println("----- Actor -----");
        a.display();
	}

}
