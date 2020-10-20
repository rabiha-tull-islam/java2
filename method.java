public class method
{
    public static int Add(int x , int y)
{
    return x + y;
}
 public static void main(String[] args) {
    int x = Integer.parseInt(args[0]);
    int y = Integer.parseInt(args[1]);
    int z = Add(x, y);
    System.out.println(z);
 }
}