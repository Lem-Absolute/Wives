#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")            //For MCI(Media Control Interface，媒体控制接口)


// 回复函数
void reply(char* say)
{
    // printf("收到:%s\n",say);

    // G
    if(strstr(say, "命令") != NULL)
    {
        if(strcmp(say, "刚才的命令不算好吗") == 0)
        {
            printf("无法中止命令\n");
            mciSendString("play sound\\无法中止命令.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
        }
    }

    // K
    if(strstr(say, "卡片") != NULL)
    {
        if(strcmp(say, "卡片是什么") == 0)
        {
            printf("（解释）\n");
            mciSendString("play sound\\-对卡片的解释.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠9.5秒
            Sleep(9500);
        }
        else if(strcmp(say, "卡片还能做什么") == 0)
        {
            printf("什么都可以\n");
            mciSendString("play sound\\什么都可以.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
        }
    }

    // S
    if(strstr(say, "可以吗") != NULL)
    {
        if(strcmp(say, "什么都可以吗") == 0)
        {
            printf("是的\n");
            mciSendString("play sound\\是的.mp3",        //MCI命令字符串
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

    // Z
    if(strstr(say, "早") != NULL)
    {
        if(strcmp(say, "早上好") == 0)
        {
            printf("早上好，主人\n");
            mciSendString("play sound\\早上好,主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
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
     mciSendString("play sound\\铭刻开始.mp3", NULL, 0, NULL);
    // 睡眠2.2秒
    Sleep(2200);

    printf("初次见面\n");
    mciSendString("play sound\\初次见面,我是玩赏用人造天使.mp3", NULL, 0, NULL);
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
