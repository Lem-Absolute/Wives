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
        if(strcmp(say, "�����ϴ���������") == 0)
        {
            printf("�ǵ�\n");
            mciSendString("play sound\\1-3\\�ǵ�3.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

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
            return;
        }
        else if(strcmp(say, "������ǰ�") == 0)
        {
            printf("�ǵ�\n");
            mciSendString("play sound\\1-3\\�ǵ�2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "��Ҫ̫����") == 0)
        {
            printf("�õ�\n");
            mciSendString("play sound\\1-5\\�õ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    // C
    if(strstr(say, "��ԭ") != NULL)
    {
        if(strcmp(say, "��ԭ��") == 0)
        {
            printf("�ڼ�����\n");
            mciSendString("play sound\\1-4\\�ڼ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�Ų���") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���û�ȥ��") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��4.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    // D

    // E

    // F

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
            return;
        }
    }

    // H
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "����Ҫ��ϰ��") == 0)
        {
            printf("�Բ���\n");
            mciSendString("play sound\\1-3\\�Բ���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�ã������Ѿ�˯����") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    // I

    // J
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "������������ǣ���������") == 0)
        {
            printf("����������\n");
            mciSendString("play sound\\1-6\\����������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�������չһ�³���") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��3.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
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
            return;
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
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "����ȥ˯��") == 0)
        {
            printf("�Ǹ������ˣ�˯������ôһ���¡�����������ʹû�б��趨˯����һ���ܣ����Բ�֪��˯������������ôһ����\n");
            mciSendString("play sound\\1-6\\�Ǹ������ˣ�˯������ôһ����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��17��
            Sleep(17000);
            return;
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
            return;
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
            return;
        }
        else if(strcmp(say, "�ǵ�Ȼ����Ϊ���Ŀ�") == 0)
        {
            printf("���ģ�����\n");
            mciSendString("play sound\\1-3\\���ģ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��5.5��
            Sleep(5500);
            return;
        }
        else if(strcmp(say, "��ô���߰ɣ�������˹") == 0)
        {
            printf("���ǣ�������������\n");
            mciSendString("play sound\\1-4\\���ǣ�������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2.5��
            Sleep(2500);
            return;
        }
        else if(strcmp(say, "�Ǹ���������˹") == 0)
        {
            printf("�ڵģ�����\n");
            mciSendString("play sound\\1-5\\�ڵģ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
        else if(strcmp(say, "��������˯����ʱ���ڸ�ʲô��") == 0)
        {
            printf("һֱ���������ԣ�������˯��ǰ��һֱ\n");
            mciSendString("play sound\\1-6\\һֱ���������ԣ�������˯��ǰ��һֱ.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��6��
            Sleep(6000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "������ôȥ����ѷ��") == 0)
        {
            printf("������24��յ��ٶȷɹ�ȥ��\n");
            mciSendString("play sound\\1-3\\������24��յ��ٶȷɹ�ȥ��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3.5��
            Sleep(3500);
            return;
        }
        else if(strcmp(say, "���ڸ�ʲô��������˹") == 0)
        {
            printf("������ҵdeath\n");
            mciSendString("play sound\\1-3\\������ҵ.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "����ô����") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "��һֱ��ϧ�����ϣ������������õ��ˣ�һ��������") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "�㻹�������Ӻ�") == 0)
        {
            printf("�ţ�\n");
            mciSendString("play sound\\1-6\\�ţ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�ţ�������˹") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��5.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
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
            return;
        }
    }

    if(strstr(say, "��ͨ") != NULL)
    {
        if(strcmp(say, "��ͨ�˻����ȥ������") == 0)
        {
            printf("�ǵ�\n");
            mciSendString("play sound\\1-3\\�ǵ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
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
            return;
        }
    }

    // W
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "��") == 0)
        {
            printf("�����ҵ�����\n");
            return;
        }
    }

    // X
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�Ȱ�Ҫ��ʲô������˵") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-3\\�õģ�����3.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

    // Y
    if(strstr(say, "Ҫ") != NULL)
    {
        if(strcmp(say, "Ҫ����ͨ��һ��Ŷ") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-3\\�õ�,����2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

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
            return;
        }
        else if(strcmp(say, "������˹�����ȥ������") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-3\\�õģ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "������˹��Ҫ��Ҫ����һ����ѧ��") == 0)
        {
            printf("����\n");
            mciSendString("play sound\\1-3\\����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
        }
        else if(strcmp(say, "������˹������ĳ����ô��") == 0)
        {
            printf("�Ǹ����������ǿɱ�ʽ����������С�����̶ֳȵĴ�С\n");
            mciSendString("play sound\\1-3\\����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��8��
            Sleep(8000);
            return;
        }
    }

    // Z
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���Աߵĺ�������㺣��������") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-2\\�õģ�����2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
        }
    }

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
            return;
        }
    }

    if(strstr(say, "��ô") != NULL)
    {
        if(strcmp(say, "��ô��") == 0)
        {
            printf("���������鷳��\n");
            mciSendString("play sound\\1-4\\���������鷳��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
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
            return;
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
            return;
        }
    }

    if(strstr(say, "����") != NULL)
    {
        if(strcmp(say, "����Ϊֹû������ȥ��������") == 0)
        {
            printf("���ѣ���û������\n");
            mciSendString("play sound\\1-4\\���ѣ���û������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�߰ɣ�������˹") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-5\\�õģ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
    }

    // #
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "��Ц��") == 0)
        {
            printf("����Ϊʲô��Ц��\n");
            mciSendString("play sound\\1-3\\����Ϊʲô��Ц��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3.5��
            Sleep(3500);
            return;
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
