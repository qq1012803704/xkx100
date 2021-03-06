// Room: /d/tiezhang/hclu2.c
// Last Modified by winder on Nov. 17 2000

inherit ROOM;

void create()
{
	set("short", "荒草路");
	set("long", @LONG
你走在一条荒芜的小路上，两旁荒草齐膝，荆棘遍地，似乎罕有人
至。山石壁立，遮天蔽日，鸟兽全无，四周笼罩在一片阴暗之中，使这
里看起来格外深隧幽静。
LONG	);
	set("exits", ([ /* sizeof() == 2 */
		"southdown" : __DIR__"hclu1",
		"northwest" : __DIR__"hclu3",
	]));
	set("no_clean_up", 0);
	set("outdoors", "tiezhang");
	set("coor/x", -2050);
	set("coor/y", -1890);
	set("coor/z", 60);
	setup();
}
int valid_leave(object me, string dir)
{
	if (me->query("family/family_name") == "铁掌帮") return 1;
	if ((dir != "northwest") && (dir != "southdown"));
	if (dir == "northwest")
	{
		me->receive_damage("qi", 5);       
		write("你的双腿被荆棘刺破，鲜血流了出来。\n");
	}
	if (dir == "southdown")
	{
		me->receive_damage("qi", 5);       
		write("你的双腿被荆棘刺破，鲜血流了出来。\n");
	}
	return 1;
}
