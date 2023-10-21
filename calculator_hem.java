
class calculator
{
  public static void main(String[]args)
{
  Double a = Double.parseDouble(args[0]);
  String operator = args[1];
  Double b = Double.parseDouble(args[2]);

switch(operator)
{
  case "+":
    System.out.println("sum is"+(a+b));
    break;

case "-":
    System.out.println("subtraction is"+(a-b));
    break;

case "*":
    System.out.println("multiplication is"+(a*b));
    break;

case "/":

   if( b!=0)
 {
    System.out.println("Quotient is"+(a/b));
 }
  else 
 {
   System.out.println("division by 0 not allowed");
 }
break;


default:
    System.out.println("INVALID OPERATOR");
}
}
}
