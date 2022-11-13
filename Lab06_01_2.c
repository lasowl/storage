#include <stdio.h>
int main()
{
     int A_mat[2][3] = {\
    {1,2,3}, \
    {4,5,6}};

    double B_mat[3][2] = { \
    {0.5, 1.5}, \
    {1.5, 0.5}, \
    {0.5, 2.0}};



    double AB_mat[2][2];
    double tAB_mat[3][3];
    double tA_mat[3][2];
    double tB_mat[2][3];
    double tAtB_mat[3][3];
    double tBtA_mat[2][2];
    double val_temp;


    for(int ind1=0;ind1<3;ind1++)
    {
        for(int ind2 = 0;ind2<2; ind2++)
        {
            tA_mat[ind1][ind2] = A_mat[ind2][ind1];
        }
    }

    printf("tA_mat:\n");
    for(int ind1 = 0;ind1<3;ind1++)
    {
        for(int ind2=0;ind2<2;ind2++)
        {
            printf("%5.2f   ",tA_mat[ind1][ind2]);
        }
        printf("\n");
    }




    for(int ind1=0;ind1<2;ind1++)
    {
        for(int ind2 = 0;ind2<3;ind2++)
        {
            tB_mat[ind1][ind2]=B_mat[ind2][ind1];
        }
    }

    printf("tB_mat:\n");
    for(int ind1 = 0;ind1<2;ind1++)
    {
        for (int ind2=0;ind2<3;ind2++)
        {
            printf("%5.2f   ",tB_mat[ind1][ind2]);
        }
        printf("\n");
    }




    for(int ind1 = 0;ind1 < 2;ind1++)
    {
        for(int ind2 = 0;ind2 < 2;ind2++)
        {
            val_temp = 0;
            for(int ind3 = 0;ind3 < 3;ind3++)
            {
                val_temp=val_temp+A_mat[ind1][ind3]*B_mat[ind3][ind2];
            }
            AB_mat[ind1][ind2]=val_temp;
        }
    }
    printf("AB_mat: \n");
    for (int ind1 = 0;ind1 < 2;ind1++)
    {
        for (int ind2 = 0;ind2 < 2;ind2++)
        {
            printf("%5.2f   ",AB_mat[ind1][ind2]);
        }
        printf("\n");
    }





    
    for(int ind1 = 0;ind1 < 2;ind1++)
    {
        for(int ind2=0;ind2<2;ind2++)
        {
            val_temp=0;
            for(int ind3=0;ind3<3;ind3++)
            {
                tAB_mat[ind1][ind2]=AB_mat[ind2][ind1];
            }
        }
        printf("tAB_mat:\n");
        for(int ind1=0;ind1<2;ind1++)
        {
            for(int ind2=0;ind2<2;ind2++)
            {
                printf("%5.2f   ",tAB_mat[ind1][ind2]);
            }
            printf("\n");
        }

    }
    


    for(int ind1 = 0;ind1 <2;ind1++)
    {
        for(int ind2=0;ind2<2;ind2++)
        {
            val_temp=0;
            for(int ind3=0;ind3<3;ind3++)
            {
                val_temp=val_temp+tB_mat[ind1][ind3]*tA_mat[ind3][ind2];
            }
            tBtA_mat[ind1][ind2]=val_temp;
        }
        printf("tBtA_mat:\n");
        for(int ind1=0;ind1<2;ind1++)
        {
            for(int ind2=0;ind2<2;ind2++)
            {
                printf("%5.2f   ",tBtA_mat[ind1][ind2]);
            }
            printf("\n");
        }

    }




   for(int ind1=0;ind1<3;ind1++)
   {
    for(int ind2=0;ind2<3;ind2++)
    {
        val_temp=0;
        for(int ind3=0;ind3<2;ind3++)
        {
            val_temp=val_temp+tA_mat[ind1][ind3]*tB_mat[ind3][ind2];
        }
        tAtB_mat[ind1][ind2]=val_temp;
    }
    printf("tAtB_mat:\n");
    for(int ind1=0;ind1<3;ind1++)
    {
        for (int ind2=0;ind2<3;ind2++)
        {
            printf("%5.2f   ",tAtB_mat[ind1][ind2]);
        }
        printf("\n");
    }
   }


}