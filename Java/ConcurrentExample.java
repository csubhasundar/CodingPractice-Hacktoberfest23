import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

class SharedResource {
    private int sharedValue;
    private Lock lock;

    public SharedResource() {
        this.sharedValue = 0;
        this.lock = new ReentrantLock();
    }

    public void increment() {
        lock.lock(); // Acquire the lock
        try {
            sharedValue++;
        } finally {
            lock.unlock(); // Release the lock
        }
    }

    public int getSharedValue() {
        return sharedValue;
    }
}

class WorkerThread extends Thread {
    private SharedResource sharedResource;

    public WorkerThread(SharedResource sharedResource) {
        this.sharedResource = sharedResource;
    }

    @Override
    public void run() {
        for (int i = 0; i < 1000; i++) {
            sharedResource.increment();
        }
    }
}

public class ConcurrentExample {
    public static void main(String[] args) {
        SharedResource sharedResource = new SharedResource();

        // Create multiple worker threads
        WorkerThread thread1 = new WorkerThread(sharedResource);
        WorkerThread thread2 = new WorkerThread(sharedResource);

        // Start the threads
        thread1.start();
        thread2.start();

        try {
            // Wait for threads to finish
            thread1.join();
            thread2.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // Display the final shared value
        System.out.println("Final shared value: " + sharedResource.getSharedValue());
    }
}

