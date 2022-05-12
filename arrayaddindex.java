/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author T SAM
 */
import java.util.*;
public class daniex {
    public static void main(String[] args) {
        int a[]=new int[5];
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter your array of size 5");
        for(int i=0;i<a.length;i++)
        {
            a[i]=scan.nextInt();
        }
        int target;
        System.out.println("Enter a number");
        target=scan.nextInt();
        for(int j=0;j<a.length;j++)
        {
            for(int k=1;k<a.length;k++)
            {
                if(target==(a[j]+a[k]))
                    System.out.println(j+"   "+k);
            }
        }
    }
}
