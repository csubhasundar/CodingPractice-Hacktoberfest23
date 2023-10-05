using System;

namespace MyApplication
{
    class Program
    {
        static void Main()
        {
            // Type your username and press enter
            Console.WriteLine("Enter Length of Array");

            //Type the length of array
            int length = Convert.ToInt32(Console.ReadLine());
            
            //Declare the array 
            int[] numbers = new int[length];

            //Take user data
            for (int i = 0; i < length; i++)
            {
                Console.Write($"Enter element {i + 1}: ");
                {
                    numbers[i] = Convert.ToInt32(Console.ReadLine());
                }
            };
            
            //Sort the array
            Array.Sort(numbers);

            // Print the value of the Array data
            Console.WriteLine("Entered array:");
            for (int i = 0; i < length; i++)
            {
                Console.WriteLine($"Element {i + 1}: {numbers[i]}");
            }


        }
    }
}

//  to open new console app 
// dotnet new console -o app

// to run the command
// dotnet run