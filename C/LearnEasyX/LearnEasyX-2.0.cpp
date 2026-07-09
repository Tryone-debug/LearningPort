#include <stdio.h>
#include <easyx.h>

int main()
{
	initgraph(640, 480, EX_SHOWCONSOLE);
	setbkcolor(BLACK);

	int score = 0;
	char str[50] = " ";
	while (true)
	{
		sprintf(str, "Score:%d", score++);
		outtextxy(20, 20, str);
		getchar();
	}

	return 0;
}