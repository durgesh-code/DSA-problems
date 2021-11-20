interface l1 {
    double x = 4.5;
    void method1(); //by defalut public  and abstact
}
interface l2 extends l1 {
    double y = 5.5;
    void method2();
}
class method implements l2 {
    int a = 10;
    public void method1(){
        System.out.println("from method1" +x+y);
    }
    public void method2(){
        System.out.println("from method2"+x+y);
    }
}
public class interface2 {
    public static void main(String[] args){
        method pri = new method();
        pri.method1();
        pri.method2();
    }
}