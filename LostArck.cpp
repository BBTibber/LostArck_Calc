#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float first_percentage[25] = {100,100,100,100,100,100,60,45,30,30,30,15,15,15,10,10,10,5,5,3,3,1,1,0.5,0.5};
float percentage;
float janggibaek = 0;
	
int Crystal[2][25] = {{82,82,82,120,120,120,156,156,156,192,192,192,228,228,228,264,264,264,300,300,300,336,336,336,372},{216,216,216,310,310,310,404,404,404,498,498,498,592,592,592,686,686,686,780,780,780,874,874,874,968}};
int breakStone[2][25] = {{2,2,4,4,4,4,4,4,4,6,6,6,6,8,8,8,8,8,8,10,10,10,10,12,12},{4,6,6,6,6,8,8,10,10,10,10,12,12,12,12,14,16,16,18,20,22,24,26,28,30}};
int fusionMeterial[2][25] = {{0,0,0,2,2,2,2,2,2,4,4,4,4,4,4,4,4,4,6,6,6,6,6,6,6},{4,4,4,4,4,4,6,6,6,8,8,8,8,8,8,10,10,12,14,14,16,18,20,22,24}};
int fragments[2][25] = {{22,22,22,32,32,32,42,42,42,50,50,50,60,60,60,82,112,152,206,278,378,514,698,948,1288},{58,58,58,82,82,82,108,108,108,132,132,132,158,158,158,216,292,396,536,728,988,1340,1818,2466,3346}};
int gold[2][25] = {{0,0,0,0,0,0,220,220,220,220,220,220,220,220,220,230,240,240,240,240,240,240,240,240,240},{320,320,330,330,330,330,330,330,330,330,330,330,330,330,350,350,350,350,350,350,360,380,390,400,420}};

int Crystal_weap[2][25] = {{138,138,138,198,198,198,258,258,258,320,320,320,380,380,380,440,440,440,500,500,500,560,560,560,622},{358,358,358,516,516,516,672,672,672,830,830,830,986,986,986,1144,1144,1144,1300,1300,1300,1458,1458,1458,1614}};
int breakStone_weap[2][25] = {{4,4,6,6,6,6,8,8,8,10,10,10,10,12,12,12,12,14,14,16,16,18,18,18,20},{6,8,8,10,10,12,12,14,14,16,16,18,18,20,20,22,24,28,30,32,34,38,42,44,48}};
int fusionMeterial_weap[2][25] = {{0,0,0,2,2,2,4,4,4,4,4,4,6,6,6,6,6,6,8,8,8,8,8,8,8},{4,4,4,6,6,6,6,6,8,8,8,8,10,10,10,12,14,16,18,20,22,26,28,32,36}};
int fragments_weap[2][25] = {{32,32,32,46,46,46,60,60,60,74,74,74,88,88,88,120,164,222,300,406,522,750,1016,1380,1872},{84,84,84,120,120,120,156,156,156,192,192,192,228,228,228,310,422,572, 776, 1054,1432,1944,2640,3586,4868}};
int gold_weap[2][25] = {{0,0,0,0,0,0,400,400,400,400,400,400,400,400,400,400,400,400,400,400,420,430,450,460,490},{600,600,600,600,600,640,640,640,640,640,660,660,660,660,660,680,680,680,710,730,750,780,810,840,870}};



int book = 0;
int gaho = 0;
int enchong = 0;
int chuckbock = 0;

int level=0;
int grade = 0;

float Crystal_Gold = 1;
float Crystal_Gold_weap = 12;
float breakStone_Gold[2] = {27,32};
float fusionMeterial_Gold[2] = {10,10};
float fragments_Gold = 143;
float gaho_Gold = 108;
float enchong_Gold = 25;
float chuckbock_Gold = 72;
float book_Gold[2] = {187,381};
float book_Gold_weap[2] = {370,1100};

float Crystal_GoldByOne;
float Crystal_GoldByOne_weap;
float breakStone_GoldByOne;
float fusionMeterial_GoldByOne;
float fragments_GoldByOne;
float gaho_GoldByOne;
float enchong_GoldByOne;
float chuckbock_GoldByOne;

	int count = 0;
	int sum_of_gold = 0;
	int t_gold = 0;
	int fail = 0;
	int weap = 0;
	
	
int try_gold(){

int try_Crystal = 0;

if(weap == 0)
	try_Crystal =  Crystal[grade][level]*Crystal_GoldByOne;
else
	try_Crystal =  Crystal_weap[grade][level]*Crystal_GoldByOne_weap;

int try_breakStone = breakStone[grade][level]*breakStone_GoldByOne;
int try_fusionMeterial = fusionMeterial[grade][level]*fusionMeterial_GoldByOne;
int try_fragments = fragments[grade][level]*fragments_GoldByOne;
int try_gold = gold[grade][level];

int try_gaho = gaho*gaho_GoldByOne;
int try_enchong = enchong*enchong_GoldByOne;
int try_chuckbock = chuckbock*chuckbock_GoldByOne;

int try_book = 0;

if(weap == 0)
	try_book = book*book_Gold[grade];
else
	try_book = book*book_Gold_weap[grade];
	
	
	
return try_Crystal+try_breakStone+try_fusionMeterial+try_fragments+try_gold+try_gaho+try_enchong+try_chuckbock+try_book;




}

int reinforce(){
	
	count++;
	sum_of_gold += t_gold;

	
	if(janggibaek >=100)
		{
		fail = 0;
		return 1;
		}
	int random = 0;
	
	random = rand()%10000;
	if(random < percentage*100)
		{
		fail = 0;
		return 1;
		}
	else
		{
			janggibaek+=percentage*0.465;
			if (fail<10)
				{
				percentage += first_percentage[level]*0.1;
				fail++;
				}
			return 0;
		}
	
}

float cal_perc(){
	if(level>22)
	{
	float gaho_perc = first_percentage[22] / 24;
	float enchong_perc = first_percentage[22] / 144;
	float chuckbock_perc = first_percentage[22] / 72;
	
	return first_percentage[24] + (gaho_perc * gaho) + (enchong_perc * enchong) +(chuckbock_perc * chuckbock) +(book * 10);
	}
	
	else if(level>20)
	{
	float gaho_perc = first_percentage[level] / 24;
	float enchong_perc = first_percentage[level] / 144;
	float chuckbock_perc = first_percentage[level] / 72;
	
	return first_percentage[level] + (gaho_perc * gaho) + (enchong_perc * enchong) +(chuckbock_perc * chuckbock) +(book * 10);
	}
	
	else if (level>16)
	{
	float gaho_perc = first_percentage[level] / 18;
	float enchong_perc = first_percentage[level] / 108;
	float chuckbock_perc = first_percentage[level] / 54;
	
	return first_percentage[level] + (gaho_perc * gaho) + (enchong_perc * enchong) +(chuckbock_perc * chuckbock) +(book * 10);
	}
	
	else if (level>10)
	{
	float gaho_perc = first_percentage[level] / 12;
	float enchong_perc = first_percentage[level] / 72;
	float chuckbock_perc = first_percentage[level] / 36;
	
	return first_percentage[level] + (gaho_perc * gaho) + (enchong_perc * enchong) +(chuckbock_perc * chuckbock) +(book * 10);
	}

	else if (level>5)
	{
	float gaho_perc = first_percentage[level] / 6;
	float enchong_perc = first_percentage[level] / 36;
	float chuckbock_perc = first_percentage[level] / 18;
	
	return first_percentage[level] + (gaho_perc * gaho) + (enchong_perc * enchong) +(chuckbock_perc * chuckbock) +(book * 10);
	}

}

int main(){
	
	printf("Grade 1 or 2 : ");
	scanf("%d",&grade);
	grade--;
	// 1 means 1302, 2 means 1340
	
	srand(time(NULL));
	
	Crystal_GoldByOne = Crystal_Gold/10;
	Crystal_GoldByOne_weap = Crystal_Gold_weap/10;
	breakStone_GoldByOne = breakStone_Gold[grade];
	fusionMeterial_GoldByOne = fusionMeterial_Gold[grade];
	fragments_GoldByOne = fragments_Gold/500;
	gaho_GoldByOne = gaho_Gold;
	enchong_GoldByOne = enchong_Gold;
	chuckbock_GoldByOne = chuckbock_Gold;
	
	
	for(level = 0; level <25; level++)
	{
	printf("level %d !!\n",level+1);
	
	for(weap = 0; weap<2; weap++)
	{
	if(weap == 0)
	printf("Armor : \n");
	else
	printf("Weapon : \n");
	
	float best_gold=1000000000;
	float worst_gold=0;

	int best_gaho=-1;
	int best_enchong=-1;
	int best_chuckbock=-1;
	int best_book = -1;
	int worst_gaho=-1;
	int worst_enchong=-1;
	int worst_chuckbock=-1;
	int worst_book = -1;

	for(gaho = 0; gaho<9; gaho++)
	for(enchong = 0; enchong<49; enchong++)
	for(chuckbock = 0; chuckbock<25; chuckbock++)
	for(book =0; book<2; book++)
	{
	if(book == 0 || level<15)
	if((gaho<3&&enchong<13&&chuckbock<7)||(level>10&&gaho<5&&enchong<25&&chuckbock<13)||(level>16&&gaho<7&&enchong<37&&chuckbock<19)||(level>20))
	{
	
	t_gold = try_gold();
	float av_count=0;
	float av_of_gold = 0;
	
	for(int i=0; i<10000;i++)
	{
	
	percentage = cal_perc();	
	janggibaek = 0;
	
	count=0;
	sum_of_gold = 0;
	
	int succ = 0;
	do{
		
		succ = reinforce();
		
	}while(succ == 0);
	av_count+=count;
	av_of_gold+=sum_of_gold;
	
	}
	
//	printf("\n%.1f %.0f",av_count/100000, av_of_gold/100000);
	
	if (av_of_gold/10000>worst_gold)
		{
		worst_gold = av_of_gold/10000;
		worst_gaho=gaho;
		worst_enchong=enchong;
		worst_chuckbock=chuckbock;
		if(level<15)
		worst_book = book;
		}
	if (av_of_gold/10000<best_gold)
		{
		best_gold = av_of_gold/10000;
		best_gaho=gaho;
		best_enchong=enchong;
		best_chuckbock=chuckbock;
		if(level<15)
		best_book = book;
		}
	}
	
	}
	
	
	printf("\nBest Gold");
	printf("\nGaho: %d ,Enchong : %d ,ChuckBock : %d",best_gaho,best_enchong,best_chuckbock);
	if(level<15)
	printf(" // Book : %d",best_book);
	printf("\n%.0f",best_gold);
	printf("\n\nWorst Gold");
	printf("\nGaho: %d ,Enchong : %d ,ChuckBock : %d",worst_gaho,worst_enchong,worst_chuckbock);
	if(level<15)
	printf(" // Book : %d",worst_book);
	printf("\n%.0f\n",worst_gold);
	if(weap==0)
	printf("-----------\n");
	}
	printf("\n-------------------------------------------------\n\n");
}
	return 0;
	
}
