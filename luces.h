/**
*Autor: Moisés Abel Díaz Nava
*clase "luces" 
*/
class luces
{
private:
    int estado;
public:
    luces();
    luces(int e);

    int changeState1();
    int changeState2();
    void setState(int n);
    int getState();
    void imprimir();
};

