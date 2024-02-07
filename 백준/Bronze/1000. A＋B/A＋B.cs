using System;

class Program
{
    static void Main(String[] args)
    {
        string str = Console.ReadLine();
        string[] token;
        token = str.Split(' ');
        Console.WriteLine("{0}", Convert.ToInt32(token[0]) + Convert.ToInt32(token[1]));
    }
}