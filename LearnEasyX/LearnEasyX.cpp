#include <stdio.h>
#include <graphics.h>

void drawShape(void)
{
	//绘制一个点
	putpixel(50, 50, RED);
	//设置线条颜色
	setlinecolor(BLACK);
	//设置线条样式
	setlinestyle(PS_SOLID, 3);
	//绘制一条线
	line(0, 0, getwidth(), getheight());
	//绘制一个正矩形
	rectangle(100, 0, 100 + 50, 0 + 50);  //无填充矩形
	//设置填充颜色
	setfillcolor(YELLOW);
	fillrectangle(100, 50, 100 + 50, 50 + 50);//填充矩形
	solidrectangle(100, 100, 100 + 50, 100 + 50);
	//绘制一个圆角矩形
	roundrect(160, 0, 160 + 50, 0 + 50, 10, 10);
	fillroundrect(160, 50, 160 + 50, 50 + 50, 10, 10);
	solidroundrect(160, 100, 160 + 50, 100 + 50, 10, 10);
	//绘制一个圆形
	circle(50, 50, 50);
	fillcircle(50, 150, 50);
	solidcircle(50, 250, 50);
	//绘制一个椭圆
	ellipse(200, 0, 200 + 50, 0 + 100);
	fillellipse(200, 0, 200 + 50, 0 + 100);
	solidellipse(200, 0, 200 + 50, 0 + 100);
	//绘制折线条
	POINT points[] = {{0, 0}, {20, 20}, {50, 80}, {10, 60}};
	polyline(points, 4);
}
void drawText(void)
{
	printf("Hello EasyX!");
	//设置文字大小
	settextstyle(48, 0, "微软雅黑");
	//设置文字颜色
	settextcolor(BROWN);
	//设置背景模式
	setbkmode(TRANSPARENT);
	//绘制文字
	outtextxy(10, 10, "Hello EasyX!");
}

int main()
{
	//创建一个图形窗口 宽度*高度
	initgraph(640, 480, EX_NOMINIMIZE);
	//设置窗口的背景颜色
	setbkcolor(WHITE);
	//用设置的颜色填充整个背景窗口
	cleardevice();

	drawShape();
	drawText();
	
	getchar();

	return 0;
}
