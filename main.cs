namespace ConsoleApp6
{
  class Program
  {
    static int[] read()
    {
      String r = Console.ReadLine();
      String[] rs=r.Split(' ');
      int[] rr=new int[rs.Length];
      for(int i=0;i<rs.Length;i++)
      {
        rr[i]=Convert.ToInt32(rs[i]);
      }
      return rr;
    }
    static void Main(string[] args)
    {

      int T=read()[0];
      
      for (int t = 0; t < T; t++)
      {
        
      }
    }

  }
}
