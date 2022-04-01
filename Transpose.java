import java.util.*;
public class Transpose{
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        System.out.println("enter rows and columns:");
        int r=scan.nextInt();
        int c=scan.nextInt();
        int i,j;
        int a[][]=new int[r][c];
        System.out.println("Enter the elements of the array");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                a[i][j]=scan.nextInt();
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               System.out.print(a[i][j]+"     ");
            }
            System.out.println();
        }
        System.out.println("Transpose of the matrix");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               System.out.print(a[j][i]+"     ");
            }
            System.out.println();
        }
        System.out.println("centered element of the matrix: "+a[r/2][c/2]);
        int sum=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               sum+=a[i][j];
            }
        }
        System.out.println("Sum of the elements of the matrix:  "+sum);
        int smallest=a[0][0];
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(smallest>a[i][j]){
                    smallest=a[i][j];3
                }
            }
        }
        System.out.println("Smallest element in the array: "+smallest);
    }
}