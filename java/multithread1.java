/*creat three Thread using class Thread and then run them cocurenntaly*/
class ThreadA extends Thread{
    public void run(){
        for(int i=0 ; i<=5; i++)
        {
            System.out.println("running Thread a" + (-1*i));
            //System.out.println("thread id ="+Thread.currentThread().getId());
            if(i==2){
                    yield();
                    System.out.println("yeild"); //using yeild 
            }

        }
        System.out.println("exting form Thread a");
    }
}
class ThreadB extends Thread{
    public void run(){
        for(int j = 0; j<=5; j++){
            System.out.println("running Thread B"+(2*j));
            //System.out.println("thread id ="+Thread.currentThread().getId());
            if(j==3)stop(); //using stop 

        }
        System.out.println("exting from Thread B");
    }
}
class ThreadC extends Thread{
    public void run(){
        for(int k =0; k<=5;k++){
            System.out.println("running Thread C"+(2*k-1));
            if(k == 4){
                try{
                    sleep(5000);
                    System.out.println("thread is stoping");
                }
                catch(Exception e){}
            }
        }
        System.out.println("exting form ThreadC");
    }
}
class multiThread1{
    public static void main(String args[]){
        ThreadA a = new ThreadA();
        ThreadB b = new ThreadB();
        ThreadC c = new ThreadC();
        //b.setPriority(Thread.MIN_PRIORITY);
        //c.setPriority(3);
        //a.setPriority(c.getPriority()+1);
        a.start();
        b.start();
        c.start();
        System.out.println("end all Threads");
    }
}