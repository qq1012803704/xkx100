// Room: /d/gaibang/bjandao2.c
// Date: Haa 96/03/22

#include <room.h>
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����ؤ�Ｋ�����ܵĵ���ͨ��������ؤ�Ｘ����֮��Ѫ��ɡ� 
LONG );
	set("exits", ([
		"north" : __DIR__"underbj",
		"south" : __DIR__"bjandao1",
	]));
	set("no_clean_up", 0);
	set("coor/x", -100);
	set("coor/y", 2000);
	set("coor/z", -20);
	setup();
	replace_program(ROOM);
}