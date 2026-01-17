#ifndef AIBROWSER_H
#define AIBROWSER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class AIbrowser; }
QT_END_NAMESPACE

class AIbrowser : public QMainWindow
{
    Q_OBJECT

public:
    AIbrowser(QWidget *parent = nullptr);
    ~AIbrowser();

private:
    Ui::AIbrowser *ui;
};
#endif // AIBROWSER_H
