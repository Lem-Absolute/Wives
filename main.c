#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")            //For MCI(Media Control Interface，媒体控制接口)


// 回复函数
void reply(char* say)
{
    // printf("收到:%s\n",say);

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
