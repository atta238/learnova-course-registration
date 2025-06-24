#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globals.h"
#include <QPixmap>
#include <QProcess>
#include <QGraphicsOpacityEffect>
#include <QStandardItemModel>
#include <cctype>
#include <QCloseEvent>
#include <QRegularExpressionValidator>
#include<QIntValidator>
#include <QTimer>
#include <QMessageBox>
bool admin1=0;
bool student=1;
string s="1234";
int cntr=1;
int cntr2=1;
int cntr3=1;
int cntr4=1;
using namespace std;
extern map<string,courses> all_courses;// course name
extern map<string,user> all_students;//student_email
extern map<string,admin> all_admins; //admin_email

void MainWindow::closeEvent(QCloseEvent *event)
{
    write_courses();
    write_admins();
    write_users();

    event->accept();
}




QGraphicsOpacityEffect* makenewone(){
    QGraphicsOpacityEffect *opacityEffect = new QGraphicsOpacityEffect;
    opacityEffect->setOpacity(0.0);
    return opacityEffect;
};


void tagheez_allcourses(QTableView *s){
    QStandardItemModel *model = new QStandardItemModel(all_courses.size(), 4);
    model->setHorizontalHeaderLabels({"Course Name", "Credit Hours", "Instructor","Semester"});
    int row=0;
    for(auto &i :all_courses){

        model->setItem(row, 0, new QStandardItem(QString::fromStdString(i.second.get_course_name())));
        model->setItem(row, 1, new QStandardItem(QString::number(i.second.get_credit_hours())));
        model->setItem(row, 2, new QStandardItem(QString::fromStdString(i.second.get_instructor())));
        model->setItem(row, 3, new QStandardItem(QString::number(i.second.get_semester())));
        row++;
    }
    s->show();
    s->setModel(model);
    s->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    s->verticalHeader()->setVisible(false);
    s->resizeColumnsToContents();
    s->resizeRowsToContents();
    s->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    s->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    s->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    s->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Fixed);
    s->setColumnWidth(0,227);
    s->setColumnWidth(1,227);
    s->setColumnWidth(2,227);
    s->setColumnWidth(3,227);
    for (int row = 0; row < all_courses.size(); row++) {
        s->setRowHeight(row,int(615/all_courses.size()));
    }
}






int tagheez_avlcourses(QTableView *s){
    set<courses>available=all_students[curr_student_email].available_courses();
    QStandardItemModel *model = new QStandardItemModel(available.size(), 4);
    model->setHorizontalHeaderLabels({"Course Name", "Credit Hours", "Instructor","Semester"});
    int row=0;
    for(auto i : available){
        model->setItem(row, 0, new QStandardItem(QString::fromStdString(i.get_course_name())));
        model->setItem(row, 1, new QStandardItem(QString::number(i.get_credit_hours())));
        model->setItem(row, 2, new QStandardItem(QString::fromStdString(i.get_instructor())));
        model->setItem(row, 3, new QStandardItem(QString::number(i.get_semester())));
        row++;
    }
    s->show();
    s->setModel(model);
    s->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    s->verticalHeader()->setVisible(false);
    s->resizeColumnsToContents();
    s->resizeRowsToContents();
    s->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    s->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    s->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    s->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Fixed);
    s->setColumnWidth(0,227);
    s->setColumnWidth(1,227);
    s->setColumnWidth(2,227);
    s->setColumnWidth(3,227);
    for (int row = 0; row < available.size(); row++) {
        s->setRowHeight(row,int(615/available.size()));
    }
    return available.size();
}


void tagheez_mycourses(QTableView *s){

    QStandardItemModel *model = new QStandardItemModel(all_students[curr_student_email].get_registered_courses().size(), 5);
    model->setHorizontalHeaderLabels({"Course Name", "Credit Hours", "Instructor","Semester","Grade"});
    int row=0;
    for(auto &i :all_students[curr_student_email].get_registered_courses()){
        courses h=i.first;

        QStandardItem *item1 = new QStandardItem(QString::fromStdString(h.get_course_name()));
        item1->setTextAlignment(Qt::AlignCenter);


        QStandardItem *item2 =new QStandardItem(QString::number(h.get_credit_hours()));
        item2->setTextAlignment(Qt::AlignCenter);


        QStandardItem *item3 = new QStandardItem(QString::fromStdString(h.get_instructor()));
        item3->setTextAlignment(Qt::AlignCenter);


        QStandardItem *item4 =new QStandardItem(QString::number(h.get_semester()));
        item4->setTextAlignment(Qt::AlignCenter);


        model->setItem(row, 0, item1);
        model->setItem(row, 1, item2);
        model->setItem(row, 2, item3);
        model->setItem(row, 3, item4);
        if(i.second==-1){
            QStandardItem *item5 = new QStandardItem(QString::fromStdString("Not Completed"));
            item5->setTextAlignment(Qt::AlignCenter);

            model->setItem(row, 4, item5);
        }
        else{
            string s;
            user::classify_grades(i.second,s);

            QStandardItem *item5 = new QStandardItem(QString::fromStdString(s));
            item5->setTextAlignment(Qt::AlignCenter);

            model->setItem(row, 4, item5);
        }
        row++;
    }
    s->show();
    s->setModel(model);
    s->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    s->verticalHeader()->setVisible(false);
    s->resizeColumnsToContents();
    s->resizeRowsToContents();
    s->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    s->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    s->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);
    s->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Fixed);
    s->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Fixed);
    s->setColumnWidth(0,200);
    s->setColumnWidth(1,200);
    s->setColumnWidth(2,200);
    s->setColumnWidth(3,200);
    s->setColumnWidth(4,143);
    for (int row = 0; row < all_students[curr_student_email].get_registered_courses().size(); row++) {
        s->setRowHeight(row,int(615/all_students[curr_student_email].get_registered_courses().size()));
    }
}






void tagheez_prereq(QTableView *s,string course_name){
    QStandardItemModel *model = new QStandardItemModel(all_courses[course_name].get_prerequisites().size(), 1);
    model->setHorizontalHeaderLabels({"Course Name"});
    int row=0;
    for(auto i :all_courses[course_name].get_prerequisites()){
        QStandardItem *item=  new QStandardItem(QString::fromStdString(i.get_course_name()));
        item->setTextAlignment(Qt::AlignCenter);
        model->setItem(row, 0,item);
        row++;
    }
    s->show();
    s->setModel(model);
    s->verticalHeader()->setVisible(false);
    s->resizeColumnsToContents();
    s->resizeRowsToContents();
    s->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    s->setColumnWidth(0,393);
    for (int row = 0; row < all_courses[course_name].get_prerequisites().size(); row++) {
        s->setRowHeight(row,int(506/all_courses[course_name].get_prerequisites().size()));
    }
}




void tagheez_grade(QTableView *s,int sems){
    auto courses1 = all_students[curr_student_email].get_semester_courses().at(sems);
    QStandardItemModel *model = new QStandardItemModel(courses1.size(), 2);
    model->setHorizontalHeaderLabels({"Course Name","Grade"});
    int row=0;
    for(auto i :courses1){
        QStandardItem *item=  new QStandardItem(QString::fromStdString(i.get_course_name()));
        item->setTextAlignment(Qt::AlignCenter);
        model->setItem(row, 0,item);
        int gr=all_students[curr_student_email].get_registered_courses().at(all_courses[i.get_course_name()]);
        if(gr==-1){
            QStandardItem *item1=  new QStandardItem(QString::fromStdString("Not Completed"));
            item1->setTextAlignment(Qt::AlignCenter);
            model->setItem(row, 1,item1);
        }
        else{
            string s;
            user::classify_grades(gr,s);
            QStandardItem *item1=  new QStandardItem(QString::fromStdString(s));
            item1->setTextAlignment(Qt::AlignCenter);
            model->setItem(row, 1,item1);
        }
        row++;
    }
    s->show();
    s->setModel(model);
    s->verticalHeader()->setVisible(false);
    s->resizeColumnsToContents();
    s->resizeRowsToContents();
    s->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    s->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    s->setColumnWidth(0,301);
    s->setColumnWidth(1,301);
    for (int row = 0; row < courses1.size(); row++) {
        s->setRowHeight(row,int(525/courses1.size()));
    }
}




void sendWarningEmail(const string& email, const string& code) {
    QString pythonPath = "C:/Users/user/AppData/Local/Programs/Python/Python313/python.exe";
    QString scriptPath = "C:/Users/user/Desktop/Learnova_gui/build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/send_email.py";

    QStringList arguments;
    arguments << scriptPath << QString::fromStdString(email) << QString::fromStdString(code);

    QProcess process;
    process.start(pythonPath, arguments);
    if (!process.waitForStarted()) {
        qDebug() << "Failed to start Python process.";
        return;
    }

    if (!process.waitForFinished()) {
        qDebug() << "Python script did not finish properly.";
        return;
    }
}

string update_password(string email){
    srand(time(0));
    string code=to_string(rand() % 1000000 + 100000);

    sendWarningEmail(email,code);
    return code;
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->login_page);




    ui->error_txt->hide();
    ui->new_pass_fild->hide();
    ui->confirm_btn->hide();
    ui->error_lbl->hide();
    ui->no_courses_lbl->hide();
    ui->no_prerequisites_lbl->hide();
    ui->errorsizepass_txt->hide();
    ui->hidden_pass_btn->hide();
    ui->hidded_pic->hide();
    ui->err_pass->hide();
    ui->err_email->hide();
    ui->err_id->hide();
    ui->err_fna->hide();
    ui->err_lna->hide();
    ui->err_crs_name->hide();
    ui->err_credit_hrs->hide();
    ui->err_instruc->hide();
    ui->err_semester->hide();
    ui->succ_txt->hide();
    ui->err_pass_3->hide();
    ui->err_email_3->hide();
    ui->err_id_3->hide();
    ui->err_fna_3->hide();
    ui->err_lna_3->hide();
    ui->succ_adm_txt->hide();
    ui->err_prereq_add_lbl->hide();
    ui->succ_addpre_txt->hide();
    ui->err_prereq_remo_lbl->hide();
    ui->succ_remopre_txt->hide();
    ui->no_mycourses_lbl->hide();
    ui->no_avlcourses_lbl->hide();
    ui->no_prerequisites_lbl_2->hide();
    ui->succ_regiscrs_txt->hide();
    ui->grades_table->hide();
    ui->err_sems->hide();
    QRegularExpression rx("[A-Za-z]+"); // letters only
    ui->Fir_name_fild->setValidator(new QRegularExpressionValidator(rx, this));
    ui->Fir_name_fild_3->setValidator(new QRegularExpressionValidator(rx, this));


    QRegularExpression rx1("^[A-Za-z ]+$"); // letters and spaces
    ui->las_name_fild->setValidator(new QRegularExpressionValidator(rx1, this));
    ui->Instruc_fild->setValidator(new QRegularExpressionValidator(rx1, this));
    ui->las_name_fild_3->setValidator(new QRegularExpressionValidator(rx1, this));
    ui->Prerequisite_add_fild->setValidator(new QRegularExpressionValidator(rx1, this));
    ui->Prerequisite_rem_fild->setValidator(new QRegularExpressionValidator(rx1, this));


    QRegularExpression rx2("^[0-9]{1,15}$"); //numbers only
    ui->ID_fild->setValidator(new QRegularExpressionValidator(rx2, this));
    ui->ID_fild_3->setValidator(new QRegularExpressionValidator(rx2, this));


    // from 0-9 only
    ui->Semester_fild->setValidator(new QIntValidator(1, 9, this));
    ui->Credit_hrs_fild->setValidator(new QIntValidator(0, 6, this));



    QRegularExpression regex("[^\\s]*"); //any input except spaces
    ui->email_fild->setValidator(new QRegularExpressionValidator(regex, this));
    ui->email_fild_2->setValidator(new QRegularExpressionValidator(regex, this));
    ui->email_fild_3->setValidator(new QRegularExpressionValidator(regex, this));
    ui->pass_fild->setValidator(new QRegularExpressionValidator(regex, this));
    ui->pass_fild_2->setValidator(new QRegularExpressionValidator(regex, this));
    ui->pass_fild_3->setValidator(new QRegularExpressionValidator(regex, this));
    ui->new_pass_fild->setValidator(new QRegularExpressionValidator(regex, this));




    QPixmap pix_back(":/images/images/Undo.png");
    ui->back_pic->setPixmap(pix_back.scaled(81,81,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->back_pic_crs->setPixmap(pix_back.scaled(81,81,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->back_pic_adm->setPixmap(pix_back.scaled(81,81,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->back_pic_upcrs->setPixmap(pix_back.scaled(81,81,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->back_pic_mycrs->setPixmap(pix_back.scaled(81,81,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->back_pic_avlcrs->setPixmap(pix_back.scaled(81,81,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->back_pic_regiscrs->setPixmap(pix_back.scaled(81,81,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->back_pic_viewgrd->setPixmap(pix_back.scaled(81,81,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->back_pic_viewpre->setPixmap(pix_back.scaled(81,81,Qt::KeepAspectRatio,Qt::SmoothTransformation));

    QPixmap pix_hid(":/images/images/hidden.png");
    ui->hidded_pic->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->hidded_pic_2->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->hidded_pic_3->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->hidded_pic_4->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));

    ui->loginswitch_btn->setGraphicsEffect(makenewone());
    ui->loginswitch_btn_2->setGraphicsEffect(makenewone());


    ui->registerswitch_btn->setGraphicsEffect(makenewone());
    ui->register_switch->setGraphicsEffect(makenewone());


    ui->forgpas_btn->setGraphicsEffect(makenewone());
    ui->back_btn->setGraphicsEffect(makenewone());
    ui->back_btn_crs->setGraphicsEffect(makenewone());
    ui->back_btn_adm->setGraphicsEffect(makenewone());
    ui->back_btn_upcrs->setGraphicsEffect(makenewone());
    ui->back_btn_mycrs->setGraphicsEffect(makenewone());
    ui->back_btn_avlcrs->setGraphicsEffect(makenewone());
    ui->back_btn_regiscrs->setGraphicsEffect(makenewone());
    ui->back_btn_viewgrd->setGraphicsEffect(makenewone());
    ui->back_btn_viewpre->setGraphicsEffect(makenewone());

    ui->hidden_pass_btn->setGraphicsEffect(makenewone());
    ui->hidden_pass_btn_2->setGraphicsEffect(makenewone());
    ui->hidden_pass_btn_3->setGraphicsEffect(makenewone());
    ui->hidden_pass_btn_4->setGraphicsEffect(makenewone());


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_forgpas_btn_clicked()
{
    string email1=ui->email_fild->text().toStdString();
    if(admin1){
        bool found=false;
        if(all_admins.find(email1) != all_admins.end()){
            found=true;
        }
        if(found){
            ui->stackedWidget->setCurrentWidget(ui->forgot_page);
            string msg="We’ve sent a verification code to your email \"";
            msg+=email1;
            msg+="\"";
            ui->msg_txt->setText(QString::fromStdString(msg));
            ui->error_lbl->hide();
           s=update_password(email1);
        }
        else{
            ui->error_lbl->setText("Your email is incorrect");
            ui->error_lbl->show();
        }
    }
    else if(student){
        bool found=false;
        if(all_students.find(email1) != all_students.end()){
            found=true;
        }
        if(found){
            ui->stackedWidget->setCurrentWidget(ui->forgot_page);
            string msg="We’ve sent a verification code to your email \"";
            msg+=email1;
            msg+="\"";
            ui->msg_txt->setText(QString::fromStdString(msg));
            ui->error_lbl->hide();
           s=update_password(email1);
        }
        else{
            ui->error_lbl->setText("Your email is incorrect");
            ui->error_lbl->show();
        }
    }
}


void MainWindow::on_admin_btn_clicked()
{
    ui->admin_btn->setStyleSheet("background:transparent;"
                                 "background-color: #003366;"
                                 "border-radius: 21px;");
    ui->stud_btn->setStyleSheet("background:transparent;"
                                "border:5px solid #457B9D;"
                                "border-radius: 21px;");
    ui->admin_lbl->setStyleSheet("background:transparent;"
                                 "color:#003366;");
    ui->stud_lbl->setStyleSheet("background:transparent;"
                                "color:#457B9D;");
    ui->registerswitch_btn->setEnabled(false);
    ui->registerswitch_btn->setCursor(Qt::ArrowCursor);
    admin1=1;
    student=0;
}


void MainWindow::on_stud_btn_clicked()
{
    ui->stud_btn->setStyleSheet("background:transparent;"
                                "background-color: #003366;"
                                "border-radius: 21px;");

    ui->admin_btn->setStyleSheet("background:transparent;"
                                 "border:5px solid #457B9D;"
                                 "border-radius: 21px;");
    ui->stud_lbl->setStyleSheet("background:transparent;"
                                 "color:#003366;");
    ui->admin_lbl->setStyleSheet("background:transparent;"
                                "color:#457B9D;");
    ui->registerswitch_btn->setEnabled(true);
    ui->registerswitch_btn->setCursor(Qt::PointingHandCursor);
    student=1;
    admin1=0;
}


void MainWindow::on_loginswitch_btn_2_clicked()
{
    QPixmap pix_hid(":/images/images/hidden.png");
    ui->pass_fild_2->setEchoMode(QLineEdit::Password);
    ui->hidded_pic_3->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->email_fild_2->clear();
    ui->Fir_name_fild->clear();
    ui->las_name_fild->clear();
    ui->ID_fild->clear();
    ui->pass_fild_2->clear();
    ui->stackedWidget->setCurrentWidget(ui->login_page);
}


void MainWindow::on_back_btn_clicked()
{
    ui->error_lbl->hide();
    ui->email_fild->clear();
    ui->pass_fild->clear();
    ui->error_txt->hide();
    QPixmap pix_hid(":/images/images/hidden.png");
    ui->pass_fild->setEchoMode(QLineEdit::Password);
    ui->hidded_pic_2->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->new_pass_fild->setEchoMode(QLineEdit::Password);
    ui->hidded_pic->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->new_pass_fild->hide();
    ui->confirm_btn->hide();
    ui->verifi_fild->clear();
    ui->errorsizepass_txt->hide();
    ui->hidden_pass_btn->hide();
    ui->hidded_pic->hide();

    QGraphicsOpacityEffect *fadeEffect = new QGraphicsOpacityEffect(this);
    fadeEffect->setOpacity(1);
    ui->verifi_fild->setGraphicsEffect(fadeEffect);

    QGraphicsOpacityEffect *fadeEffectt = new QGraphicsOpacityEffect(this);
    fadeEffectt->setOpacity(1);
    ui->check_btn->setGraphicsEffect(fadeEffectt);

    ui->verifi_fild->setEnabled(true);
    ui->check_btn->setEnabled(true);



    QGraphicsOpacityEffect *fadeEffect1 = new QGraphicsOpacityEffect(this);
    fadeEffect1->setOpacity(1);
    ui->new_pass_fild->setGraphicsEffect(fadeEffect1);

    QGraphicsOpacityEffect *fadeEffectt2 = new QGraphicsOpacityEffect(this);
    fadeEffectt2->setOpacity(1);
    ui->confirm_btn->setGraphicsEffect(fadeEffectt2);


    ui->new_pass_fild->setEnabled(true);
    ui->confirm_btn->setEnabled(true);
    ui->new_pass_fild->clear();

    ui->stackedWidget->setCurrentWidget(ui->login_page);
}


void MainWindow::on_check_btn_clicked()
{
    string verifi=ui->verifi_fild->text().toStdString();
    if(verifi==s){
        QGraphicsOpacityEffect *fadeEffect = new QGraphicsOpacityEffect(this);
        fadeEffect->setOpacity(0.4);
        ui->verifi_fild->setGraphicsEffect(fadeEffect);

        QGraphicsOpacityEffect *fadeEffectt = new QGraphicsOpacityEffect(this);
        fadeEffectt->setOpacity(0.4);
        ui->check_btn->setGraphicsEffect(fadeEffectt);


        ui->verifi_fild->setEnabled(false);
        ui->check_btn->setEnabled(false);

        ui->error_txt->setText("Verification code is correct");
        ui->error_txt->setStyleSheet("background:transparent;"
                                     "color:green;");
        ui->error_txt->show();
        ui->confirm_btn->show();
        ui->new_pass_fild->show();
        ui->hidden_pass_btn->show();
        ui->hidded_pic->show();
    }
    else{
        ui->verifi_fild->clear();
        ui->error_txt->setText("Verification code is incorrect");
        ui->error_txt->setStyleSheet("background:transparent;"
                                     "color:red;");
        ui->error_txt->show();
    }
}


void MainWindow::on_verifi_fild_cursorPositionChanged(int arg1, int arg2)
{
    ui->error_txt->hide();
}


void MainWindow::on_new_pass_fild_cursorPositionChanged(int arg1, int arg2)
{
    ui->error_txt->hide();
}


void MainWindow::on_login_btn_clicked()
{
    string email=ui->email_fild->text().toStdString();
    string pass=ui->pass_fild->text().toStdString();
    if(admin1){
        bool found=false;
        if(all_admins.find(email) != all_admins.end()) {
            found=true;
            if (all_admins[email].get_password()== pass) {
                curr_admin_email=email;
                string s="Hello ";
                s+=all_admins[email].get_Fname();
                ui->Hello_txt->setText(QString::fromStdString(s));
                ui->stackedWidget->setCurrentWidget(ui->first_admin_page);
                if(all_courses.empty()){
                    ui->all_courses_table->hide();
                    ui->no_courses_lbl->show();
                }
                else{
                   ui->no_courses_lbl->hide();
                    tagheez_allcourses(ui->all_courses_table);
                }
                ui->error_lbl->hide();
                ui->email_fild->clear();
                ui->pass_fild->clear();
                ui->pass_fild->setEchoMode(QLineEdit::Password);
                QPixmap pix_hid(":/images/images/hidden.png");
                ui->hidded_pic_2->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
                return;
            }
        }
        if(found){
            ui->error_lbl->setText("Your password is incorrect");
            ui->error_lbl->show();
        }
        else{
            ui->error_lbl->setText("Your email is incorrect");
            ui->error_lbl->show();
        }
    }
    else if(student){
        bool found = false;
        if(all_students.find(email) != all_students.end()) {
            found = true;
            if (all_students[email].get_password()== pass) {
                curr_student_email=email;
                string s="Hello ";
                s+=all_students[email].get_Fname();
                ui->Hellouser_txt->setText(QString::fromStdString(s));
                ui->stackedWidget->setCurrentWidget(ui->first_user_page);
                if(all_courses.empty()){
                    ui->no_courses_lbl_2->show();
                    ui->all_courses_table_2->hide();
                }
                else{
                    ui->no_courses_lbl_2->hide();
                    tagheez_allcourses(ui->all_courses_table_2);
                }
                ui->error_lbl->hide();
                ui->email_fild->clear();
                ui->pass_fild->clear();
                QPixmap pix_hid(":/images/images/hidden.png");
                ui->pass_fild->setEchoMode(QLineEdit::Password);
                ui->hidded_pic_2->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
                return;
            }
        }
        if(found){
            ui->error_lbl->setText("Your password is incorrect");
            ui->error_lbl->show();
        }
        else{
            ui->error_lbl->setText("Your email is incorrect");
            ui->error_lbl->show();
        }
    }
}


void MainWindow::on_registerswitch_btn_clicked()
{
    ui->error_lbl->hide();
    ui->email_fild->clear();
    ui->pass_fild->clear();
    QPixmap pix_hid(":/images/images/hidden.png");
    ui->pass_fild->setEchoMode(QLineEdit::Password);
    ui->hidded_pic_2->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->stackedWidget->setCurrentWidget(ui->register_page);
}


void MainWindow::on_all_courses_table_doubleClicked(const QModelIndex &index)
{
    if (index.isValid()) {
        int selectedRow = index.row();
        QModelIndex firstColumnIndex = ui->all_courses_table->model()->index(selectedRow, 0);
        QModelIndex secondColumnIndex = ui->all_courses_table->model()->index(selectedRow, 1);
        QModelIndex thirdColumnIndex = ui->all_courses_table->model()->index(selectedRow, 2);
        QModelIndex fourthColumnIndex = ui->all_courses_table->model()->index(selectedRow, 3);


        QVariant data = ui->all_courses_table->model()->data(firstColumnIndex);
        QString firstColumnValue = data.toString();
        string crs_name=firstColumnValue.toStdString();

        ui->crs_name_txt->setText(QString::fromStdString(crs_name));

        QVariant data1 = ui->all_courses_table->model()->data(secondColumnIndex);
        QString secondColumnValue = data1.toString();
        string credit_hrs=secondColumnValue.toStdString();

        ui->credit_Hours_txt->setText("Credit Hours: "+QString::fromStdString(credit_hrs));

        QVariant data2 = ui->all_courses_table->model()->data(thirdColumnIndex);
        QString thirdColumnValue = data2.toString();
        string instr_name=thirdColumnValue.toStdString();

        ui->instructor_txt->setText(QString::fromStdString(instr_name));

        QVariant data3 = ui->all_courses_table->model()->data(fourthColumnIndex);
        QString fourthColumnValue = data3.toString();
        string semes_no=fourthColumnValue.toStdString();

        ui->semester_txt->setText("Semester: "+QString::fromStdString(semes_no));


        ui->stackedWidget->setCurrentWidget(ui->update_prereq);

        ui->Prerequisite_add_fild->clear();
        ui->Prerequisite_rem_fild->clear();
        ui->no_prerequisites_lbl->hide();
        ui->err_prereq_add_lbl->hide();
        ui->err_prereq_remo_lbl->hide();
        ui->succ_remopre_txt->hide();
        ui->succ_addpre_txt->hide();


        if(all_courses[crs_name].get_semester()== 1){
            QGraphicsOpacityEffect *fadeEffect1 = new QGraphicsOpacityEffect(this);
            fadeEffect1->setOpacity(0.4);
            ui->Prerequisite_add_fild->setGraphicsEffect(fadeEffect1);


            QGraphicsOpacityEffect *fadeEffectt2 = new QGraphicsOpacityEffect(this);
            fadeEffectt2->setOpacity(0.4);
            ui->add_btn->setGraphicsEffect(fadeEffectt2);

            ui->add_btn->setEnabled(false);
            ui->Prerequisite_add_fild->setEnabled(false);
        }

        else{
            QGraphicsOpacityEffect *fadeEffect1 = new QGraphicsOpacityEffect(this);
            fadeEffect1->setOpacity(1);
            ui->Prerequisite_add_fild->setGraphicsEffect(fadeEffect1);


            QGraphicsOpacityEffect *fadeEffectt2 = new QGraphicsOpacityEffect(this);
            fadeEffectt2->setOpacity(1);
            ui->add_btn->setGraphicsEffect(fadeEffectt2);

            ui->add_btn->setEnabled(true);
            ui->Prerequisite_add_fild->setEnabled(true);
        }




        if(all_courses[crs_name].get_prerequisites().empty()){
            ui->prerequisites_table->hide();
            ui->no_prerequisites_lbl->show();
            ui->Prerequisites_txt->hide();

            QGraphicsOpacityEffect *fadeEffect = new QGraphicsOpacityEffect(this);
            fadeEffect->setOpacity(0.4);
            ui->Prerequisite_rem_fild->setGraphicsEffect(fadeEffect);

            QGraphicsOpacityEffect *fadeEffectt = new QGraphicsOpacityEffect(this);
            fadeEffectt->setOpacity(0.4);
            ui->remove_btn->setGraphicsEffect(fadeEffectt);

            ui->remove_btn->setEnabled(false);
            ui->Prerequisite_rem_fild->setEnabled(false);
        }
        else{
            ui->Prerequisites_txt->show();
            ui->no_prerequisites_lbl->hide();
            tagheez_prereq(ui->prerequisites_table,crs_name);
            QGraphicsOpacityEffect *fadeEffect = new QGraphicsOpacityEffect(this);
            fadeEffect->setOpacity(1);
            ui->Prerequisite_rem_fild->setGraphicsEffect(fadeEffect);

            QGraphicsOpacityEffect *fadeEffectt = new QGraphicsOpacityEffect(this);
            fadeEffectt->setOpacity(1);
            ui->remove_btn->setGraphicsEffect(fadeEffectt);


            ui->remove_btn->setEnabled(true);
            ui->Prerequisite_rem_fild->setEnabled(true);
        }

    }
    else {
        qDebug() << "Error: Invalid double-clicked index.";
    }
}


void MainWindow::on_Logoutuser_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->login_page);
}


void MainWindow::on_Logoutadmin_btn_clicked()
{
 ui->stackedWidget->setCurrentWidget(ui->login_page);
}


void MainWindow::on_all_courses_table_2_doubleClicked(const QModelIndex &index)
{
    if (index.isValid()) {
        int selectedRow = index.row();
        QModelIndex firstColumnIndex = ui->all_courses_table_2->model()->index(selectedRow, 0);
        QModelIndex secondColumnIndex = ui->all_courses_table_2->model()->index(selectedRow, 1);
        QModelIndex thirdColumnIndex = ui->all_courses_table_2->model()->index(selectedRow, 2);
        QModelIndex fourthColumnIndex = ui->all_courses_table_2->model()->index(selectedRow, 3);

        QVariant data = ui->all_courses_table_2->model()->data(firstColumnIndex);
        QString firstColumnValue = data.toString();
        string crs_name=firstColumnValue.toStdString();
        ui->crs_name_txt_3->setText(QString::fromStdString(crs_name));

        QVariant data2 = ui->all_courses_table_2->model()->data(secondColumnIndex);
        QString secondColumnValue = data2.toString();
        string credit_hrs=secondColumnValue.toStdString();
        ui->credit_Hours_txt_3->setText("Credit Hours: "+QString::fromStdString(credit_hrs));

        QVariant data3 = ui->all_courses_table_2->model()->data(thirdColumnIndex);
        QString thirdColumnValue = data3.toString();
        string instr_name=thirdColumnValue.toStdString();
        ui->instructor_txt_3->setText(QString::fromStdString(instr_name));

        QVariant data4 = ui->all_courses_table_2->model()->data(fourthColumnIndex);
        QString fourthColumnValue = data4.toString();
        string semes_no=fourthColumnValue.toStdString();
        ui->semester_txt_3->setText("Semester: "+QString::fromStdString(semes_no));


        ui->stackedWidget->setCurrentWidget(ui->view_pre_page);

        if(all_courses[crs_name].get_prerequisites().empty()){
            ui->prerequisites_table_3->hide();
            ui->no_prerequisites_lbl_3->show();
            ui->Prerequisites_txt_3->hide();
        }
        else{
            ui->Prerequisites_txt_3->show();
            ui->no_prerequisites_lbl_3->hide();
            tagheez_prereq(ui->prerequisites_table_3,crs_name);
        }

    }
    else {
        qDebug() << "Error: Invalid double-clicked index.";
    }
}


void MainWindow::on_confirm_btn_clicked()
{
    string email =ui->email_fild->text().toStdString();
    string newpass=ui->new_pass_fild->text().toStdString();

    if(newpass.size()<8){
        ui->errorsizepass_txt->setText("Password must be at least 8 characters");
        ui->errorsizepass_txt->setStyleSheet("background:transparent;"
                                     "color:red;");
        ui->errorsizepass_txt->show();
    }
    else{
        ui->errorsizepass_txt->setText("Your Password has been changed");
        ui->errorsizepass_txt->setStyleSheet("background:transparent;"
                                     "color:green;");
        if(admin1){
            all_admins[email].set_password(newpass);
            QGraphicsOpacityEffect *fadeEffect1 = new QGraphicsOpacityEffect(this);
            fadeEffect1->setOpacity(0.4);
            ui->new_pass_fild->setGraphicsEffect(fadeEffect1);

            QGraphicsOpacityEffect *fadeEffectt2 = new QGraphicsOpacityEffect(this);
            fadeEffectt2->setOpacity(0.4);
            ui->confirm_btn->setGraphicsEffect(fadeEffectt2);

            ui->new_pass_fild->setEnabled(false);
            ui->confirm_btn->setEnabled(false);
        }
        else if(student){
            for(auto &i:all_students){
                if(i.second.get_email()==email){
                    i.second.set_password(newpass);
                    break;
                }
            }
            QGraphicsOpacityEffect *fadeEffect3 = new QGraphicsOpacityEffect(this);
            fadeEffect3->setOpacity(0.4);
            ui->new_pass_fild->setGraphicsEffect(fadeEffect3);

            QGraphicsOpacityEffect *fadeEffectt4 = new QGraphicsOpacityEffect(this);
            fadeEffectt4->setOpacity(0.4);
            ui->confirm_btn->setGraphicsEffect(fadeEffectt4);


            ui->new_pass_fild->setEnabled(false);
            ui->confirm_btn->setEnabled(false);
        }
        ui->errorsizepass_txt->show();
    }
}


void MainWindow::on_hidden_pass_btn_clicked()
{
    cntr2++;
    if(cntr2%2==0){
        QPixmap pix_show(":/images/images/eye.png");
        ui->new_pass_fild->setEchoMode(QLineEdit::Normal);
        ui->hidded_pic->setPixmap(pix_show.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
    else{
        QPixmap pix_hid(":/images/images/hidden.png");
        ui->new_pass_fild->setEchoMode(QLineEdit::Password);
        ui->hidded_pic->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
}


void MainWindow::on_hidden_pass_btn_2_clicked()
{
    cntr++;
    if(cntr%2==0){
        QPixmap pix_show(":/images/images/eye.png");
        ui->pass_fild->setEchoMode(QLineEdit::Normal);
        ui->hidded_pic_2->setPixmap(pix_show.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
    else{
         QPixmap pix_hid(":/images/images/hidden.png");
         ui->pass_fild->setEchoMode(QLineEdit::Password);
         ui->hidded_pic_2->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
}


void MainWindow::on_hidden_pass_btn_3_clicked()
{
    cntr3++;
    if(cntr3%2==0){
        QPixmap pix_show(":/images/images/eye.png");
        ui->pass_fild_2->setEchoMode(QLineEdit::Normal);
        ui->hidded_pic_3->setPixmap(pix_show.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
    else{
        QPixmap pix_hid(":/images/images/hidden.png");
        ui->pass_fild_2->setEchoMode(QLineEdit::Password);
        ui->hidded_pic_3->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
}


void MainWindow::on_hidden_pass_btn_4_clicked()
{
    cntr4++;
    if(cntr4%2==0){
        QPixmap pix_show(":/images/images/eye.png");
        ui->pass_fild_3->setEchoMode(QLineEdit::Normal);
        ui->hidded_pic_4->setPixmap(pix_show.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
    else{
        QPixmap pix_hid(":/images/images/hidden.png");
        ui->pass_fild_3->setEchoMode(QLineEdit::Password);
        ui->hidded_pic_4->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
}


void MainWindow::on_Register_btn_clicked()
{
    string email=ui->email_fild_2->text().toStdString();
    string pass=ui->pass_fild_2->text().toStdString();
    string fname=ui->Fir_name_fild->text().toStdString();
    string lname=ui->las_name_fild->text().toStdString();
    string id=ui->ID_fild->text().toStdString();
    bool found1=true;
    bool found2=true;
    bool found3=true;
    bool found4=true;
    bool found5=true;

    if(email.empty() or email.size()<=15){
        found1=false;
        ui->err_email->setText("Invalid Email");
    }

    else if(email.substr(email.size()-15)!="@cis.asu.edu.eg"){
        found1=false;
        ui->err_email->setText("Email must contain ""@cis.asu.edu.eg""");
    }
    else{
        if(all_students.find(email)!=all_students.end()){
            found1=false;
            ui->err_email->setText("Email is already exist");
        }
    }
    if(pass.size()<8){
        found2=false;
    }

    if(fname.empty()){
        found3=false;
    }

    if(lname.empty()){
        found4=false;
    }

    if(id.empty()){
        found5=false;
        ui->err_id->setText("Invalid ID");
    }
    else{
        for(auto &i:all_students){
            if(i.second.get_id()==id){
                found5=false;
                ui->err_id->setText("ID is already exist");
                break;
            }
        }
    }

    if(!found5){
        ui->err_id->show();
    }
    else{
        ui->err_id->hide();
    }



    if(!found4){
        ui->err_lna->show();
    }
    else{
        ui->err_lna->hide();
    }



    if(!found3){
        ui->err_fna->show();
    }
    else{
        ui->err_fna->hide();
    }


    if(!found2){
        ui->err_pass->show();
    }
    else{
        ui->err_pass->hide();
    }



    if(!found1){
        ui->err_email->show();
    }
    else{
        ui->err_email->hide();
    }




    if(found1 and found2 and found3 and found4 and found5){
        user *h=new user();
        h->sign_Up(id,fname,lname,email,pass);
        all_students[email]=*h;
        curr_student_email=email;
        ui->email_fild_2->clear();
        ui->pass_fild_2->clear();
        ui->Fir_name_fild->clear();
        ui->las_name_fild->clear();
        ui->ID_fild->clear();
        ui->stackedWidget->setCurrentWidget(ui->first_user_page);
        ui->Hellouser_txt->setText("Hello "+QString::fromStdString(fname));
        if(all_courses.empty()){
            ui->no_courses_lbl_2->show();
            ui->all_courses_table_2->hide();
        }
        else{
            ui->no_courses_lbl_2->hide();
            tagheez_allcourses(ui->all_courses_table_2);
        }
        QPixmap pix_hid(":/images/images/hidden.png");
        ui->pass_fild_2->setEchoMode(QLineEdit::Password);
        ui->hidded_pic_3->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }

}


void MainWindow::on_Print_report_btn_clicked()
{
    if(all_students[curr_student_email].get_registered_courses().size()>0){
        all_students[curr_student_email].make_report();
    }
    else{
        QMessageBox::information(nullptr, "Error", "You don't have any registered courses");
    }
}


void MainWindow::on_Manage_grad_btn_clicked()
{
    all_admins[curr_admin_email].manage_grades();
}


void MainWindow::on_Add_course_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Add_course_page);
}


void MainWindow::on_back_btn_crs_clicked()
{
    ui->course_name_fild->clear();
    ui->Credit_hrs_fild->clear();
    ui->Instruc_fild->clear();
    ui->Semester_fild->clear();
    ui->err_instruc->hide();
    ui->err_semester->hide();
    ui->err_credit_hrs->hide();
    ui->err_crs_name->hide();
    ui->succ_txt->hide();
    ui->stackedWidget->setCurrentWidget(ui->first_admin_page);
    if(all_courses.empty()){
        ui->all_courses_table->hide();
        ui->no_courses_lbl->show();
    }
    else{
        ui->no_courses_lbl->hide();
        tagheez_allcourses(ui->all_courses_table);
    }
}


void MainWindow::on_Add_crs_btn_clicked()
{
    string course_name=ui->course_name_fild->text().toStdString();
    string credit=ui->Credit_hrs_fild->text().toStdString();
    string instructor=ui->Instruc_fild->text().toStdString();
    string semester=ui->Semester_fild->text().toStdString();
    bool found1=true;
    bool found2=true;
    bool found3=true;
    bool found4=true;
    if(course_name.empty()){
        found1=false;
        ui->err_crs_name->setText("Invalid Course Name");
    }
    else if(all_courses.find(course_name)!=all_courses.end()){
        found1=false;
        ui->err_crs_name->setText("This Course already exist");
    }
    if(credit.empty()){
        found2=false;
    }
    if(instructor.empty()){
        found3=false;
    }
    if(semester.empty()){
        found4=false;
    }


    if(!found1){
        ui->err_crs_name->show();
    }
    else{
        ui->err_crs_name->hide();
    }

    if(!found2){
        ui->err_credit_hrs->show();
    }
    else{
        ui->err_credit_hrs->hide();
    }

    if(!found3){
        ui->err_instruc->show();
    }
    else{
        ui->err_instruc->hide();
    }

    if(!found4){
        ui->err_semester->show();
    }
    else{
        ui->err_semester->hide();
    }

    if(found1 and found2 and found3 and found4){
        all_admins[curr_admin_email].add_course(course_name,QString::fromStdString(credit).toInt(),instructor,QString::fromStdString(semester).toInt());
        ui->succ_txt->show();
        QTimer::singleShot(2000, ui->succ_txt, &QLabel::hide);
        ui->Credit_hrs_fild->clear();
        ui->course_name_fild->clear();
        ui->Instruc_fild->clear();
        ui->Semester_fild->clear();
    }
}


void MainWindow::on_Add_admin_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Add_admin_page);
}


void MainWindow::on_back_btn_adm_clicked()
{
    ui->email_fild_3->clear();
    ui->pass_fild_3->clear();
    ui->Fir_name_fild_3->clear();
    ui->las_name_fild_3->clear();
    ui->ID_fild_3->clear();
    ui->err_email_3->hide();
    ui->err_pass_3->hide();
    ui->err_fna_3->hide();
    ui->err_lna_3->hide();
    ui->err_id_3->hide();
    ui->succ_adm_txt->hide();
    QPixmap pix_hid(":/images/images/hidden.png");
    ui->pass_fild_3->setEchoMode(QLineEdit::Password);
    ui->hidded_pic_4->setPixmap(pix_hid.scaled(35,35,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->stackedWidget->setCurrentWidget(ui->first_admin_page);
}


void MainWindow::on_Add_adm_btn_clicked()
{
    string email=ui->email_fild_3->text().toStdString();
    string pass=ui->pass_fild_3->text().toStdString();
    string fname=ui->Fir_name_fild_3->text().toStdString();
    string lname=ui->las_name_fild_3->text().toStdString();
    string id=ui->ID_fild_3->text().toStdString();
    bool found1=true;
    bool found2=true;
    bool found3=true;
    bool found4=true;
    bool found5=true;

    if(email.empty() or email.size()<=4){
        found1=false;
        ui->err_email_3->setText("Invalid Email");
    }

    else if(email.substr(email.size()-10)!="@gmail.com"){
        found1=false;
        ui->err_email_3->setText("Email must contain "".com""");
    }
    else{
        if(all_admins.find(email)!=all_admins.end()){
            found1=false;
            ui->err_email_3->setText("Email is already exist");
        }
    }
    if(pass.size()<8){
        found2=false;
    }

    if(fname.empty()){
        found3=false;
    }

    if(lname.empty()){
        found4=false;
    }

    if(id.empty()){
        found5=false;
        ui->err_id_3->setText("Invalid ID");
    }
    else{
        for(auto &i:all_admins){
            if(i.second.get_id()==id){
                found5=false;
                ui->err_id_3->setText("ID is already exist");
                break;
            }
        }
    }

    if(!found5){
        ui->err_id_3->show();
    }
    else{
        ui->err_id_3->hide();
    }



    if(!found4){
        ui->err_lna_3->show();
    }
    else{
        ui->err_lna_3->hide();
    }



    if(!found3){
        ui->err_fna_3->show();
    }
    else{
        ui->err_fna_3->hide();
    }


    if(!found2){
        ui->err_pass_3->show();
    }
    else{
        ui->err_pass_3->hide();
    }



    if(!found1){
        ui->err_email_3->show();
    }
    else{
        ui->err_email_3->hide();
    }




    if(found1 and found2 and found3 and found4 and found5){
        all_admins[curr_admin_email].add_admin(pass,fname,lname,email,id);

        ui->succ_adm_txt->show();
        QTimer::singleShot(2000, ui->succ_adm_txt, &QLabel::hide);

        ui->email_fild_3->clear();
        ui->pass_fild_3->clear();
        ui->Fir_name_fild_3->clear();
        ui->las_name_fild_3->clear();
        ui->ID_fild_3->clear();
    }

}


void MainWindow::on_remove_crs_btn_clicked()
{
    ui->Prerequisite_add_fild->clear();
    ui->Prerequisite_rem_fild->clear();
    ui->no_prerequisites_lbl->hide();
    ui->err_prereq_add_lbl->hide();
    ui->err_prereq_remo_lbl->hide();
    ui->succ_remopre_txt->hide();
    ui->succ_addpre_txt->hide();
    string course_name=ui->crs_name_txt->text().toStdString();
    all_admins[curr_admin_email].remove_course(course_name);
    ui->stackedWidget->setCurrentWidget(ui->first_admin_page);
    if(all_courses.empty()){
        ui->all_courses_table->hide();
        ui->no_courses_lbl->show();
    }
    else{
        ui->no_courses_lbl->hide();
        tagheez_allcourses(ui->all_courses_table);
    }
}


void MainWindow::on_back_btn_upcrs_clicked()
{
    ui->Prerequisite_add_fild->clear();
    ui->Prerequisite_rem_fild->clear();
    ui->no_prerequisites_lbl->hide();
    ui->err_prereq_add_lbl->hide();
    ui->err_prereq_remo_lbl->hide();
    ui->succ_remopre_txt->hide();
    ui->succ_addpre_txt->hide();
    ui->stackedWidget->setCurrentWidget(ui->first_admin_page);
    if(all_courses.empty()){
        ui->all_courses_table->hide();
        ui->no_courses_lbl->show();
    }
    else{
        ui->no_courses_lbl->hide();
        tagheez_allcourses(ui->all_courses_table);
    }
}


void MainWindow::on_add_btn_clicked()
{
    string prereq_choice=ui->Prerequisite_add_fild->text().toStdString();
    string crs_name=ui->crs_name_txt->text().toStdString();



    if(all_courses.find(prereq_choice)==all_courses.end()){
        ui->err_prereq_add_lbl->setText("Invalid Prerequisite Name");
        ui->err_prereq_add_lbl->show();
    }
    else if(all_courses[prereq_choice].get_semester()>=all_courses[crs_name].get_semester()){
        ui->err_prereq_add_lbl->setText("Invalid Prerequisite Name");
        ui->err_prereq_add_lbl->show();
    }
    else if(all_courses.find(prereq_choice)!=all_courses.end() and crs_name!=prereq_choice ){
        bool found=all_admins[curr_admin_email].add_prerequisite(prereq_choice,crs_name);
        if(!found){
            ui->err_prereq_add_lbl->setText("This Prerequisite is already exist");
            ui->err_prereq_add_lbl->show();
        }
        else{
            ui->err_prereq_add_lbl->hide();
            ui->succ_addpre_txt->show();
            ui->Prerequisite_add_fild->clear();
            QTimer::singleShot(2000, ui->succ_addpre_txt, &QLabel::hide);
            tagheez_prereq(ui->prerequisites_table,crs_name);


            ui->prerequisites_table->show();
            ui->no_prerequisites_lbl->hide();
            ui->Prerequisites_txt->show();

            QGraphicsOpacityEffect *fadeEffect = new QGraphicsOpacityEffect(this);
            fadeEffect->setOpacity(1);
            ui->Prerequisite_rem_fild->setGraphicsEffect(fadeEffect);

            QGraphicsOpacityEffect *fadeEffectt = new QGraphicsOpacityEffect(this);
            fadeEffectt->setOpacity(1);
            ui->remove_btn->setGraphicsEffect(fadeEffectt);

            ui->remove_btn->setEnabled(true);
            ui->Prerequisite_rem_fild->setEnabled(true);
        }
    }
    else{
        ui->err_prereq_add_lbl->setText("Invalid Prerequisite Name");
        ui->err_prereq_add_lbl->show();
    }
}


void MainWindow::on_remove_btn_clicked()
{
    string prereq_remo=ui->Prerequisite_rem_fild->text().toStdString();
    string crs_name=ui->crs_name_txt->text().toStdString();
    if(all_courses.find(prereq_remo)==all_courses.end()){
        ui->err_prereq_remo_lbl->setText("Invalid Prerequisite Name");
        ui->err_prereq_remo_lbl->show();
    }
    else if(all_courses[crs_name].get_prerequisites().empty()){
        ui->err_prereq_remo_lbl->setText("There is no Prerequisite to be removed");
        ui->err_prereq_remo_lbl->show();
    }
    else{
        bool found=all_admins[curr_admin_email].remove_prerequisite(prereq_remo,crs_name);
        if(!found){
            ui->err_prereq_remo_lbl->setText("This Prerequisite is not found");
            ui->err_prereq_remo_lbl->show();
        }
        else{
            ui->err_prereq_remo_lbl->hide();
            ui->succ_remopre_txt->show();
            ui->Prerequisite_rem_fild->clear();
            QTimer::singleShot(2000, ui->succ_remopre_txt, &QLabel::hide);
            tagheez_prereq(ui->prerequisites_table,crs_name);
            if(all_courses[crs_name].get_prerequisites().empty()){
                ui->prerequisites_table->hide();
                ui->no_prerequisites_lbl->show();
                ui->Prerequisites_txt->hide();

                QGraphicsOpacityEffect *fadeEffect = new QGraphicsOpacityEffect(this);
                fadeEffect->setOpacity(0.4);
                ui->Prerequisite_rem_fild->setGraphicsEffect(fadeEffect);

                QGraphicsOpacityEffect *fadeEffectt = new QGraphicsOpacityEffect(this);
                fadeEffectt->setOpacity(0.4);
                ui->remove_btn->setGraphicsEffect(fadeEffectt);

                ui->remove_btn->setEnabled(false);
                ui->Prerequisite_rem_fild->setEnabled(false);
            }
        }
    }
}


void MainWindow::on_Prerequisite_add_fild_cursorPositionChanged(int arg1, int arg2)
{
    ui->err_prereq_add_lbl->hide();
}


void MainWindow::on_Prerequisite_rem_fild_cursorPositionChanged(int arg1, int arg2)
{
    ui->err_prereq_remo_lbl->hide();
}


void MainWindow::on_back_btn_mycrs_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->first_user_page);
    if(all_courses.empty()){
        ui->no_courses_lbl_2->show();
        ui->all_courses_table_2->hide();
    }
    else{
        ui->no_courses_lbl_2->hide();
        tagheez_allcourses(ui->all_courses_table_2);
    }

}


void MainWindow::on_Mycourses_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Mycourses_page);
    if(all_students[curr_student_email].get_registered_courses().empty()){
        ui->no_mycourses_lbl->show();
        ui->My_courses_table->hide();
    }
    else{
        ui->no_mycourses_lbl->hide();
        tagheez_mycourses(ui->My_courses_table);
    }
}


void MainWindow::on_back_btn_avlcrs_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->first_user_page);
    if(all_courses.empty()){
        ui->no_courses_lbl_2->show();
        ui->all_courses_table_2->hide();
    }
    else{
        ui->no_courses_lbl_2->hide();
        tagheez_allcourses(ui->all_courses_table_2);
    }
}


void MainWindow::on_Register_course_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Available_page);
    int size=tagheez_avlcourses(ui->available_courses_table);
    if(size==0){
        ui->no_avlcourses_lbl->show();
        ui->available_courses_table->hide();
    }
    else{
        ui->no_avlcourses_lbl->hide();
    }
}


void MainWindow::on_available_courses_table_doubleClicked(const QModelIndex &index)
{
    if (index.isValid()) {
        int selectedRow = index.row();
        QModelIndex firstColumnIndex = ui->available_courses_table->model()->index(selectedRow, 0);
        QModelIndex secondColumnIndex = ui->available_courses_table->model()->index(selectedRow, 1);
        QModelIndex thirdColumnIndex = ui->available_courses_table->model()->index(selectedRow, 2);
        QModelIndex fourthColumnIndex = ui->available_courses_table->model()->index(selectedRow, 3);


        QVariant data = ui->available_courses_table->model()->data(firstColumnIndex);
        QString firstColumnValue = data.toString();
        string crs_name=firstColumnValue.toStdString();

        ui->crs_name_txt_2->setText(QString::fromStdString(crs_name));

        QVariant data1 = ui->available_courses_table->model()->data(secondColumnIndex);
        QString secondColumnValue = data1.toString();
        string credit_hrs=secondColumnValue.toStdString();

        ui->credit_Hours_txt_2->setText("Credit Hours: "+QString::fromStdString(credit_hrs));

        QVariant data2 = ui->available_courses_table->model()->data(thirdColumnIndex);
        QString thirdColumnValue = data2.toString();
        string instr_name=thirdColumnValue.toStdString();

        ui->instructor_txt_2->setText(QString::fromStdString(instr_name));

        QVariant data3 = ui->available_courses_table->model()->data(fourthColumnIndex);
        QString fourthColumnValue = data3.toString();
        string semes_no=fourthColumnValue.toStdString();

        ui->semester_txt_2->setText("Semester: "+QString::fromStdString(semes_no));


        ui->stackedWidget->setCurrentWidget(ui->register_crs_page);

        if(all_courses[crs_name].get_prerequisites().empty()){
            ui->prerequisites_table_2->hide();
            ui->no_prerequisites_lbl_2->show();
            ui->Prerequisites_txt_2->hide();
        }
        else{
            ui->Prerequisites_txt_2->show();
            ui->no_prerequisites_lbl_2->hide();
            tagheez_prereq(ui->prerequisites_table_2,crs_name);
        }

    }
    else {
        qDebug() << "Error: Invalid double-clicked index.";
    }
}


void MainWindow::on_back_btn_regiscrs_clicked()
{
    ui->no_prerequisites_lbl_2->hide();
    ui->succ_regiscrs_txt->hide();

    QGraphicsOpacityEffect *fadeEffect = new QGraphicsOpacityEffect(this);
    fadeEffect->setOpacity(1);
    ui->regiscrs_btn->setGraphicsEffect(fadeEffect);
    ui->regiscrs_btn->setEnabled(true);
    ui->regiscrs_btn->show();


    ui->stackedWidget->setCurrentWidget(ui->Available_page);
    int size=tagheez_avlcourses(ui->available_courses_table);
    if(size==0){
        ui->no_avlcourses_lbl->show();
        ui->available_courses_table->hide();
    }
    else{
        ui->no_avlcourses_lbl->hide();
    }
}


void MainWindow::on_regiscrs_btn_clicked()
{
    string course_name=ui->crs_name_txt_2->text().toStdString();
    string msg="Are you sure you want to register "+course_name+" course?";
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Action", QString::fromStdString(msg),
                                  QMessageBox::Yes | QMessageBox::No);

    if(reply){
        all_students[curr_student_email].register_course(course_name);
        ui->succ_regiscrs_txt->show();
        QTimer::singleShot(2000, ui->succ_regiscrs_txt, &QLabel::hide);
        QGraphicsOpacityEffect *fadeEffect = new QGraphicsOpacityEffect(this);
        fadeEffect->setOpacity(0.4);
        ui->regiscrs_btn->setGraphicsEffect(fadeEffect);
        ui->regiscrs_btn->setEnabled(false);
    }
}


void MainWindow::on_back_btn_viewgrd_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->first_user_page);
    ui->grades_table->hide();
    ui->err_sems->hide();
    ui->no_grades_lbl->show();
    ui->semester_selector->clear();
    if(all_courses.empty()){
        ui->no_courses_lbl_2->show();
        ui->all_courses_table_2->hide();
    }
    else{
        ui->no_courses_lbl_2->hide();
        tagheez_allcourses(ui->all_courses_table_2);
    }
}


void MainWindow::on_View_grad_btn_clicked()
{
    int size=all_students[curr_student_email].get_semester_courses().size();
    if(size>0){
        ui->stackedWidget->setCurrentWidget(ui->view_grades_page);
        for(auto &i : all_students[curr_student_email].get_semester_courses()){
            ui->semester_selector->addItem(QString("Semester %1").arg(i.first));
        }
        float gpa=all_students[curr_student_email].calculate_Total_GPA();
        ostringstream stream;
        stream << fixed << setprecision(3) << gpa;
        string s="Overall GPA : "+stream.str()+" (";
        string xc=user::classify_gpa(gpa);
        s+=xc+")";
        ui->overall_gpa_txt->setText(QString::fromStdString(s));
    }
    else{
        QMessageBox::information(nullptr, "Error", "You don't have any registered courses");
    }
}


void MainWindow::on_display_grades_btn_clicked()
{
    if(ui->semester_selector->currentIndex()!=-1){
        string curr_text=ui->semester_selector->currentText().toStdString();
        int chosen_sems=curr_text[curr_text.size()-1]-'0';
        if(!all_students[curr_student_email].get_semester_courses().at(chosen_sems).empty()){
            ui->err_sems->hide();
            ui->grades_table->show();
            tagheez_grade(ui->grades_table,chosen_sems);
            ui->no_grades_lbl->hide();
            float gpa=all_students[curr_student_email].calculate_Semester_GPA(all_students[curr_student_email].get_semester_courses().at(chosen_sems));
            ostringstream stream;
            stream << fixed << setprecision(3) << gpa;
            string s="Overall GPA : "+stream.str()+" (";
            string xc=user::classify_gpa(gpa);
            s+=xc+")";
            ui->overall_gpa_txt->setText(QString::fromStdString(s));
        }
        else{
            ui->no_grades_lbl->show();
            ui->grades_table->hide();
        }
    }
    else{
        ui->err_sems->show();
        ui->no_grades_lbl->show();
        ui->grades_table->hide();
    }
}


void MainWindow::on_back_btn_viewpre_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->first_user_page);
}

