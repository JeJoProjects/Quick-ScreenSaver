#ifndef SCREENSAVER_H
#define SCREENSAVER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE

namespace Ui { class ScreenSaver; }

QT_END_NAMESPACE

class ScreenSaver final : public QMainWindow
{
  Q_OBJECT

public:
  ScreenSaver(QWidget *parent = nullptr) noexcept;
  ~ScreenSaver() noexcept;

private:
  Ui::ScreenSaver *ui;
};
#endif // SCREENSAVER_H
