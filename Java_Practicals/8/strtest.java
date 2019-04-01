import java.util.Scanner;

public class strtest {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        StringBuffer s=new StringBuffer();
        s=sc.nextLine();
        s.setCharAt(3,'s');
        s.setLength(50);
        s.length();
        s.append("xyz");
        s.insert(5,'t');
        StringBuffer x=new StringBuffer("yo");
        s.concat(x);
        s.equal(x);
    }
}