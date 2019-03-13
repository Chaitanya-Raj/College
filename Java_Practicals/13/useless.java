import java.util.*;
class useless
{ 
  static void varlen(int... a)
   { System.out.print("no. of arguments"+a.length+" contents = ");
     for(int i:a)
        System.out.print(" "+i+"  ");
     System.out.println();       
    }
  public static void main(String args[])
   { 
     varlen(10);
     varlen(1,2,6);
     varlen(); 
    }
}
