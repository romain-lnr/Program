
using System;

namespace name {
    class Program {
    static void Main(string[] args) {
        int a;
        int b;
        int result;
        Addition_méthode(out a, out b, out result);
        Console.WriteLine(a + " + " + b + " = " + result);
    }
    static void Addition_méthode(out int x, out int y, out int result) {
        x = Convert.ToInt32(Console.ReadLine());
        y = Convert.ToInt32(Console.ReadLine());
        result = x + y;
    }

    }
}
