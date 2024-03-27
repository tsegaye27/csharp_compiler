using System;

class Program
{
    static void Main()
    {
        int num1 = 5;
        int num2 = 10;
        int sum = num1 + num2;

        // Intentional syntax error: Missing semicolon
        int product = num1 * num2

        Console.WriteLine("The sum of {0} and {1} is: {2}", num1, num2, sum);

        // Intentional syntax error: Incorrect if statement syntax
        if (sum > 10
            Console.WriteLine("The sum is greater than 10.");
        else
            Console.WriteLine("The sum is not greater than 10.");

        // Intentional syntax error: Incorrect for loop syntax
        for (int i = 0; i < 5; i++)
        {
            Console.WriteLine("Iteration {0}", i)
        }

        // Expressions with different precedence levels
        int result1 = num1 + num2 * 3;  // Higher precedence for multiplication
        int result2 = (num1 + num2) * 3;  // Parentheses to enforce addition before multiplication

        Console.WriteLine("Result 1: {0}", result1);
        Console.WriteLine("Result 2: {0}", result2);
    }
}
