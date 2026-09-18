package function_overloading;

class Time
{
    int hr, min, sec;

    Time(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }

    void display()
    {
        System.out.printf("%02d:%02d:%02d\n", hr, min, sec);
    }
    
    void normalize()
    {
        min = min + sec / 60;
        sec = sec % 60;

        hr = hr + min / 60;
        min = min % 60;

        hr = hr % 24;
    }

    void add(Time t)
    {
        Time result = new Time(hr + t.hr,min + t.min,sec + t.sec);

        result.normalize();

        System.out.print("After Adding Time Object : ");
        result.display();
    }
    
    void add(int hours)
    {
        Time result = new Time(hr + hours, min, sec);

        result.normalize();

        System.out.print("After Adding Hours : ");
        result.display();
    }

    void add(double minutes)
    {
        Time result = new Time(hr, min + (int)minutes, sec);

        result.normalize();

        System.out.print("After Adding Minutes : ");
        result.display();
    }

    void add(long seconds)
    {
        Time result = new Time(hr, min, sec + (int)seconds);

        result.normalize();

        System.out.print("After Adding Seconds : ");
        result.display();
    }
}

class TimeAddition {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 Time t1 = new Time(10, 45, 50);
	        Time t2 = new Time(2, 20, 30);

	        System.out.print("Time 1 : ");
	        t1.display();

	        System.out.print("Time 2 : ");
	        t2.display();

	        t1.add(t2);      
	        t1.add(5);       // Add Hours
	        t1.add(30.0);    // Add Minutes
	        t1.add(120L);    // Add Seconds

	}

}
