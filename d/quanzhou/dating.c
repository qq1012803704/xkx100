// Room: /d/quanzhou/dating.c
// Last Modified by winder on May. 29 2001

inherit ROOM;

void create()
{
	set("short", "��ݴ���");
	set("long", @LONG
Ȫ�������רΪ�������������������ġ����ڽ�����ʦ��ʮ��Ϊ��
���ݵģ�����������������ڴ�ѧϰһЩ�����ķ����书��һ�������
����ȣ�����Ҳ��Ϊ���ѡ��һ����Ľ�����ɡ�
    ǽ�����Ÿ�����(tiezi)��
LONG );
	set("objects", ([
		__DIR__"npc/lin" : 1,
	]));
	set("no_fight",1);
	set("no_steal",1);
	set("no_beg",1);
	set("item_desc", ([
		"tiezi" : @TEXT
������ݾ����ߣ���������еĻ����书ѧȫ����Ҫ�Ļ����书�ǣ�

�� �����ڹ�
�� �����Ṧ
�� �����м�
�� ����ȭ�ţ��ɻ���צ���������ַ��������Ʒ�������ָ������
             ��צ���Լ�����ȭ����ѡһ�֡�
�� �����������ɻ����������������������������������ȷ�����
             �������Լ�����������ѡһ�֡�

����������������������������������������������������������
��������ݡ������ڻ����书
����������������������������������������������������������
���������Ṧ (dodge)              ��������ȭ�� (cuff)
���������ڹ� (force)              ������������ (blade)
���������м� (parry)            �������������� (stick)
��������צ�� (claw)             �������������� (club)
���������ַ� (hand)             �����������ȷ� (staff)
���������Ʒ� (strike)           �������������� (sword)
��������ָ�� (finger)           �������������� (throwing)
����������������������������������������������������������
��������ݡ������ڸ߼��书
����������������������������������������������������������
����̫�泤ȭ (changquan)          ��������ɢ�� (sanshou)
����������������������������������������������������������
ѧϰ������: xue ʦ���� �书���� ����
TEXT
	]) );
	set("exits", ([
		"east" : __DIR__"kaojiaochang",
	]));
	set("coor/x", 1810);
	set("coor/y", -6550);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}