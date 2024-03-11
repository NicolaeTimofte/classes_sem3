#include "Canvas.h"
#include <iostream>

using namespace std;

Canvas::Canvas(int width, int height)
{
	h = height;
	w = width;
	this->canvass = new char* [height];
	for (int i = 0; i < height; ++i)
	{
		canvass[i] = new char[width];
		for (int j = 0; j < width; ++j)
		{
			canvass[i][j] = ' ';
		}
	}
}

Canvas::~Canvas()
{
	for (int i = 0; i < h; ++i)
	{
		delete[] canvass[i];
	}
	delete[] canvass;
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	int cx = x;
	int cy = y;
	int r = ray;
	int p = 1 - r;
	int x0 = 0;
	int y0 = r;

	SetPoint(cx, cy + r, ch); 
	SetPoint(cx, cy - r, ch); 
	SetPoint(cx + r, cy, ch); 
	SetPoint(cx - r, cy, ch); 

	while (x0 < y0) {
		x0++;
		if (p < 0) {
			p += 2 * x0 + 1;
		}
		else {
			y0--;
			p += 2 * (x0 - y0) + 1;
		}
		SetPoint(cx + x0, cy + y0, ch);
		SetPoint(cx - x0, cy + y0, ch);
		SetPoint(cx + x0, cy - y0, ch);
		SetPoint(cx - x0, cy - y0, ch);
		SetPoint(cx + y0, cy + x0, ch);
		SetPoint(cx - y0, cy + x0, ch);
		SetPoint(cx + y0, cy - x0, ch);
		SetPoint(cx - y0, cy - x0, ch);
	}
}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {

			int dx = i - x;
			int dy = j - y;
			double distance = sqrt(dx * dx + dy * dy);

			if (distance <= ray)
			{
				canvass[i][j] = ch;
			}
		}
	}
}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top; i <= bottom; i++)
		if (i >= 0 && i < h)
		{
			if (left >= 0 && left < w)
				canvass[i][left] = ch;
			if (right >= 0 && right < w)
				canvass[i][right] = ch;
		}
	for (int j = left; j <= right; j++)
		if (j >= 0 && j < w)
		{
			if (top >= 0 && top < h)
				canvass[top][j] = ch;
			if (bottom >= 0 && bottom < h)
				canvass[bottom][j] = ch;
		}
}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top + 1; i < bottom; i++)
		for (int j = left + 1; j < right; j++)
			if (i >= 0 && i < h && j >= 0 && j < w)
				canvass[i][j] = ch;
}
void Canvas::SetPoint(int x, int y, char ch)
{
	if (x >= 0 && x < w && y >= 0 && y < h) 
		canvass[y][x] = ch;
}
void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int deltaX = abs(x2 - x1);
	int deltaY = abs(y2 - y1);
	int signX = x1 < x2 ? 1 : -1;
	int signY = y1 < y2 ? 1 : -1;
	int error = deltaX - deltaY;

	SetPoint(x2, y2, ch);

	while (x1 != x2 || y1 != y2) {
		SetPoint(x1, y1, ch);
		int error2 = error * 2;
		if (error2 > -deltaY) {
			error -= deltaY;
			x1 += signX;
		}
		if (error2 < deltaX) {
			error += deltaX;
			y1 += signY;
		}
	}
}
void Canvas::Print()
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			cout << canvass[i][j] << " ";
		cout << endl;
	}
}
void Canvas::Clear()
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			canvass[i][j] = ' ';
	}
}