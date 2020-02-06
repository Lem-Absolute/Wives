function to_help()
{
	window.open("help.html");
}

// 播放对应音频
function reply(str)
{
	var common_head = "./sound/";
	var mp3 = common_head + str;
	var mp3 = new Audio(mp3);
	mp3.play(); //播放 mp3这个音频对象
}

// 点击发送按钮
function send_info()
{
	//alert(window.location.pathname);
	// 获取输入框内容
	var info = document.getElementById('info').value;
	document.getElementById('info').value = "";
	
	// sound下音频文件路径二维数组
	var reply_info = [
		["1-1/不能中止命令,我就是这样被制造的.mp3", "1-1/初次见面,我是玩赏用人造天使.mp3", "1-1/-对卡片的解释.mp3",
	"1-1/铭刻开始.mp3", "1-1/什么都可以.mp3", "1-1/是的.mp3", "1-1/无法中止命令.mp3", "1-1/早上好,主人.mp3"
		],
		["1-2/不，没事的.mp3", "好的，主人2.mp3", "1-2/好的-主人.mp3", "1-2/那主人，这个给你.mp3", "1-2/胖次是吗。。。.mp3",
		"1-2/是的，这张卡片自动结束了，已经没事了.mp3", "1-2/锁链的应对措施.mp3", "1-2/遇到麻烦了吗，主人.mp3", "1-2/主人？.mp3"
		],
		["1-3/对不起.mp3", "好的，主人.mp3", "1-3/好的，主人2.mp3", "1-3/好的，主人3.mp3", "1-3/开心？开心.mp3", "1-3/是的.mp3",
		"1-3/是的2.mp3", "1-3/是的3.mp3", "1-3/我和主人在一起，怎么说呢，心有种轻飘飘的感觉.mp3", "1-3/我吗.mp3",
		"1-3/我是以24马赫的速度飞过去的.mp3", "1-3/这是作业.mp3", "1-3/主人和我一起开心吗.mp3", "1-3/主人为什么在笑呢.mp3"
		],
		["1-4/但是，主人他.mp3", "1-4/朋友？我没有朋友.mp3", "1-4/在家里面.mp3", "1-4/主人遇到麻烦了.mp3"
		],
		["1-5/好的，主人.mp3", "1-5/好的，主人2.mp3", "1-5/好的.mp3", "1-5/在的，主人.mp3"
		],
		["1-6/啊.mp3", "诶.mp3", "1-6/嗯？.mp3", "1-6/那个，这个翅膀是可变式羽翼.mp3", "1-6/那个，主人，睡觉是怎么一回事.mp3",
		"1-6/是.mp3", "1-6/是2.mp3", "1-6/是3.mp3", "1-6/是4.mp3", "1-6/是5.mp3", "1-6/一直在主人身旁，在主人睡醒前，一直.mp3",
		"1-6/这样吗，主人.mp3"
		],
		["1-7/没事的，人的背后有看不见的，很大的翅膀.mp3", "1-7/是，主人.mp3", "1-7/是，主人2.mp3", "1-7/是，主人3.mp3",
		"1-7/是.mp3", "1-7/这些话是什么，不知道是什么意思却很让人在意.mp3"
		],
		["1-8/不，没想到自己也.mp3", "1-8/诶？.mp3", "1-8/没事的.mp3", "1-8/是，主人.mp3", "1-8/是.mp3",
		"1-8/我是玩赏用天使，我要回到主人的身边.mp3", "1-8/主人明明叫我安静待着的，主人.mp3"
		],
		["1-9/人类是说谎的生物，我是普通的人类.mp3", "1-9/是.mp3", "1-9/我什么也不知道.mp3", "1-9/我是，人类.mp3",
		"1-9/我想在主人身边，从今往后.mp3", "1-9/要更像人类才行.mp3"
		],
		["1-10/fallen_down.mp3", "1-10/班上的朋友怎么都拜托我帮忙.mp3", "1-10/不，是因为大家的演奏，我才能唱的.mp3",
		"1-10/对不起，主人.mp3", "1-10/对了，加油努力，让主人表扬我的话，肯定.mp3", "1-10/欢迎光临，主人.mp3",
		"1-10/没什么.mp3", "1-10/妮姆芙，这里的天空很广阔哦.mp3", "1-10/我是主人最讨厌的，兵器.mp3",
		"1-10/我也想牵主人的手.mp3", "1-10/我一点都帮不上主人的忙.mp3", "1-10/怎样才能牵主人的手呢.mp3",
		"1-10/这样真的好吗，过得幸福.mp3"
		],
		["1-11/非常可爱哦，主人.mp3", "1-11/没那回事.mp3", "1-11/是.mp3", "1-11/说谎不行吗.mp3", "1-11/我很高兴，楚原把我当普通人来对待.mp3",
		"1-11/我是主人最讨厌的兵器，这样瞒住主人真的好吗.mp3", "1-11/我有事情瞒着主人.mp3", "1-11/我有重要的事情要说.mp3",
		"1-11/要找主人说出真相才行.mp3", "1-11/这是主人的命令呢.mp3", "1-11/主人！.mp3", "1-11/主人，请.mp3", "1-11/主人在想些什么呢.mp3"
		],
		["1-12/（看见主人和妮姆芙牵手）.mp3", "1-12/niali.mp3", "1-12/nidali.mp3", "1-12/nigoli.mp3", "1-12/并且最近，一直在为什么烦恼的样子.mp3",
		"1-12/不，还没有.mp3", "1-12/不简单，因为，我从没见过，妮姆芙你笑过.mp3", "1-12/赤色的花，白色的花.mp3", "1-12/从来没有看到过.mp3",
		"1-12/从前，一直，没看到，妮姆芙，笑过.mp3", "1-12/动力炉，好疼.mp3", "1-12/动力炉百分比机能正常.mp3", "1-12/对不起，主人.mp3",
		"1-12/呃.mp3", "1-12/诶.mp3", "1-12/诶2.mp3", "1-12/恩.mp3", "1-12/恩？.mp3", "1-12/好不容易的约会，我一点也没有笑.mp3", "1-12/呵嗯.mp3",
		"1-12/和主人的约会很开心，但总感觉不对劲.mp3", "1-12/脸很红呦，主人.mp3", "1-12/那是为什么，我也不清楚.mp3", "1-12/是，主人.mp3",
		"1-12/是.mp3", "1-12/是因为我是战斗用的原因.mp3", "1-12/谁知道呢.mp3", "1-12/万岁是吗.mp3", "1-12/为什么，不会笑呢.mp3", 
		"1-12/早上好，主人.mp3", "1-12/怎么回事，我有点跃跃欲试.mp3", "1-12/怎么了吗.mp3", "1-12/这样如何，主人.mp3", "1-12/只要表情？.mp3", 
		"1-12/主人，很开心的样子.mp3", "1-12/主人，他会，感到高兴.mp3", "1-12/主人，他会，感到高兴2.mp3", "1-12/主人，这是.mp3"
		],
		["1-13/（道别）.mp3", "1-13/（惊吓）.mp3", "1-13/（笑）.mp3", "1-13/model空之女王ON.mp3", "1-13/niali.mp3",
		"1-13/type阿尔法，伊卡洛斯，出击.mp3", "1-13/不用，但是.mp3", "1-13/对不起.mp3", "1-13/诶.mp3",
		"1-13/呵嗯.mp3", "1-13/就是，那个，去买个东西.mp3", "1-13/可变式羽翼，限制解除.mp3", "1-13/没什么.mp3",
		"1-13/目标多半是我，我将以主人讨厌的兵器战斗，不能再回到主人的身边，不能再一次.mp3", "1-13/那是？.mp3",
		"1-13/妮姆芙的信号.mp3", "1-13/你醒了吗，主人.mp3", "1-13/是，主人.mp3", "1-13/是.mp3", "1-13/是2.mp3", "1-13/是3.mp3",
		"1-13/是的，昨天一晚上没回来.mp3", "1-13/太好了.mp3", "1-13/我知道.mp3", "1-13/怎么了.mp3", "1-13/这个.mp3",
		"1-13/主人，非常抱歉，一直以来欺骗你.mp3", "1-13/主人.mp3", "主人2.mp3", "1-13/最喜欢你了，我的主人，永别了.mp3"
		],
		["1-14/没事的，不管发生什么，主人还是我的主人，从今往后一直都是.mp3", "1-14/人造天使，翅膀吸水会变重的.mp3",
		"1-14/天降之物F.mp3", "一切正常，主人.mp3", "1-14/泳池被禁止使用，去换衣服了.mp3", "1-14/这是主人的命令.mp3",
		"1-14/主人（关心）.mp3", "1-14/主人，精神不稳定的话，变身会.mp3"
		]
	];
	
	// A
	if(info.indexOf("啊") != -1)
	{
		if(info == "啊？你在说什么")
		{
			//从来没有看到过
			reply(reply_info[11][8]);
			//从前，一直，没看到，妮姆芙，笑过
			reply(reply_info[11][9]);
		}
		else if(info == "啊，焦成一团黑了")
		{
			//对不起
			reply(reply_info[12][7]);
		}
		else if(info == "啊嘞，大家呢")
		{
			//泳池被禁止使用，去换衣服了
			reply(reply_info[13][4]);
		}
		return;
	}
	
	// B
	if(info.indexOf("把") != -1)
	{
		if(info == "把西瓜带回来了吗")
		{
			//是的3
			reply(reply_info[2][7]);
		}
		return;
	}
	
	if(info.indexOf("不") != -1)
	{
		if(info == "不觉得麻烦吗")
		{
			//不，没事的
			reply(reply_info[1][0]);
		}
		else if(info == "不会的是吧")
		{
			//是的2
			reply(reply_info[2][6]);
		}
		else if(info == "不要太在意")
		{
			//好的
			reply(reply_info[4][2]);
		}
		else if(info == "不能勉强说谎哦")
		{
			//说谎不行吗
			reply(reply_info[10][3]);
		}
		return;
	}
	
	if(info.indexOf("拜托") != -1)
	{
		if(info == "拜托你了，伊卡洛斯，救救妮姆芙")
		{
			//type阿尔法，伊卡洛斯，出击
			reply(reply_info[12][5]);
		}
		return;
	}
	
	// C
	if(info.indexOf("楚原") != -1)
	{
		if(info == "楚原呢")
		{
			//在家里面
			reply(reply_info[3][2]);
		}
		return;
	}
	
	if(info.indexOf("才") != -1)
	{
		if(info == "才不是")
		{
			//是
			reply(reply_info[5][6]);
		}
		return;
	}
	
	if(info.indexOf("差") != -1)
	{
		if(info == "差不多该回去了")
		{
			//是
			reply(reply_info[5][8]);
		}
		return;
	}
	
	if(info == "赤色的花，白色的花")
	{
		//赤色的花，白色的花
		reply(reply_info[11][7]);
		return;
	}
	
	// D
    if(info.indexOf("都") != -1)
    {
        if(info == "都是伊卡洛斯的功劳呢")
        {
            //printf("不，是因为大家的演奏，我才能唱的\n");
			reply(reply_info[9][2]);
            return;
        }
    }

    if(info.indexOf("对") != -1)
    {
        if(info == "对，只要表情就行")
        {
            //printf("这样如何，主人\n");
			reply(reply_info[11][32]);
            return;
        }
    }

    if(info.indexOf("打") != -1)
    {
        if(info == "打电话拜托在买东西的智树这样的话")
        {
            //printf("不用，但是\n");
			reply(reply_info[12][6]);
            return;
        }
    }

    if(info.indexOf("多") != -1)
    {
        if(info == "多亏了你，现在可以拯救朋友了")
        {
            //printf("是，主人\n");
			reply(reply_info[12][17]);
            return;
        }
    }

    // E

    // F
    if(info.indexOf("放") != -1)
    {
        if(info == "放开我的手")
        {
            //printf("没事的，人的背后有看不见的，很大的翅膀。在那其中，主人有很大的翅膀，我知道的，不知道怎么说，但我知道...主人被天空召唤着\n");
			reply(reply_info[6][0]);
            return;
        }
    }

    if(info == "fallen down" || info == "FALLEN DOWN")
    {
        //printf("曲名为：《fallen down》\n");
		reply(reply_info[9][0]);
        return;
    }


    // G
    if(info.indexOf("命令") != -1)
    {
        if(info == "刚才的命令不算好吗")
        {
            //printf("无法中止命令\n");
			reply(reply_info[0][6]);
            return;
        }
    }

    // H
    if(info.indexOf("还") != -1)
    {
        if(info == "还需要练习呢")
        {
            //printf("对不起\n");
			reply(reply_info[2][0]);
            return;
        }
    }

    if(info.indexOf("好") != -1)
    {
        if(info == "好，今天已经睡醒了")
        {
            //printf("诶\n");
			reply(reply_info[5][1]);
            return;
        }
    }

    if(info.indexOf("话") != -1)
    {
        if(info == "话先说在前头，你们两个千万不要来学校哦")
        {
            //printf("是\n");
			reply(reply_info[6][4]);
            return;
        }
    }

    // I

    // J
    if(info.indexOf("脚") != -1)
    {
        if(info == "脚踢起来，我牵着你的手呢")
        {
            //printf("这样吗，主人\n");
			reply(reply_info[5][11]);
            return;
        }
    }

    if(info.indexOf("尽") != -1)
    {
        if(info == "尽情地舒展一下翅膀吧")
        {
            //printf("是\n");
			reply(reply_info[5][7]);
            return;
        }
    }

    // K
    if(info.indexOf("卡片") != -1)
    {
        if(info == "卡片是什么")
        {
            //printf("（解释）\n");
			reply(reply_info[0][2]);
            return;
        }
        else if(info == "卡片还能做什么")
        {
            //printf("什么都可以\n");
			reply(reply_info[0][4]);
            return;
        }
    }

    if(info.indexOf("快") != -1)
    {
        if(info == "快点回去睡觉")
        {
            //printf("那个，主人，睡觉是怎么一回事。我们人造天使没有被设定睡觉这一功能，所以不知道睡觉、做梦是怎么一回事\n");
			reply(reply_info[5][4]);
            return;
        }
    }

    if(info.indexOf("可") != -1)
    {
        if(info == "可能会抢走智树也没关系吗")
        {
            //printf("没事的，不管发生什么，主人还是我的主人，从今往后一直都是\n");
			reply(reply_info[13][0]);
            return;
        }
    }

    // L

    // M
    if(info.indexOf("没") != -1)
    {
        if(info == "没事吧，怎么伤痕累累的")
        {
            //printf("没事的\n");
			reply(reply_info[7][2]);
            return;
        }
    }

    if(info.indexOf("马上") != -1)
    {
        if(info == "马上正式比赛了，多练习一下")
        {
            //printf("对不起，主人\n");
			reply(reply_info[9][3]);
            return;
        }
    }

    if(info.indexOf("嘛") != -1)
    {
        if(info == "嘛，笑一下很简单的事情")
        {
            //printf("不简单，因为，我从没见过，妮姆芙你笑过\n");
			reply(reply_info[11][6]);
            return;
        }
    }

    // N
    if(info.indexOf("那") != -1)
    {
        if(info == "那我出门了")
        {
            //printf("好的，主人\n");
			reply(reply_info[1][2]);
            return;
        }
        else if(info == "那么，伊卡洛斯，笔直回家，好吗")
        {
            //printf("好的，主人\n");
			reply(reply_info[1][1]);
            return;
        }
        else if(info == "那当然是因为开心咯")
        {
            //printf("开心？开心\n");
            reply(reply_info[2][4]);
            return;
        }
        else if(info == "那么，走吧，伊卡洛斯")
        {
            //printf("但是，主人他。。。\n");
            reply(reply_info[3][0]);
            return;
        }
        else if(info == "那个，伊卡洛斯")
        {
            //printf("在的，主人\n");
            reply(reply_info[4][3]);
            return;
        }
        else if(info == "那你在我睡觉的时候都在干什么呢")
        {
            //printf("一直在主人身旁，在主人睡醒前，一直\n");
            reply(reply_info[5][10]);
            return;
        }
        else if(info == "那我出门了，看家拜托了")
        {
            //printf("是，主人\n");
            reply(reply_info[6][1]);
            return;
        }
        else if(info == "那我出发了")
        {
            //printf("是，主人\n");
           reply(reply_info[6][2]);
            return;
        }
        else if(info == "那这样的事，不要做第二次了")
        {
            //printf("诶？\n");
            reply(reply_info[7][1]);
            return;
        }
        else if(info == "那么，伊卡洛斯，把带着的卡片全部交出来")
        {
            //printf("是\n");
            reply(reply_info[10][2]);
            return;
        }
        else if(info == "那么，阿尔法，稍微会笑一点了吗")
        {
            //printf("不，还没有\n");
            reply(reply_info[11][5]);
            return;
        }
        else if(info == "那一起想办法吧，如何才能让我们人造天使笑，呐")
        {
            //printf("恩\n");
            reply(reply_info[11][16]);
            return;
        }
        else if(info == "那样的人生来就是杀人的道具，太过分了")
        {
            //printf("是\n");
            reply(reply_info[12][20]);
            return;
        }
        
    }

    if(info.indexOf("你") != -1)
    {
        if(info == "你是怎么去亚马逊的")
        {
            //printf("我是以24马赫的速度飞过去的\n");
            reply(reply_info[2][10]);
            return;
        }
        else if(info == "你在干什么，伊卡洛斯")
        {
            //printf("这是作业death\n");
            reply(reply_info[2][11]);
            return;
        }
        else if(info == "你怎么在这")
        {
            //printf("是\n");
            reply(reply_info[5][5]);
            return;
        }
        else if(info == "你一直珍惜的西瓜，大概里面早就烂掉了，一团糟了呢")
        {
            //printf("啊\n");
            reply(reply_info[5][0]);
            return;
        }
        else if(info == "你还是这样子好")
        {
            //printf("嗯？\n");
            reply(reply_info[5][2]);
            return;
        }
        else if(info == "你是知道没事的，才帮我挡子弹的吗")
        {
            //printf("不，没想到自己也\n");
            reply(reply_info[7][0]);
            return;
        }
        else if(info == "你是什么")
        {
            //printf("我是，人类death\n");
            reply(reply_info[8][3]);
            return;
        }
        else if(info == "你在做什么")
        {
            //printf("妮姆芙，这里的天空很广阔哦\n");
            reply(reply_info[9][7]);
            return;
        }
        else if(info == "你是战斗特化的天使，没有那方面的机能吧")
        {
            //printf("是因为我是战斗用的原因\n");
            reply(reply_info[11][25]);
            return;
        }
        else if(info == "你要去哪里，伊卡洛斯")
        {
            //printf("就是，那个，去买个东西\n");
            reply(reply_info[12][10]);
            return;
        }
        else if(info == "你刚才笑了一下吧")
        {
            //printf("诶\n");
            reply(reply_info[12][8]);
            return;
        }
    }

    if(info.indexOf("呐") != -1)
    {
        if(info == "呐，伊卡洛斯")
        {
            //printf("是\n");
            reply(reply_info[5][9]);
            return;
        }
        else if(info == "呐，伊卡洛斯，我们约定过不说谎的吧")
        {
            //printf("呵嗯\n");
            reply(reply_info[12][9]);
            return;
        }
        else if(info == "呐，伊卡洛斯，我讨厌兵器是因为我觉得你太可怜了")
        {
            //printf("是\n");
            reply(reply_info[12][19]);
            return;
        }
    }

    if(info.indexOf("妮姆芙") != -1)
    {
        if(info == "妮姆芙为什么回来了")
        {
            //printf("我什么也不知道\n");
            reply(reply_info[8][2]);
            return;
        }
        else if(info == "妮姆芙呢")
        {
            //printf("这个\n");
            reply(reply_info[12][25]);
            return;
        }
        else if(info == "妮姆芙又没有回来吗")
        {
            //printf("是的，昨天一晚上没回来\n");
            reply(reply_info[12][21]);
            return;
        }
    }

    if(info.indexOf("n") != -1)
    {
        if(info == "nico")
        {
            //printf("ni a li\n");
            reply(reply_info[11][1]);
            return;
        }
    }

    // O

    // P
    if(info.indexOf("胖次") != -1)
    {
        if(info == "胖次嘎")
        {
            //printf("胖次是吗，那么把半径xxkm内的胖次全部收集起来\n");
            reply(reply_info[1][4]);
            return;
        }
    }

    if(info.indexOf("普通") != -1)
    {
        if(info == "普通人会飞着去买东西吗")
        {
            //printf("是的\n");
            reply(reply_info[2][5]);
            return;
        }
    }

    if(info.indexOf("骗") != -1)
    {
        if(info == "骗了你很抱歉，其实我想要把你带回天上")
        {
            //printf("我知道\n");
            reply(reply_info[12][23]);
            return;
        }
    }

    // Q

    // R
    if(info.indexOf("人") != -1)
    {
        if(info == "人类都有一两个秘密，不是吗")
        {
            //printf("主人！\n");
            reply(reply_info[10][10]);
            return;
        }
    }

    if(info.indexOf("如") != -1)
    {
        if(info == "如果可以逃走的话，智树会感到高兴的吧")
        {
            //printf("主人，他会，感到高兴\n");
            reply(reply_info[11][35]);
            return;
        }
    }

    // S
    if(info.indexOf("可") != -1)
    {
        if(info == "什么都可以吗")
        {
            //printf("是的\n");
            reply(reply_info[0][5]);
            return;
        }
    }

    if(info.indexOf("算") != -1)
    {
        if(info == "算了，你们两个明天也来学校，知道了吗，就是这么回事")
        {
            //printf("是，主人\n");
            reply(reply_info[6][2]);
            return;
        }
    }

    if(info.indexOf("是") != -1)
    {
        if(info == "是这样吗，伊卡洛斯")
        {
            //printf("是\n");
            reply(reply_info[8][1]);
            return;
        }
    }

    // W
    if(info.indexOf("晚安") != -1)
    {
        if(info == "晚安")
        {
            //printf("晚安，我的主人\n");
            return;
        }
    }

    if(info.indexOf("为") != -1)
    {
        if(info == "为什么你在这")
        {
            //printf("班上的朋友怎么都拜托我帮忙\n");
            reply(reply_info[9][1]);
            return;
        }
        else if(info == "为什么这些动物被关在笼子里呢")
        {
            //printf("sa（谁知道呢）\n");
            reply(reply_info[11][26]);
            return;
        }
    }

    if(info.indexOf("我") != -1)
    {
        if(info == "我一直把伊卡洛斯当成普通的人类，忘记你是人造天使的事情了")
        {
            //printf("我很高兴，楚原把我当普通人来对待\n");
            reply(reply_info[10][4]);
            return;
        }
        else if(info == "我们人造天使，可能从来没有发自内心的笑过吧")
        {
            //printf("并且最近，一直在为什么烦恼的样子\n");
            reply(reply_info[11][4]);
            //printf("那是为什么，我也不清楚\n");
            reply(reply_info[11][22]);
            return;
        }
    }

    if(info.indexOf("喂") != -1)
    {
        if(info == "喂，伊卡洛斯")
        {
            //printf("是，主人\n");
            reply(reply_info[11][15]);
            //printf("早上好，主人\n");
            reply(reply_info[11][21]);
            return;
        }
    }

    // X
    if(info.indexOf("先") != -1)
    {
        if(info == "先把要买什么听了再说")
        {
            //printf("好的，主人\n");
            reply(reply_info[2][3]);
            return;
        }
    }

    // Y
    if(info.indexOf("要") != -1)
    {
        if(info == "要像普通人一样哦")
        {
            //printf("好的，主人\n");
            reply(reply_info[2][2]);
            return;
        }
    }

    if(info.indexOf("伊卡洛斯") != -1)
    {
        if(info == "伊卡洛斯，你先回去，乖乖看家，知道了吗")
        {
            //printf("那主人，这个给你\n");
            reply(reply_info[1][3]);
            return;
        }
        else if(info == "伊卡洛斯，你过去看看吧")
        {
            //printf("好的，主人\n");
            reply(reply_info[2][1]);
            return;
        }
        else if(info == "伊卡洛斯，要不要尝试一下数学题")
        {
            //printf("我吗\n");
            reply(reply_info[2][9]);
            return;
        }
        else if(info == "伊卡洛斯，背后的翅膀怎么了")
        {
            //printf("那个，这个翅膀是可变式羽翼，可以缩小到这种程度的大小\n");
            reply(reply_info[5][3]);
            return;
        }
        else if(info == "伊卡洛斯！")
        {
            //printf("是\n");
            reply(reply_info[7][4]);
            return;
        }
        else if(info == "伊卡洛斯，你试试万岁看看")
        {
            //printf("万岁是吗\n");
            reply(reply_info[11][27]);
            return;
        }
        else if(info == "伊卡洛斯，不用那么快，停，停")
        {
            //printf("是\n");
            reply(reply_info[12][18]);
            return;
        }
    }

    if(info.indexOf("已经") != -1)
    {
        if(info == "已经没你事了，乖乖待着")
        {
            //printf("是，主人\n");
            reply(reply_info[7][3]);
            return;
        }
    }

    if(info.indexOf("有") != -1)
    {
        if(info == "有什么隐情吗")
        {
            //printf("人类是说谎的生物，我是普通的人类death\n");
            reply(reply_info[8][0]);
            return;
        }
    }

    if(info.indexOf("约") != -1)
    {
        if(info == "约会呢，回到家，才算约会")
        {
            //printf("是\n");
            reply(reply_info[11][24]);
            return;
        }
    }

    if(info.indexOf("又") != -1)
    {
        if(info == "又是那个奇怪的梦嘎")
        {
            //printf("你醒了吗，主人\n");
            reply(reply_info[12][16]);
            return;
        }
    }

    // Z
    if(info.indexOf("在") != -1)
    {
        if(info == "在旁边的海里随便捡点海货过来吧")
        {
            //printf("好的，主人\n");
            reply(reply_info[1][1]);
            return;
        }
    }

    if(info.indexOf("早") != -1)
    {
        if(info == "早上好")
        {
            //printf("早上好，主人\n");
            reply(reply_info[0][7]);
            return;
        }
    }

    if(info.indexOf("怎么") != -1)
    {
        if(info == "怎么了")
        {
            var flag = 0;
            if(flag)
            {
                //printf("主人遇到麻烦了\n");
                reply(reply_info[3][3]);
                return;
            }
            else if(flag == 1)
            {
                //printf("没什么\n");
                reply(reply_info[9][6]);
                return;
            }
            
        }
        else if(info == "怎么了，没什么精神呢")
        {
            //printf("我一点都帮不上主人的忙\n");
            reply(reply_info[9][10]);
            return;
        }
        else if(info == "怎么样，这套内衣")
        {
            //printf("非常可爱哦，主人\n");
            reply(reply_info[10][0]);
            return;
        }
        else if(info == "怎么了，伊卡洛斯")
        {
            //printf("没什么\n");
            reply(reply_info[12][12]);
            return;
        }
        else if(info == "怎么了，伊卡洛斯，又是不好的玩笑是吗")
        {
            //printf("最喜欢你了，我的主人，永别了\n");
            reply(reply_info[12][29]);
            return;
        }
        else if(info == "怎么样，伊卡洛斯")
        {
            //printf("太好了\n");
            reply(reply_info[12][22]);
            return;
        }
    }

    if(info.indexOf("这") != -1)
    {
        if(info == "这个锁链如何是好")
        {
            //printf("那个，锁链可以自由控制...\n");
            reply(reply_info[1][6]);
            return;
        }
        else if(info == "这就解决了吗")
        {
            //printf("是的，这张卡片自动结束了，已经没事了death\n");
            reply(reply_info[1][5]);
            return;
        }
        else if(info == "这才是正式表演，伊卡洛斯")
        {
            //printf("曲名为：《fallen down》\n");
            reply(reply_info[9][0]);
            return;
        }
        else if(info == "这些孩子们从这里出去，变得自由后，会不会感觉到开心呢")
        {
            //printf("诶\n");
            reply(reply_info[11][14]);
            return;
        }
    }

    if(info.indexOf("至今") != -1)
    {
        if(info == "至今为止没和朋友去购过物吗")
        {
            //printf("朋友？我没有朋友\n");
            reply(reply_info[3][1]);
            return;
        }
    }

    if(info.indexOf("走") != -1)
    {
        if(info == "走吧，伊卡洛斯")
        {
            //printf("好的，主人\n");
            reply(reply_info[4][0]);
            return;
        }
    }

    if(info.indexOf("做") != -1)
    {
        if(info == "做这种事，不会被人当成傻瓜吗")
        {
            //printf("这是主人的命令呢\n");
            reply(reply_info[10][9]);
            return;
        }
        else if(info == "做这种事，不觉得很傻吗")
        {
            //printf("这是主人的命令\n");
            reply(reply_info[13][5]);
            return;
        }
    }

    if(info.indexOf("真") != -1)
    {
        if(info == "真羡慕你呢，没有什么烦恼")
        {
            //printf("没那回事\n");
            reply(reply_info[10][1]);
            return;
        }
    }

    if(info.indexOf("只") != -1)
    {
        if(info == "只有表情也行，笑一个")
        {
            //printf("只要表情？\n");
            reply(reply_info[11][33]);
            return;
        }
    }

    if(info.indexOf("自") != -1)
    {
        if(info == "自顾自走掉，伤痕累累回来")
        {
            //printf("对不起，主人\n");
            reply(reply_info[11][12]);
            return;
        }
    }

    if(info.indexOf("再") != -1)
    {
        if(info == "再试一次")
        {
            //printf("ni a li\n");
            reply(reply_info[12][4]);
            return;
        }
    }

    // #
    if(info.indexOf("（") != -1)
    {
        if(info == "（笑）")
        {
            //printf("主人为什么在笑呢\n");
            reply(reply_info[2][13]);
            return;
        }
        if(info == "（和妮姆芙牵手）")
        {
            //printf("扫描系统开始，@#*￥*&@，身体构造没有异常，动力炉没有异常，￥@*，刚才那是什么，动力炉在一瞬间，感觉到疼痛\n");
            reply(reply_info[11][0]);
            return;
        }
    }
	
}