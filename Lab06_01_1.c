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
    double BA_mat[3][3];
    double val_temp;


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





    for(int ind1 = 0;ind1 <3;ind1++)
    {
        for(int ind2=0;ind2<3;ind2++)
        {
            val_temp=0;
            for(int ind3=0;ind3<2;ind3++)
            {
                val_temp=val_temp+B_mat[ind1][ind3]*A_mat[ind3][ind2];
            }
            BA_mat[ind1][ind2]=val_temp;
        }
        printf("BA_mat:\n");
        for(int ind1=0;ind1<3;ind1++)
        {
            for(int ind2=0;ind2<3;ind2++)
            {
                printf("%5.2f   ",BA_mat[ind1][ind2]);
            }
            printf("\n");
        }

    }























}