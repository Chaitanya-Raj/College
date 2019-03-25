class A{
    int rollno;
    String name;
    A(){
        rollno=21;
        name="Chaitanya";
    }
    public String toString(){
        return rollno+" "+name;
    }
}

class stringtest{
    public static void main(String[] args){
        A a=new A();
        System.out.println(a);
    }
}