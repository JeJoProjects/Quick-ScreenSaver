#include "ScreenSaver.h"
#include "ui_ScreenSaver.h"

ScreenSaver::ScreenSaver(QWidget *parent) noexcept
  : QMainWindow{ parent }
  , ui{ new Ui::ScreenSaver }
{
  this->ui->setupUi(this);
}

ScreenSaver::~ScreenSaver() noexcept
{
  delete ui;
}

