//Demonstrate Thread priority.
class NewThread implements Runnable {
    Thread t;

    NewThread() {
        // Create a new, second thread.
        t = new Thread(this, "Demo Thread");
        System.out.println("child Thread " + t);
        t.start();
    }

    public void run() {
        try {
            for (int i = 0; i <= 5; i++) {
                System.out.println("Child Thread " + i);
                Thread.sleep(500);
                System.out.println("Prior : " + t.getPriority());
            }
        } catch (InterruptedException e) {
            System.out.println("Child Interrupted " + e);
        }
        System.out.println("Child Thread Exiting");
    }
}

class prg21 {
    public static void main(String args[]) {
        NewThread ob = new NewThread(); // Creating a new Thread.
        try {
            System.out.println("Priority: " + ob.t.getPriority());
            for (int i = 5; i >= 0; i--) {
                if (i == 2) {
                    System.out.println(ob.t.isAlive());
                    ob.t.setPriority(1 + ob.t.getPriority());
                }

                System.out.println("Main Thread " + i);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println("Main Thread Interrupted");
        }
        System.out.println("Main Thread Exiting..");
    }
}