class string 
{
public static void main(String arg[])
{
 String a="hello";
 String b=new String("hello");
 System.out.println(a.length());
 System.out.println(b.isEmpty());
 System.out.println(a.equal(b));
 System.out.println(a.equalsIgnoreCase(b));
 System.out.println(a.compareTo(b));
 System.out.println(a.toUppercase());
 System.out.println(b.toLowercase());

}
}