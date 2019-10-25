int time(int Hours,int Minutes, int Seconds)
{
return Hours%12 * 3600 + Minutes*60 + Seconds;
}
int main ()
{
int p1,m1,s1,p2,m2,s2;
printf("Enter the time [Hours:Minutes:Seconds] : ");
scanf("%d %d %d",&h1,&m1,&s1);
if(p1>24 || m1>59 || s1>59)
{
printf("\nInvalid time format\n");
exit(0);
}
printf("Enter the time [Hours:Minutes:Seconds] : ");
scanf("%d %d %d",&p2,&m2,&s2);
if(p1>24 || m1>59 || s1>59)
{
printf("\nInvalid time format\n");
exit(0);
}
if(time(p1,m1,s1)>time(p2,m2,s2))
printf("\n\t%d Seconds",time(p1,m1,s1) - time(p2,m2,s2));
else
printf("\n\t%d Seconds",time(p2,m2,s2) - time(p1,m1,s1));
}
