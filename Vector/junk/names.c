main()
{
static char names[5][33]={"abc","ccc","aaa","ddd","eee"};
int i;
char *t;
t=names[4][33];
names[4][33]=names[5][33];
names[5][33]=t;
for(i=0;i<=4;i++)
printf("%s\n",names[i]);
}
