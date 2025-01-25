#include <iostream>

using namespace std;
class Dude
{
public:
    int qiymat;
    Dude qosh(Dude b);
    Dude ayir(Dude b);
    Dude mult(Dude b);
    Dude qbol(Dude b);
    Dude bol(Dude b);
    Dude Div(Dude b);
    Dude daraja(Dude b);
    Dude Log(Dude b);
    Dude modul();
    Dude Gcd(Dude b);
    Dude Lcm(Dude b);
    Dude Sqrt();
    Dude schy();
    Dude sqy();
    Dude tub();
};
int comp(Dude a, Dude b)
{
    if (a.qiymat > b.qiymat)
        return 1;
    if (a.qiymat == b.qiymat)
        return 2;
    return 3;
}
Dude Dude::qosh(Dude b)
{
    Dude c;
    c.qiymat = qiymat + b.qiymat;
    return c;
}
Dude Dude::ayir(Dude b)
{
    Dude c;
    c.qiymat = qiymat - b.qiymat;
    return c;
}
Dude Dude::mult(Dude b)
{
    Dude c, i, a;
    a.qiymat = qiymat;
    c.qiymat = 0;
    i.qiymat = 0;
    while (comp(b, i) != 2)
    {
        c = c.qosh(a);
        i.qiymat++;
    }
    return c;
}
Dude Dude::bol(Dude b)
{
    Dude i, a;
    a.qiymat = qiymat;
    i.qiymat = 0;
    while (comp(a, b) != 3)
    {
        a = a.ayir(b);
        i.qiymat++;
    }
    return i;
}
Dude Dude::qbol(Dude b)
{
    Dude a;
    a.qiymat = qiymat;
    while (comp(a, b) != 3)
    {
        a = a.ayir(b);
    }
    return a;
}
Dude Dude::schy()
{
    Dude c, i, a, nol;
    a.qiymat = qiymat;
    nol.qiymat = 0;
    c.qiymat = 0;
    i.qiymat = 0;
    while (comp(a, nol) != 2)
    {
        c.qiymat++;
        i = i.qosh(c);
        a.qiymat--;
    }
    return i;
}
Dude Dude::sqy()
{
    Dude c, i, a, on;
    a.qiymat = qiymat;
    on.qiymat = 10;
    c.qiymat = 0;
    i.qiymat = 0;
    while (comp(a, on) != 3)
    {
        i = a.qbol(on);
        c = c.qosh(i);
        a = a.bol(on);
    }
    c = c.qosh(a);
    return c;
}
Dude Dude::tub()
{
    Dude c, i, a, j, nol;
    string k;
    k = "Tub!";
    a.qiymat = qiymat;
    c.qiymat = 1;
    i.qiymat = 0;
    nol.qiymat = 0;
    while (comp(a, c) != 3)
    {
        j = a.qbol(c);
        if (comp(j, nol) == 2)
        {
            i.qiymat++;
        }
        c.qiymat++;
    }
    if (i.qiymat == 2)
        return i;
    return nol;
}
Dude Dude::Div(Dude b)
{
    Dude i, a;
    i.qiymat = 0;
    a.qiymat = qiymat;
    while (comp(a, b) != 3)
    {
        a = a.ayir(b);
        i.qiymat++;
    }
    return i;
}
Dude Dude::daraja(Dude b)
{
    Dude c, i, a;
    c.qiymat = 1;
    i.qiymat = 0;
    a.qiymat = qiymat;
    while (comp(i, b) != 2)
    {
        c = c.mult(a);
        i.qiymat++;
    }
    return c;
}
Dude Dude::Log(Dude b)
{
    Dude i, a;
    i.qiymat = 0;
    a.qiymat = qiymat;
    while (comp(a, b) != 3)
    {
        a = a.Div(b);
        i.qiymat++;
    }
    return i;
}
Dude Dude::modul()
{
    Dude a;
    a.qiymat = qiymat;
    if (a.qiymat < 0)
    {
        a.qiymat = -a.qiymat;
    }
    return a;
}
Dude Dude::Sqrt()
{
    Dude a, b;
    a.qiymat = qiymat;
    b.qiymat = 0;
    while (comp(a, b.mult(b)) != 3)
        b.qiymat++;
    b.qiymat--;
    return b;
}
Dude Dude::Gcd(Dude b)
{
    Dude a, nol;
    nol.qiymat = 0;
    a.qiymat = qiymat;
    if (comp(a.qbol(b), nol) == 2)
    {
        return b;
    }
    return b.Gcd(a.qbol(b));
}
Dude Dude::Lcm(Dude b)
{
    Dude a, c, d;
    a.qiymat = qiymat;
    c = a.mult(b);
    d = a.Gcd(b);
    return c.Div(d);
}
istream &operator>>(istream &kir, Dude &a)
{
    cout << "Qiymatni kiriting: ";
    kir >> a.qiymat;
    return kir;
}
ostream &operator<<(ostream &chiq, Dude &a)
{
    chiq << "Qiymat: " << a.qiymat << "\n";
    return chiq;
}
int main()
{
    Dude a, b, x, c, y, s, parol;
    parol.qiymat = 2208;
    cout << "Parolni kiriting: ";
    cin >> s.qiymat;
    for (int i = 0, d = 3; comp(s, parol) != 2; i++)
    {
        long long z = 0, t = 1900000000LL;
        system("cls");
        cout << "Parol noto'g'ri! \n Qayta kiritish: ";
        cin >> s.qiymat;
        if (i == d)
        {
            system("cls");
            cout << "Ko'p marotaba noto'g'ri parol kiritganingiz uchun qurulma BLOK holatiga tushdi!\n";
            cout << "Keyinroq yana urinib ko'ring!";
            d += 5;
            while (z < t)
            {
                z++;
            }
        }
    }
    cout << "Ochildi!\n\n";
    cout << "1- Dasturlar        2- O'yinlar\n\n";
    cout << "3- Sozlamalar         4- Qurilmani o'chirish\n\n";
    cin >> y.qiymat;
    if (y.qiymat == 1)
    {
        cout << "\n         DASTURLAR:\n";
        cout << "1- Canculator\n\n";
        cin >> y.qiymat;
        if (y.qiymat == 1)
        {
            cout << "Bajarmoqchi bo'lgan amalingizni tanlang!\n\n";
            cout << "1- Qo'shish\n\n2- Ayirish\n\n";
            cout << "3- Ko'paytirish\n\n4- Bo'lish\n\n";
            cout << "5- EKUB\n\n6- EKUK\n\n";
            cout << "7- Sonning ildizi\n\n8- Sonning darajasi\n\n";
            cout << "9- Bo'lgandagi qoldiqni olish\n\n";
            cout << "10- Sonning Tubligini aniqlash\n\n";
            cout << "11- Sonning raqamlar yig'indisini olish\n\n";
            cout << "12- '0'dan Raqamgacha bo'lgan sonlar yi'gindisini olish\n\n";
            cout << "13- Sonning Moduli\n\n14- Sonning Logorifmi\n\n";
            cin >> x.qiymat;
            cin >> a >> b;
            if (x.qiymat == 1)
                c = a.qosh(b);
            if (x.qiymat == 2)
                c = a.ayir(b);
            if (x.qiymat == 3)
                c = a.mult(b);
            if (x.qiymat == 4)
                c = a.bol(b);
            if (x.qiymat == 5)
                c = a.Gcd(b);
            if (x.qiymat == 6)
                c = a.Lcm(b);
            if (x.qiymat == 7)
                c = a.Sqrt();
            if (x.qiymat == 8)
                c = a.daraja(b);
            if (x.qiymat == 9)
                c = a.qbol(b);
            if (x.qiymat == 10)
            {
                c = a.tub();
                if (c.qiymat == 2)
                    cout << "Tub!";
                else
                    cout << "Tub emas!";
                return 0;
            }
            if (x.qiymat == 11)
                c = a.sqy();
            if (x.qiymat == 12)
                c = a.schy();
            if (x.qiymat == 13)
                c = a.Log(b);
            if (x.qiymat == 14)
                c = a.modul();
            cout << c;
        }
    }
    if (y.qiymat == 2)
    {
        cout << "\n\nSizda bironta ham o'yin yo'q!";
        return 0;
    }
    if (y.qiymat == 3)
    {
        cout << "\n           SOZLAMALAR:\n";
        cout << "1- Fedback           2- Parolni o'zgartirish\n\n";
        cin >> y.qiymat;
        if (y.qiymat == 1)
        {
            cout << "\n\nMurojaat uchun: +(998)-97-105-22-08";
            return 0;
        }
        if (y.qiymat == 2)
        {
            cout << "\n\n   Parolni aniq o'zgartirmoqchimisiz?!?\n1- HA           2- Yo'q\n";
            cin >> y.qiymat;
            if (y.qiymat == 1)
            {
                Dude f;
                cout << "Parolni o'zgartirishdan avval hozirgi parolni kiriting:\n";
                cin >> y.qiymat;
                for (int i = 0, d = 5, j = 5; comp(y, parol) != 2; i++)
                {
                    cout << "\nParol xato! Sizda " << j << "-ta urinish qoldi\n";
                    cin >> y.qiymat;
                    j--;
                    if (i == d - 1 && comp(y, parol) != 2)
                    {
                        return 0;
                    }
                }
                cout << "Yangi parolni kiriting: \n";
                cin >> y.qiymat;
                cout << "Yangi parolni qayta kiriting: \n";
                cin >> f.qiymat;
                for (int i = 0, d = 5, j = 5; comp(f, y) != 2; i++)
                {
                    cout << "\nParol xato! Sizda " << j << "ta urinish qoldi\n";
                    cin >> f.qiymat;
                    j--;
                    if (i == d - 1 && comp(f, y) != 2)
                    {
                        return 0;
                    }
                }
                parol.qiymat = f.qiymat;
                cout << "\nParol o'zgardi!\n\nEndi faqat '" << f.qiymat << "' shu Parol orqali qurilmani ocha olasiz!";
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    if (y.qiymat == 4)
    {
        cout << "\n\nQurilma o'chdi!";
        return 0;
    }
}
