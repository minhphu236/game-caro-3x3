#include <bits/stdc++.h>
#include <conio.h>
#include <string>
#include <windows.h>

using namespace std;
void TextColor(int x)
{
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, x);
}
struct hienthi
{
    int batdau;
    int diemx, diemo;
    int hoa;
    string nhapx, nhapo;
    char a1, a2, a3, b1, b2, b3, c1, c2, c3;
    void hienthi1()
    {
        cout<<"("<<a1;
        cout<<") "<<"("<<a2;
        cout<<") ("<<a3;
        cout<<")       X : "<<diemx<<endl;
        cout<<endl;
        cout<<"("<<b1<<") "<<"("<<b2<<") ("<<b3<<")       O : "<<diemo<<endl;
        cout<<endl;
        cout<<"("<<c1<<") "<<"("<<c2<<") ("<<c3<<")"<<endl<<endl;
    }
};

int main()
{
    TextColor(10);
    struct hienthi game;
    game.batdau = 1;
    game.diemx = 0;
    game.diemo = 0;
    while (true)
    {
        game.hoa = 0;
        game.a1 = '1';
        game.a2 = '2';
        game.a3 = '3';
        game.b1 = '4';
        game.b2 = '5';
        game.b3 = '6';
        game.c1 = '7';
        game.c2 = '8';
        game.c3 = '9';
        while (true)
        {
            system("cls");
            if (game.batdau == 1)
            {
                while (true)
                {
                    game.hienthi1();
                    cout<<"hay chon bat ki diem nao (x) : ";
                    cin>>game.nhapx;
                    if (game.nhapx == "1" || game.nhapx == "2" ||game.nhapx == "3" ||game.nhapx == "4" ||game.nhapx == "5" ||game.nhapx == "6"||game.nhapx == "7"||game.nhapx == "8"||game.nhapx == "9")
                    {
                        if (game.nhapx == "1")
                        {
                            if (game.a1 != 79 && game.a1 != 88)
                            {
                                game.hoa++;
                                game.batdau = 2;
                                game.a1 = 88;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapx == "2")
                        {
                            if (game.a2 != 79 && game.a2 != 88)
                            {
                                game.hoa++;
                                game.batdau = 2;
                                game.a2 = 88;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapx == "3")
                        {
                            if (game.a3 != 79 && game.a3 != 88)
                            {
                                game.hoa++;
                                game.batdau = 2;
                                game.a3 = 88;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapx == "4")
                        {
                            if (game.b1 != 79 && game.b1 != 88)
                            {
                                game.hoa++;
                                game.batdau = 2;
                                game.b1 = 88;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapx == "5")
                        {
                            if (game.b2 != 79 && game.b2 != 88)
                            {
                                game.hoa++;
                                game.batdau = 2;
                                game.b2 = 88;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapx == "6")
                        {
                            if (game.b3 != 79 && game.b3 != 88)
                            {
                                game.hoa++;
                                game.batdau = 2;
                                game.b3 = 88;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapx == "7")
                        {
                            if (game.c1 != 79 && game.c1 != 88)
                            {
                                game.hoa++;
                                game.batdau = 2;
                                game.c1 = 88;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapx == "8")
                        {
                            if (game.c2 != 79 && game.c2 != 88)
                            {
                                game.hoa++;
                                game.batdau = 2;
                                game.c2 = 88;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapx == "9")
                        {
                            if (game.c3 != 79 && game.c3 != 88)
                            {
                                game.hoa++;
                                game.batdau = 2;
                                game.c3 = 88;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                    }
                    system("cls");
                }
                system("cls");
                if (game.a1 == 88 && game.a2 == 88 && game.a3 == 88)
                {
                    game.diemx++;
                    TextColor(74);
                    cout<<"("<<game.a1<<") "<<"("<<game.a2<<") ("<<game.a3<<")";
                    TextColor(10);
                    cout<<"       X : "<<game.diemx<<endl;
                    TextColor(10);
                    cout<<endl;
                    cout<<"("<<game.b1<<") "<<"("<<game.b2<<") ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    cout<<"("<<game.c1<<") "<<"("<<game.c2<<") ("<<game.c3<<")"<<endl<<endl;
                    cout<<"X thang roi nhe!!"<<endl;
                    game.batdau = 2;
                    getch();
                    break;
                }
                if (game.a1 == 88 && game.b1 == 88 && game.c1 == 88)
                {
                    game.diemx++;
                    TextColor(74);
                    cout<<"("<<game.a1<<") ";
                    TextColor(10);
                    cout<<"("<<game.a2<<") ("<<game.a3<<")";
                    cout<<"       X : "<<game.diemx<<endl;
                    TextColor(10);
                    cout<<endl;
                    TextColor(74);
                    cout<<"("<<game.b1<<") ";
                    TextColor(10);
                    cout<<"("<<game.b2<<") ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    TextColor(74);
                    cout<<"("<<game.c1<<") ";
                    TextColor(10);
                    cout<<"("<<game.c2<<") ("<<game.c3<<")"<<endl<<endl;
                    cout<<"X thang roi nhe!!"<<endl;
                    game.batdau = 2;
                    getch();
                    break;
                }
                if (game.c1 == 88 && game.c2 == 88 && game.c3 == 88)
                {
                    game.diemx++;
                    cout<<"("<<game.a1<<") ";
                    TextColor(10);
                    cout<<"("<<game.a2<<") ("<<game.a3<<")";
                    cout<<"       X : "<<game.diemx<<endl;
                    TextColor(10);
                    cout<<endl;
                    cout<<"("<<game.b1<<") ";
                    TextColor(10);
                    cout<<"("<<game.b2<<") ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    TextColor(74);
                    cout<<"("<<game.c1<<") ";
                    cout<<"("<<game.c2<<") ("<<game.c3<<")"<<endl<<endl;
                    TextColor(10);
                    cout<<"X thang roi nhe!!"<<endl;
                    game.batdau = 2;
                    getch();
                    break;
                }
                if (game.c3 == 88 && game.b3 == 88 && game.a3 == 88)
                {
                    game.diemx++;
                    cout<<"("<<game.a1<<") "<<"("<<game.a2<<") ";
                    TextColor(74);
                    cout<<"("<<game.a3<<")";
                    TextColor(10);
                    cout<<"       X : "<<game.diemx<<endl;
                    cout<<endl;
                    cout<<"("<<game.b1<<") "<<"("<<game.b2<<") ";
                    TextColor(74);
                    cout<<"("<<game.b3<<")";
                    TextColor(10);
                    cout<<"       O : "<<game.diemo<<endl;
                    cout<<endl;
                    cout<<"("<<game.c1<<") "<<"("<<game.c2<<") ";
                    TextColor(74);
                    cout<<"("<<game.c3<<")"<<endl<<endl;
                    TextColor(10);
                    cout<<"X thang roi nhe!!"<<endl;
                    game.batdau = 2;
                    getch();
                    break;
                }
                if (game.a1 == 88 && game.a2 == 88 && game.a3 == 88)
                {
                    game.diemx++;
                    game.hienthi1();
                    cout<<"X thang roi nhe!!"<<endl;
                    getch();
                    break;
                }
                if (game.b1 == 88 && game.b2 == 88 && game.b3 == 88)
                {
                    game.diemx++;
                    cout<<"("<<game.a1<<") "<<"("<<game.a2<<") ("<<game.a3<<")       X : "<<game.diemx<<endl;
                    cout<<endl;
                    TextColor(74);
                    cout<<"("<<game.b1<<") "<<"("<<game.b2<<") ("<<game.b3<<")";
                    TextColor(10);
                    cout<<"       O : "<<game.diemo<<endl;
                    cout<<endl;
                    cout<<"("<<game.c1<<") "<<"("<<game.c2<<") ("<<game.c3<<")"<<endl<<endl;
                    cout<<"X thang roi nhe!!"<<endl;
                    game.batdau = 2;
                    getch();
                    break;
                }
                if (game.a2 == 88 && game.b2 == 88 && game.c2 == 88)
                {
                    game.diemx++;
                    cout<<"("<<game.a1<<") ";
                    TextColor(74);
                    cout<<"("<<game.a2<<")";
                    TextColor(10);
                    cout<<" ("<<game.a3<<")";
                    cout<<"       X : "<<game.diemx<<endl;
                    cout<<endl;
                    cout<<"("<<game.b1<<") ";
                    TextColor(74);
                    cout<<"("<<game.b2<<")";
                    TextColor(10);
                    cout<<" ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    cout<<"("<<game.c1<<") ";
                    TextColor(74);
                    cout<<"("<<game.c2<<")";
                    TextColor(10);
                    cout<<" ("<<game.c3<<")"<<endl<<endl;
                    cout<<"X thang roi nhe!!"<<endl;
                    game.batdau = 2;
                    getch();
                    break;
                }
                if (game.a1 == 88 && game.b2 == 88 && game.c3 == 88)
                {
                    game.diemx++;
                    TextColor(74);
                    cout<<"("<<game.a1<<")";
                    TextColor(10);
                    cout<<" ("<<game.a2<<") ("<<game.a3<<")       X : "<<game.diemx<<endl;
                    cout<<endl;
                    cout<<"("<<game.b1<<") ";
                    TextColor(74);
                    cout<<"("<<game.b2<<")";
                    TextColor(10);
                    cout<<" ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    cout<<"("<<game.c1<<") "<<"("<<game.c2<<") ";
                    TextColor(74);
                    cout<<"("<<game.c3<<")"<<endl<<endl;
                    TextColor(10);
                    cout<<"X thang roi nhe!!"<<endl;
                    game.batdau = 2;
                    getch();
                    break;
                }
                if (game.c1 == 88 && game.b2 == 88 && game.a3 == 88)
                {
                    game.diemx++;
                    cout<<"("<<game.a1<<") ("<<game.a2<<") ";
                    TextColor(74);
                    cout<<"("<<game.a3<<")";
                    TextColor(10);
                    cout<<"       X : "<<game.diemx<<endl;
                    cout<<endl;
                    cout<<"("<<game.b1<<") ";
                    TextColor(74);
                    cout<<"("<<game.b2<<")";
                    TextColor(10);
                    cout<<" ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    TextColor(74);
                    cout<<"("<<game.c1<<")";
                    TextColor(10);
                    cout<<" ("<<game.c2<<") ";
                    cout<<"("<<game.c3<<")"<<endl<<endl;
                    TextColor(10);
                    cout<<"X thang roi nhe!!"<<endl;
                    game.batdau = 2;
                    getch();
                    break;
                }
                if (game.hoa == 9)
                {
                    game.hienthi1();
                    cout<<"KET QUA HOA!!"<<endl;
                    game.batdau = 2;
                    getch();
                    break;
                }
            }
            else if (game.batdau == 2)
            {
                while (true)
                {
                    game.hienthi1();
                    cout<<"hay chon bat ki diem nao (o) : ";
                    cin>>game.nhapo;
                    if (game.nhapo == "1" || game.nhapo == "2" ||game.nhapo == "3" ||game.nhapo == "4" ||game.nhapo == "5" ||game.nhapo == "6"||game.nhapo == "7"||game.nhapo == "8"||game.nhapo == "9")
                    {
                        if (game.nhapo == "1")
                        {
                            if (game.a1 != 79 && game.a1 != 88)
                            {
                                game.hoa++;
                                game.batdau = 1;
                                game.a1 = 79;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapo == "2")
                        {
                            if (game.a2 != 79 && game.a2 != 88)
                            {
                                game.hoa++;
                                game.batdau = 1;
                                game.a2 = 79;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapo == "3")
                        {
                            if (game.a3 != 79 && game.a3 != 88)
                            {
                                game.hoa++;
                                game.batdau = 1;
                                game.a3 = 79;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapo == "4")
                        {
                            if (game.b1 != 79 && game.b1 != 88)
                            {
                                game.hoa++;
                                game.batdau = 1;
                                game.b1 = 79;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapo == "5")
                        {
                            if (game.b2 != 79 && game.b2 != 88)
                            {
                                game.hoa++;
                                game.batdau = 1;
                                game.b2 = 79;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapo == "6")
                        {
                            if (game.b3 != 79 && game.b3 != 88)
                            {
                                game.hoa++;
                                game.batdau = 1;
                                game.b3 = 79;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapo == "7")
                        {
                            if (game.c1 != 79 && game.c1 != 88)
                            {
                                game.hoa++;
                                game.batdau = 1;
                                game.c1 = 79;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapo == "8")
                        {
                            if (game.c2 != 79 && game.c2 != 88)
                            {
                                game.hoa++;
                                game.batdau = 1;
                                game.c2 = 79;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                        if (game.nhapo == "9")
                        {
                            if (game.c3 != 79 && game.c3 != 88)
                            {
                                game.hoa++;
                                game.batdau = 1;
                                game.c3 = 79;
                                break;
                            }
                            else
                            {
                                cout<<"vui long nhap lai ... ";
                                getch();
                            }
                        }
                    }
                    system("cls");
                }
                system("cls");
                if (game.a1 == 79 && game.a2 == 79 && game.a3 == 79)
                {
                    game.diemo++;
                    TextColor(74);
                    cout<<"("<<game.a1<<") "<<"("<<game.a2<<") ("<<game.a3<<")";
                    TextColor(10);
                    cout<<"       X : "<<game.diemx<<endl;
                    TextColor(10);
                    cout<<endl;
                    cout<<"("<<game.b1<<") "<<"("<<game.b2<<") ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    cout<<"("<<game.c1<<") "<<"("<<game.c2<<") ("<<game.c3<<")"<<endl<<endl;
                    cout<<"O thang roi nhe!!"<<endl;
                    game.batdau = 1;
                    getch();
                    break;
                }
                if (game.a1 == 79 && game.b1 == 79 && game.c1 == 79)
                {
                    game.diemo++;
                    TextColor(74);
                    cout<<"("<<game.a1<<") ";
                    TextColor(10);
                    cout<<"("<<game.a2<<") ("<<game.a3<<")";
                    cout<<"       X : "<<game.diemx<<endl;
                    TextColor(10);
                    cout<<endl;
                    TextColor(74);
                    cout<<"("<<game.b1<<") ";
                    TextColor(10);
                    cout<<"("<<game.b2<<") ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    TextColor(74);
                    cout<<"("<<game.c1<<") ";
                    TextColor(10);
                    cout<<"("<<game.c2<<") ("<<game.c3<<")"<<endl<<endl;
                    cout<<"O thang roi nhe!!"<<endl;
                    game.batdau = 1;
                    getch();
                    break;
                }
                if (game.c1 == 79 && game.c2 == 79 && game.c3 == 79)
                {
                    game.diemo++;
                    cout<<"("<<game.a1<<") ";
                    TextColor(10);
                    cout<<"("<<game.a2<<") ("<<game.a3<<")";
                    cout<<"       X : "<<game.diemx<<endl;
                    TextColor(10);
                    cout<<endl;
                    cout<<"("<<game.b1<<") ";
                    TextColor(10);
                    cout<<"("<<game.b2<<") ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    TextColor(74);
                    cout<<"("<<game.c1<<") ";
                    cout<<"("<<game.c2<<") ("<<game.c3<<")"<<endl<<endl;
                    TextColor(10);
                    cout<<"O thang roi nhe!!"<<endl;
                    game.batdau = 1;
                    getch();
                    break;
                }
                if (game.c3 == 79 && game.b3 == 79 && game.a3 == 79)
                {
                    game.diemo++;
                    cout<<"("<<game.a1<<") "<<"("<<game.a2<<") ";
                    TextColor(74);
                    cout<<"("<<game.a3<<")";
                    TextColor(10);
                    cout<<"       X : "<<game.diemx<<endl;
                    cout<<endl;
                    cout<<"("<<game.b1<<") "<<"("<<game.b2<<") ";
                    TextColor(74);
                    cout<<"("<<game.b3<<")";
                    TextColor(10);
                    cout<<"       O : "<<game.diemo<<endl;
                    cout<<endl;
                    cout<<"("<<game.c1<<") "<<"("<<game.c2<<") ";
                    TextColor(74);
                    cout<<"("<<game.c3<<")"<<endl<<endl;
                    TextColor(10);
                    cout<<"O thang roi nhe!!"<<endl;
                    game.batdau = 1;
                    getch();
                    break;
                }
                if (game.a1 == 79 && game.a2 == 79 && game.a3 == 79)
                {
                    game.diemo++;
                    game.hienthi1();
                    cout<<"O thang roi nhe!!"<<endl;
                    getch();
                    break;
                }
                if (game.b1 == 79 && game.b2 == 79 && game.b3 == 79)
                {
                    game.diemo++;
                    cout<<"("<<game.a1<<") "<<"("<<game.a2<<") ("<<game.a3<<")       X : "<<game.diemx<<endl;
                    cout<<endl;
                    TextColor(74);
                    cout<<"("<<game.b1<<") "<<"("<<game.b2<<") ("<<game.b3<<")";
                    TextColor(10);
                    cout<<"       O : "<<game.diemo<<endl;
                    cout<<endl;
                    cout<<"("<<game.c1<<") "<<"("<<game.c2<<") ("<<game.c3<<")"<<endl<<endl;
                    cout<<"O thang roi nhe!!"<<endl;
                    game.batdau = 1;
                    getch();
                    break;
                }
                if (game.a2 == 79 && game.b2 == 79 && game.c2 == 79)
                {
                    game.diemo++;
                    cout<<"("<<game.a1<<") ";
                    TextColor(74);
                    cout<<"("<<game.a2<<")";
                    TextColor(10);
                    cout<<" ("<<game.a3<<")";
                    cout<<"       X : "<<game.diemx<<endl;
                    cout<<endl;
                    cout<<"("<<game.b1<<") ";
                    TextColor(74);
                    cout<<"("<<game.b2<<")";
                    TextColor(10);
                    cout<<" ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    cout<<"("<<game.c1<<") ";
                    TextColor(74);
                    cout<<"("<<game.c2<<")";
                    TextColor(10);
                    cout<<" ("<<game.c3<<")"<<endl<<endl;
                    cout<<"O thang roi nhe!!"<<endl;
                    game.batdau = 1;
                    getch();
                    break;
                }
                if (game.a1 == 79 && game.b2 == 79 && game.c3 == 79)
                {
                    game.diemo++;
                    TextColor(74);
                    cout<<"("<<game.a1<<")";
                    TextColor(10);
                    cout<<" ("<<game.a2<<") ("<<game.a3<<")       X : "<<game.diemx<<endl;
                    cout<<endl;
                    cout<<"("<<game.b1<<") ";
                    TextColor(74);
                    cout<<"("<<game.b2<<")";
                    TextColor(10);
                    cout<<" ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    cout<<"("<<game.c1<<") "<<"("<<game.c2<<") ";
                    TextColor(74);
                    cout<<"("<<game.c3<<")"<<endl<<endl;
                    TextColor(10);
                    cout<<"O thang roi nhe!!"<<endl;
                    game.batdau = 1;
                    getch();
                    break;
                }
                if (game.c1 == 79 && game.b2 == 79 && game.a3 == 79)
                {
                    game.diemo++;
                    cout<<"("<<game.a1<<") ("<<game.a2<<") ";
                    TextColor(74);
                    cout<<"("<<game.a3<<")";
                    TextColor(10);
                    cout<<"       X : "<<game.diemx<<endl;
                    cout<<endl;
                    cout<<"("<<game.b1<<") ";
                    TextColor(74);
                    cout<<"("<<game.b2<<")";
                    TextColor(10);
                    cout<<" ("<<game.b3<<")       O : "<<game.diemo<<endl;
                    cout<<endl;
                    TextColor(74);
                    cout<<"("<<game.c1<<")";
                    TextColor(10);
                    cout<<" ("<<game.c2<<") ";
                    cout<<"("<<game.c3<<")"<<endl<<endl;
                    TextColor(10);
                    cout<<"O thang roi nhe!!"<<endl;
                    game.batdau = 1;
                    getch();
                    break;
                }
                if (game.hoa == 9)
                {
                    game.hienthi1();
                    cout<<"KET QUA HOA!!"<<endl;
                    game.batdau = 1;
                    getch();
                    break;
                }
            }
        }
    }
    getch();
    return 0;
}
