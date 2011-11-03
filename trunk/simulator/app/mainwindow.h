#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class Plot;
class QMenu;
class GLWidget;
class AbstractSerial;
class QPushButton;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

    QSize sizeHint() const;

private:
    void createMenus();

    QMenu *fileMenu;

    //AbstractSerial *port;
    QPushButton *serialButton;

    GLWidget *glWidget;
    //Plot *plot;
};

#endif
