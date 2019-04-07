class prg8{
    static public void main(String [] argv){
        StringBuffer s1=new StringBuffer("python is easy");
        s1.setCharAt(1,'Y');
        System.out.println(s1);
        System.out.println("the length of string s1 is "+s1.length());
        s1.append("java is hard");
        System.out.println(s1);
        s1.insert(14," and ");
        System.out.println(s1);
        String s2="python";
        s2=s2.concat("hello world");
        System.out.println(s2);
        System.out.println(s2.equals(s1));
    }
}