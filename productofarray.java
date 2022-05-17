
import java.util.Arrays;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author T SAM
 */
public class productofarray 
{
    public static void main(String[] args)
    {
        int a[]={1,2,3,4};
        int b[]={1,1,1,1};
        for (int i = 0; i < a.length; i++)
        {
            for (int j = 0; j < a.length; j++) 
            {
                if(i!=j)
                    b[i]*=a[j];
            }
        }
        System.out.println(Arrays.toString(b));
    }
}
