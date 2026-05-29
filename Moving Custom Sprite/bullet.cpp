#include "bullet.h"
bullet::bullet()
{
	x = 0;
	y = 0;
	bullet_bmp = NULL;
	alive = false;;
	srand(time(0));
}
bullet::~bullet()
{
	if (bullet_bmp != NULL)
	{
		al_destroy_bitmap(bullet_bmp);
	}
}
void bullet::create_bullet_bitmap()
{
	bullet_bmp = al_create_bitmap(16, 16);

	al_set_target_bitmap(bullet_bmp);
	al_clear_to_color(al_map_rgb(0, 0, 0));

	// Primitive 1: blue circle for bullet body
	al_draw_filled_circle(8, 8, 7, al_map_rgb(0, 120, 255));

	// Primitive 2: red rectangle for bullet detail
	al_draw_filled_rectangle(6, 2, 10, 14, al_map_rgb(255, 0, 0));
}

bool bullet::getStatus()
{
	return alive;
}

void bullet::fire()
{
	x = rand() % (640 - 16);
	y = -(rand() % 200);
	alive = true;

}
void bullet::erase_bullet()
{
	al_draw_filled_rectangle(x, y, x + 16, y + 16, al_map_rgb(0, 0, 0));
}
int bullet::move_bullet (int arrowX, int arrowY, int width, int length, int height)
{
	y++;
	// Draw the custom bullet bitmap instead of a rectangle
	al_draw_bitmap(bullet_bmp, x, y, 0);

	// Collision check adjusted for 16x16 bullet bitmap
	if (x + 16 > arrowX && x < arrowX + width &&
		y + 16 > arrowY && y < arrowY + length)
	{
		al_draw_filled_rectangle(x, y, x + 16, y + 16, al_map_rgb(0, 0, 0));
		alive = false;
		return 1;
	}
	if (y> height)
		alive = false;
	return 0;


} 

//Christian Tolvier//
