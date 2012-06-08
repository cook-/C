#include <stdio.h>
#include <conio.h>//getch()函数所需头文件
#include <stdlib.h>//随机函数所需头文件
#include <time.h>//time()函数所需头文件
void clear(void)//此函数用以清除当前行
{
printf("\r                                                  \r");
}
void start(void)
{
puts("这是消单词游戏的精简版，还不会图像编程的人可以看一看");
puts(" 由于没有引人数据库，所以此单词是模拟的。");
puts("按任意键开始,按Esc键结束,按tab键重新开始:");
puts(" 一旦输错，将发出声音警告，你必须重新输入。");
puts("           按任意键开始,按Esc键结束:");
getch();
}
int main()
{
char*c_rand,*c_input;
int i,j,N,n,space,N_rand;
start();
printf("\r你想消最多由多少个字母组成的单词？(输入数字(1-9)");
n=getch();
N=n-'0';//将输入的字符转换为整型数字
clear();//清除当前行
    
	if(!((N>=1&&N<=9)||n==27))//27是键Esc的ASII值
	{
	    printf("\r范围错误，请重新开始：");
		    getch();
			    exit(1);//异常退出
				}
				if(n==27)
				    return 0;     
					srand(time(NULL));//用来对随机函数初始化
					c_rand=(char*)malloc(N+1);
					c_input=(char*)malloc(N+1);

					while(1)
					{
					   N_rand=rand()%N+1;//实现单词长度随机定义
					      for(i=0;i<N_rand;i++)
						     {
							     c_rand[i]=(rand()%20==0)?(rand()%26+'A'):(rand()%26+'a');//随机取字母,并使大写字母出现概率为1/20
								    }
									   c_rand[N_rand]='\0';
									      //下面四行代码实现单词位置随机出现
										  //   space=rand()%50;
										  //      putchar('\r');
										  //         for(i=0;i<space;i++)
										  //             putchar(' ');
										  //                 printf("%s",c_rand);
										  //                   
										  //                      for(i=0;i<N_rand;i++)
										  //                         {
										  //                             c_input[i]=getch();//用户输入
										  //                                 if(c_input[i]=='\x1b')//"\x1b"代表的是Esc键
										  //                                      break;
										  //                                          //下面五行代码实现字母消失效果
										  //                                              putchar('\r');
										  //                                                  for(j=0;j<space;j++)
										  //                                                       putchar(' ');
										  //                                                           for(j=0;j<=i;j++)
										  //                                                                putchar(' ');
										  //                                                                   
										  //                                                                       if(c_input[i]!=c_rand[i])
										  //                                                                           {
										  //                                                                                i=-1;
										  //                                                                                     putchar('\a');
										  //                                                                                          //下面四行代码代码字母重现效果
										  //                                                                                               putchar('\r');
										  //                                                                                                    for(j=0;j<space;j++)
										  //                                                                                                          putchar(' ');
										  //                                                                                                               printf("%s",c_rand);
										  //                                                                                                                   }
										  //                                                                                                                      }
										  //                                                                                                                        
										  //                                                                                                                           if(c_input[i]=='\x1b')//"\x1b"代表的是Esc键
										  //                                                                                                                              break;
										  //                                                                                                                              }
										  //                                                                                                                              free(c_rand);
										  //                                                                                                                              free(c_input);
										  //                                                                                                                              return 0;
										  //                                                                                                                              }
