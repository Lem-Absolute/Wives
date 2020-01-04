#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")            //For MCI(Media Control Interface，媒体控制接口)


// 回复函数
void reply(char* say)
{
    // printf("收到:%s\n",say);


    // B
    if(strstr(say, "把") != NULL)
    {
        if(strcmp(say, "把西瓜带回来了吗") == 0)
        {
            printf("是的\n");
            mciSendString("play sound\\1-3\\是的3.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
        }
    }

    if(strstr(say, "不") != NULL)
    {
        if(strcmp(say, "不觉得麻烦吗") == 0)
        {
            printf("不，没事的\n");
            mciSendString("play sound\\1-2\\不，没事的.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
        }
        else if(strcmp(say, "不会的是吧") == 0)
        {
            printf("是的\n");
            mciSendString("play sound\\1-3\\是的2.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
        }
    }

    // G
    if(strstr(say, "命令") != NULL)
    {
        if(strcmp(say, "刚才的命令不算好吗") == 0)
        {
            printf("无法中止命令\n");
            mciSendString("play sound\\1-1\\无法中止命令.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
        }
    }

    // H
    if(strstr(say, "还") != NULL)
    {
        if(strcmp(say, "还需要练习呢") == 0)
        {
            printf("对不起\n");
            mciSendString("play sound\\1-3\\对不起.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
        }
    }

    // I

    // J

    // K
    if(strstr(say, "卡片") != NULL)
    {
        if(strcmp(say, "卡片是什么") == 0)
        {
            printf("（解释）\n");
            mciSendString("play sound\\1-1\\-对卡片的解释.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠9.5秒
            Sleep(9500);
        }
        else if(strcmp(say, "卡片还能做什么") == 0)
        {
            printf("什么都可以\n");
            mciSendString("play sound\\1-1\\什么都可以.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
        }
    }

    // L

    // M

    // N
    if(strstr(say, "那") != NULL)
    {
        if(strcmp(say, "那我出门了") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-2\\好的-主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
        }
        else if(strcmp(say, "那么，伊卡洛斯，笔直回家，好吗") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-2\\好的，主人2.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
        }
        else if(strcmp(say, "那当然是因为开心咯") == 0)
        {
            printf("开心？开心\n");
            mciSendString("play sound\\1-3\\开心？开心.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠5.5秒
            Sleep(5500);
        }
    }

    if(strstr(say, "你") != NULL)
    {
        if(strcmp(say, "你是怎么去亚马逊的") == 0)
        {
            printf("我是以24马赫的速度飞过去的\n");
            mciSendString("play sound\\1-3\\我是以24马赫的速度飞过去的.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3.5秒
            Sleep(3500);
        }
        else if(strcmp(say, "你在干什么，伊卡洛斯") == 0)
        {
            printf("这是作业death\n");
            mciSendString("play sound\\1-3\\这是作业.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
        }
    }

    // O

    // P
    if(strstr(say, "胖次") != NULL)
    {
        if(strcmp(say, "胖次嘎") == 0)
        {
            printf("胖次是吗，那么把半径xxkm内的胖次全部收集起来\n");
            mciSendString("play sound\\1-2\\胖次是吗。。。.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠5秒
            Sleep(5000);
        }
    }

    if(strstr(say, "普通") != NULL)
    {
        if(strcmp(say, "普通人会飞着去买东西吗") == 0)
        {
            printf("是的\n");
            mciSendString("play sound\\1-3\\是的.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
        }
    }

    // Q

    // R

    // S
    if(strstr(say, "可以吗") != NULL)
    {
        if(strcmp(say, "什么都可以吗") == 0)
        {
            printf("是的\n");
            mciSendString("play sound\\1-1\\是的.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
        }
    }

    // W
    if(strstr(say, "晚安") != NULL)
    {
        if(strcmp(say, "晚安") == 0)
        {
            printf("晚安，我的主人\n");
        }
    }

    // X
    if(strstr(say, "先") != NULL)
    {
        if(strcmp(say, "先把要买什么听了再说") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-3\\好的，主人3.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
        }
    }

    // Y
    if(strstr(say, "要") != NULL)
    {
        if(strcmp(say, "要像普通人一样哦") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-3\\好的,主人2.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
        }
    }

    if(strstr(say, "伊卡洛斯") != NULL)
    {
        if(strcmp(say, "伊卡洛斯，你先回去，乖乖看家，知道了吗") == 0)
        {
            printf("那主人，这个给你\n");
            mciSendString("play sound\\1-2\\那主人，这个给你.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
        }
        else if(strcmp(say, "伊卡洛斯，你过去看看吧") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-3\\好的，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
        }
        else if(strcmp(say, "伊卡洛斯，要不要尝试一下数学题") == 0)
        {
            printf("我吗\n");
            mciSendString("play sound\\1-3\\我吗.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
        }
    }

    // Z
    if(strstr(say, "早") != NULL)
    {
        if(strcmp(say, "早上好") == 0)
        {
            printf("早上好，主人\n");
            mciSendString("play sound\\1-1\\早上好,主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
        }
    }

    if(strstr(say, "这") != NULL)
    {
        if(strcmp(say, "这个锁链如何是好") == 0)
        {
            printf("那个，锁链可以自由控制...\n");
            mciSendString("play sound\\1-2\\锁链的应对措施.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠5.5秒
            Sleep(5500);
        }
        else if(strcmp(say, "这就解决了吗") == 0)
        {
            printf("是的，这张卡片自动结束了，已经没事了death\n");
            mciSendString("play sound\\1-2\\是的，这张卡片自动结束了，已经没事了.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠5秒
            Sleep(5000);
        }
    }

    // #
    if(strstr(say, "（") != NULL)
    {
        if(strcmp(say, "（笑）") == 0)
        {
            printf("主人为什么在笑呢\n");
            mciSendString("play sound\\1-3\\主人为什么在笑呢.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3.5秒
            Sleep(3500);
        }
    }

    
}

// 主函数
int main()
{
    // 最多输入4096字节
    static char str[4096] = {};

    // 程序刚启动的开场语音
    printf("铭刻开始\n");
     mciSendString("play sound\\1-1\\铭刻开始.mp3", NULL, 0, NULL);
    // 睡眠2.2秒
    Sleep(2200);

    printf("初次见面\n");
    mciSendString("play sound\\1-1\\初次见面,我是玩赏用人造天使.mp3", NULL, 0, NULL);
    // 睡眠9.5秒
    Sleep(9500);

    while(1)
    {
        // 我说
        printf("我说:");
        scanf("%s", str);
        // printf("发送:%s\n",str);

        // 调用 reply函数
        reply(str);

        // 判断和清空
        if(strcmp(str,"晚安") == 0)
        {
            break;
        }
        sprintf(str, "");

    }
    return 0;
}
