#include "proper.h"
#include "ui_proper.h"

proper::proper(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::proper)
{
    ui->setupUi(this);
    hide();
}

proper::~proper()
{
    delete ui;
}
void proper::setCurFile(QFileInfo &fileinfo)
{
    QFileInfo *info=new QFileInfo(fileinfo);
    ui->lineEdit_10->setText(info->fileName());
    ui->lineEdit_13->setText(tr("%1字节").arg(info->size()));
    ui->lineEdit_15->setText(info->filePath());
    ui->lineEdit_16->setText(info->lastModified().toString());
    ui->lineEdit_17->setText(info->lastRead().toString());
    ui->fileowner->setText(info->owner());
    ui->filegroup->setText(info->group());

    if(info->isDir())
    {
        ui->lineEdit_12->setText(tr("文件夹"));
    }
    else if(info->isExecutable())
    {
        ui->lineEdit_12->setText(tr("可执行文件"));
    }
    else if(info->isFile())
    {
        ui->lineEdit_12->setText(tr("文件"));
    }
    else if(info->isSymLink())
    {
        ui->lineEdit_12->setText(tr("符号连接"));
    }
    ui->ownerread->setCheckState(info->permission(QFile::ReadOwner)?Qt::Checked:Qt::Unchecked);
    ui->ownerwrite->setCheckState(info->permission(QFile::WriteOwner)?Qt::Checked:Qt::Unchecked);
    ui->ownerexec->setCheckState(info->permission(QFile::ExeOwner)?Qt::Checked:Qt::Unchecked);

    ui->grpread->setCheckState(info->permission(QFile::ReadGroup)?Qt::Checked:Qt::Unchecked);
    ui->grpwrite->setCheckState(info->permission(QFile::WriteGroup)?Qt::Checked:Qt::Unchecked);
    ui->grpexec->setCheckState(info->permission(QFile::ExeGroup)?Qt::Checked:Qt::Unchecked);

    ui->otherread->setCheckState(info->permission(QFile::ReadOther)?Qt::Checked:Qt::Unchecked);
     ui->otherwrite->setCheckState(info->permission(QFile::WriteOther)?Qt::Checked:Qt::Unchecked);
     ui->otherexec->setCheckState(info->permission(QFile::ExeOther)?Qt::Checked:Qt::Unchecked);
}

void proper::on_pushButton_clicked()
{
    this->close();
}
