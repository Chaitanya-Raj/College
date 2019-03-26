class MyException extends Exception{
    MyException(){
        System.out.println("A MyException has occured.");
    }
}

class Main{
    public static void main(String[] args) {
            try {
                throw new MyException();
            } catch (Exception e) {
                System.out.println("Caught the MyException.");          
            }
    }
}