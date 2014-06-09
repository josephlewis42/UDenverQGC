#include "UDenverAutopilotRemote.h"
#include "ui_UDenverAutopilotRemote.h"
#include <QDesktopServices>
#include <QUrl>

UDenverAutopilotRemote::UDenverAutopilotRemote(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UDenverAutopilotRemote)
{
    ui->setupUi(this);

}

UDenverAutopilotRemote::~UDenverAutopilotRemote()
{
    delete ui;
}

void UDenverAutopilotRemote::on_gobutton_clicked()
{
    QDesktopServices::openUrl(QUrl("http://localhost:8080"));
}
