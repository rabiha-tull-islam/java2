public class My
{
    public static String eq( int a, int b) 
  {
    if (a == b)
{
 return "Numbers are Equal";
}
    else
   {  
       return "Numbers are not Equal"; 
    }
    
  }
public static void main(String[] args)
 {
    int a = Integer.parseInt(args[0]);
    int b = Integer.parseInt(args[1]); 
    String str = eq(a, b);
    System.out.println(str);

}
}