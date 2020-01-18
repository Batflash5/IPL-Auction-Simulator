#include<stdio.h>
#include<string.h>
#include<time.h>
#define D1 delay(1000)
#define D2 delay(4000)
void delay(unsigned int mseconds)
{
    clock_t goal= mseconds+clock();
    while(goal>clock());
}
struct playerbidbat
{
    int matpl,runs,hacen,cen,high,base;
    float bid;
    char finame[10],laname[10],debut[15],type[25],past[4],cur[4];
};
struct playerbidbowl
{
    int matpl,wickets,haul3,haul5,base;
    float bid;
    char best[6],type[25],past[4],cur[4];
    char finame[10],laname[10],debut[15];
};
struct playerbidall
{
    int matpl,wickets,runs,base,bestbat;
    float bid;
    char bowtype[25],battype[25],past[4],bestbow[5],cur[4];
    char finame[10],laname[10],debut[15];
};
struct team
{
    char headcoach[15],tcode[4];
    char owners[2][15];
    float budget;
    int rtm;
};
void ownercpy(struct team ts[7])
{
    strcpy(ts[0].tcode,"KKR");
    strcpy(ts[1].tcode,"RCB");
    strcpy(ts[2].tcode,"PWI");
    strcpy(ts[3].tcode,"SRH");
    strcpy(ts[4].tcode,"CSK");
    strcpy(ts[5].tcode,"DD");
    strcpy(ts[6].tcode,"MI");
    strcpy(ts[0].headcoach,"JACQUES KALLIS");
    strcpy(ts[1].headcoach,"DANIEL VETTORI");
    strcpy(ts[2].headcoach,"SHANE WARNE");
    strcpy(ts[3].headcoach,"TOM MOODY");
    strcpy(ts[4].headcoach,"STEPHEN FLEMING");
    strcpy(ts[5].headcoach,"RICKY POINTING");
    strcpy(ts[6].headcoach,"MAHELA JAYAWARDENE");
    strcpy(ts[0].owners[0],"RED CHILLIES ENTERTAINMENT");
    strcpy(ts[0].owners[1],"MEHTA GROUP");
    strcpy(ts[1].owners[0],"DIAGEO");
    strcpy(ts[2].owners[0],"MANOJ BADALE");
    strcpy(ts[4].owners[0],"INDIA CEMENTS");
    strcpy(ts[3].owners[0],"SUN NETWORK");
    strcpy(ts[5].owners[0],"GMR SPORTS Pvt.Ltd");
    strcpy(ts[6].owners[0],"RELAINCE INDUSTRIES");
    ts[0].rtm=3;
    ts[1].rtm=2;
    ts[2].rtm=3;
    ts[3].rtm=3;
    ts[4].rtm=2;
    ts[5].rtm=2;
    ts[6].rtm=2;
}
void retadisp()
{
    printf("\n\nTHE PLAYERS RETAINED IN EVERY TEAM ARE DISPLAYED AS FOLLOWS:\n\n\n");
    D1;
    printf("\n\n\tKOLKATA KNIGHT RIDERS\n\n");
    D1;
    printf("\t\t\tSUNIL NARINE   (WI)  for  12.5 Crores\n\n");
    D1;
    printf("\t\t\tANDRE RUSSELL  (WI)  for  8.5  Crores");
    D2;
    system("cls");
    printf("\n\n\tROYAL CHALLENGERS BANGLORE\n\n");
    D1;
    printf("\t\t\tVIRAT KOHLI    (IND)  for  15 Crores\n\n");
    D1;
    printf("\t\t\tAB de VILLIERS (SA)   for  11 Crores\n\n");
    D1;
    printf("\t\t\tSARFRAZ KHAN   (IND)  for  7  Crores");
    D2;
    system("cls");
    printf("\n\n\tPUNE WARRIORS INDIA\n\n");
    D1;
    printf("\t\t\tSTEVE SMITH (AUS)  for  12.5 Crores");
    D2;
    system("cls");
    printf("\n\n\tSUNRISERS HYDERABAD\n\n");
    D1;
    printf("\t\t\tDAVID WARNER (AUS)       for  12.5 Crores\n\n");
    D1;
    printf("\t\t\tBHUVNESHWAR KUMAR (IND)  for  8.5  Crores");
    D2;
    system("cls");
    printf("\n\n\tCHENNAI SUPER KINGS\n\n");
    D1;
    printf("\t\t\tMS DHONI        (IND) for 15 Crores\n\n");
    D1;
    printf("\t\t\tSURESH RAINA    (IND) for 11 Crores\n\n");
    D1;
    printf("\t\t\tRAVINDRA JADEJA (IND) for 7 Crores");
    D2;
    system("cls");
    printf("\n\n\tDELHI DAREDEVILS\n\n");
    D1;
    printf("\t\t\tRISHABH PANT (IND) for 15 Crores\n\n");
    D1;
    printf("\t\t\tCHRIS MORRIS (SA)  for 11 Crores\n\n");
    D1;
    printf("\t\t\tSHREYAS IYER (IND) for 7  Crores");
    D2;
    system("cls");
    printf("\n\n\tMUMBAI INDIANS\n\n");
    D1;
    printf("\t\t\tROHIT SHARMA    (IND) for 15 Crores\n\n");
    D1;
    printf("\t\t\tHARDIK PANDYA   (IND) for 11 Crores\n\n");
    D1;
    printf("\t\t\tJASPRIT BUMRAH  (IND) for 7  Crores\n\n");
    D2;
    system("cls");
}
void buddisp(struct team i[7])
{
    printf("\n\n\tTHE BUDGET REMAINING FOR EVERY TEAM ARE AS FOLLOWS");
    D1;
    printf("\n\n\n\t\tKOLKATA KNIGHT RIDERS       ---------------  %3.1f CRORES",i[0].budget);
    D1;
    printf("\n\n\n\t\tROYAL CHALLENGERS BANGLORE  ---------------  %3.1f CRORES",i[1].budget);
    D1;
    printf("\n\n\n\t\tPUNE WARRIORS INDIA         ---------------  %3.1f CRORES",i[2].budget);
    D1;
    printf("\n\n\n\t\tSUNRISERS HYDERABAD         ---------------  %3.1f CRORES",i[3].budget);
    D1;
    printf("\n\n\n\t\tCHENNAI SUPER KINGS         ---------------  %3.1f CRORES",i[4].budget);
    D1;
    printf("\n\n\n\t\tDELHI DAREDEVILS            ---------------  %3.1f CRORES",i[5].budget);
    D1;
    printf("\n\n\n\t\tMUMBAI INDIANS              ---------------  %3.1f CRORES",i[6].budget);
    D2;
    system("cls");
}
void rtmdisp(struct team i[7])
{
    printf("\n\n\tThe no of RIGHT TO MATCH Cards ( RTM's ) left for the respective teams are :");
    D1;
    printf("\n\n\n\t\tKOLKATA KNIGHT RIDERS       ---------------  %d RTM's REMAIN",i[0].rtm);
    D1;
    printf("\n\n\n\t\tROYAL CHALLENGERS BANGLORE  ---------------  %d RTM's REMAIN",i[1].rtm);
    D1;
    printf("\n\n\n\t\tPUNE WARRIORS INDIA         ---------------  %d RTM's REMAIN",i[2].rtm);
    D1;
    printf("\n\n\n\t\tSUNRISERS HYDERABAD         ---------------  %d RTM's REMAIN",i[3].rtm);
    D1;
    printf("\n\n\n\t\tCHENNAI SUPER KINGS         ---------------  %d RTM's REMAIN",i[4].rtm);
    D1;
    printf("\n\n\n\t\tDELHI DAREDEVILS            ---------------  %d RTM's REMAIN",i[5].rtm);
    D1;
    printf("\n\n\n\t\tMUMBAI INDIANS              ---------------  %d RTM's REMAIN",i[6].rtm);
    D2;
    system("cls");
}
struct playerbidbat batdet1(struct playerbidbat i,char fname[11],char lname[11],char debu[10],char typ[25],char pas[4])
{
    strcpy(i.finame,fname);
    strcpy(i.laname,lname);
    strcpy(i.debut,debu);
    strcpy(i.type,typ);
    strcpy(i.past,pas);
    return i;
}
struct playerbidbat batdet2(struct playerbidbat i,int matpla,int halcen,int cent,int run,int hi,int bas)
{
    i.base=bas;
    i.cen=cent;
    i.hacen=halcen;
    i.high=hi;
    i.matpl=matpla;
    i.runs=run;
    return i;
}
struct playerbidbowl bowldet1(struct playerbidbowl i,char fname[11],char lname[11],char debu[10],char typ[25],char pas[4],char bst[5])
{
    strcpy(i.finame,fname);
    strcpy(i.laname,lname);
    strcpy(i.debut,debu);
    strcpy(i.type,typ);
    strcpy(i.past,pas);
    strcpy(i.best,bst);
    return i;
}
struct playerbidbowl bowldet2(struct playerbidbowl i,int matpla,int wicket,int thw,int fw,int bas)
{
    i.base=bas;
    i.matpl=matpla;
    i.haul3=thw;
    i.haul5=fw;
    i.base=bas;
    i.wickets=wicket;
    return i;
}
struct playerbidall alldet1(struct playerbidall i,char fname[11],char lname[11],char debu[10],char typ1[25],char typ2[25],char pas[4],char bst[5])
{
    strcpy(i.finame,fname);
    strcpy(i.laname,lname);
    strcpy(i.debut,debu);
    strcpy(i.bowtype,typ1);
    strcpy(i.battype,typ2);
    strcpy(i.past,pas);
    strcpy(i.bestbow,bst);
    return i;
}
struct playerbidall alldet2(struct playerbidall i,int matpla,int wicket,int run,int bas,int bestb)
{
    i.base=bas;
    i.bestbat=bestb;
    i.matpl=matpla;
    i.wickets=wicket;
    i.runs=run;
    return i;
}
void bidbatdet(struct playerbidbat i)
{
    system("cls");
    printf("\n\n\n\n\t\t\tPLAYER NAME        %s %s ",i.finame,i.laname);
    D1;
    printf("\n\n\n\n\t\t\tBATTING STYLE      %s",i.type);
    D1;
    printf("\n\n\n\n\t\t\tT20 DEBUT          %s",i.debut);
    D1;
    printf("\n\n\n\n\t\t\tMATCHES PLAYED     %d",i.matpl);
    D1;
    printf("\n\n\n\n\t\t\tRUNS               %d",i.runs);
    D1;
    printf("\n\n\n\n\t\t\tHALF CENTURIES     %d",i.hacen);
    D1;
    printf("\n\n\n\n\t\t\tCENTURIES          %d",i.cen);
    D1;
    printf("\n\n\n\n\t\t\tBEST               %d",i.high);
    D1;
    printf("\n\n\n\n\t\t\tPAST TEAM          %s",i.past);
    D1;
    printf("\n\n\n\n\t\t\tBASE PRICE         %d CRORES",i.base);
    D2;
    system("cls");
    printf("THE FRANCHISES CAN START THEIR BIDDING in\n\t");
    D1;
    printf("3\t");
    D1;
    printf("2\t");
    D1;
    printf("1\t");
    D1;
    system("cls");
}
void bidbowldet(struct playerbidbowl i)
{
    system("cls");
    printf("\n\n\n\t\t\tPLAYER NAME          %s %s ",i.finame,i.laname);
    D1;
    printf("\n\n\n\n\t\t\tBATTING STYLE      %s",i.type);
    D1;
    printf("\n\n\n\n\t\t\tT20 DEBUT          %s",i.debut);
    D1;
    printf("\n\n\n\n\t\t\tMATCHES PLAYED     %d",i.matpl);
    D1;
    printf("\n\n\n\n\t\t\tWICKETS            %d",i.wickets);
    D1;
    printf("\n\n\n\n\t\t\t3 WICKET HAUL      %d",i.haul3);
    D1;
    printf("\n\n\n\n\t\t\t5 WICKET HAUL      %d",i.haul5);
    D1;
    printf("\n\n\n\n\t\t\tBEST BOWLING       %s",i.best);
    D1;
    printf("\n\n\n\n\t\t\tPAST TEAM          %s",i.past);
    D1;
    printf("\n\n\n\n\t\t\tBASE PRICE         %d CRORES",i.base);
    D2;
    system("cls");
    printf("THE FRANCHISES CAN START THEIR BIDDING in\n\t");
    D1;
    printf("3\t");
    D1;
    printf("2\t");
    D1;
    printf("1\t");
    D1;
    system("cls");
}
void bidalldet(struct playerbidall i)
{
    system("cls");
    printf("\n\n\n\n\t\t\tPLAYER NAME        %s %s ",i.finame,i.laname);
    D1;
    printf("\n\n\n\n\t\t\tBATTING STYLE      %s",i.battype);
    D1;
    printf("\n\n\n\n\t\t\tBOWLING STYLE      %s",i.bowtype);
    D1;
    printf("\n\n\n\n\t\t\tT20 DEBUT          %s",i.debut);
    D1;
    printf("\n\n\n\n\t\t\tMATCHES PLAYED     %d",i.matpl);
    D1;
    printf("\n\n\n\n\t\t\tWICKETS            %d",i.wickets);
    D1;
    printf("\n\n\n\n\t\t\tBEST BOWLING       %s",i.bestbow);
    D1;
    printf("\n\n\n\n\t\t\tRUNS               %d",i.runs);
    D1;
    printf("\n\n\n\n\t\t\tBEST BATTING       %d",i.bestbat);
    D1;
    printf("\n\n\n\n\t\t\tPAST TEAM          %s",i.past);
    D1;
    printf("\n\n\n\n\t\t\tBASE PRICE         %d CRORES",i.base);
    D2;
    system("cls");
    printf("THE FRANCHISES CAN START THEIR BIDDING in\n\t");
    D1;
    printf("\n\n\t\t");
    printf("_____");
    printf("\n\t\t_____|");
    printf("\n\t\t_____|");
    D1;
    printf("\n\n\t\t_____");
    printf("\n\t\t     |");
    printf("\n\t\t_____|");
    printf("\n\t\t|");
    printf("\n\t\t|_____");
    D1;
    printf("\n\n\t\t|");
    printf("\n\t\t|");
    printf("\n\t\t|");
    printf("\n\t\t|");
    D1;
    system("cls");
}
float bidstar(char code[4])
{
    int y;
    float bidam;
    printf("\n\n\t\tEnter the bid amount\t");
    scanf("%f",&bidam);
    printf("\n\n\n\t\tAny franchise intrested to bid for a higher amount can type their respective code\t");
    printf("\n\n\n\t\tIf NO franchise is intrested----Type NULL\t");
    scanf("%s",code);
    if(strcmp(code,"NULL"))
        bidam=bidstar(code);
    return bidam;
}
int rtm(char past[4],char curr[4])
{
    int ans;
    printf("\n\n\t\tDOES %s want to use RTM ???",past);
    printf("\n\n\n\t\tIF YES PRESS 1 (OR) PRESS 0\t\t");
    scanf("%d",&ans);
    return ans;
}
void buddecbat(struct team t[7],struct playerbidbat j,int k)
{
    if(k)
        strcpy(j.cur,j.past);
    switch(j.cur[0])
    {
        case 'K':   t[0].budget-=j.bid;
                    t[0].rtm--;
                    break;
        case 'C':   t[1].budget-=j.bid;
                    t[1].rtm--;
                    break;
        case 'W':   t[2].budget-=j.bid;
                    t[2].rtm--;
                    break;
        case 'R':   t[3].budget-=j.bid;
                    t[3].rtm--;
                    break;
        case 'S':   t[4].budget-=j.bid;
                    t[4].rtm--;
                    break;
        case 'D':   t[5].budget-=j.bid;
                    t[5].rtm--;
                    break;
        case 'I':   t[6].budget-=j.bid;
                    t[6].rtm--;
                    break;
    }
}
void buddecbowl(struct team i[7],struct playerbidbowl j,int k)
{
    if(k)
        strcpy(j.cur,j.past);
    switch(j.cur[0])
    {
        case 'K':   i[0].budget-=j.bid;
                    i[0].rtm--;
                    break;
        case 'C':   i[1].budget-=j.bid;
                    i[1].rtm--;
                    break;
        case 'W':   i[2].budget-=j.bid;
                    i[2].rtm--;
                    break;
        case 'R':   i[3].budget-=j.bid;
                    i[3].rtm--;
                    break;
        case 'S':   i[4].budget-=j.bid;
                    i[4].rtm--;
                    break;
        case 'D':   i[5].budget-=j.bid;
                    i[5].rtm--;
                    break;
        case 'I':   i[6].budget-=j.bid;
                    i[6].rtm--;
                    break;
    }
}
void buddecall(struct team i[7],struct playerbidall j,int k)
{
    if(k)
        strcpy(j.cur,j.past);
    switch(j.cur[0])
    {
        case 'K':   i[0].budget-=j.bid;
                    i[0].rtm--;
                    break;
        case 'C':   i[1].budget-=j.bid;
                    i[1].rtm--;
                    break;
        case 'W':   i[2].budget-=j.bid;
                    i[2].rtm--;
                    break;
        case 'R':   i[3].budget-=j.bid;
                    i[3].rtm--;
                    break;
        case 'S':   i[4].budget-=j.bid;
                    i[4].rtm--;
                    break;
        case 'D':   i[5].budget-=j.bid;
                    i[5].rtm--;
                    break;
        case 'I':   i[6].budget-=j.bid;
                    i[6].rtm--;
                    break;
    }
}
struct playerbidbat bidproba(struct playerbidbat i,struct team j[7],char firname[10],char lasname[10],char de[15],char type[25],char prev[4],int matc,int half,int full,int ru,int bes,int base)
{
    int ans=0;
    char code[4];
    printf("\n\n");
    i=batdet1(i,firname,lasname,de,type,prev);
    i=batdet2(i,matc,half,full,ru,bes,base);
    bidbatdet(i);
    printf("\n\n\t\tENTER THE CODE TO START BIDDING\t");
    scanf("%s",code);
    i.bid=bidstar(code);
    strcpy(i.cur,code);
    ans=rtm(i.past,i.cur);
    buddecbat(j,i,ans);
    return i;
}
struct playerbidbowl bidprobo(struct playerbidbowl i,struct team j[7],char firname[10],char lasname[10],char de[15],char type[25],char best[5],char prev[4],int matc,int wick,int h3,int h5,int base)
{
    int ans=0;
    char code[4];
    printf("\n\n");
    i=bowldet1(i,firname,lasname,de,type,prev,best);
    i=bowldet2(i,matc,wick,h3,h5,base);
    bidbowldet(i);
    printf("\n\n\t\tENTER THE CODE TO START BIDDING\t");
    scanf("%s",code);
    i.bid=bidstar(code);
    strcpy(i.cur,code);
    ans=rtm(i.past,i.cur);
    buddecbowl(j,i,ans);
    return i;
}
struct playerbidall bidproal(struct playerbidall i,struct team j[7],char firname[10],char lasname[10],char de[15],char type1[25],char type2[25],char prev[4],int matc,int half,int full,int runs,int bst,int wick,int haul3,int haul5,char bobest[5],int bas)
{
    int ans=0;
    char code[4];
    printf("\n\n");
    i=alldet1(i,firname,lasname,de,type1,type2,prev,bobest);
    i=alldet2(i,matc,wick,runs,bas,bst);
    bidalldet(i);
    printf("\n\n\t\tENTER THE CODE TO START BIDDING\t");
    scanf("%s",code);
    i.bid=bidstar(code);
    strcpy(i.cur,code);
    ans=rtm(i.past,i.cur);
    buddecall(j,i,ans);
    return i;
}
void filewrite(struct playerbidbat i[4],struct playerbidbowl j[4],struct playerbidall k[4])
{
    FILE *ipl;
    ipl=fopen("IPL.txt","a+");
    fwrite(i,sizeof(i),4,ipl);
    fclose(ipl);
    ipl=fopen("IPL.txt","a");
    fwrite(j,sizeof(j),4,ipl);
    fclose(ipl);
    ipl=fopen("IPL.txt","a");
    fwrite(k,sizeof(k),4,ipl);
    fclose(ipl);
}
void WHAT()
{
    printf("\n\n\t\t\t*******   ******   *            *******  *    *  ******  *****  *  ******  *     *");
    printf("\n\t\t\t   *      *    *   *            *     *  *    *  *         *    *  *    *  * *   *");
    printf("\n\t\t\t   *      ******   *            *******  *    *  *         *    *  *    *  *  *  *");
    printf("\n\t\t\t   *      *        *            *     *  *    *  *         *    *  *    *  *   * *");
    printf("\n\t\t\t*******   *        *******      *     *  ******  ******    *    *  ******  *     *");
    D1;
    printf("\n\n\n\n\t\t\t*******  *  *      *  *    *  ********  *        *****  *  ******  *     *");
    printf("\n\t\t\t*        *  * *  * *  *    *  *      *  *          *    *  *    *  * *   *");
    printf("\n\t\t\t*******  *  *  *   *  *    *  ********  *          *    *  *    *  *  *  *");
    printf("\n\t\t\t      *  *  *      *  *    *  *      *  *          *    *  *    *  *   * *");
    printf("\n\t\t\t*******  *  *      *  ******  *      *  *******    *    *  ******  *     *");
    D2;
    system("cls");
}
int main()
{
    struct playerbidbat pldet[36];
    struct playerbidbowl pldet1[36];
    struct playerbidall pldet2[36];
    struct team ts[7];
    int i=0;
    char code[4]={'\0'};
    FILE *ipl;
    while(i!=7)
    {
        ts[i].budget=60.0;
        i++;
    }
    WHAT();
    ownercpy(ts);
    retadisp();
    ts[0].budget-=21.0;
    ts[1].budget-=33.0;
    ts[2].budget-=12.5;
    ts[3].budget-=21.0;
    ts[4].budget-=33.0;
    ts[5].budget-=33.0;
    ts[6].budget-=33.0;
    rtmdisp(ts);
    buddisp(ts);
    printf("\n\tAUCTION STARTS IN ");
    D1;
    printf("\n\n\t\t");
    printf("_____");
    printf("\n\t\t_____|");
    printf("\n\t\t_____|");
    D1;
    printf("\n\n\t\t_____");
    printf("\n\t\t     |");
    printf("\n\t\t_____|");
    printf("\n\t\t|");
    printf("\n\t\t|_____");
    D1;
    printf("\n\n\t\t|");
    printf("\n\t\t|");
    printf("\n\t\t|");
    printf("\n\t\t|");
    D1;
    system("cls");
    pldet[0]=bidproba(pldet[0],ts,"GAUTHAM","GAMBHIR","2008","LEFT HANDED BATSMEN","KKR",154,36,0,4218,93,3);
    pldet1[0]=bidprobo(pldet1[0],ts,"YUZVENDRA","CHAHAL","2011","RIGHT ARM LEGBREAK","4-25","RCB",70,82,5,0,3);
    pldet2[0]=bidproal(pldet2[0],ts,"YUVRAJ","SINGH","2008","LEFT HANDED BATSMEN","LEFT ARM ORTHODOX","SRH",120,12,0,2587,83,36,2,0,"4-27",3);
    pldet[1]=bidproba(pldet[1],ts,"KL","RAHUL","2010","RIGHT HANDED BATSMEN","PWI",53,10,0,1384,95,3);
    pldet1[1]=bidprobo(pldet1[1],ts,"RASHID","KHAN","2015","RIGHT ARM LEGBREAK","3-19","SRH",31,38,5,0,3);
    pldet2[1]=bidproal(pldet2[1],ts,"GLENN","MAXWELL","2013","RIGHT HANDED BATSMEN","RIGHT ARM OFFBREAK","PWI",69,6,0,1397,95,16,0,0,"2-15",3);
    pldet[2]=bidproba(pldet[1],ts,"CHRIS","LYNN","2015","RIGHT HANDED BATSMEN","KKR",28,6,0,875,93,3);
    pldet1[2]=bidprobo(pldet1[1],ts,"MITCHELL","STARC","2014","LEFT ARM FAST","4-15","RCB",26,34,3,0,3);
    pldet2[2]=bidproal(pldet2[1],ts,"DWAYNE","BRAVO","2008","RIGHT HANDED BATSMEN","RIGHT ARM MEDIUM","CSK",122,5,0,1403,70,136,8,0,"4-22",3);
    pldet[3]=bidproba(pldet[1],ts,"SHIKHAR","DHAWAN","2009","LEFT HANDED BATSMEN","SRH",143,32,0,4057,95,3);
    pldet1[3]=bidprobo(pldet1[1],ts,"PAT","CUMMINS","2013","RIGHT ARM FAST","2-20","DD",16,17,0,0,3);
    pldet2[3]=bidproal(pldet2[1],ts,"BEN","STOKES","2016","LEFT HANDED BATSMEN","RIGHT ARM MEDIUM","SRH",25,1,1,512,103,20,3,0,"3-15",3);
    printf("\n\t\t\t\t\t\t*****  *    *   * *         *     ******");
    printf("\n\t\t\t\t\t\t|      * *  *   *  *       *  *   *");
    printf("\n\t\t\t\t\t\t|****  *  * *   *   *     *    *  *****");
    printf("\n\t\t\t\t\t\t|      *   **   *  *       *  *   *");
    printf("\n\t\t\t\t\t\t*****  *    *   * *         *     *");
    printf("\n\n\n\n\n");
    D1;
    printf("\n\t\t\t\t\t                                              ____ _____");
    printf("\n\t\t\t\t\t|**\\               /\\          \\        /         |");
    printf("\n\t\t\t\t\t|   \\             /  \\          \\      /          |");
    printf("\n\t\t\t\t\t|    \\           /    \\          \\    /           |");
    printf("\n\t\t\t\t\t|     \\         /      \\          \\  /            |");
    printf("\n\t\t\t\t\t|      |       /********\\          \\/             |");
    printf("\n\t\t\t\t\t|     /       /          \\          |             |");
    printf("\n\t\t\t\t\t|    /       /            \\         |             |");
    printf("\n\t\t\t\t\t|   /       /              \\        |             |");
    printf("\n\t\t\t\t\t|**/       /                \\       |          ___|_____\n\n");
    filewrite(pldet,pldet1,pldet2);

    pldet[4]=bidproba(pldet[1],ts,"AARON","FINCH","2014","RIGHT HANDED BATSMEN","CSK",75,13,0,1737,80,2);
    pldet1[4]=bidprobo(pldet1[1],ts,"JAYDEV","UNADKAT","2013","LEFT ARM MEDIUM","5-25","RR",61,67,4,2,2);
    pldet2[4]=bidproal(pldet2[1],ts,"MOISES","HENRIQUES","2012","RIGHT HANDED BATSMEN","RIGHT ARM FAST","SRH",57,5,0,969,74,38,1,0,"3-16",2);
    pldet[5]=bidproba(pldet[1],ts,"JOS","BUTTLER","2015","RIGHT HANDED BATSMEN","RR",37,6,0,1075,94,2);
    pldet1[5]=bidprobo(pldet1[1],ts,"KULDEEP","YADAV","2011","LEFT ARM CHINAMAN","4-20","KKR",30,35,2,0,2);
    pldet2[5]=bidproal(pldet2[1],ts,"MOEEN","ALI","2017","LEFT HANDED BATSMEN","RIGHT ARM OFFBREAK","PWI",5,1,0,77,65,3,0,0,"1-13",1);
    pldet[6]=bidproba(pldet[1],ts,"KANE","WILLIAMSON","2015","RIGHT HANDED BATSMEN","DD",32,11,0,1146,89,2);
    pldet1[6]=bidprobo(pldet1[1],ts,"TRENT","BOULT","2014","LEFT ARM MEDIUM","3-19","RCB",28,33,2,0,2);
    pldet2[6]=bidproal(pldet2[1],ts,"AXAR","PATEL","2010","LEFT HANDED BATSMEN","LEFT ARM ORTHODOX","CSK",68,0,0,686,44,61,2,0,"4-21",1);
    pldet[7]=bidproba(pldet[1],ts,"CHRIS","GAYLE","2008","LEFT HANDED BATSMEN","RCB",112,24,6,3994,175,2);
    pldet1[7]=bidprobo(pldet1[1],ts,"MOHIT","SHARMA","2009","RIGHT ARM MEDIUM","4-14","CSK",84,90,9,0,2);
    pldet2[7]=bidproal(pldet2[1],ts,"SHAKIB","AL-HASAN","2008","LEFT HANDED BATSMEN","LEFT ARM ORTHODOX","KKR",60,2,0,737,66,57,2,0,"3-17",1);

    printf("\n\t\t\t\t\t\t*****  *    *   * *         *     ******");
    printf("\n\t\t\t\t\t\t|      * *  *   *  *       *  *   *");
    printf("\n\t\t\t\t\t\t|****  *  * *   *   *     *    *  *****");
    printf("\n\t\t\t\t\t\t|      *   **   *  *       *  *   *");
    printf("\n\t\t\t\t\t\t*****  *    *   * *         *     *");
    printf("\n\n\n\n\n");
    D1;
    printf("\n\t\t\t\t\t                                              ______ _____");
    printf("\n\t\t\t\t\t|**\\               /\\          \\        /          | |");
    printf("\n\t\t\t\t\t|   \\             /  \\          \\      /           | |");
    printf("\n\t\t\t\t\t|    \\           /    \\          \\    /            | |");
    printf("\n\t\t\t\t\t|     \\         /      \\          \\  /             | |");
    printf("\n\t\t\t\t\t|      |       /********\\          \\/              | |");
    printf("\n\t\t\t\t\t|     /       /          \\          |                | |");
    printf("\n\t\t\t\t\t|    /       /            \\         |                | |");
    printf("\n\t\t\t\t\t|   /       /              \\        |                | |");
    printf("\n\t\t\t\t\t|**/       /                \\       |         _______| |_____\n\n");
    filewrite(&pldet[4],&pldet1[4],&pldet2[4]);
    pldet[8]=bidproba(pldet[1],ts,"FAF","duPLESSIS","2009","RIGHT HANDED BATSMEN","CSK",59,9,0,1457,75,1);
    pldet1[8]=bidprobo(pldet1[1],ts,"UMESH","YADAV","2010","RIGHT ARM FAST","4-24","RCB",107,111,11,0,1);
    pldet2[8]=bidproal(pldet2[1],ts,"COREY","ANDERSON","2015","LEFT HANDED BATSMEN","LEFT ARM MEDIUM","PWI",30,3,0,538,95,11,0,0,"2-18",1);
    pldet[9]=bidproba(pldet[1],ts,"YUSUF","PATHAN","2009","RIGHT HANDED BATSMEN","PWI",164,13,1,3164,77,1);
    pldet1[9]=bidprobo(pldet1[1],ts,"MORNE","MORKEL","2010","RIGHT ARM FAST","4-20","MI",70,77,5,0,1);
    pldet2[9]=bidproal(pldet2[1],ts,"SHANE","WATSON","2008","RIGHT HANDED BATSMEN","RIGHT ARM MEDIUM","RR",107,14,3,2806,106,92,7,0,"4-29",1);
    pldet[10]=bidproba(pldet[1],ts,"DINESH","KARTHIK","2010","RIGHT HANDED BATSMEN","DD",168,16,0,3401,65,1);
    pldet1[10]=bidprobo(pldet1[1],ts,"HARBHAJAN","SINGH","2008","RIGHT ARM OFFBREAK","5-18","MI",134,127,7,1,1);
    pldet2[10]=bidproal(pldet2[1],ts,"ANGELO","MATHEWS","2009","RIGHT HANDED BATSMEN","RIGHT ARM MEDIUM","MI",99,1,0,724,65,27,1,0,"4-19",1);
    pldet[11]=bidproba(pldet[1],ts,"PARTHIV","PATEL","2011","LEFT HANDED BATSMEN","MI",125,11,0,2475,78,1);
    pldet1[11]=bidprobo(pldet1[1],ts,"MOHAMMED","SIRAJ","2016","RIGHT ARM MEDIUM","4-32","PWI",17,21,1,0,1);
    pldet2[11]=bidproal(pldet2[1],ts,"STUART","BINNY","2011","RIGHT HANDED BATSMEN","RIGHT ARM MEDIUM","CSK",87,0,0,810,48,21,0,0,"2-14",1);
    filewrite(&pldet[8],&pldet1[8],&pldet2[8]);

    return 0;
}
