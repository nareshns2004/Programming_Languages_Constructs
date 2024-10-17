


/**
 * OOPS_Basics
 */
public class OOPS_Basics{
    public static void main(String [] args)
    {
    Pen p1 = new Pen(1,"Reynolds");
    System.out.println(p1.getTip());
    p1.setTip(3);
    System.out.println(p1.brandName());
    System.out.println(p1.getTip());
}

}

class Pen
{
    private int tip;
    private String brand;

    Pen(int tip, String brand)
    {
        this.tip = tip;
        this.brand = brand;
    }

    String brandName()
    {
        return this.brand;
    }

    void setTip(int tip)
    {
        this.tip = tip;
    }

    int getTip()
    {
        return this.tip;
    }
}
