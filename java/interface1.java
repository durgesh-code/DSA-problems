interface l1 {
    public static final double pi = 3.141334; //ok
    static final double lamda = 0.4; //ok public is implicit
    //int a = 10; //decleration of any instance variable is NOT allowed here
    //private static final p = 999 //private and protected is not allowed here
    //public static void massege(); //static method is not allowed here
    void method1();
}
class class1 implements l1 {
    public int b = 666;
    public void method1(){
        System.out.println("from method1" + pi);
    }
    public void method2(){
        System.out.println("from method2" + lamda);
    }
}
class interface1 {
    public static void main(String args[]){
        class1 j = new class1();
        j.method1();
        j.method2();
    }
}