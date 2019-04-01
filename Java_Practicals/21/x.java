class x extends Thread{
    public static void main(String[] args) {
        try {
            System.out.println(Thread.currentThread().getId());
        } catch (Exception e) {
            System.out.println("xD");
        }    
    }
}

class Main{
    public static void main(String[] args) {
        Thread d=new Thread();
        d.start();
    }
}