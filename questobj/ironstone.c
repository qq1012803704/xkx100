// ironstone.c
inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIB"��ʯ"NOR, ({ "iron stone","stone"}));
	set_weight(30000);
	set("taskobj", 1);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","����һ��������ʯ�������յý��ڵģ�����ȥ��Ӳ֮����\n�ƺ�����������ľ��ò��ϡ�\n");
		set("value", 0);
		set("material", "wood");
	}
}