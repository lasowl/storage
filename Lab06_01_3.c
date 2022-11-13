#include <stdio.h>
int main()
{
    int A_mat[3][2] = {\
    {1.1, 1.3}, \
    {2.1, 2.4}, \
    {3.1, 3.5}};

    double B_mat[2][3] = { \
    {6,5,4}, \
    {3,2,1}};

    double e1_vec[3][1] = {\
    {1}, \
    {0}, \
    {0}};

    double e2_vec[3][1] = {\
    {0}, \
    {1}, \
    {0}};

    double e3_vec[3][1] = {\
    {0}, \
    {0}, \
    {1}};

    double AB_mat[3][3];
    double ABe1[3][1];
    double ABe2[3][1];
    double ABe3[3][1];
    double val_temp;


    for(int ind1=0;ind1<3;ind1++)
    {
        for(int ind2=0;ind2<3;ind2++)
        {
            val_temp=0;
            for(int ind3=0;ind3<2;ind3++)
            {
                val_temp=val_temp+A_mat[ind1][ind3]*B_mat[ind3][ind2];
            }
            AB_mat[ind1][ind2]=val_temp;
        }
        printf("AB_mat:\n");
        for(int ind1=0;ind1<3;ind1++)
        {
            for(int ind2=0;ind2<3;ind2++)
            {
                printf("%5.2f   ",AB_mat[ind1][ind2]);
            }
            printf("\n");
        }
    }





    for(int ind1 = 0;ind1<3;ind1++)
    {
        for(int ind2 = 0;ind2<1;ind2++)
        {
            val_temp=0;
            for(int ind3=0;ind3<3;ind3++)
            {
                val_temp=val_temp+AB_mat[ind1][ind3]*e1_vec[ind3][ind2];
            }
            ABe1[ind1][ind2] = val_temp;
        }
    }
    printf("ABe1:\n");
    for(int ind1 = 0;ind1<3;ind1++)
    {
        for(int ind2=0;ind2<1;ind2++)
        {
            printf("%5.2f   ",ABe1[ind1][ind2]);
        }
        printf("\n");
    }



     for(int ind1 = 0;ind1<3;ind1++)
    {
        for(int ind2 = 0;ind2<1;ind2++)
        {
            val_temp=0;
            for(int ind3=0;ind3<3;ind3++)
            {
                val_temp=val_temp+AB_mat[ind1][ind3]*e2_vec[ind3][ind2];
            }
            ABe2[ind1][ind2] = val_temp;
        }
    }
    printf("ABe2:\n");
    for(int ind1 = 0;ind1<3;ind1++)
    {
        for(int ind2=0;ind2<1;ind2++)
        {
            printf("%5.2f   ",ABe2[ind1][ind2]);
        }
        printf("\n");
    }


      for(int ind1 = 0;ind1<3;ind1++)
    {
        for(int ind2 = 0;ind2<1;ind2++)
        {
            val_temp=0;
            for(int ind3=0;ind3<3;ind3++)
            {
                val_temp=val_temp+AB_mat[ind1][ind3]*e3_vec[ind3][ind2];
            }
            ABe3[ind1][ind2] = val_temp;
        }
    }
    printf("ABe3:\n");
    for(int ind1 = 0;ind1<3;ind1++)
    {
        for(int ind2=0;ind2<1;ind2++)
        {
            printf("%5.2f   ",ABe3[ind1][ind2]);
        }
        printf("\n");
    }







}