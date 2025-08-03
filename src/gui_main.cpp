//
// Created by Alek on 8/3/2025.
//

#include "main_window.h"
#include <QApplication>
#include <iostream>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    main_window mainWindow;
    mainWindow.show();
    return app.exec();
}
