#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")            //For MCI(Media Control Interface��ý����ƽӿ�)


// �ظ�����
void reply(char* say)
{
    // printf("�յ�:%s\n",say);

    // G
    if(strstr(say, "����") != NULL)
    {
        if(strcmp(say, "�ղŵ���������") == 0)
        {
            printf("�޷���ֹ����\n");
            mciSendString("play sound\\�޷���ֹ����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
        }
    }

    // K
    if(strstr(say, "��Ƭ") != NULL)
    {
        if(strcmp(say, "��Ƭ��ʲô") == 0)
        {
            printf("�����ͣ�\n");
            mciSendString("play sound\\-�Կ�Ƭ�Ľ���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��9.5��
            Sleep(9500);
        }
        else if(strcmp(say, "��Ƭ������ʲô") == 0)
        {
            printf("ʲô������\n");
            mciSendString("play sound\\ʲô������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
        }
    }

    // S
    if(strstr(say, "������") != NULL)
    {
        if(strcmp(say, "ʲô��������") == 0)
        {
            printf("�ǵ�\n");
            mciSendString("play sound\\�ǵ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
        }
    }

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

    // ����������Ŀ�������
    printf("���̿�ʼ\n");
     mciSendString("play sound\\���̿�ʼ.mp3", NULL, 0, NULL);
    // ˯��2.2��
    Sleep(2200);

    printf("���μ���\n");
    mciSendString("play sound\\���μ���,����������������ʹ.mp3", NULL, 0, NULL);
    // ˯��9.5��
    Sleep(9500);

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
