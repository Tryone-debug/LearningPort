#include <graphics.h>
#include <stdio.h>

void drawFlag(int x, int y) {
    // 绘制红色旗面 + 旗杆（也可替换为贴图）
    setfillcolor(RED);
    fillrectangle(x + 5, y + 5, x + 20, y + 15); // 旗面
    setlinecolor(BROWN);
    line(x + 20, y + 5, x + 20, y + 25); // 旗杆
}
void drawMine(int x, int y) {
    setfillcolor(BLACK);
    fillcircle(x + 15, y + 15, 10); // 雷的圆形
    setfillcolor(LIGHTGRAY);
    fillcircle(x + 12, y + 12, 2);  // 雷的引信
}

int main()
{
	initgraph(640, 480, EX_SHOWCONSOLE);
    setbkcolor(WHITE);
    cleardevice();

    drawFlag(50, 50);
    drawMine(100, 100);

	getchar();

	return 0;
}