#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QDebug>
#include <QTimer>
#include <time.h>
#include "player.h"
#include "gamefield.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void slotAcceptName(void);
    void slotSingleGame(void);
    void slotNetwrkGame(void);
    void slotHelpWidgt(void);
    void slotSettings(void);
/*
private slots:
    void slotDrawAnim(void);
*/
private:
    // fields
    Ui::MainWindow *ui;
    QWidget        *widgMain;
    QPushButton    *btnOk;
    QPushButton    *btnExt;
    QPushButton    *btnMd1;
    QPushButton    *btnMd2;
    QPushButton    *btnHlp;
    QPushButton    *btnSettng;
    QLineEdit      *lne_name;
    QGridLayout    *grdLayout;
    QGraphicsView  *grphView;
    QGraphicsScene *grphScene;
    GameField      *game;
};

#endif // MAINWINDOW_H

/*
 *       Start menu
 * |-----------------------|
 * |--==Player===---Ok-----|
 * |-----------------------|
 * |---Player vs CPU ------|
 * |---Player vs Player ---|
 * |-----------------------|
 *
 *
 *      Some gameplay
 * |-----------------------|
 * |ooooooooooooooooooooooo|
 * |ooooooooooooooooooooooo|
 * |oo|--|ooo/***\ooo|--|oo|
 * |oo|  |oo|<-- |ooo|  |oo|
 * |oo|  |oo\**o/oooo|  |oo|
 * |oo|  |ooooooooooo|  |oo|
 * |oo|--|ooooooooooo|--|oo|
 * |ooooooooooooooooooooooo|
 * |ooooooooooooooooooooooo|
 * |_______________________|
 *
*/
