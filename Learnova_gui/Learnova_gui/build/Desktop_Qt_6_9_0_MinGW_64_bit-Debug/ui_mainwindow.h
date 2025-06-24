/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *login_page;
    QLineEdit *email_fild;
    QPushButton *forgpas_btn;
    QLabel *Login;
    QLabel *admin_lbl;
    QLabel *Learnova_text;
    QPushButton *login_btn;
    QPushButton *registerswitch_btn;
    QFrame *frame;
    QPushButton *loginswitch_btn;
    QLineEdit *pass_fild;
    QLabel *stud_lbl;
    QPushButton *stud_btn;
    QPushButton *admin_btn;
    QLabel *forgpas_txt;
    QLabel *Register;
    QLabel *error_lbl;
    QLabel *hidded_pic_2;
    QPushButton *hidden_pass_btn_2;
    QWidget *register_page;
    QLineEdit *pass_fild_2;
    QLabel *Learnova_text_2;
    QPushButton *Register_btn;
    QLabel *Register_2;
    QPushButton *register_switch;
    QFrame *frame_2;
    QLineEdit *email_fild_2;
    QPushButton *loginswitch_btn_2;
    QLabel *Login_2;
    QLineEdit *Fir_name_fild;
    QLineEdit *las_name_fild;
    QLineEdit *ID_fild;
    QPushButton *hidden_pass_btn_3;
    QLabel *hidded_pic_3;
    QLabel *err_email;
    QLabel *err_pass;
    QLabel *err_fna;
    QLabel *err_lna;
    QLabel *err_id;
    QWidget *forgot_page;
    QLabel *Learnova_text_3;
    QLabel *msg_txt;
    QLabel *back_pic;
    QPushButton *back_btn;
    QLineEdit *verifi_fild;
    QPushButton *check_btn;
    QLabel *error_txt;
    QPushButton *confirm_btn;
    QLineEdit *new_pass_fild;
    QLabel *errorsizepass_txt;
    QPushButton *hidden_pass_btn;
    QLabel *hidded_pic;
    QWidget *first_user_page;
    QPushButton *Logoutuser_btn;
    QPushButton *View_grad_btn;
    QPushButton *Mycourses_btn;
    QLabel *Hellouser_txt;
    QLabel *no_courses_lbl_2;
    QPushButton *Register_course_btn;
    QTableView *all_courses_table_2;
    QPushButton *Print_report_btn;
    QWidget *Mycourses_page;
    QLabel *no_mycourses_lbl;
    QTableView *My_courses_table;
    QLabel *Mycourses_txt;
    QLabel *back_pic_mycrs;
    QPushButton *back_btn_mycrs;
    QWidget *Available_page;
    QLabel *availablecrs_txt;
    QLabel *back_pic_avlcrs;
    QLabel *no_avlcourses_lbl;
    QPushButton *back_btn_avlcrs;
    QTableView *available_courses_table;
    QWidget *register_crs_page;
    QLabel *instructor_txt_2;
    QLabel *credit_Hours_txt_2;
    QLabel *semester_txt_2;
    QPushButton *back_btn_regiscrs;
    QLabel *no_prerequisites_lbl_2;
    QTableView *prerequisites_table_2;
    QLabel *Prerequisites_txt_2;
    QLabel *crs_name_txt_2;
    QLabel *back_pic_regiscrs;
    QPushButton *regiscrs_btn;
    QLabel *succ_regiscrs_txt;
    QWidget *view_grades_page;
    QPushButton *back_btn_viewgrd;
    QLabel *back_pic_viewgrd;
    QLabel *overall_gpa_txt;
    QTableView *grades_table;
    QLabel *no_grades_lbl;
    QPushButton *display_grades_btn;
    QComboBox *semester_selector;
    QLabel *err_sems;
    QWidget *first_admin_page;
    QPushButton *Logoutadmin_btn;
    QLabel *Hello_txt;
    QPushButton *Add_course_btn;
    QPushButton *Add_admin_btn;
    QPushButton *Manage_grad_btn;
    QLabel *no_courses_lbl;
    QTableView *all_courses_table;
    QWidget *Add_admin_page;
    QLabel *Learnova_text_5;
    QLabel *Add_admin_txt;
    QLabel *back_pic_adm;
    QPushButton *back_btn_adm;
    QLineEdit *las_name_fild_3;
    QLabel *err_lna_3;
    QLineEdit *pass_fild_3;
    QLineEdit *ID_fild_3;
    QLabel *err_email_3;
    QLabel *err_pass_3;
    QLabel *err_id_3;
    QLabel *err_fna_3;
    QLineEdit *Fir_name_fild_3;
    QLineEdit *email_fild_3;
    QPushButton *Add_adm_btn;
    QPushButton *hidden_pass_btn_4;
    QLabel *hidded_pic_4;
    QLabel *succ_adm_txt;
    QWidget *Add_course_page;
    QLabel *Learnova_text_4;
    QLabel *Add_crs_txt;
    QLineEdit *Instruc_fild;
    QLineEdit *Semester_fild;
    QLineEdit *Credit_hrs_fild;
    QLineEdit *course_name_fild;
    QPushButton *Add_crs_btn;
    QPushButton *back_btn_crs;
    QLabel *back_pic_crs;
    QLabel *err_semester;
    QLabel *err_crs_name;
    QLabel *err_credit_hrs;
    QLabel *err_instruc;
    QLabel *succ_txt;
    QWidget *update_prereq;
    QPushButton *back_btn_upcrs;
    QLabel *back_pic_upcrs;
    QLabel *crs_name_txt;
    QLabel *instructor_txt;
    QLabel *credit_Hours_txt;
    QLabel *semester_txt;
    QLabel *Prerequisites_txt;
    QTableView *prerequisites_table;
    QLabel *no_prerequisites_lbl;
    QLineEdit *Prerequisite_add_fild;
    QLineEdit *Prerequisite_rem_fild;
    QPushButton *add_btn;
    QPushButton *remove_btn;
    QPushButton *remove_crs_btn;
    QLabel *err_prereq_add_lbl;
    QLabel *succ_addpre_txt;
    QLabel *err_prereq_remo_lbl;
    QLabel *succ_remopre_txt;
    QWidget *view_pre_page;
    QLabel *instructor_txt_3;
    QLabel *no_prerequisites_lbl_3;
    QPushButton *back_btn_viewpre;
    QLabel *back_pic_viewpre;
    QLabel *Prerequisites_txt_3;
    QLabel *credit_Hours_txt_3;
    QTableView *prerequisites_table_3;
    QLabel *crs_name_txt_3;
    QLabel *semester_txt_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1535, 860);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1535, 860));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        login_page = new QWidget();
        login_page->setObjectName("login_page");
        login_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Desktop-1.png);"));
        email_fild = new QLineEdit(login_page);
        email_fild->setObjectName("email_fild");
        email_fild->setGeometry(QRect(550, 402, 400, 54));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(18);
        font1.setBold(false);
        email_fild->setFont(font1);
        email_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        email_fild->setFrame(true);
        email_fild->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        forgpas_btn = new QPushButton(login_page);
        forgpas_btn->setObjectName("forgpas_btn");
        forgpas_btn->setGeometry(QRect(600, 712, 271, 29));
        forgpas_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Login = new QLabel(login_page);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(393, 285, 191, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(41);
        font2.setBold(true);
        Login->setFont(font2);
        Login->setStyleSheet(QString::fromUtf8("color: rgb(0, 51, 102);\n"
"background:transparent"));
        admin_lbl = new QLabel(login_page);
        admin_lbl->setObjectName("admin_lbl");
        admin_lbl->setGeometry(QRect(580, 639, 101, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(20);
        font3.setBold(true);
        admin_lbl->setFont(font3);
        admin_lbl->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        Learnova_text = new QLabel(login_page);
        Learnova_text->setObjectName("Learnova_text");
        Learnova_text->setGeometry(QRect(560, 210, 491, 71));
        Learnova_text->setStyleSheet(QString::fromUtf8("color: rgb(69, 123, 157);\n"
"font: 700 53pt \"Arial\";\n"
"background:transparent"));
        login_btn = new QPushButton(login_page);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(580, 772, 325, 67));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(26);
        font4.setBold(true);
        login_btn->setFont(font4);
        login_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        login_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 30px;\n"
"color:white;"));
        registerswitch_btn = new QPushButton(login_page);
        registerswitch_btn->setObjectName("registerswitch_btn");
        registerswitch_btn->setGeometry(QRect(950, 300, 231, 71));
        registerswitch_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        registerswitch_btn->setMouseTracking(false);
        registerswitch_btn->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(login_page);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(390, 361, 155, 11));
        frame->setStyleSheet(QString::fromUtf8("border: 8px solid #003366;\n"
"background-color: transparent;\n"
"border-radius:5px;\n"
"\n"
"\n"
""));
        frame->setFrameShape(QFrame::Shape::HLine);
        frame->setFrameShadow(QFrame::Shadow::Sunken);
        loginswitch_btn = new QPushButton(login_page);
        loginswitch_btn->setObjectName("loginswitch_btn");
        loginswitch_btn->setGeometry(QRect(390, 292, 151, 71));
        loginswitch_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        loginswitch_btn->setMouseTracking(false);
        loginswitch_btn->setStyleSheet(QString::fromUtf8(""));
        pass_fild = new QLineEdit(login_page);
        pass_fild->setObjectName("pass_fild");
        pass_fild->setGeometry(QRect(550, 495, 400, 54));
        pass_fild->setFont(font1);
        pass_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        pass_fild->setFrame(true);
        pass_fild->setEchoMode(QLineEdit::EchoMode::Password);
        stud_lbl = new QLabel(login_page);
        stud_lbl->setObjectName("stud_lbl");
        stud_lbl->setGeometry(QRect(810, 639, 121, 31));
        stud_lbl->setFont(font3);
        stud_lbl->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#003366;"));
        stud_btn = new QPushButton(login_page);
        stud_btn->setObjectName("stud_btn");
        stud_btn->setGeometry(QRect(840, 590, 42, 42));
        stud_btn->setMinimumSize(QSize(42, 42));
        stud_btn->setMaximumSize(QSize(42, 42));
        stud_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        stud_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 21px;"));
        admin_btn = new QPushButton(login_page);
        admin_btn->setObjectName("admin_btn");
        admin_btn->setGeometry(QRect(600, 590, 42, 42));
        admin_btn->setMinimumSize(QSize(42, 42));
        admin_btn->setMaximumSize(QSize(42, 42));
        admin_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        admin_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius: 21px;"));
        forgpas_txt = new QLabel(login_page);
        forgpas_txt->setObjectName("forgpas_txt");
        forgpas_txt->setGeometry(QRect(600, 710, 291, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setUnderline(true);
        forgpas_txt->setFont(font5);
        forgpas_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#003366;"));
        forgpas_txt->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Register = new QLabel(login_page);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(960, 285, 281, 81));
        Register->setFont(font2);
        Register->setStyleSheet(QString::fromUtf8("color: rgb(69, 123, 157);\n"
"background:transparent;"));
        error_lbl = new QLabel(login_page);
        error_lbl->setObjectName("error_lbl");
        error_lbl->setGeometry(QRect(930, 796, 371, 20));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(error_lbl->sizePolicy().hasHeightForWidth());
        error_lbl->setSizePolicy(sizePolicy);
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial")});
        font6.setPointSize(17);
        font6.setBold(true);
        font6.setItalic(true);
        error_lbl->setFont(font6);
        error_lbl->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red\n"
""));
        hidded_pic_2 = new QLabel(login_page);
        hidded_pic_2->setObjectName("hidded_pic_2");
        hidded_pic_2->setGeometry(QRect(895, 504, 35, 35));
        hidded_pic_2->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        hidded_pic_2->setStyleSheet(QString::fromUtf8("background:transparent;"));
        hidden_pass_btn_2 = new QPushButton(login_page);
        hidden_pass_btn_2->setObjectName("hidden_pass_btn_2");
        hidden_pass_btn_2->setGeometry(QRect(895, 504, 35, 32));
        hidden_pass_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        hidden_pass_btn_2->setStyleSheet(QString::fromUtf8("background:transparent;"));
        stackedWidget->addWidget(login_page);
        forgpas_txt->raise();
        Register->raise();
        Login->raise();
        email_fild->raise();
        admin_lbl->raise();
        Learnova_text->raise();
        login_btn->raise();
        frame->raise();
        pass_fild->raise();
        stud_lbl->raise();
        admin_btn->raise();
        stud_btn->raise();
        loginswitch_btn->raise();
        registerswitch_btn->raise();
        forgpas_btn->raise();
        error_lbl->raise();
        hidded_pic_2->raise();
        hidden_pass_btn_2->raise();
        register_page = new QWidget();
        register_page->setObjectName("register_page");
        register_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Desktop-1.png);"));
        pass_fild_2 = new QLineEdit(register_page);
        pass_fild_2->setObjectName("pass_fild_2");
        pass_fild_2->setGeometry(QRect(550, 475, 400, 54));
        pass_fild_2->setFont(font1);
        pass_fild_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        pass_fild_2->setFrame(true);
        pass_fild_2->setEchoMode(QLineEdit::EchoMode::Password);
        Learnova_text_2 = new QLabel(register_page);
        Learnova_text_2->setObjectName("Learnova_text_2");
        Learnova_text_2->setGeometry(QRect(560, 210, 491, 71));
        Learnova_text_2->setStyleSheet(QString::fromUtf8("color: rgb(69, 123, 157);\n"
"font: 700 53pt \"Arial\";\n"
"background:transparent"));
        Register_btn = new QPushButton(register_page);
        Register_btn->setObjectName("Register_btn");
        Register_btn->setGeometry(QRect(580, 772, 325, 67));
        Register_btn->setFont(font4);
        Register_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Register_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 30px;\n"
"color:white;"));
        Register_2 = new QLabel(register_page);
        Register_2->setObjectName("Register_2");
        Register_2->setGeometry(QRect(960, 285, 281, 81));
        Register_2->setFont(font2);
        Register_2->setStyleSheet(QString::fromUtf8("color: #003366;\n"
"background:transparent;"));
        register_switch = new QPushButton(register_page);
        register_switch->setObjectName("register_switch");
        register_switch->setGeometry(QRect(950, 300, 231, 71));
        register_switch->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        register_switch->setMouseTracking(false);
        register_switch->setStyleSheet(QString::fromUtf8(""));
        frame_2 = new QFrame(register_page);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(950, 361, 230, 11));
        frame_2->setStyleSheet(QString::fromUtf8("border: 8px solid #003366;\n"
"background-color: transparent;\n"
"border-radius:5px;\n"
"\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::Shape::HLine);
        frame_2->setFrameShadow(QFrame::Shadow::Sunken);
        email_fild_2 = new QLineEdit(register_page);
        email_fild_2->setObjectName("email_fild_2");
        email_fild_2->setGeometry(QRect(550, 402, 400, 54));
        email_fild_2->setFont(font1);
        email_fild_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        email_fild_2->setFrame(true);
        email_fild_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        loginswitch_btn_2 = new QPushButton(register_page);
        loginswitch_btn_2->setObjectName("loginswitch_btn_2");
        loginswitch_btn_2->setGeometry(QRect(390, 292, 151, 71));
        loginswitch_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        loginswitch_btn_2->setMouseTracking(false);
        loginswitch_btn_2->setStyleSheet(QString::fromUtf8(""));
        Login_2 = new QLabel(register_page);
        Login_2->setObjectName("Login_2");
        Login_2->setGeometry(QRect(393, 285, 191, 81));
        Login_2->setFont(font2);
        Login_2->setStyleSheet(QString::fromUtf8("color:rgb(69, 123, 157);\n"
"background:transparent"));
        Fir_name_fild = new QLineEdit(register_page);
        Fir_name_fild->setObjectName("Fir_name_fild");
        Fir_name_fild->setGeometry(QRect(550, 548, 400, 54));
        Fir_name_fild->setFont(font1);
        Fir_name_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        Fir_name_fild->setFrame(true);
        Fir_name_fild->setEchoMode(QLineEdit::EchoMode::Normal);
        las_name_fild = new QLineEdit(register_page);
        las_name_fild->setObjectName("las_name_fild");
        las_name_fild->setGeometry(QRect(550, 621, 400, 54));
        las_name_fild->setFont(font1);
        las_name_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        las_name_fild->setFrame(true);
        las_name_fild->setEchoMode(QLineEdit::EchoMode::Normal);
        ID_fild = new QLineEdit(register_page);
        ID_fild->setObjectName("ID_fild");
        ID_fild->setGeometry(QRect(550, 696, 400, 54));
        ID_fild->setFont(font1);
        ID_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        ID_fild->setFrame(true);
        ID_fild->setEchoMode(QLineEdit::EchoMode::Normal);
        hidden_pass_btn_3 = new QPushButton(register_page);
        hidden_pass_btn_3->setObjectName("hidden_pass_btn_3");
        hidden_pass_btn_3->setGeometry(QRect(900, 485, 35, 32));
        hidden_pass_btn_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        hidden_pass_btn_3->setStyleSheet(QString::fromUtf8("background:transparent;"));
        hidded_pic_3 = new QLabel(register_page);
        hidded_pic_3->setObjectName("hidded_pic_3");
        hidded_pic_3->setGeometry(QRect(900, 484, 35, 35));
        hidded_pic_3->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        hidded_pic_3->setStyleSheet(QString::fromUtf8("background:transparent;"));
        err_email = new QLabel(register_page);
        err_email->setObjectName("err_email");
        err_email->setGeometry(QRect(960, 414, 541, 31));
        sizePolicy.setHeightForWidth(err_email->sizePolicy().hasHeightForWidth());
        err_email->setSizePolicy(sizePolicy);
        err_email->setFont(font6);
        err_email->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        err_pass = new QLabel(register_page);
        err_pass->setObjectName("err_pass");
        err_pass->setGeometry(QRect(960, 468, 561, 67));
        sizePolicy.setHeightForWidth(err_pass->sizePolicy().hasHeightForWidth());
        err_pass->setSizePolicy(sizePolicy);
        err_pass->setFont(font6);
        err_pass->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        err_fna = new QLabel(register_page);
        err_fna->setObjectName("err_fna");
        err_fna->setGeometry(QRect(960, 560, 541, 31));
        sizePolicy.setHeightForWidth(err_fna->sizePolicy().hasHeightForWidth());
        err_fna->setSizePolicy(sizePolicy);
        err_fna->setFont(font6);
        err_fna->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        err_lna = new QLabel(register_page);
        err_lna->setObjectName("err_lna");
        err_lna->setGeometry(QRect(960, 633, 541, 31));
        sizePolicy.setHeightForWidth(err_lna->sizePolicy().hasHeightForWidth());
        err_lna->setSizePolicy(sizePolicy);
        err_lna->setFont(font6);
        err_lna->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        err_id = new QLabel(register_page);
        err_id->setObjectName("err_id");
        err_id->setGeometry(QRect(960, 707, 541, 31));
        sizePolicy.setHeightForWidth(err_id->sizePolicy().hasHeightForWidth());
        err_id->setSizePolicy(sizePolicy);
        err_id->setFont(font6);
        err_id->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        stackedWidget->addWidget(register_page);
        pass_fild_2->raise();
        hidded_pic_3->raise();
        Login_2->raise();
        Learnova_text_2->raise();
        Register_btn->raise();
        Register_2->raise();
        register_switch->raise();
        frame_2->raise();
        email_fild_2->raise();
        loginswitch_btn_2->raise();
        Fir_name_fild->raise();
        las_name_fild->raise();
        ID_fild->raise();
        hidden_pass_btn_3->raise();
        err_email->raise();
        err_pass->raise();
        err_fna->raise();
        err_lna->raise();
        err_id->raise();
        forgot_page = new QWidget();
        forgot_page->setObjectName("forgot_page");
        forgot_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Desktop-2.png);"));
        Learnova_text_3 = new QLabel(forgot_page);
        Learnova_text_3->setObjectName("Learnova_text_3");
        Learnova_text_3->setGeometry(QRect(560, 210, 491, 71));
        Learnova_text_3->setStyleSheet(QString::fromUtf8("color: rgb(69, 123, 157);\n"
"font: 700 53pt \"Arial\";\n"
"background:transparent"));
        msg_txt = new QLabel(forgot_page);
        msg_txt->setObjectName("msg_txt");
        msg_txt->setEnabled(true);
        msg_txt->setGeometry(QRect(300, 352, 1161, 41));
        sizePolicy.setHeightForWidth(msg_txt->sizePolicy().hasHeightForWidth());
        msg_txt->setSizePolicy(sizePolicy);
        msg_txt->setFont(font3);
        msg_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#003366;"));
        msg_txt->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        back_pic = new QLabel(forgot_page);
        back_pic->setObjectName("back_pic");
        back_pic->setGeometry(QRect(200, 190, 81, 81));
        back_pic->setStyleSheet(QString::fromUtf8("background:transparent;"));
        back_btn = new QPushButton(forgot_page);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(210, 190, 81, 81));
        back_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back_btn->setStyleSheet(QString::fromUtf8("background:transparent;"));
        verifi_fild = new QLineEdit(forgot_page);
        verifi_fild->setObjectName("verifi_fild");
        verifi_fild->setGeometry(QRect(587, 433, 341, 61));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial")});
        font7.setPointSize(18);
        font7.setBold(true);
        verifi_fild->setFont(font7);
        verifi_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        verifi_fild->setFrame(true);
        verifi_fild->setAlignment(Qt::AlignmentFlag::AlignCenter);
        check_btn = new QPushButton(forgot_page);
        check_btn->setObjectName("check_btn");
        check_btn->setGeometry(QRect(610, 530, 281, 67));
        check_btn->setFont(font4);
        check_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        check_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 30px;\n"
"color:white;"));
        error_txt = new QLabel(forgot_page);
        error_txt->setObjectName("error_txt");
        error_txt->setGeometry(QRect(910, 530, 401, 67));
        sizePolicy.setHeightForWidth(error_txt->sizePolicy().hasHeightForWidth());
        error_txt->setSizePolicy(sizePolicy);
        error_txt->setFont(font6);
        error_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        confirm_btn = new QPushButton(forgot_page);
        confirm_btn->setObjectName("confirm_btn");
        confirm_btn->setGeometry(QRect(590, 770, 321, 67));
        confirm_btn->setFont(font4);
        confirm_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        confirm_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 30px;\n"
"color:white;"));
        new_pass_fild = new QLineEdit(forgot_page);
        new_pass_fild->setObjectName("new_pass_fild");
        new_pass_fild->setGeometry(QRect(560, 690, 400, 61));
        new_pass_fild->setFont(font1);
        new_pass_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        new_pass_fild->setFrame(true);
        new_pass_fild->setEchoMode(QLineEdit::EchoMode::Password);
        errorsizepass_txt = new QLabel(forgot_page);
        errorsizepass_txt->setObjectName("errorsizepass_txt");
        errorsizepass_txt->setGeometry(QRect(970, 686, 561, 67));
        sizePolicy.setHeightForWidth(errorsizepass_txt->sizePolicy().hasHeightForWidth());
        errorsizepass_txt->setSizePolicy(sizePolicy);
        errorsizepass_txt->setFont(font6);
        errorsizepass_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        hidden_pass_btn = new QPushButton(forgot_page);
        hidden_pass_btn->setObjectName("hidden_pass_btn");
        hidden_pass_btn->setGeometry(QRect(905, 703, 35, 32));
        hidden_pass_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        hidden_pass_btn->setStyleSheet(QString::fromUtf8("background:transparent;"));
        hidded_pic = new QLabel(forgot_page);
        hidded_pic->setObjectName("hidded_pic");
        hidded_pic->setGeometry(QRect(905, 703, 35, 35));
        hidded_pic->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        hidded_pic->setStyleSheet(QString::fromUtf8("background:transparent;"));
        stackedWidget->addWidget(forgot_page);
        new_pass_fild->raise();
        hidded_pic->raise();
        Learnova_text_3->raise();
        msg_txt->raise();
        back_pic->raise();
        back_btn->raise();
        verifi_fild->raise();
        check_btn->raise();
        error_txt->raise();
        confirm_btn->raise();
        errorsizepass_txt->raise();
        hidden_pass_btn->raise();
        first_user_page = new QWidget();
        first_user_page->setObjectName("first_user_page");
        first_user_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/First_admin_page.png);"));
        Logoutuser_btn = new QPushButton(first_user_page);
        Logoutuser_btn->setObjectName("Logoutuser_btn");
        Logoutuser_btn->setGeometry(QRect(1006, 62, 234, 73));
        Logoutuser_btn->setFont(font4);
        Logoutuser_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Logoutuser_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 36px;\n"
"color:white;"));
        View_grad_btn = new QPushButton(first_user_page);
        View_grad_btn->setObjectName("View_grad_btn");
        View_grad_btn->setGeometry(QRect(29, 432, 321, 73));
        View_grad_btn->setFont(font4);
        View_grad_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        View_grad_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 36px;\n"
"color:white;"));
        Mycourses_btn = new QPushButton(first_user_page);
        Mycourses_btn->setObjectName("Mycourses_btn");
        Mycourses_btn->setGeometry(QRect(29, 331, 321, 73));
        Mycourses_btn->setFont(font4);
        Mycourses_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Mycourses_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 36px;\n"
"color:white;"));
        Hellouser_txt = new QLabel(first_user_page);
        Hellouser_txt->setObjectName("Hellouser_txt");
        Hellouser_txt->setEnabled(true);
        Hellouser_txt->setGeometry(QRect(646, 75, 261, 49));
        sizePolicy.setHeightForWidth(Hellouser_txt->sizePolicy().hasHeightForWidth());
        Hellouser_txt->setSizePolicy(sizePolicy);
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Arial")});
        font8.setPointSize(26);
        font8.setBold(true);
        font8.setItalic(true);
        Hellouser_txt->setFont(font8);
        Hellouser_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#003366;"));
        Hellouser_txt->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        no_courses_lbl_2 = new QLabel(first_user_page);
        no_courses_lbl_2->setObjectName("no_courses_lbl_2");
        no_courses_lbl_2->setEnabled(true);
        no_courses_lbl_2->setGeometry(QRect(636, 463, 441, 31));
        no_courses_lbl_2->setFont(font8);
        no_courses_lbl_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        no_courses_lbl_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Register_course_btn = new QPushButton(first_user_page);
        Register_course_btn->setObjectName("Register_course_btn");
        Register_course_btn->setGeometry(QRect(29, 230, 321, 73));
        Register_course_btn->setFont(font4);
        Register_course_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Register_course_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 36px;\n"
"color:white;"));
        all_courses_table_2 = new QTableView(first_user_page);
        all_courses_table_2->setObjectName("all_courses_table_2");
        all_courses_table_2->setGeometry(QRect(405, 176, 916, 649));
        sizePolicy.setHeightForWidth(all_courses_table_2->sizePolicy().hasHeightForWidth());
        all_courses_table_2->setSizePolicy(sizePolicy);
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Arial")});
        font9.setPointSize(15);
        font9.setBold(true);
        all_courses_table_2->setFont(font9);
        all_courses_table_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        all_courses_table_2->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background: transparent;\n"
"gridline-color: rgb(0, 51, 102);\n"
"border: 4px solid #003366 ;\n"
"color: #457B9D;\n"
"}\n"
"QHeaderView::section {\n"
"	font: 700 16pt \"Arial\";\n"
"	background-color:  #003366;\n"
"    color:  white; \n"
"}\n"
"QScrollBar:vertical {\n"
"    background: #457B9D;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: #457B9D; \n"
"    height: 10px; \n"
"}\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background:  #003366; \n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        all_courses_table_2->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        all_courses_table_2->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        all_courses_table_2->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        Print_report_btn = new QPushButton(first_user_page);
        Print_report_btn->setObjectName("Print_report_btn");
        Print_report_btn->setGeometry(QRect(29, 533, 321, 73));
        Print_report_btn->setFont(font4);
        Print_report_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Print_report_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 36px;\n"
"color:white;"));
        stackedWidget->addWidget(first_user_page);
        Mycourses_page = new QWidget();
        Mycourses_page->setObjectName("Mycourses_page");
        Mycourses_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Desktop3.png);"));
        no_mycourses_lbl = new QLabel(Mycourses_page);
        no_mycourses_lbl->setObjectName("no_mycourses_lbl");
        no_mycourses_lbl->setEnabled(true);
        no_mycourses_lbl->setGeometry(QRect(440, 430, 661, 71));
        no_mycourses_lbl->setFont(font8);
        no_mycourses_lbl->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        no_mycourses_lbl->setAlignment(Qt::AlignmentFlag::AlignCenter);
        My_courses_table = new QTableView(Mycourses_page);
        My_courses_table->setObjectName("My_courses_table");
        My_courses_table->setGeometry(QRect(310, 160, 951, 649));
        sizePolicy.setHeightForWidth(My_courses_table->sizePolicy().hasHeightForWidth());
        My_courses_table->setSizePolicy(sizePolicy);
        My_courses_table->setFont(font9);
        My_courses_table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        My_courses_table->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background: transparent;\n"
"gridline-color: rgb(0, 51, 102);\n"
"border: 4px solid #003366 ;\n"
"color: #457B9D;\n"
"}\n"
"QHeaderView::section {\n"
"	font: 700 16pt \"Arial\";\n"
"	background-color:  #003366;\n"
"    color:  white; \n"
"}\n"
"QScrollBar:vertical {\n"
"    background: #457B9D;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: #457B9D; \n"
"    height: 10px; \n"
"}\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background:  #003366; \n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        My_courses_table->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        My_courses_table->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        My_courses_table->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        Mycourses_txt = new QLabel(Mycourses_page);
        Mycourses_txt->setObjectName("Mycourses_txt");
        Mycourses_txt->setEnabled(true);
        Mycourses_txt->setGeometry(QRect(650, 80, 261, 49));
        sizePolicy.setHeightForWidth(Mycourses_txt->sizePolicy().hasHeightForWidth());
        Mycourses_txt->setSizePolicy(sizePolicy);
        Mycourses_txt->setFont(font8);
        Mycourses_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#003366;"));
        Mycourses_txt->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        back_pic_mycrs = new QLabel(Mycourses_page);
        back_pic_mycrs->setObjectName("back_pic_mycrs");
        back_pic_mycrs->setGeometry(QRect(150, 140, 81, 81));
        back_pic_mycrs->setStyleSheet(QString::fromUtf8("background:transparent;"));
        back_btn_mycrs = new QPushButton(Mycourses_page);
        back_btn_mycrs->setObjectName("back_btn_mycrs");
        back_btn_mycrs->setGeometry(QRect(150, 140, 81, 81));
        back_btn_mycrs->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back_btn_mycrs->setStyleSheet(QString::fromUtf8("background:transparent;"));
        stackedWidget->addWidget(Mycourses_page);
        Available_page = new QWidget();
        Available_page->setObjectName("Available_page");
        Available_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Desktop3.png);"));
        availablecrs_txt = new QLabel(Available_page);
        availablecrs_txt->setObjectName("availablecrs_txt");
        availablecrs_txt->setEnabled(true);
        availablecrs_txt->setGeometry(QRect(610, 80, 391, 49));
        sizePolicy.setHeightForWidth(availablecrs_txt->sizePolicy().hasHeightForWidth());
        availablecrs_txt->setSizePolicy(sizePolicy);
        availablecrs_txt->setFont(font8);
        availablecrs_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#003366;"));
        availablecrs_txt->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        back_pic_avlcrs = new QLabel(Available_page);
        back_pic_avlcrs->setObjectName("back_pic_avlcrs");
        back_pic_avlcrs->setGeometry(QRect(150, 140, 81, 81));
        back_pic_avlcrs->setStyleSheet(QString::fromUtf8("background:transparent;"));
        no_avlcourses_lbl = new QLabel(Available_page);
        no_avlcourses_lbl->setObjectName("no_avlcourses_lbl");
        no_avlcourses_lbl->setEnabled(true);
        no_avlcourses_lbl->setGeometry(QRect(550, 430, 451, 71));
        no_avlcourses_lbl->setFont(font8);
        no_avlcourses_lbl->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        no_avlcourses_lbl->setAlignment(Qt::AlignmentFlag::AlignCenter);
        back_btn_avlcrs = new QPushButton(Available_page);
        back_btn_avlcrs->setObjectName("back_btn_avlcrs");
        back_btn_avlcrs->setGeometry(QRect(150, 140, 81, 81));
        back_btn_avlcrs->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back_btn_avlcrs->setStyleSheet(QString::fromUtf8("background:transparent;"));
        available_courses_table = new QTableView(Available_page);
        available_courses_table->setObjectName("available_courses_table");
        available_courses_table->setGeometry(QRect(310, 160, 916, 649));
        sizePolicy.setHeightForWidth(available_courses_table->sizePolicy().hasHeightForWidth());
        available_courses_table->setSizePolicy(sizePolicy);
        available_courses_table->setFont(font9);
        available_courses_table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        available_courses_table->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background: transparent;\n"
"gridline-color: rgb(0, 51, 102);\n"
"border: 4px solid #003366 ;\n"
"color: #457B9D;\n"
"}\n"
"QHeaderView::section {\n"
"	font: 700 16pt \"Arial\";\n"
"	background-color:  #003366;\n"
"    color:  white; \n"
"}\n"
"QScrollBar:vertical {\n"
"    background: #457B9D;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: #457B9D; \n"
"    height: 10px; \n"
"}\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background:  #003366; \n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        available_courses_table->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        available_courses_table->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        available_courses_table->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        stackedWidget->addWidget(Available_page);
        availablecrs_txt->raise();
        back_pic_avlcrs->raise();
        no_avlcourses_lbl->raise();
        available_courses_table->raise();
        back_btn_avlcrs->raise();
        register_crs_page = new QWidget();
        register_crs_page->setObjectName("register_crs_page");
        register_crs_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Desktop3.png);"));
        instructor_txt_2 = new QLabel(register_crs_page);
        instructor_txt_2->setObjectName("instructor_txt_2");
        instructor_txt_2->setEnabled(true);
        instructor_txt_2->setGeometry(QRect(10, 330, 371, 51));
        instructor_txt_2->setFont(font8);
        instructor_txt_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        instructor_txt_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        credit_Hours_txt_2 = new QLabel(register_crs_page);
        credit_Hours_txt_2->setObjectName("credit_Hours_txt_2");
        credit_Hours_txt_2->setEnabled(true);
        credit_Hours_txt_2->setGeometry(QRect(10, 410, 371, 51));
        credit_Hours_txt_2->setFont(font8);
        credit_Hours_txt_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        credit_Hours_txt_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        semester_txt_2 = new QLabel(register_crs_page);
        semester_txt_2->setObjectName("semester_txt_2");
        semester_txt_2->setEnabled(true);
        semester_txt_2->setGeometry(QRect(10, 480, 371, 51));
        semester_txt_2->setFont(font8);
        semester_txt_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        semester_txt_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        back_btn_regiscrs = new QPushButton(register_crs_page);
        back_btn_regiscrs->setObjectName("back_btn_regiscrs");
        back_btn_regiscrs->setGeometry(QRect(340, 120, 81, 81));
        back_btn_regiscrs->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back_btn_regiscrs->setStyleSheet(QString::fromUtf8("background:transparent;"));
        no_prerequisites_lbl_2 = new QLabel(register_crs_page);
        no_prerequisites_lbl_2->setObjectName("no_prerequisites_lbl_2");
        no_prerequisites_lbl_2->setEnabled(true);
        no_prerequisites_lbl_2->setGeometry(QRect(600, 410, 351, 61));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Arial")});
        font10.setPointSize(25);
        font10.setBold(true);
        font10.setItalic(true);
        no_prerequisites_lbl_2->setFont(font10);
        no_prerequisites_lbl_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        no_prerequisites_lbl_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        prerequisites_table_2 = new QTableView(register_crs_page);
        prerequisites_table_2->setObjectName("prerequisites_table_2");
        prerequisites_table_2->setGeometry(QRect(580, 190, 401, 540));
        sizePolicy.setHeightForWidth(prerequisites_table_2->sizePolicy().hasHeightForWidth());
        prerequisites_table_2->setSizePolicy(sizePolicy);
        prerequisites_table_2->setFont(font9);
        prerequisites_table_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::ArrowCursor)));
        prerequisites_table_2->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background: transparent;\n"
"gridline-color: rgb(0, 51, 102);\n"
"border: 4px solid #003366 ;\n"
"color: #457B9D;\n"
"}\n"
"QHeaderView::section {\n"
"	font: 700 16pt \"Arial\";\n"
"	background-color:  #003366;\n"
"    color:  white; \n"
"}\n"
"QScrollBar:vertical {\n"
"    background: #457B9D;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: #457B9D; \n"
"    height: 10px; \n"
"}\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background:  #003366; \n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        prerequisites_table_2->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        prerequisites_table_2->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        prerequisites_table_2->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        Prerequisites_txt_2 = new QLabel(register_crs_page);
        Prerequisites_txt_2->setObjectName("Prerequisites_txt_2");
        Prerequisites_txt_2->setEnabled(true);
        Prerequisites_txt_2->setGeometry(QRect(630, 130, 321, 49));
        sizePolicy.setHeightForWidth(Prerequisites_txt_2->sizePolicy().hasHeightForWidth());
        Prerequisites_txt_2->setSizePolicy(sizePolicy);
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Arial")});
        font11.setPointSize(30);
        font11.setBold(true);
        font11.setItalic(true);
        Prerequisites_txt_2->setFont(font11);
        Prerequisites_txt_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#003366;"));
        Prerequisites_txt_2->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        crs_name_txt_2 = new QLabel(register_crs_page);
        crs_name_txt_2->setObjectName("crs_name_txt_2");
        crs_name_txt_2->setEnabled(true);
        crs_name_txt_2->setGeometry(QRect(10, 260, 371, 51));
        crs_name_txt_2->setFont(font8);
        crs_name_txt_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        crs_name_txt_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        back_pic_regiscrs = new QLabel(register_crs_page);
        back_pic_regiscrs->setObjectName("back_pic_regiscrs");
        back_pic_regiscrs->setGeometry(QRect(340, 120, 81, 81));
        back_pic_regiscrs->setStyleSheet(QString::fromUtf8("background:transparent;"));
        regiscrs_btn = new QPushButton(register_crs_page);
        regiscrs_btn->setObjectName("regiscrs_btn");
        regiscrs_btn->setGeometry(QRect(670, 780, 211, 61));
        regiscrs_btn->setFont(font4);
        regiscrs_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        regiscrs_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 30px;\n"
"color:white;"));
        succ_regiscrs_txt = new QLabel(register_crs_page);
        succ_regiscrs_txt->setObjectName("succ_regiscrs_txt");
        succ_regiscrs_txt->setGeometry(QRect(510, 740, 621, 31));
        sizePolicy.setHeightForWidth(succ_regiscrs_txt->sizePolicy().hasHeightForWidth());
        succ_regiscrs_txt->setSizePolicy(sizePolicy);
        succ_regiscrs_txt->setFont(font6);
        succ_regiscrs_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:green;"));
        stackedWidget->addWidget(register_crs_page);
        no_prerequisites_lbl_2->raise();
        instructor_txt_2->raise();
        credit_Hours_txt_2->raise();
        semester_txt_2->raise();
        prerequisites_table_2->raise();
        Prerequisites_txt_2->raise();
        crs_name_txt_2->raise();
        back_pic_regiscrs->raise();
        back_btn_regiscrs->raise();
        regiscrs_btn->raise();
        succ_regiscrs_txt->raise();
        view_grades_page = new QWidget();
        view_grades_page->setObjectName("view_grades_page");
        view_grades_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Desktop3.png);"));
        back_btn_viewgrd = new QPushButton(view_grades_page);
        back_btn_viewgrd->setObjectName("back_btn_viewgrd");
        back_btn_viewgrd->setGeometry(QRect(270, 150, 81, 81));
        back_btn_viewgrd->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back_btn_viewgrd->setStyleSheet(QString::fromUtf8("background:transparent;"));
        back_pic_viewgrd = new QLabel(view_grades_page);
        back_pic_viewgrd->setObjectName("back_pic_viewgrd");
        back_pic_viewgrd->setGeometry(QRect(270, 150, 81, 81));
        back_pic_viewgrd->setStyleSheet(QString::fromUtf8("background:transparent;"));
        overall_gpa_txt = new QLabel(view_grades_page);
        overall_gpa_txt->setObjectName("overall_gpa_txt");
        overall_gpa_txt->setEnabled(true);
        overall_gpa_txt->setGeometry(QRect(20, 380, 481, 51));
        overall_gpa_txt->setFont(font8);
        overall_gpa_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        overall_gpa_txt->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        grades_table = new QTableView(view_grades_page);
        grades_table->setObjectName("grades_table");
        grades_table->setGeometry(QRect(550, 230, 611, 561));
        sizePolicy.setHeightForWidth(grades_table->sizePolicy().hasHeightForWidth());
        grades_table->setSizePolicy(sizePolicy);
        grades_table->setFont(font9);
        grades_table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::ArrowCursor)));
        grades_table->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background: transparent;\n"
"gridline-color: rgb(0, 51, 102);\n"
"border: 4px solid #003366 ;\n"
"color: #457B9D;\n"
"}\n"
"QHeaderView::section {\n"
"	font: 700 16pt \"Arial\";\n"
"	background-color:  #003366;\n"
"    color:  white; \n"
"}\n"
"QScrollBar:vertical {\n"
"    background: #457B9D;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: #457B9D; \n"
"    height: 10px; \n"
"}\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background:  #003366; \n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        grades_table->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        grades_table->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        grades_table->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        no_grades_lbl = new QLabel(view_grades_page);
        no_grades_lbl->setObjectName("no_grades_lbl");
        no_grades_lbl->setEnabled(true);
        no_grades_lbl->setGeometry(QRect(673, 462, 351, 61));
        no_grades_lbl->setFont(font10);
        no_grades_lbl->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        no_grades_lbl->setAlignment(Qt::AlignmentFlag::AlignCenter);
        display_grades_btn = new QPushButton(view_grades_page);
        display_grades_btn->setObjectName("display_grades_btn");
        display_grades_btn->setGeometry(QRect(930, 110, 211, 73));
        display_grades_btn->setFont(font4);
        display_grades_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        display_grades_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 36px;\n"
"color:white;"));
        semester_selector = new QComboBox(view_grades_page);
        semester_selector->setObjectName("semester_selector");
        semester_selector->setGeometry(QRect(610, 110, 241, 79));
        QFont font12;
        font12.setFamilies({QString::fromUtf8("Arial")});
        font12.setBold(true);
        font12.setItalic(false);
        semester_selector->setFont(font12);
        semester_selector->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        semester_selector->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background:transparent;\n"
"    background-color:#457B9D;\n"
"    border: 5px solid #457B9D;\n"
"    border-radius: 32px;\n"
"    color: white;\n"
"   font: bold 36px \"Arial\";\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"	background:transparent;\n"
"	background-color:white;\n"
"    color: #003366;\n"
"}"));
        semester_selector->setFrame(true);
        err_sems = new QLabel(view_grades_page);
        err_sems->setObjectName("err_sems");
        err_sems->setGeometry(QRect(600, 60, 301, 41));
        sizePolicy.setHeightForWidth(err_sems->sizePolicy().hasHeightForWidth());
        err_sems->setSizePolicy(sizePolicy);
        err_sems->setFont(font6);
        err_sems->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        stackedWidget->addWidget(view_grades_page);
        no_grades_lbl->raise();
        back_pic_viewgrd->raise();
        back_btn_viewgrd->raise();
        overall_gpa_txt->raise();
        grades_table->raise();
        display_grades_btn->raise();
        semester_selector->raise();
        err_sems->raise();
        first_admin_page = new QWidget();
        first_admin_page->setObjectName("first_admin_page");
        first_admin_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/First_admin_page.png);"));
        Logoutadmin_btn = new QPushButton(first_admin_page);
        Logoutadmin_btn->setObjectName("Logoutadmin_btn");
        Logoutadmin_btn->setGeometry(QRect(1006, 62, 234, 73));
        Logoutadmin_btn->setFont(font4);
        Logoutadmin_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Logoutadmin_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 36px;\n"
"color:white;"));
        Hello_txt = new QLabel(first_admin_page);
        Hello_txt->setObjectName("Hello_txt");
        Hello_txt->setEnabled(true);
        Hello_txt->setGeometry(QRect(646, 75, 261, 49));
        sizePolicy.setHeightForWidth(Hello_txt->sizePolicy().hasHeightForWidth());
        Hello_txt->setSizePolicy(sizePolicy);
        Hello_txt->setFont(font8);
        Hello_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#003366;"));
        Hello_txt->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        Add_course_btn = new QPushButton(first_admin_page);
        Add_course_btn->setObjectName("Add_course_btn");
        Add_course_btn->setGeometry(QRect(29, 270, 321, 73));
        Add_course_btn->setFont(font4);
        Add_course_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Add_course_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 36px;\n"
"color:white;"));
        Add_admin_btn = new QPushButton(first_admin_page);
        Add_admin_btn->setObjectName("Add_admin_btn");
        Add_admin_btn->setGeometry(QRect(29, 393, 321, 73));
        Add_admin_btn->setFont(font4);
        Add_admin_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Add_admin_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 36px;\n"
"color:white;"));
        Manage_grad_btn = new QPushButton(first_admin_page);
        Manage_grad_btn->setObjectName("Manage_grad_btn");
        Manage_grad_btn->setGeometry(QRect(29, 510, 321, 73));
        Manage_grad_btn->setFont(font4);
        Manage_grad_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Manage_grad_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 36px;\n"
"color:white;"));
        no_courses_lbl = new QLabel(first_admin_page);
        no_courses_lbl->setObjectName("no_courses_lbl");
        no_courses_lbl->setEnabled(true);
        no_courses_lbl->setGeometry(QRect(636, 463, 441, 31));
        no_courses_lbl->setFont(font8);
        no_courses_lbl->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        no_courses_lbl->setAlignment(Qt::AlignmentFlag::AlignCenter);
        all_courses_table = new QTableView(first_admin_page);
        all_courses_table->setObjectName("all_courses_table");
        all_courses_table->setGeometry(QRect(405, 176, 916, 649));
        sizePolicy.setHeightForWidth(all_courses_table->sizePolicy().hasHeightForWidth());
        all_courses_table->setSizePolicy(sizePolicy);
        all_courses_table->setFont(font9);
        all_courses_table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        all_courses_table->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background: transparent;\n"
"gridline-color: rgb(0, 51, 102);\n"
"border: 4px solid #003366 ;\n"
"color: #457B9D;\n"
"}\n"
"QHeaderView::section {\n"
"	font: 700 16pt \"Arial\";\n"
"	background-color:  #003366;\n"
"    color:  white; \n"
"}\n"
"QScrollBar:vertical {\n"
"    background: #457B9D;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: #457B9D; \n"
"    height: 10px; \n"
"}\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background:  #003366; \n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        all_courses_table->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        all_courses_table->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        all_courses_table->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        stackedWidget->addWidget(first_admin_page);
        Add_admin_page = new QWidget();
        Add_admin_page->setObjectName("Add_admin_page");
        Add_admin_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Desktop-2.png);"));
        Learnova_text_5 = new QLabel(Add_admin_page);
        Learnova_text_5->setObjectName("Learnova_text_5");
        Learnova_text_5->setGeometry(QRect(560, 210, 491, 71));
        Learnova_text_5->setStyleSheet(QString::fromUtf8("color: rgb(69, 123, 157);\n"
"font: 700 53pt \"Arial\";\n"
"background:transparent"));
        Add_admin_txt = new QLabel(Add_admin_page);
        Add_admin_txt->setObjectName("Add_admin_txt");
        Add_admin_txt->setGeometry(QRect(510, 320, 661, 71));
        Add_admin_txt->setStyleSheet(QString::fromUtf8("color: #003366;\n"
"font: 700 53pt \"Arial\";\n"
"background:transparent"));
        back_pic_adm = new QLabel(Add_admin_page);
        back_pic_adm->setObjectName("back_pic_adm");
        back_pic_adm->setGeometry(QRect(270, 230, 81, 81));
        back_pic_adm->setStyleSheet(QString::fromUtf8("background:transparent;"));
        back_btn_adm = new QPushButton(Add_admin_page);
        back_btn_adm->setObjectName("back_btn_adm");
        back_btn_adm->setGeometry(QRect(270, 230, 81, 81));
        back_btn_adm->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back_btn_adm->setStyleSheet(QString::fromUtf8("background:transparent;"));
        las_name_fild_3 = new QLineEdit(Add_admin_page);
        las_name_fild_3->setObjectName("las_name_fild_3");
        las_name_fild_3->setGeometry(QRect(560, 637, 400, 54));
        las_name_fild_3->setFont(font1);
        las_name_fild_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        las_name_fild_3->setFrame(true);
        las_name_fild_3->setEchoMode(QLineEdit::EchoMode::Normal);
        err_lna_3 = new QLabel(Add_admin_page);
        err_lna_3->setObjectName("err_lna_3");
        err_lna_3->setGeometry(QRect(970, 649, 541, 31));
        sizePolicy.setHeightForWidth(err_lna_3->sizePolicy().hasHeightForWidth());
        err_lna_3->setSizePolicy(sizePolicy);
        err_lna_3->setFont(font6);
        err_lna_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        pass_fild_3 = new QLineEdit(Add_admin_page);
        pass_fild_3->setObjectName("pass_fild_3");
        pass_fild_3->setGeometry(QRect(560, 491, 400, 54));
        pass_fild_3->setFont(font1);
        pass_fild_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        pass_fild_3->setFrame(true);
        pass_fild_3->setEchoMode(QLineEdit::EchoMode::Password);
        ID_fild_3 = new QLineEdit(Add_admin_page);
        ID_fild_3->setObjectName("ID_fild_3");
        ID_fild_3->setGeometry(QRect(560, 712, 400, 54));
        ID_fild_3->setFont(font1);
        ID_fild_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        ID_fild_3->setFrame(true);
        ID_fild_3->setEchoMode(QLineEdit::EchoMode::Normal);
        err_email_3 = new QLabel(Add_admin_page);
        err_email_3->setObjectName("err_email_3");
        err_email_3->setGeometry(QRect(970, 430, 541, 31));
        sizePolicy.setHeightForWidth(err_email_3->sizePolicy().hasHeightForWidth());
        err_email_3->setSizePolicy(sizePolicy);
        err_email_3->setFont(font6);
        err_email_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        err_pass_3 = new QLabel(Add_admin_page);
        err_pass_3->setObjectName("err_pass_3");
        err_pass_3->setGeometry(QRect(970, 484, 561, 67));
        sizePolicy.setHeightForWidth(err_pass_3->sizePolicy().hasHeightForWidth());
        err_pass_3->setSizePolicy(sizePolicy);
        err_pass_3->setFont(font6);
        err_pass_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        err_id_3 = new QLabel(Add_admin_page);
        err_id_3->setObjectName("err_id_3");
        err_id_3->setGeometry(QRect(970, 723, 541, 31));
        sizePolicy.setHeightForWidth(err_id_3->sizePolicy().hasHeightForWidth());
        err_id_3->setSizePolicy(sizePolicy);
        err_id_3->setFont(font6);
        err_id_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        err_fna_3 = new QLabel(Add_admin_page);
        err_fna_3->setObjectName("err_fna_3");
        err_fna_3->setGeometry(QRect(970, 576, 541, 31));
        sizePolicy.setHeightForWidth(err_fna_3->sizePolicy().hasHeightForWidth());
        err_fna_3->setSizePolicy(sizePolicy);
        err_fna_3->setFont(font6);
        err_fna_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        Fir_name_fild_3 = new QLineEdit(Add_admin_page);
        Fir_name_fild_3->setObjectName("Fir_name_fild_3");
        Fir_name_fild_3->setGeometry(QRect(560, 564, 400, 54));
        Fir_name_fild_3->setFont(font1);
        Fir_name_fild_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        Fir_name_fild_3->setFrame(true);
        Fir_name_fild_3->setEchoMode(QLineEdit::EchoMode::Normal);
        email_fild_3 = new QLineEdit(Add_admin_page);
        email_fild_3->setObjectName("email_fild_3");
        email_fild_3->setGeometry(QRect(560, 418, 400, 54));
        email_fild_3->setFont(font1);
        email_fild_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        email_fild_3->setFrame(true);
        email_fild_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        Add_adm_btn = new QPushButton(Add_admin_page);
        Add_adm_btn->setObjectName("Add_adm_btn");
        Add_adm_btn->setGeometry(QRect(590, 788, 325, 67));
        Add_adm_btn->setFont(font4);
        Add_adm_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Add_adm_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 30px;\n"
"color:white;"));
        hidden_pass_btn_4 = new QPushButton(Add_admin_page);
        hidden_pass_btn_4->setObjectName("hidden_pass_btn_4");
        hidden_pass_btn_4->setGeometry(QRect(907, 502, 35, 32));
        hidden_pass_btn_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        hidden_pass_btn_4->setStyleSheet(QString::fromUtf8("background:transparent;"));
        hidded_pic_4 = new QLabel(Add_admin_page);
        hidded_pic_4->setObjectName("hidded_pic_4");
        hidded_pic_4->setGeometry(QRect(910, 500, 35, 35));
        hidded_pic_4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        hidded_pic_4->setStyleSheet(QString::fromUtf8("background:transparent;"));
        succ_adm_txt = new QLabel(Add_admin_page);
        succ_adm_txt->setObjectName("succ_adm_txt");
        succ_adm_txt->setGeometry(QRect(926, 804, 561, 31));
        sizePolicy.setHeightForWidth(succ_adm_txt->sizePolicy().hasHeightForWidth());
        succ_adm_txt->setSizePolicy(sizePolicy);
        succ_adm_txt->setFont(font6);
        succ_adm_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:green;"));
        stackedWidget->addWidget(Add_admin_page);
        back_pic_adm->raise();
        hidded_pic_4->raise();
        Learnova_text_5->raise();
        Add_admin_txt->raise();
        las_name_fild_3->raise();
        err_lna_3->raise();
        pass_fild_3->raise();
        ID_fild_3->raise();
        err_email_3->raise();
        err_pass_3->raise();
        err_id_3->raise();
        err_fna_3->raise();
        Fir_name_fild_3->raise();
        email_fild_3->raise();
        Add_adm_btn->raise();
        hidden_pass_btn_4->raise();
        back_btn_adm->raise();
        succ_adm_txt->raise();
        Add_course_page = new QWidget();
        Add_course_page->setObjectName("Add_course_page");
        Add_course_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Desktop-2.png);"));
        Learnova_text_4 = new QLabel(Add_course_page);
        Learnova_text_4->setObjectName("Learnova_text_4");
        Learnova_text_4->setGeometry(QRect(560, 210, 491, 71));
        Learnova_text_4->setStyleSheet(QString::fromUtf8("color: rgb(69, 123, 157);\n"
"font: 700 53pt \"Arial\";\n"
"background:transparent"));
        Add_crs_txt = new QLabel(Add_course_page);
        Add_crs_txt->setObjectName("Add_crs_txt");
        Add_crs_txt->setGeometry(QRect(510, 320, 691, 71));
        Add_crs_txt->setStyleSheet(QString::fromUtf8("color: #003366;\n"
"font: 700 53pt \"Arial\";\n"
"background:transparent"));
        Instruc_fild = new QLineEdit(Add_course_page);
        Instruc_fild->setObjectName("Instruc_fild");
        Instruc_fild->setGeometry(QRect(570, 591, 400, 54));
        Instruc_fild->setFont(font1);
        Instruc_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        Instruc_fild->setFrame(true);
        Instruc_fild->setEchoMode(QLineEdit::EchoMode::Normal);
        Semester_fild = new QLineEdit(Add_course_page);
        Semester_fild->setObjectName("Semester_fild");
        Semester_fild->setGeometry(QRect(570, 677, 400, 54));
        Semester_fild->setFont(font1);
        Semester_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        Semester_fild->setFrame(true);
        Semester_fild->setEchoMode(QLineEdit::EchoMode::Normal);
        Credit_hrs_fild = new QLineEdit(Add_course_page);
        Credit_hrs_fild->setObjectName("Credit_hrs_fild");
        Credit_hrs_fild->setGeometry(QRect(570, 505, 400, 54));
        Credit_hrs_fild->setFont(font1);
        Credit_hrs_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        Credit_hrs_fild->setFrame(true);
        Credit_hrs_fild->setEchoMode(QLineEdit::EchoMode::Normal);
        course_name_fild = new QLineEdit(Add_course_page);
        course_name_fild->setObjectName("course_name_fild");
        course_name_fild->setGeometry(QRect(570, 421, 400, 54));
        course_name_fild->setFont(font1);
        course_name_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        course_name_fild->setFrame(true);
        course_name_fild->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        Add_crs_btn = new QPushButton(Add_course_page);
        Add_crs_btn->setObjectName("Add_crs_btn");
        Add_crs_btn->setGeometry(QRect(600, 763, 325, 73));
        Add_crs_btn->setFont(font4);
        Add_crs_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Add_crs_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 30px;\n"
"color:white;"));
        back_btn_crs = new QPushButton(Add_course_page);
        back_btn_crs->setObjectName("back_btn_crs");
        back_btn_crs->setGeometry(QRect(270, 230, 81, 81));
        back_btn_crs->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back_btn_crs->setStyleSheet(QString::fromUtf8("background:transparent;"));
        back_pic_crs = new QLabel(Add_course_page);
        back_pic_crs->setObjectName("back_pic_crs");
        back_pic_crs->setGeometry(QRect(270, 230, 81, 81));
        back_pic_crs->setStyleSheet(QString::fromUtf8("background:transparent;"));
        err_semester = new QLabel(Add_course_page);
        err_semester->setObjectName("err_semester");
        err_semester->setGeometry(QRect(980, 690, 551, 31));
        sizePolicy.setHeightForWidth(err_semester->sizePolicy().hasHeightForWidth());
        err_semester->setSizePolicy(sizePolicy);
        err_semester->setFont(font6);
        err_semester->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        err_crs_name = new QLabel(Add_course_page);
        err_crs_name->setObjectName("err_crs_name");
        err_crs_name->setGeometry(QRect(980, 430, 541, 31));
        sizePolicy.setHeightForWidth(err_crs_name->sizePolicy().hasHeightForWidth());
        err_crs_name->setSizePolicy(sizePolicy);
        err_crs_name->setFont(font6);
        err_crs_name->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        err_credit_hrs = new QLabel(Add_course_page);
        err_credit_hrs->setObjectName("err_credit_hrs");
        err_credit_hrs->setGeometry(QRect(980, 520, 601, 21));
        sizePolicy.setHeightForWidth(err_credit_hrs->sizePolicy().hasHeightForWidth());
        err_credit_hrs->setSizePolicy(sizePolicy);
        err_credit_hrs->setFont(font6);
        err_credit_hrs->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        err_instruc = new QLabel(Add_course_page);
        err_instruc->setObjectName("err_instruc");
        err_instruc->setGeometry(QRect(980, 600, 541, 31));
        sizePolicy.setHeightForWidth(err_instruc->sizePolicy().hasHeightForWidth());
        err_instruc->setSizePolicy(sizePolicy);
        err_instruc->setFont(font6);
        err_instruc->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        succ_txt = new QLabel(Add_course_page);
        succ_txt->setObjectName("succ_txt");
        succ_txt->setGeometry(QRect(930, 780, 561, 31));
        sizePolicy.setHeightForWidth(succ_txt->sizePolicy().hasHeightForWidth());
        succ_txt->setSizePolicy(sizePolicy);
        succ_txt->setFont(font6);
        succ_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:green;"));
        stackedWidget->addWidget(Add_course_page);
        back_pic_crs->raise();
        Learnova_text_4->raise();
        Add_crs_txt->raise();
        Instruc_fild->raise();
        Semester_fild->raise();
        Credit_hrs_fild->raise();
        course_name_fild->raise();
        Add_crs_btn->raise();
        back_btn_crs->raise();
        err_semester->raise();
        err_crs_name->raise();
        err_credit_hrs->raise();
        err_instruc->raise();
        succ_txt->raise();
        update_prereq = new QWidget();
        update_prereq->setObjectName("update_prereq");
        update_prereq->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Desktop3.png);"));
        back_btn_upcrs = new QPushButton(update_prereq);
        back_btn_upcrs->setObjectName("back_btn_upcrs");
        back_btn_upcrs->setGeometry(QRect(340, 130, 81, 81));
        back_btn_upcrs->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back_btn_upcrs->setStyleSheet(QString::fromUtf8("background:transparent;"));
        back_pic_upcrs = new QLabel(update_prereq);
        back_pic_upcrs->setObjectName("back_pic_upcrs");
        back_pic_upcrs->setGeometry(QRect(340, 130, 81, 81));
        back_pic_upcrs->setStyleSheet(QString::fromUtf8("background:transparent;"));
        crs_name_txt = new QLabel(update_prereq);
        crs_name_txt->setObjectName("crs_name_txt");
        crs_name_txt->setEnabled(true);
        crs_name_txt->setGeometry(QRect(10, 270, 371, 51));
        crs_name_txt->setFont(font8);
        crs_name_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        crs_name_txt->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        instructor_txt = new QLabel(update_prereq);
        instructor_txt->setObjectName("instructor_txt");
        instructor_txt->setEnabled(true);
        instructor_txt->setGeometry(QRect(10, 340, 371, 51));
        instructor_txt->setFont(font8);
        instructor_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        instructor_txt->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        credit_Hours_txt = new QLabel(update_prereq);
        credit_Hours_txt->setObjectName("credit_Hours_txt");
        credit_Hours_txt->setEnabled(true);
        credit_Hours_txt->setGeometry(QRect(10, 420, 371, 51));
        credit_Hours_txt->setFont(font8);
        credit_Hours_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        credit_Hours_txt->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        semester_txt = new QLabel(update_prereq);
        semester_txt->setObjectName("semester_txt");
        semester_txt->setEnabled(true);
        semester_txt->setGeometry(QRect(10, 490, 371, 51));
        semester_txt->setFont(font8);
        semester_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        semester_txt->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        Prerequisites_txt = new QLabel(update_prereq);
        Prerequisites_txt->setObjectName("Prerequisites_txt");
        Prerequisites_txt->setEnabled(true);
        Prerequisites_txt->setGeometry(QRect(586, 190, 321, 49));
        sizePolicy.setHeightForWidth(Prerequisites_txt->sizePolicy().hasHeightForWidth());
        Prerequisites_txt->setSizePolicy(sizePolicy);
        Prerequisites_txt->setFont(font11);
        Prerequisites_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#003366;"));
        Prerequisites_txt->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        prerequisites_table = new QTableView(update_prereq);
        prerequisites_table->setObjectName("prerequisites_table");
        prerequisites_table->setGeometry(QRect(523, 260, 401, 540));
        sizePolicy.setHeightForWidth(prerequisites_table->sizePolicy().hasHeightForWidth());
        prerequisites_table->setSizePolicy(sizePolicy);
        prerequisites_table->setFont(font9);
        prerequisites_table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::ArrowCursor)));
        prerequisites_table->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background: transparent;\n"
"gridline-color: rgb(0, 51, 102);\n"
"border: 4px solid #003366 ;\n"
"color: #457B9D;\n"
"}\n"
"QHeaderView::section {\n"
"	font: 700 16pt \"Arial\";\n"
"	background-color:  #003366;\n"
"    color:  white; \n"
"}\n"
"QScrollBar:vertical {\n"
"    background: #457B9D;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: #457B9D; \n"
"    height: 10px; \n"
"}\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background:  #003366; \n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        prerequisites_table->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        prerequisites_table->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        prerequisites_table->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        no_prerequisites_lbl = new QLabel(update_prereq);
        no_prerequisites_lbl->setObjectName("no_prerequisites_lbl");
        no_prerequisites_lbl->setEnabled(true);
        no_prerequisites_lbl->setGeometry(QRect(550, 440, 351, 61));
        no_prerequisites_lbl->setFont(font10);
        no_prerequisites_lbl->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        no_prerequisites_lbl->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Prerequisite_add_fild = new QLineEdit(update_prereq);
        Prerequisite_add_fild->setObjectName("Prerequisite_add_fild");
        Prerequisite_add_fild->setGeometry(QRect(950, 420, 351, 54));
        Prerequisite_add_fild->setFont(font1);
        Prerequisite_add_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        Prerequisite_add_fild->setFrame(true);
        Prerequisite_add_fild->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        Prerequisite_rem_fild = new QLineEdit(update_prereq);
        Prerequisite_rem_fild->setObjectName("Prerequisite_rem_fild");
        Prerequisite_rem_fild->setGeometry(QRect(960, 540, 351, 54));
        Prerequisite_rem_fild->setFont(font1);
        Prerequisite_rem_fild->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:5px solid #457B9D;\n"
"border-radius:26px;\n"
"color:#457B9D\n"
""));
        Prerequisite_rem_fild->setFrame(true);
        Prerequisite_rem_fild->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        add_btn = new QPushButton(update_prereq);
        add_btn->setObjectName("add_btn");
        add_btn->setGeometry(QRect(1320, 417, 190, 61));
        add_btn->setFont(font4);
        add_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        add_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 30px;\n"
"color:white;"));
        remove_btn = new QPushButton(update_prereq);
        remove_btn->setObjectName("remove_btn");
        remove_btn->setGeometry(QRect(1320, 535, 190, 61));
        remove_btn->setFont(font4);
        remove_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        remove_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 30px;\n"
"color:white;"));
        remove_crs_btn = new QPushButton(update_prereq);
        remove_crs_btn->setObjectName("remove_crs_btn");
        remove_crs_btn->setGeometry(QRect(880, 70, 341, 61));
        remove_crs_btn->setFont(font4);
        remove_crs_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        remove_crs_btn->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: #003366;\n"
"border-radius: 30px;\n"
"color:white;"));
        err_prereq_add_lbl = new QLabel(update_prereq);
        err_prereq_add_lbl->setObjectName("err_prereq_add_lbl");
        err_prereq_add_lbl->setGeometry(QRect(950, 380, 531, 31));
        sizePolicy.setHeightForWidth(err_prereq_add_lbl->sizePolicy().hasHeightForWidth());
        err_prereq_add_lbl->setSizePolicy(sizePolicy);
        err_prereq_add_lbl->setFont(font6);
        err_prereq_add_lbl->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        succ_addpre_txt = new QLabel(update_prereq);
        succ_addpre_txt->setObjectName("succ_addpre_txt");
        succ_addpre_txt->setGeometry(QRect(940, 380, 581, 31));
        sizePolicy.setHeightForWidth(succ_addpre_txt->sizePolicy().hasHeightForWidth());
        succ_addpre_txt->setSizePolicy(sizePolicy);
        succ_addpre_txt->setFont(font6);
        succ_addpre_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:green;"));
        err_prereq_remo_lbl = new QLabel(update_prereq);
        err_prereq_remo_lbl->setObjectName("err_prereq_remo_lbl");
        err_prereq_remo_lbl->setGeometry(QRect(950, 500, 531, 31));
        sizePolicy.setHeightForWidth(err_prereq_remo_lbl->sizePolicy().hasHeightForWidth());
        err_prereq_remo_lbl->setSizePolicy(sizePolicy);
        err_prereq_remo_lbl->setFont(font6);
        err_prereq_remo_lbl->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red"));
        succ_remopre_txt = new QLabel(update_prereq);
        succ_remopre_txt->setObjectName("succ_remopre_txt");
        succ_remopre_txt->setGeometry(QRect(940, 500, 581, 31));
        sizePolicy.setHeightForWidth(succ_remopre_txt->sizePolicy().hasHeightForWidth());
        succ_remopre_txt->setSizePolicy(sizePolicy);
        succ_remopre_txt->setFont(font6);
        succ_remopre_txt->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:green;"));
        stackedWidget->addWidget(update_prereq);
        back_pic_upcrs->raise();
        crs_name_txt->raise();
        instructor_txt->raise();
        credit_Hours_txt->raise();
        semester_txt->raise();
        Prerequisites_txt->raise();
        prerequisites_table->raise();
        no_prerequisites_lbl->raise();
        Prerequisite_add_fild->raise();
        Prerequisite_rem_fild->raise();
        add_btn->raise();
        remove_btn->raise();
        remove_crs_btn->raise();
        back_btn_upcrs->raise();
        err_prereq_add_lbl->raise();
        succ_addpre_txt->raise();
        err_prereq_remo_lbl->raise();
        succ_remopre_txt->raise();
        view_pre_page = new QWidget();
        view_pre_page->setObjectName("view_pre_page");
        view_pre_page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Desktop3.png);"));
        instructor_txt_3 = new QLabel(view_pre_page);
        instructor_txt_3->setObjectName("instructor_txt_3");
        instructor_txt_3->setEnabled(true);
        instructor_txt_3->setGeometry(QRect(10, 330, 371, 51));
        instructor_txt_3->setFont(font8);
        instructor_txt_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        instructor_txt_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        no_prerequisites_lbl_3 = new QLabel(view_pre_page);
        no_prerequisites_lbl_3->setObjectName("no_prerequisites_lbl_3");
        no_prerequisites_lbl_3->setEnabled(true);
        no_prerequisites_lbl_3->setGeometry(QRect(600, 410, 351, 61));
        no_prerequisites_lbl_3->setFont(font10);
        no_prerequisites_lbl_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        no_prerequisites_lbl_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        back_btn_viewpre = new QPushButton(view_pre_page);
        back_btn_viewpre->setObjectName("back_btn_viewpre");
        back_btn_viewpre->setGeometry(QRect(340, 120, 81, 81));
        back_btn_viewpre->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back_btn_viewpre->setStyleSheet(QString::fromUtf8("background:transparent;"));
        back_pic_viewpre = new QLabel(view_pre_page);
        back_pic_viewpre->setObjectName("back_pic_viewpre");
        back_pic_viewpre->setGeometry(QRect(340, 120, 81, 81));
        back_pic_viewpre->setStyleSheet(QString::fromUtf8("background:transparent;"));
        Prerequisites_txt_3 = new QLabel(view_pre_page);
        Prerequisites_txt_3->setObjectName("Prerequisites_txt_3");
        Prerequisites_txt_3->setEnabled(true);
        Prerequisites_txt_3->setGeometry(QRect(630, 130, 321, 49));
        sizePolicy.setHeightForWidth(Prerequisites_txt_3->sizePolicy().hasHeightForWidth());
        Prerequisites_txt_3->setSizePolicy(sizePolicy);
        Prerequisites_txt_3->setFont(font11);
        Prerequisites_txt_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#003366;"));
        Prerequisites_txt_3->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        credit_Hours_txt_3 = new QLabel(view_pre_page);
        credit_Hours_txt_3->setObjectName("credit_Hours_txt_3");
        credit_Hours_txt_3->setEnabled(true);
        credit_Hours_txt_3->setGeometry(QRect(10, 410, 371, 51));
        credit_Hours_txt_3->setFont(font8);
        credit_Hours_txt_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        credit_Hours_txt_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        prerequisites_table_3 = new QTableView(view_pre_page);
        prerequisites_table_3->setObjectName("prerequisites_table_3");
        prerequisites_table_3->setGeometry(QRect(580, 190, 401, 540));
        sizePolicy.setHeightForWidth(prerequisites_table_3->sizePolicy().hasHeightForWidth());
        prerequisites_table_3->setSizePolicy(sizePolicy);
        prerequisites_table_3->setFont(font9);
        prerequisites_table_3->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::ArrowCursor)));
        prerequisites_table_3->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background: transparent;\n"
"gridline-color: rgb(0, 51, 102);\n"
"border: 4px solid #003366 ;\n"
"color: #457B9D;\n"
"}\n"
"QHeaderView::section {\n"
"	font: 700 16pt \"Arial\";\n"
"	background-color:  #003366;\n"
"    color:  white; \n"
"}\n"
"QScrollBar:vertical {\n"
"    background: #457B9D;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: #457B9D; \n"
"    height: 10px; \n"
"}\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background:  #003366; \n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        prerequisites_table_3->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        prerequisites_table_3->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        prerequisites_table_3->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        crs_name_txt_3 = new QLabel(view_pre_page);
        crs_name_txt_3->setObjectName("crs_name_txt_3");
        crs_name_txt_3->setEnabled(true);
        crs_name_txt_3->setGeometry(QRect(10, 260, 371, 51));
        crs_name_txt_3->setFont(font8);
        crs_name_txt_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        crs_name_txt_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        semester_txt_3 = new QLabel(view_pre_page);
        semester_txt_3->setObjectName("semester_txt_3");
        semester_txt_3->setEnabled(true);
        semester_txt_3->setGeometry(QRect(10, 480, 371, 51));
        semester_txt_3->setFont(font8);
        semester_txt_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:#457B9D;"));
        semester_txt_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        stackedWidget->addWidget(view_pre_page);
        no_prerequisites_lbl_3->raise();
        back_pic_viewpre->raise();
        instructor_txt_3->raise();
        Prerequisites_txt_3->raise();
        credit_Hours_txt_3->raise();
        prerequisites_table_3->raise();
        crs_name_txt_3->raise();
        semester_txt_3->raise();
        back_btn_viewpre->raise();
        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(email_fild, pass_fild);
        QWidget::setTabOrder(pass_fild, admin_btn);
        QWidget::setTabOrder(admin_btn, stud_btn);
        QWidget::setTabOrder(stud_btn, loginswitch_btn);
        QWidget::setTabOrder(loginswitch_btn, registerswitch_btn);
        QWidget::setTabOrder(registerswitch_btn, forgpas_btn);
        QWidget::setTabOrder(forgpas_btn, login_btn);
        QWidget::setTabOrder(login_btn, email_fild_2);
        QWidget::setTabOrder(email_fild_2, pass_fild_2);
        QWidget::setTabOrder(pass_fild_2, Fir_name_fild);
        QWidget::setTabOrder(Fir_name_fild, las_name_fild);
        QWidget::setTabOrder(las_name_fild, ID_fild);
        QWidget::setTabOrder(ID_fild, register_switch);
        QWidget::setTabOrder(register_switch, loginswitch_btn_2);
        QWidget::setTabOrder(loginswitch_btn_2, Register_btn);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Learnova", nullptr));
        email_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "   Email", nullptr));
        forgpas_btn->setText(QString());
        Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        admin_lbl->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        Learnova_text->setText(QCoreApplication::translate("MainWindow", "LEARNOVA", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        registerswitch_btn->setText(QString());
        loginswitch_btn->setText(QString());
        pass_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Password", nullptr));
        stud_lbl->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
        stud_btn->setText(QString());
        admin_btn->setText(QString());
        forgpas_txt->setText(QCoreApplication::translate("MainWindow", "Forgot Password?", nullptr));
        Register->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        error_lbl->setText(QCoreApplication::translate("MainWindow", "Email is incorrect", nullptr));
        hidded_pic_2->setText(QString());
        hidden_pass_btn_2->setText(QString());
        pass_fild_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Password", nullptr));
        Learnova_text_2->setText(QCoreApplication::translate("MainWindow", "LEARNOVA", nullptr));
        Register_btn->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        Register_2->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        register_switch->setText(QString());
        email_fild_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "   Email", nullptr));
        loginswitch_btn_2->setText(QString());
        Login_2->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        Fir_name_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "  First Name", nullptr));
        las_name_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Last Name", nullptr));
        ID_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "  ID", nullptr));
        hidden_pass_btn_3->setText(QString());
        hidded_pic_3->setText(QString());
        err_email->setText(QCoreApplication::translate("MainWindow", "Invalid Email", nullptr));
        err_pass->setText(QCoreApplication::translate("MainWindow", "Password must be at least 8 characters", nullptr));
        err_fna->setText(QCoreApplication::translate("MainWindow", "Invalid Name", nullptr));
        err_lna->setText(QCoreApplication::translate("MainWindow", "Invalid Name", nullptr));
        err_id->setText(QCoreApplication::translate("MainWindow", "Invalid ID", nullptr));
        Learnova_text_3->setText(QCoreApplication::translate("MainWindow", "LEARNOVA", nullptr));
        msg_txt->setText(QCoreApplication::translate("MainWindow", "We\342\200\231ve sent a verification code to your email \342\200\234\342\200\235  ", nullptr));
        back_pic->setText(QString());
        back_btn->setText(QString());
        verifi_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "Verification Code", nullptr));
        check_btn->setText(QCoreApplication::translate("MainWindow", "Check", nullptr));
        error_txt->setText(QCoreApplication::translate("MainWindow", "Verification code is incorrect", nullptr));
        confirm_btn->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        new_pass_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "  New Password", nullptr));
        errorsizepass_txt->setText(QCoreApplication::translate("MainWindow", "Password must be at least 8 characters", nullptr));
        hidden_pass_btn->setText(QString());
        hidded_pic->setText(QString());
        Logoutuser_btn->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        View_grad_btn->setText(QCoreApplication::translate("MainWindow", "View Grades", nullptr));
        Mycourses_btn->setText(QCoreApplication::translate("MainWindow", "My Courses", nullptr));
        Hellouser_txt->setText(QCoreApplication::translate("MainWindow", "Hello Atta", nullptr));
        no_courses_lbl_2->setText(QCoreApplication::translate("MainWindow", "There are no courses", nullptr));
        Register_course_btn->setText(QCoreApplication::translate("MainWindow", "Register Course", nullptr));
        Print_report_btn->setText(QCoreApplication::translate("MainWindow", "Print Report", nullptr));
        no_mycourses_lbl->setText(QCoreApplication::translate("MainWindow", "You didn't register any Course", nullptr));
        Mycourses_txt->setText(QCoreApplication::translate("MainWindow", "My Courses", nullptr));
        back_pic_mycrs->setText(QString());
        back_btn_mycrs->setText(QString());
        availablecrs_txt->setText(QCoreApplication::translate("MainWindow", "Available Courses", nullptr));
        back_pic_avlcrs->setText(QString());
        no_avlcourses_lbl->setText(QCoreApplication::translate("MainWindow", "No Available Courses", nullptr));
        back_btn_avlcrs->setText(QString());
        instructor_txt_2->setText(QCoreApplication::translate("MainWindow", "Instructor", nullptr));
        credit_Hours_txt_2->setText(QCoreApplication::translate("MainWindow", "Credit Hours:", nullptr));
        semester_txt_2->setText(QCoreApplication::translate("MainWindow", "Semester:", nullptr));
        back_btn_regiscrs->setText(QString());
        no_prerequisites_lbl_2->setText(QCoreApplication::translate("MainWindow", "No Prerequisites", nullptr));
        Prerequisites_txt_2->setText(QCoreApplication::translate("MainWindow", "Prerequisites", nullptr));
        crs_name_txt_2->setText(QCoreApplication::translate("MainWindow", "Course Name", nullptr));
        back_pic_regiscrs->setText(QString());
        regiscrs_btn->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        succ_regiscrs_txt->setText(QCoreApplication::translate("MainWindow", "You have registered this course successfully", nullptr));
        back_btn_viewgrd->setText(QString());
        back_pic_viewgrd->setText(QString());
        overall_gpa_txt->setText(QCoreApplication::translate("MainWindow", "Overall GPA : 3.99 (A+)", nullptr));
        no_grades_lbl->setText(QCoreApplication::translate("MainWindow", "No Grades", nullptr));
        display_grades_btn->setText(QCoreApplication::translate("MainWindow", "Display", nullptr));
        semester_selector->setCurrentText(QString());
        semester_selector->setPlaceholderText(QCoreApplication::translate("MainWindow", " Semester", nullptr));
        err_sems->setText(QCoreApplication::translate("MainWindow", "No selected semester", nullptr));
        Logoutadmin_btn->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        Hello_txt->setText(QCoreApplication::translate("MainWindow", "Hello Admin", nullptr));
        Add_course_btn->setText(QCoreApplication::translate("MainWindow", "Add Course", nullptr));
        Add_admin_btn->setText(QCoreApplication::translate("MainWindow", "Add Admin ", nullptr));
        Manage_grad_btn->setText(QCoreApplication::translate("MainWindow", "Manage Grades", nullptr));
        no_courses_lbl->setText(QCoreApplication::translate("MainWindow", "There are no courses", nullptr));
        Learnova_text_5->setText(QCoreApplication::translate("MainWindow", "LEARNOVA", nullptr));
        Add_admin_txt->setText(QCoreApplication::translate("MainWindow", "ADD AN ADMIN", nullptr));
        back_pic_adm->setText(QString());
        back_btn_adm->setText(QString());
        las_name_fild_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Last Name", nullptr));
        err_lna_3->setText(QCoreApplication::translate("MainWindow", "Invalid Name", nullptr));
        pass_fild_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Password", nullptr));
        ID_fild_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "  ID", nullptr));
        err_email_3->setText(QCoreApplication::translate("MainWindow", "Invalid Email", nullptr));
        err_pass_3->setText(QCoreApplication::translate("MainWindow", "Password must be at least 8 characters", nullptr));
        err_id_3->setText(QCoreApplication::translate("MainWindow", "Invalid ID", nullptr));
        err_fna_3->setText(QCoreApplication::translate("MainWindow", "Invalid Name", nullptr));
        Fir_name_fild_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "  First Name", nullptr));
        email_fild_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "   Email", nullptr));
        Add_adm_btn->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        hidden_pass_btn_4->setText(QString());
        hidded_pic_4->setText(QString());
        succ_adm_txt->setText(QCoreApplication::translate("MainWindow", "Admin has been added successfully ", nullptr));
        Learnova_text_4->setText(QCoreApplication::translate("MainWindow", "LEARNOVA", nullptr));
        Add_crs_txt->setText(QCoreApplication::translate("MainWindow", "ADD A COURSE", nullptr));
        Instruc_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Instructor", nullptr));
        Semester_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Semester", nullptr));
        Credit_hrs_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Credit Hours", nullptr));
        course_name_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Course Name", nullptr));
        Add_crs_btn->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        back_btn_crs->setText(QString());
        back_pic_crs->setText(QString());
        err_semester->setText(QCoreApplication::translate("MainWindow", "Invalid Number", nullptr));
        err_crs_name->setText(QCoreApplication::translate("MainWindow", "Invalid Course Name", nullptr));
        err_credit_hrs->setText(QCoreApplication::translate("MainWindow", "Invaild Number", nullptr));
        err_instruc->setText(QCoreApplication::translate("MainWindow", "Invalid Name", nullptr));
        succ_txt->setText(QCoreApplication::translate("MainWindow", "Course has been added successfully ", nullptr));
        back_btn_upcrs->setText(QString());
        back_pic_upcrs->setText(QString());
        crs_name_txt->setText(QCoreApplication::translate("MainWindow", "Course Name", nullptr));
        instructor_txt->setText(QCoreApplication::translate("MainWindow", "Instructor", nullptr));
        credit_Hours_txt->setText(QCoreApplication::translate("MainWindow", "Credit Hours:", nullptr));
        semester_txt->setText(QCoreApplication::translate("MainWindow", "Semester:", nullptr));
        Prerequisites_txt->setText(QCoreApplication::translate("MainWindow", "Prerequisites", nullptr));
        no_prerequisites_lbl->setText(QCoreApplication::translate("MainWindow", "No Prerequisites", nullptr));
        Prerequisite_add_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "   Prerequisite Name", nullptr));
        Prerequisite_rem_fild->setPlaceholderText(QCoreApplication::translate("MainWindow", "   Prerequisite Name", nullptr));
        add_btn->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        remove_btn->setText(QCoreApplication::translate("MainWindow", "REMOVE", nullptr));
        remove_crs_btn->setText(QCoreApplication::translate("MainWindow", "Remove Course", nullptr));
        err_prereq_add_lbl->setText(QCoreApplication::translate("MainWindow", "Invalid Prerequisite Name", nullptr));
        succ_addpre_txt->setText(QCoreApplication::translate("MainWindow", "Prerequisite has been added successfully", nullptr));
        err_prereq_remo_lbl->setText(QCoreApplication::translate("MainWindow", "Invalid Prerequisite Name", nullptr));
        succ_remopre_txt->setText(QCoreApplication::translate("MainWindow", "Prerequisite has been removed successfully", nullptr));
        instructor_txt_3->setText(QCoreApplication::translate("MainWindow", "Instructor", nullptr));
        no_prerequisites_lbl_3->setText(QCoreApplication::translate("MainWindow", "No Prerequisites", nullptr));
        back_btn_viewpre->setText(QString());
        back_pic_viewpre->setText(QString());
        Prerequisites_txt_3->setText(QCoreApplication::translate("MainWindow", "Prerequisites", nullptr));
        credit_Hours_txt_3->setText(QCoreApplication::translate("MainWindow", "Credit Hours:", nullptr));
        crs_name_txt_3->setText(QCoreApplication::translate("MainWindow", "Course Name", nullptr));
        semester_txt_3->setText(QCoreApplication::translate("MainWindow", "Semester:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
