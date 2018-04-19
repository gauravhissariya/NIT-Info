#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NITIndia{
        int area;
        char state[20];
        int year;
        char director_name[30];
        int ranking;
    }NITT,NITR,NITSurat,NITW,NITK,MNNIT,NITC,NITJ,NITS,NITH;

int main()
{
    int rank,repeat=1;
    while(repeat==1){
        printf("Write the rank of NIT from 1 to 10 to get its details\n");
        scanf("%d",&rank);
        switch(rank){
        case 1: printf("NIT Tiruchirappalli\n");
                NITT.area=800;
                printf("Size: %d acres\n",NITT.area);
                strcpy(NITT.state,"Tamil Nadu");
                printf("State: %s\n",NITT.state);
                strcpy(NITT.director_name,"Mini Shaji Thomas");
                printf("Director Name: %s\n",NITT.director_name);
                NITT.year=2003;
                printf("Converted into NIT on: %d\n",NITT.year);
                NITT.ranking=1;
                printf("Rank: %d\n",NITT.ranking);
        break;
        case 2: printf("NIT Rourkela\n");
                NITR.area=648;
                printf("Size: %d acres\n",NITR.area);
                strcpy(NITR.state,"Odisha");
                printf("State: %s\n",NITR.state);
                strcpy(NITR.director_name,"Animesh Biswas");
                printf("Director Name: %s\n",NITR.director_name);
                NITR.year=2002;
                printf("Converted into NIT on: %d\n",NITR.year);
                NITR.ranking=2;
                printf("Rank: %d\n",NITR.ranking);
        break;
        case 3: printf("NIT Surathkal\n");
                NITSurat.area=295;
                printf("Size: %d acres\n",NITSurat.area);
                strcpy(NITSurat.state,"Karnataka");
                printf("State: %s\n",NITSurat.state);
                strcpy(NITSurat.director_name,"Karanam Uma Maheshwar Rao");
                printf("Director Name: %s\n",NITSurat.director_name);
                NITSurat.year=2002;
                printf("Converted into NIT on: %d\n",NITSurat.year);
                NITSurat.ranking=3;
                printf("Rank: %d\n",NITSurat.ranking);
        break;
        case 4: printf("NIT Warangal\n");
                NITW.area=256;
                printf("Size: %d acres\n",NITW.area);
                strcpy(NITW.state,"Telangana");
                printf("State: %s\n",NITW.state);
                strcpy(NITW.director_name,"N. V. Ramana Rao[");
                printf("Director Name: %s\n",NITW.director_name);
                NITW.year=2002;
                printf("Converted into NIT on: %d\n",NITW.year);
                NITW.ranking=4;
                printf("Rank: %d\n",NITW.ranking);
        break;
        case 5: printf("NIT Kurukshetra\n");
                NITK.area=300;
                printf("Size: %d acres\n",NITK.area);
                strcpy(NITK.state,"Haryana");
                printf("State: %s\n",NITK.state);
                strcpy(NITK.director_name,"Satish Kumar");
                printf("Director Name: %s\n",NITK.director_name);
                NITK.year=2002;
                printf("Converted into NIT on: %d\n",NITK.year);
                NITK.ranking=5;
                printf("Rank: %d\n",NITK.ranking);
        break;
        case 6: printf("MNNIT Allahabad\n");
                MNNIT.area=222;
                printf("Size: %d acres\n",MNNIT.area);
                strcpy(MNNIT.state,"Allahabad");
                printf("State: %s\n",MNNIT.state);
                strcpy(MNNIT.director_name,"	Dr. Rajeev Tripathi");
                printf("Director Name: %s\n",MNNIT.director_name);
                MNNIT.year=2007;
                printf("Converted into NIT on: %d\n",MNNIT.year);
                MNNIT.ranking=6;
                printf("Rank: %d\n",MNNIT.ranking);
        break;
        case 7: printf("NIT Calicut\n");
                NITC.area=300;
                printf("Size: %d acres\n",NITC.area);
                strcpy(NITC.state,"Kerala");
                printf("State: %s\n",NITC.state);
                strcpy(NITC.director_name,"	Dr. Sivaji Chakravorti");
                printf("Director Name: %s\n",NITC.director_name);
                NITC.year=2002;
                printf("Converted into NIT on: %d\n",NITC.year);
                NITC.ranking=7;
                printf("Rank: %d\n",NITC.ranking);
        break;
        case 8: printf("NIT Jaipur\n");
                NITJ.area=317;
                printf("Size: %d acres\n",NITJ.area);
                strcpy(NITJ.state,"Rajasthan");
                printf("State: %s\n",NITJ.state);
                strcpy(NITJ.director_name,"	Professor Udaykumar R Yaragatti");
                printf("Director Name: %s\n",NITJ.director_name);
                NITJ.year=2002;
                printf("Converted into NIT on: %d\n",NITJ.year);
                NITJ.ranking=8;
                printf("Rank: %d\n",NITJ.ranking);
        break;
        case 9: printf("NIT Silchar\n");
                NITS.area=625;
                printf("Size: %d acres\n",NITS.area);
                strcpy(NITS.state,"Assam");
                printf("State: %s\n",NITS.state);
                strcpy(NITS.director_name,"Sivaji Bandyopadhyay");
                printf("Director Name: %s\n",NITS.director_name);
                NITS.year=2002;
                printf("Converted into NIT on: %d\n",NITS.year);
                NITS.ranking=9;
                printf("Rank: %d\n",NITS.ranking);
        break;
        case 10: printf("NIT Hamirpur\n");
                NITH.area=320;
                printf("Size: %d acres\n",NITH.area);
                strcpy(NITH.state,"Himachal Pradesh");
                printf("State: %s\n",NITH.state);
                strcpy(NITH.director_name,"Prof. (Dr.) Vinod Yadava");
                printf("Director Name: %s\n",NITH.director_name);
                NITH.year=2002;
                printf("Converted into NIT on: %d\n",NITH.year);
                NITH.ranking=10;
                printf("Rank: %d\n",NITH.ranking);
        break;
        }
        printf("Choose an option whether you want see info of any other NIT or end the program\n1:continue\n2:end\n");
        scanf("%d",&repeat);
    }
return 0;
}
