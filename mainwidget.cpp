#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    // ��ֹ������󻯰�ť
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);

    // �̶����ڴ�С����UI�������Ϊ׼��
    setFixedSize(width(),height());

    // ������������ؼ�Ϊ����
    ui->lineEdit_Password->setEchoMode(QLineEdit::Password);

    // ��ʼ�û�Ȩ��
    ui->comboBox_cleck->addItem("����Ա",1);
    ui->comboBox_cleck->addItem("��ͨ�û�",2);

    // �����û����ƺ��û����볤��
    ui->lineEdit_user->setMaxLength(16);
    ui->lineEdit_Password->setMaxLength(16);



}

MainWidget::~MainWidget()
{
    delete ui;
}


void MainWidget::on_pushButton_Exit_clicked()
{
    this->close();
}
