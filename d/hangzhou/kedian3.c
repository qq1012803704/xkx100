// kedian3.c
// Date: Nov.1997 by Venus
inherit ROOM;
void create()
{
        set("short", "������͵��¥");
        set("long", @LONG
������͵��Ȼ�����鴫���ô��һ��ͷ���һ�ž��µĴ�������
���������������ޱߵ����˾��¡�ůů�ķ紵��������˯����������
˯���ĺõط���
LONG);
        set_light(0);
        set("sleep_room", "1");
        set("no_fight", "1");
        set("hotel",1);
        set("no_clean_up", 0);
        set("exits", ([
                "out" : __DIR__"kedian2",
        ]));
	set("coor/x", 4160);
	set("coor/y", -1490);
	set("coor/z", 10);
	setup();
}

int valid_leave(object me, string dir)
{
        if ( dir == "out" ) me->delete_temp("rent_paid");
        return ::valid_leave(me, dir);
}