public class Student_Class
{
    public static void main(String args[])
    {
        Naresh n1 = new Naresh();
        n1.skills = "Java";

        System.out.println(n1.skills);
    }
}

class Naresh
{
    String skills;
    int level;
    int age;

    void setAge(int newAge)
    {
        age = newAge;
    }

    void skills(String newSkills)
    {
        skills = newSkills;
    }

    void levelOfSkills(int newLevel)
    {
        level = newLevel;
    }
}