#ifndef UDENVERAUTOPILOTREMOTE_H
#define UDENVERAUTOPILOTREMOTE_H

#include <QWidget>

namespace Ui {
class UDenverAutopilotRemote;
}

class UDenverAutopilotRemote : public QWidget
{
    Q_OBJECT
    
public:
    explicit UDenverAutopilotRemote(QWidget *parent = 0);
    ~UDenverAutopilotRemote();
    
private slots:
    void on_gobutton_clicked();

private:
    Ui::UDenverAutopilotRemote *ui;
};

#endif // UDENVERAUTOPILOTREMOTE_H
