class x extends Thread{
    public void run(){
        try {
            System.out.println("Priority of Thread "+Thread.currentThread().getId()+" = "+Thread.currentThread().getPriority());
            System.out.println();
        } catch (Exception e) {
            System.out.println("xD");    
        }
    }
}

class Main{
    public static void main(String[] args) {
        for (int i = 0; i < 5; i++) {
            x t=new x();
            t.start();
        }
    }
}