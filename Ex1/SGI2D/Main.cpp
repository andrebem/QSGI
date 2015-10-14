#include "JanelaPrincipal.h"
#include <QApplication>

/*
 * Funcao main, conforme definida pelo QtCreator
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JanelaPrincipal w;
    w.show();

    return a.exec();
}
