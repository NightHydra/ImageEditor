//
// Created by Alek on 8/3/2025.
//

#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class main_window; }
QT_END_NAMESPACE

class main_window : public QMainWindow {
Q_OBJECT

public:
    explicit main_window(QWidget *parent = nullptr);
    ~main_window() override;

private:
    Ui::main_window *ui;
};


#endif //MAIN_WINDOW_H
