#include "udenverremoteautopilot.h"

UDenverRemoteAutopilot::UDenverRemoteAutopilot(QWidget *parent) :
    QWidget(parent),
  ui(new Ui::QGCWebView)
{
  ui->setupUi(this);
  ui->webView->settings()->setAttribute(QWebSettings::PluginsEnabled, true);
  ui->webView->load(QUrl("http://qgroundcontrol.org"));
}
