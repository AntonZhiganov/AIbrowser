#include "aibrowser.h"
#include "ui_aibrowser.h"

AIbrowser::AIbrowser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AIbrowser)
{
    ui->setupUi(this);
}

AIbrowser::~AIbrowser()
{
    delete ui;
}

