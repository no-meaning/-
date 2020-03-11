#include <stdio.h>

int main()
{
	while(1)//闰年数i，计算总天数all，智力z,一月一日至生日天数x，至测定天数y
	{
		int y1,y2,m1,m2,d1,d2,z,all,i,j,x,y;
			printf("————————人体生物节律————————\n");
			printf("请输入您的出生日期（例如出生于1988年11月13日 输入:1988,11,13）：\n");
			scanf("%d,%d,%d,",&y1,&m1,&d1);
			fflush(stdin);
			printf("请您期望测定的日期（例如欲测2020年3月5日 输入:2020,3,5）：\n");
			scanf("%d,%d,%d",&y2,&m2,&d2);
			i=0;
			j=y1;
			while(j<=y2)//求闰年数
			{
			if(((j%4==0)&&(j%100!=0))||(j%400==0))
				i=i+1;
			else
			i=i+0;
			j=j+1;
			}
			if(m1==1)//开始计算一月一日至生日总天数
				x=d1;
			else if(m1==2)
				x=d1+31;
			else if(m1==3)
				x=d1+59;
			else if(m1==4)
				x=d1+90;
			else if(m1==5)
				x=d1+120;
			else if(m1==6)
				x=d1+151;
			else if(m1==7)
				x=d1+181;
			else if(m1==8)
				x=d1+212;
			else if(m1==9)
				x=d1+243;
			else if(m1==10)
				x=d1+273;
			else if(m1==11)
				x=d1+304;
			else
				x=d1+334;
			if(((y1%4==0)&&(y1%100!=0))||(y1%400==0))
				x=x+1;//闰年加1
			else
				x=x+0;
			if(m2==1)//开始计算测试总天数
				y=d2;
			else if(m2==2)
				y=d2+31;
			else if(m2==3)
				y=d2+59;
			else if(m2==4)
				y=d2+90;
			else if(m2==5)
				y=d2+120;
			else if(m2==6)
				y=d2+151;
			else if(m2==7)
				y=d2+181;
			else if(m2==8)
				y=d2+212;
			else if(m2==9)
				y=d2+243;
			else if(m2==10)
				y=d2+273;
			else if(m2==11)
				y=d2+304;
			else
				y=d2+334;
			if(((y2%4==0)&&(y2%100!=0))||(y2%400==0))
				y=y+1;
			else
				y=y+0;//此处完成
			all=(y2-y1)*365+i-x+y;
			z=all%33;
			if(z==0)
				printf("您的智力节律处于周期日\n");
			else if((z>0)&&(z<17))
			{
				printf("您的智力节律处于高潮期\n");
				printf("这一天您头脑灵敏，思维敏捷，记忆力强，更具有逻辑性和解决复杂问题的能力。\n");
			}
			else if(z==7)
				printf("您的智力节律处于临界日\n");
			else
			{
				printf("您的智力节律处于低潮期\n");
				printf("这一天您会出现注意力不集中，健忘，判断率降低等情况。\n");
			
			}
}
		return 0;
}