// Room: /d/nanshaolin/shanroad4.c
// Last Modified by winder on May. 29 2001

inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
���������ֺ������һ��С·��·�Գ�������ݡ������̾͵�С·
���������������ƺ����˾�����ɨ����Զ�����Ǻ�ɽ�ˣ�ɽ��ͦ�Σ���
�㾳�ģ���������������������΢���������������������
LONG );
	set("exits", ([
		"north" : __DIR__"shanroad5",
		"south" : __DIR__"shanroad3",
	]));
	set("outdoors", "nanshaolin");
	set("no_clean_up", 0);
	set("coor/x", 1820);
	set("coor/y", -6050);
	set("coor/z", 30);
	setup();
        replace_program(ROOM);
}
