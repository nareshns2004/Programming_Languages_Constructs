import java.util.*;

public class Classes_Basics
{   
    public static void main(String args[])
    {
        Pen p1 = new Pen();  // created Pen class object named p1
        p1.setColor("Green");
        System.out.println(p1.color); 
        p1.color = "Red";
        System.out.println(p1.color);
        p1.setTip(3);
        System.out.println(p1.tip);
    }

}

class Pen
{
    String color;
    int tip;

    void setColor(String newColor)
    {
        color = newColor;
    }

    void setTip(int newTip)
    {
        tip = newTip;
    }
}