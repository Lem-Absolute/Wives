#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")            //For MCI(Media Control Interface��ý����ƽӿ�)


// �ظ�����
void reply(char* say)
{
    // printf("�յ�:%s\n",say);

    // W
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "��") == 0)
        {
            printf("�����ҵ�����\n");
        }
    }

    // Z
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���Ϻ�") == 0)
        {
            printf("���Ϻã�����\n");
            mciSendString("play sound\\���Ϻ�,����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
        }
    }

    
}

// ������
int main()
{
    // �������4096�ֽ�
    static char str[4096] = {};
    while(1)
    {
        // ��˵
        printf("��˵:");
        scanf("%s", str);
        // printf("����:%s\n",str);

        // ���� reply����
        reply(str);

        // �жϺ����
        if(strcmp(str,"��") == 0)
        {
            break;
        }
        sprintf(str, "");

    }
    return 0;
}
