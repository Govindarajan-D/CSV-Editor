#ifndef CSVMWINDOW_H
#define CSVMWINDOW_H

#include <QMainWindow>

namespace Ui {
class csvMWindow;
}

class csvMWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit csvMWindow(QWidget *parent = 0);
    ~csvMWindow();

private slots:
    void on_actionExit_triggered();

private:
    Ui::csvMWindow *ui;
};

#endif // CSVMWINDOW_H
