public class Test {

    private String title;
    private int year;   // default constructor will intialize to default values

    public Test(String title, int year){
        this.title = title;
        this. year = year; // custom default constructor
        System.out.println(this.title + " " + this.year);
    }

   public Test(Test test){
        this.title = test.title;
        this.year = test.year;
    }

    public Test(){
        this("abr", 1);
    }

    void print(){
        System.out.println(title);
        System.out.println(year);
    }

    public static void main(String[] args) {
        
        
        Test test = new Test("rt", 87);
        test.print();
        Exam ex = new Exam();



    }


}

class Exam extends Test{

    public Exam(){
        System.out.println("Exam Constructor");
    }
}
