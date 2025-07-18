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
     * Complete the 'gradingStudents' function below.
     *
     * The function is expected to return an INTEGER_ARRAY.
     * The function accepts INTEGER_ARRAY grades as parameter.
     */
     
    public static int getNextMultipleOfFive(decimal n){
        return (int)Math.Ceiling(n/5) * 5;
    }

    public static List<int> gradingStudents(List<int> grades)
    {
        List<int> result = new List<int>();
        
        foreach(int grade in grades){
            
            //Bypass < 38
            if(grade < 38){
                result.Add(grade);
            }
            else {
                int nextMultiple = 0;
                int diff = 0;
                
                nextMultiple = getNextMultipleOfFive(grade);
                
                diff = nextMultiple - grade;
                
                if(diff < 3){
                    result.Add(nextMultiple);
                }
                else {
                    result.Add(grade);
                }
                
            }
        }
        
        return result;
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int gradesCount = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> grades = new List<int>();

        for (int i = 0; i < gradesCount; i++)
        {
            int gradesItem = Convert.ToInt32(Console.ReadLine().Trim());
            grades.Add(gradesItem);
        }

        List<int> result = Result.gradingStudents(grades);

        textWriter.WriteLine(String.Join("\n", result));

        textWriter.Flush();
        textWriter.Close();
    }
}
