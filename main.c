#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")            //For MCI(Media Control Interface��ý����ƽӿ�)


// �ظ�����
void reply(char* say)
{
    // printf("�յ�:%s\n",say);


    // B
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�������鷳��") == 0)
        {
            printf("����û�µ�\n");
            mciSendString("play sound\\1-2\\����û�µ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
        }
    }

    // G
    if(strstr(say, "����") != NULL)
    {
        if(strcmp(say, "�ղŵ���������") == 0)
        {
            printf("�޷���ֹ����\n");
            mciSendString("play sound\\1-1\\�޷���ֹ����.mp3",        //MCI�����ַ���
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
            mciSendString("play sound\\1-1\\-�Կ�Ƭ�Ľ���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��9.5��
            Sleep(9500);
        }
        else if(strcmp(say, "��Ƭ������ʲô") == 0)
        {
            printf("ʲô������\n");
            mciSendString("play sound\\1-1\\ʲô������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
        }
    }

    // L

    // M

    // N
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���ҳ�����") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-2\\�õ�-����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
        }
        else if(strcmp(say, "��ô��������˹����ֱ�ؼң�����") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-2\\�õģ�����2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
        }
    }

    // O

    // P
    if(strstr(say, "�ִ�") != NULL)
    {
        if(strcmp(say, "�ִθ�") == 0)
        {
            printf("�ִ�������ô�Ѱ뾶xxkm�ڵ��ִ�ȫ���ռ�����\n");
            mciSendString("play sound\\1-2\\�ִ����𡣡���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��5��
            Sleep(5000);
        }
    }

    // Q

    // R

    // S
    if(strstr(say, "������") != NULL)
    {
        if(strcmp(say, "ʲô��������") == 0)
        {
            printf("�ǵ�\n");
            mciSendString("play sound\\1-1\\�ǵ�.mp3",        //MCI�����ַ���
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

    // Y
    if(strstr(say, "������˹") != NULL)
    {
        if(strcmp(say, "������˹�����Ȼ�ȥ���ԹԿ��ң�֪������") == 0)
        {
            printf("�����ˣ��������\n");
            mciSendString("play sound\\1-2\\�����ˣ��������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
        }
    }

    // Z
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���Ϻ�") == 0)
        {
            printf("���Ϻã�����\n");
            mciSendString("play sound\\1-1\\���Ϻ�,����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�����������Ǻ�") == 0)
        {
            printf("�Ǹ��������������ɿ���...\n");
            mciSendString("play sound\\1-2\\������Ӧ�Դ�ʩ.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��5.5��
            Sleep(5500);
        }
        else if(strcmp(say, "��ͽ������") == 0)
        {
            printf("�ǵģ����ſ�Ƭ�Զ������ˣ��Ѿ�û����death\n");
            mciSendString("play sound\\1-2\\�ǵģ����ſ�Ƭ�Զ������ˣ��Ѿ�û����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��5��
            Sleep(5000);
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
     mciSendString("play sound\\1-1\\���̿�ʼ.mp3", NULL, 0, NULL);
    // ˯��2.2��
    Sleep(2200);

    printf("���μ���\n");
    mciSendString("play sound\\1-1\\���μ���,����������������ʹ.mp3", NULL, 0, NULL);
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
