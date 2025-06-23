using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{
    /*
     * Complete the 'getTotalX' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER_ARRAY a
     *  2. INTEGER_ARRAY b
     */

    public static void getTotalX(List<int> a, List<int> b)
    {
        int start = a.Max();
        int end = b.Min();
        int count = 0;

        while (start <= end)
        {
            int countA = 0;
            int countB = 0;

            a.ForEach(a =>
            {
                if (start % a == 0)
                {
                    countA++;
                }
            });

            b.ForEach(b =>
            {
                if (b % start == 0)
                {
                    countB++;
                }
            });

            if (a.Count() == countA && b.Count() == countB)
            {
                count++;
            }

            start++;
        }

        Console.WriteLine(count);
    }

}

class Solution
{
    public static void Main(string[] args)
    {

        //TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        //string[] firstMultipleInput = Console.ReadLine().TrimEnd().Split(' ');
        string[] firstMultipleInput = File.ReadAllText("input.txt").TrimEnd().Split(' '); // Read fromfile

        int n = Convert.ToInt32(firstMultipleInput[0]);

        int m = Convert.ToInt32(firstMultipleInput[1]);

        List<int> arr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList();

        List<int> brr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(brrTemp => Convert.ToInt32(brrTemp)).ToList();

        //int total = Result.getTotalX(arr, brr);
        Result.getTotalX(arr, brr);

        // textWriter.WriteLine(total);

        // textWriter.Flush();
        // textWriter.Close();
    }
}
