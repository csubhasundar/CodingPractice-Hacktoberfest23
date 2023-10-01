/*
 abstract class abstractname{
 //Can be public , private and default methods
abstract void method();
}
 */

  abstract class grandparents{
     grandparents(){
         System.out.println("I am the GrandParent");
     }
     abstract void family();
     protected abstract void name();
     abstract public void title(String name);
}
 abstract class parent extends grandparents{
      parent(){
          System.out.println("I am parent");
      }
      void family(){
          System.out.println("I am family");
      }
      protected void name(){
          System.out.println("I am Ashutosh");
      }
      public void title(String name){
          System.out.println("My title is rath");
      }

}
class child extends parent{
      child(){
          System.out.println("I am child");
      }
     // void family(){
//          System.out.println("I am child family");
//      }
      protected void name(){
          System.out.println("I am child");
      }
      public void title(String name){
          System.out.println("My title is mini rath");
      }
}
public class Abstraction {
    public static void main(String[] args) {
//        parent p = new parent(); --> Object of abstract class can not be implemented
        child c = new child();
        c.family();
        c.name();
        c.title("name");
    }
}
