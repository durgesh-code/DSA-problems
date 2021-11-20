import myinterface.*;
// a class tht implement interface
class interFace implements myinterface {
    public void massege(){                //implementing the abstract method
        System.out.println("fine!");

    }
    //main method
    public static void main(String args[]){
            interFace t = new interFace();
            t.massege();
            System.out.println("final value is" +a);
    }
}