﻿using System.CodeDom.Compiler;
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
     * Complete the 'birthday' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER_ARRAY s
     *  2. INTEGER d
     *  3. INTEGER m
     */

    public static void birthday(List<int> s, int d, int m)
    {
        int count = 0;

        //Fill first window of size m and sum their numbers
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += s[i];
        }

        //See if the first window combination covers the requirement
        if (sum == d)
        {
            count++;
        }

        //Slinding windows!!
        for (int i = m; i < s.Count(); i++)
        {
            sum = sum - s[i - m]; // Remove element leaving window
            sum = sum + s[i];     // Add element entering window

            if (sum == d)
            {
                count++;
            }
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
        //string[] firstMultipleInput = File.ReadAllText("input.txt").TrimEnd().Split(' '); // Read fromfile

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> s = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(sTemp => Convert.ToInt32(sTemp)).ToList();

        string[] firstMultipleInput = Console.ReadLine().TrimEnd().Split(' ');

        int d = Convert.ToInt32(firstMultipleInput[0]);

        int m = Convert.ToInt32(firstMultipleInput[1]);

        Result.birthday(s, d, m);

        // textWriter.WriteLine(result);

        // textWriter.Flush();
        // textWriter.Close();
    }
}
