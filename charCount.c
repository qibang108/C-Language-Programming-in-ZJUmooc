#include <stdio.h>
#include <stdlib.h>

/*统计输入字符个数及各字符出现次数(本程序仅用作统计小写字母,大写字母及数字算法类似)*/
/*输入字符串以0结尾*/
/*改进版使用getchar()进行单字符读写,回车后按Ctrl+Z结束读入*/

int main() {

	char c;
	int count[26] = {0};    //用于存放各小写字符出现次数
	int num = 0;            //字符串长度

/*	
	scanf_s("%c", &c);

	while (c != '0')
	{
		count[c - 'a']++;
		scanf_s("%c", &c);
		num++;
	}
*/

    while ((c=getchar()) != EOF)
	{
		count[c - 'a']++;
		num++;
	}

	printf_s("共输入%d个字符，其中：\n", num-1);

	for (int i = 0; i < 26; i++)
	{
		if (count[i] != 0)
			printf_s("'%c' 出现 %d 次\n", i + 97, count[i]);
	}
	
	system("pause");
	return 0;
}
