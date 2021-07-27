#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

class university{
    private:
        string Fname, Lname;
        long long int mob;
        string state;
        string city;
        float tenP;
        float twelP;

    public:

        long long int reg_no;

        university(void){
            cout<<endl;
            cout<<"  \t\t**************************************************************************************"<<endl;
            cout<<"    \t\t*  _           _   _______   _          ________   ______   _____   _____   _______  *"<<endl;
            cout<<"    \t\t* | |         | | |  _____| | |        |  ______| |  __  | |  _  | |  _  | |  _____| *"<<endl;
            cout<<"    \t\t* | |  _____  | | | |_____  | |        | |        | |  | | | | | |_| | | | | |_____  *"<<endl;
            cout<<"    \t\t* | | |  _  | | | |  _____| | |        | |        | |  | | | | |_____| | | |  _____| *"<<endl;
            cout<<"    \t\t* | |_| | | |_| | | |_____  | |______  | |______  | |__| | | |         | | | |_____  *"<<endl;
            cout<<"    \t\t* |_____| |_____| |_______| |________| |________| |______| |_|         |_| |_______| *"<<endl;
            cout<<"    \t\t*                                                                                    *"<<endl;
            cout<<"  \t\t**************************************************************************************"<<endl;
            cout<<endl;
            system("pause");
            system("cls");
            int n;
            while(true){
                
                cout<<endl<<endl;
                cout<<"\t\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
                cout<<"\t\t\t\t-------------<-ERP MANAGEMENT SYSTEM->-------------"<<endl;
                cout<<"\t\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
                cout<<endl;

                cout<<endl;
                cout<<"============================="<<endl;
                cout<<"|| 1. LOGIN AS ERP MANAGER ||"<<endl;
                cout<<"|| 2. LOGIN AS STUDENT     ||"<<endl;
                cout<<"|| 3. LOGIN AS TEACHER     ||"<<endl;
                cout<<"|| 0. EXIT THE ERP         ||"<<endl;
                cout<<"============================="<<endl;

                cout<<"\nenter your choice : ";
                cin>>n;
                system("cls");
                if(n==0){
                    cout<<"\n\nTHANK YOU FOR VISITING\n"<<endl;
                    break;
                }
                switch (n)
                {
                case 1:
                    cout<<endl;
                    erp();
                    cout<<endl;
                    system("cls");
                    break;
                case 2:
                    cout<<endl;
                    loginasstudnet();
                    cout<<endl;
                    system("cls");
                    break;
                case 3:
                    cout<<endl;
                    loginasteacher();
                    cout<<endl;
                    system("cls");
                    break;
                default:
                    cout<<"\n\nyour input is incorrect"<<endl;
                    break;
                }
            }
            system("pause");
            system("cls");
        }

        void erp();
            void admission();
            void admissiondetails();
            void setDetails();
            void getDetails();
            void perticularData();
            void stuPerformances();
            void seefeedbacks();
            void feecheck();

        void loginasstudnet();
            void assignments();
            void attendance();
            void collegeInfo();
                void collegeProfile();
                void rooms();
                void department();
                void programme();
                void calender();
            void courses();
            void fee();
            void reportcard();
            void performance();
            void feedback();

        void loginasteacher();
        void assignment();
            void giveassign();
        void attendance_T();
            void giveattendance();
            void showattendance();
        void studeperformance();
};

void university :: erp(){
    cout<<"==================================================="<<endl;
    cout<<"----------<-WELCOME !! GOOD TO SEE YOU->-----------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;
    
    while(true){
        int ch;
        start:
        string user, pass;
        cout<<"Enter Loginid : ";
        cin>>user;
        cout<<"Enter Password : ";
        ch = getch();

        while(ch != 13){
            pass.push_back(ch);
            cout<<"*";
            ch = getch();
        }
        if(user == "erpmanagement" && pass == "erp1234"){
            break;
        }
        else{
            cout<<"wrong password"<<endl;
            goto start;
        }
    }
    
    while(true){
        cout<<endl;
        cout<<"====================================="<<endl;
        cout<<"|| 1. ADMISSION                    ||"<<endl;
        cout<<"|| 2. ADMISSION DETAILS            ||"<<endl;
        cout<<"|| 3. STUDENT DETAILS REGISTRATION ||"<<endl;
        cout<<"|| 4. REGISTRATION DETAILS         ||"<<endl;
        cout<<"|| 5. SEARCH DETAILS FOR A STUDNET ||"<<endl;
        cout<<"|| 6. SHOW STUDENT PERFORMANCES    ||"<<endl;
        cout<<"|| 7. CHECK FEES                   ||"<<endl; 
        cout<<"|| 8. FEEDBACKS                    ||"<<endl;
        cout<<"|| 0. LOG OUT                      ||"<<endl;
        cout<<"====================================="<<endl;
        cout<<endl;

        int n;
        cout<<"enter your choice : ";
        cin>>n;
        if(n == 0){
            cout<<"thank you.. See you again.."<<endl;
            break;
        }

        switch (n)
        {
        case 1:
            cout<<endl;
            admission();
            cout<<endl;
            break;
        case 2:
            cout<<endl;
            admissiondetails();
            cout<<endl;
            break;
        case 3:
            cout<<endl;
            setDetails();
            cout<<endl;
            break;
        case 4:
            cout<<endl;
            getDetails();
            cout<<endl;
            break;
        case 5:
            cout<<endl;
            perticularData();
            cout<<endl;
            break;
        case 6:
            cout<<endl;
            stuPerformances();
            cout<<endl;
            break;
        case 7:
            cout<<endl;
            feecheck();
            cout<<endl;
            break;
        case 8:
            cout<<endl;
            seefeedbacks();
            cout<<endl;
            break;
        default:
            cout<<"retry "<<endl;
            break;
        }
    }
}

void university :: admission(){
    ofstream f1;
    f1.open("AdmissionData.txt", ios::app);

    cout<<"\n================================================="<<endl;
    cout<<"----------------ADMISSION SECTION----------------"<<endl;
    cout<<"================================================="<<endl;
    cout<<endl;

    cout<<"enter name of the student : ";
    cin>>Fname;
    cin>>Lname;
    f1<<Fname<<" ";
    f1<<Lname<<"\t";
    while(true){
        cout<<"enter mobile no : ";
        cin>>mob;
        long long int check = mob;
        int num = 0;

        while(check > 0){
            check /= 10;
            num++;
        }
        if(num == 10){
            f1<<mob<<"\t\t";
            break;
        }
        else{
            cout<<"\nyou entered the wrong mobile no.. Please enter again"<<endl;
            cout<<endl;
        }
    }
    cout<<"enter state : ";
    cin>>state;
    f1<<state<<"\t\t";
    cout<<"enter city : ";
    cin>>city;
    f1<<city<<"\t\t";
    while(true){
        cout<<"enter 10th percentage (should be above 50%) : ";
        cin>>tenP;
        if(tenP > 100 || tenP < 0){
            cout<<"\nyou entered the wrong data.. enter the data again.."<<endl;
            cout<<endl;
        }
        else if(tenP < 50 && tenP >= 0){
            cout<<"you are not eligible because your 10th perctntage is less than 50%"<<endl;
            break;
        }
        else if(tenP >= 50 && tenP <= 100){
            f1<<tenP<<"\t\t";
            break;
        }
    }
    if(tenP < 50){
        return;
    }

    while(true){
        cout<<"enter 12th percentage (should be above 40%) : ";
        cin>>twelP;
        if(twelP > 100 || twelP < 0){
            cout<<"\nyou entered the wrong data.. enter the data again.."<<endl;
            cout<<endl;
        }
        else if(twelP < 40 && twelP >=0){
            cout<<"you are not eligible because your 12th perctntage is less than 40%"<<endl;
            break;
        }
        else if(twelP >= 40 && twelP <= 100){
            f1<<twelP<<"\t\t\n\n";
            break;
        }
    }
    if(twelP < 40){
        return;
    }
    cout<<endl<<"ADMISSION SUCESSFUL"<<endl;
    cout<<"SOON THE STUDENT WILL BE ABLE TO ATTEND CLASSES"<<endl;
    f1.close();
    system("pause");
    system("cls");
}

void university :: admissiondetails(){
    string fnam;
    string lnam;
    long long int mob;
    string state;
    string city;
    float ten;
    float twel;

    ifstream details;
    details.open("AdmissionData.txt", ios::app);

    cout<<"\n==========================================================="<<endl;
    cout<<"-------------------<-ADMISSION DETAILS->-------------------"<<endl;
    cout<<"==========================================================="<<endl<<endl;
    cout<<endl;
    cout<<"**************************************************************************"<<endl;

    while(details >> fnam >> lnam >> mob >> state >> city >> ten >> twel){
        cout<<fnam<<" "<<lnam<<"\t\t"<<mob<<"\t"<<state<<"\t"<<city<<"\t"<<ten<<"\t"<<twel<<endl;
    }
    cout<<"__________________________________________________________________________"<<endl;
    system("pause");
    system("cls");
}

void university :: setDetails(){
    string fnam, lnam;
    long long int regNo;
    string email, course, branch;
    char sec;

    ofstream DataEntry;
    DataEntry.open("AllStudentData.txt", ios::app);

    cout<<"\n==================================================="<<endl;
    cout<<"----------------<-DETAILS SECTION->----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"***************************************"<<endl;
    cout<<"name of the student : ";
    cin>>fnam;
    cin>>lnam;
    DataEntry<<fnam<<" ";
    DataEntry<<lnam<<" ";

    while(true){
        cout<<"Reg no of the student : ";
        cin>>regNo;

        ifstream read;
        read.open("AllStudentData.txt", ios::app);

        string fname_, lname_;
        long long int reg_;
        string email_;
        string course_, branch_;
        char sec_;
        bool found = false;
        int number = 0;

        while(read >> fname_ >> lname_ >> reg_ >> email_ >> course_ >> branch_ >> sec_){
            if(reg_ == regNo){
                cout<<"\nTHIS REGISTRATION NUMBER IS ALREADY EXISTS.."<<endl;
                cout<<"Please give an unique registration no"<<endl;
                cout<<endl;
                found = true;
            }
            number++;
        }
        if(!found){
            long long int check = regNo;
            int num = 0;

            while(check > 0){
                check /= 10;
                num++;
            }
            if(num == 12){
                DataEntry<<regNo<<"\t";
                break;
            }
            else{
                cout<<"\nenter 12 digit registration no"<<endl;
                cout<<endl;
            }
        }
        else{
            cout<<"you should try this reg no : "<<regNo+number<<endl<<endl;
        }
    }

    cout<<"registration email of the studnet(should include @cutm.ac.in) : ";
    cin>>email;
    DataEntry<<email<<"\t";
    cout<<"course the student taken : ";
    cin>>course;
    DataEntry<<course<<"\t";
    cout<<"branch of the student : ";
    cin>>branch;
    DataEntry<<branch<<"\t";
    while(true){
        cout<<"sec of the student : ";
        cin>>sec;
        if(sec == 'a' || sec == 'b' || sec == 'c'){
            DataEntry<<sec<<"\t\n\n";
            break;
        }
        else{
            cout<<"unfortunately we have only 3 sections a, b and c"<<endl;
            cout<<"please enter the right section of the student"<<endl;
        }
    }
    DataEntry.close();
    cout<<"SUCESSFULLY REGISTERED"<<endl;
    system("pause");
    system("cls");

    while(true){
        cout<<endl;
        cout<<"=============================================="<<endl;
        cout<<"|| 1. get all students information          ||"<<endl;
        cout<<"|| 2. show perticular students information  ||"<<endl;
        cout<<"|| 0. go back                               ||"<<endl;
        cout<<"=============================================="<<endl;
        cout<<endl;
        int n;
        cout<<"enter your choice : ";
        cin>>n;
        if(n==0){
            cout<<"hope you got the info"<<endl;
            break;
        }

        switch (n)
        {
        case 1:
            cout<<endl;
            getDetails();
            cout<<endl;
            break;
        case 2:
            cout<<endl;
            perticularData();
            cout<<endl;
            break;
        default:
            cout<<"oops enter again"<<endl;
        }
    }
}

void university :: getDetails(){
    string fnam, lnam;
    long long int regNo;
    string email, course, branch;
    char sec;

    ifstream showfile("AllStudentData.txt", ios::app);

    cout<<"\n==================================================="<<endl;
    cout<<"-----------<-ALL STUDENTS INFORMATION->------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"*************************************************************************************************"<<endl;
    while(showfile >> fnam >> lnam >> regNo >> email >> course >> branch >> sec){
        cout<<fnam<<" "<<lnam<<"\t\t "<<regNo<<"\t "<<email<<"\t "<<course<<"\t\t "<<branch<<"\t"<<sec<<endl;
    cout<<"__________________________________________________________________________________________________"<<endl;
    }
    showfile.close();
    system("pause");
    system("cls");
}

void university :: perticularData(){
    
    string fnam, lnam;
    long long int regNo;
    string email, course, branch;
    char sec;
    long long int n;

    ifstream showData;
    showData.open("AllStudentData.txt", ios::app);

    cout<<"enter the registration no. : ";
    cin>>n;

    bool found = false;
    
    cout<<"\n==================================================="<<endl;
    cout<<"----------<-SINGLE STUDENTS INFORMATION->----------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    while(showData >> fnam >> lnam >> regNo >> email >> course >> branch >> sec){
        if(n == regNo){
            cout<<endl<<endl;
            cout<<"\n********************************************"<<endl;
            cout<<"|*| name of the studnet = "<<fnam<<" "<<lnam<<endl;
            cout<<"|*| regestration no = "<<regNo<<endl;
            cout<<"|*| registration email id = "<<email<<endl;
            cout<<"|*| course the student taken = "<<course<<endl;
            cout<<"|*| the branch of the student = "<<branch<<endl;
            cout<<"|*| the student belonging to sec = "<<sec<<endl;
            cout<<"============================================"<<endl;
            cout<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<endl;
        cout<<"********************************************"<<endl;
        cout<<"the studnets data is not present in the erp"<<endl;
        cout<<"============================================"<<endl;
    }
    showData.close();
    system("pause");
    system("cls");
}

void university :: stuPerformances(){

    string fnam;
    string lnam;
    long long int reg;
    string course;
    string branch;
    int m1, m2, m3, m4, m5;

    ifstream stuperf;
    stuperf.open("5_PERFORMANCE.TXT");
    
    cout<<"\n==================================================="<<endl;
    cout<<"-------------<-STUDENTS PERFORMANCE->--------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"*****************************************************************"<<endl;

    while(stuperf >> fnam >> lnam >> reg >> course >> branch >> m1 >> m2 >> m3 >> m4 >> m5){
        cout<<fnam<<" "<<lnam<<"    "<<reg<<"  "<<course<<"     "<<branch<<"   "<<m1<<"  "<<m2<<"  "<<m3<<"  "<<m4<<"  "<<m5<<endl;
    }
    cout<<"_________________________________________________________________"<<endl;

    stuperf.close();
    system("pause");
    system("cls");
}

void university :: feecheck(){

    string fnam;
    string lnam;
    long long int reg;

    string course;
    string branch;
    int totalfee;
    int feegiven;

    ifstream feech;
    feech.open("4_FEE.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"----------<-FEE DETAILS OF ALL STUDENTS->----------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"============================================================"<<endl;

    while(feech >> fnam >> lnam >> reg >> course >> branch >> totalfee >> feegiven){
        cout<<"____________________________________________________________"<<endl;
        cout<<"NAME : "<<fnam<<" "<<lnam<<"     "<<reg<<"     "<<course<<"     "<<branch<<endl;
        cout<<"TOTAL FEE : "<<totalfee<<"      "<<"FEE GIVEN : "<<feegiven<<"      "<<endl;
        cout<<"FEE PENDING = "<<totalfee-feegiven<<endl<<endl;
        cout<<"____________________________________________________________"<<endl;
    }
    feech.close();
    system("pause");
    system("cls");
}


void university :: seefeedbacks(){

    string fnam;
    string lnam;
    long long int reg;

    string course;
    string branch;
    int f1, f2, f3, f4, f5, f6, f7;

    ifstream seefeed;
    seefeed.open("6_FEEDBACK.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"-----------<-FEEDBACKS OF ALL STUDENTS->-----------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    while(seefeed >> fnam >> lnam >> reg >> course >> branch >> f1 >> f2 >> f3 >> f4 >> f5 >> f6 >> f7){
        cout<<endl;
        cout<<"NAME : "<<fnam<<" "<<lnam<<"  =  ";
        cout<<"REG NO : "<<reg<<"  =  ";
        cout<<"COURSE : "<<course<<"  =  ";
        cout<<"BRANCH : "<<branch<<endl;
        cout<<"FEEDBACKS :: "<<"q1 = "<<f1<<", q2 = "<<f2<<", q3 = "<<f3<<", q4 = "<<f4<<", q5 = "<<f5<<", q6 = "<<f6<<", q7 = "<<f7<<endl<<endl;
    }
    seefeed.close();
    system("pause");
    system("cls");
}

void university :: loginasstudnet(){

    string fnam, lnam;
    long long int regNo;
    string email, course, branch;

    char sec;
    long long int reg;
    long long int password;
    bool found = false;
    int n;
    
    cout<<"\n==================================================="<<endl;
    cout<<"----------<-WELCOME !! GOOD TO SEE YOU->-----------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"enter your registration no : ";
    cin>>reg_no;

    ifstream f1("AllStudentData.txt", ios::app);

    while(f1 >> fnam >> lnam >> regNo >> email >> course >> branch >> sec){
        if(reg_no == regNo){
            cout<<"enter your password : ";
            cin>>password;
            if(password == reg_no){
                found = true;
                break;
            }
        }
    }

    if(!found){
        cout<<endl;
        cout<<"========================"<<endl;
        cout<<"|| unknown user found ||"<<endl;
        cout<<"========================"<<endl;
        return;
    }

    if(found){
        while(true){
            cout<<endl;
            cout<<"============================================================"<<endl;
            cout<<"|| 1. ASSIGNMENTS\t2. ATTENDANCE\t3. COLLEGE INFO   ||\n";
            cout<<"|| 4. COURSES\t\t5. FEES\t\t6. MY REPORT CARD ||"<<endl;
            cout<<"|| 7. PERFORMANCE\t8. FEEDBACK\t0. LOGOUT         ||"<<endl;
            cout<<"============================================================"<<endl;

            ifstream assign("ASSIGNMENTS.TXT", ios::app);

            cout<<"\nEnter your choice : ";
            cin>>n;
            if(n == 0){
                cout<<"\nthank you for visiting\n";
                break;
            }

            switch (n)
            {
            case 1:
                cout<<endl;
                assignments();
                cout<<endl;
                break;
            case 2:
                cout<<endl;
                attendance();
                cout<<endl;
                break;
            case 3:
                cout<<endl;
                collegeInfo();
                cout<<endl;
                break;
            case 4:
                cout<<endl;
                courses();
                cout<<endl;
                break;
            case 5:
                cout<<endl;
                fee();
                cout<<endl;
                break;
            case 6:
                cout<<endl;
                reportcard();
                cout<<endl;
                break;
            case 7:
                cout<<endl;
                performance();
                cout<<endl;
                break;
            case 8:
                cout<<endl;
                feedback();
                cout<<endl;
                break;
            default:
                cout<<"\nenter the right key"<<endl<<endl;
            }
        }
    }
    f1.close();
    system("pause");
    system("cls");
}

void university :: assignments(){
    string date;
    string sub;
    string assign_no;
    ifstream read("ASSIGNMENTS.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-ASSIGNMENT SECTION->---------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;
    cout<<"******************************************"<<endl;
    while(read >> date >> sub >> assign_no){
        cout<<date<<"      "<<sub<<"      "<<assign_no<<endl;
    }
    cout<<"_________________________________________"<<endl;
    read.close();
    system("pause");
    system("cls");
}

void university :: attendance(){

    ifstream atten("ATTENDANCE.TXT", ios::app);
    string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
    
    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-ATTENDANCE SECTION->---------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    while (atten >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >>s7 >> s8 >> s9 >> s10){
        cout<<s1<<"    "<<s2<<"     "<<s3<<"    "<<s4<<"    "<<s5<<"    "<<s6<<"     "<<s7<<"     "<<s8<<"     "<<s9<<"     "<<s10<<endl;
    }
    atten.close();
    system("pause");
    system("cls");
}

void university :: collegeInfo(){
    while(1){
        
        cout<<"\n==================================================="<<endl;
        cout<<"----------<-COLLEGE INFORMATION SECTION->----------"<<endl;
        cout<<"==================================================="<<endl;
        cout<<endl;

        cout<<"========================================================="<<endl;
        cout<<"|| 1. COLLEGE PROFILE\t 2. ROOMS\t 3. DEPARTMENT ||"<<endl;
        cout<<"|| 4. PROGRAMME\t\t 5. CALENDER\t 0. GO BACK    ||"<<endl;
        cout<<"========================================================="<<endl;
        cout<<endl;

        int n;
        cout<<"enter your choice : ";
        cin>>n;
        if(n == 0){
            cout<<""<<endl;
            break;
            break;
        }

        switch (n)
        {
        case 1:
            cout<<endl<<endl;
            collegeProfile();
            cout<<endl;
            break;
        case 2:
            cout<<endl;
            rooms();
            cout<<"____________________"<<endl;
            cout<<endl;
            break;
        case 3:
            cout<<endl;
            department();
            cout<<"_________________________________________"<<endl;
            cout<<endl;
            break;
        case 4:
            cout<<endl;
            programme();
            cout<<"__________________________________________________"<<endl;
            cout<<endl;
            break;
        case 5:
            cout<<endl;
            calender();
            cout<<endl;
            break;
        default:
            cout<<"\nre-enter the key"<<endl<<endl;
        }
    }
}

void university :: collegeProfile(){
    string s1, s2, s3;
    ifstream collprof("1.1_COLLEGEPROFILE.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"----------------<-COLLEGE PROFILE->----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl<<endl;

    cout<<"*************************************************"<<endl;
    while(collprof >> s1 >> s2 >> s3){
        cout<<s1<<" "<<s2<<" "<<s3<<endl<<endl;
    }
    collprof.close();
    system("pause");
    system("cls");
}

void university :: rooms(){
    string s11, s22;
    ifstream room("1.2_ROOMS.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"------------<-INFORMATION OF ALL ROOMS->-----------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"**********************"<<endl;
    while(room >> s11 >> s22){
        cout<<s11<<"   "<<s22<<endl;
    }
    room.close();
    system("pause");
    system("cls");
}

void university :: department(){
    string s11, s12, s13, s14, s15;
    ifstream depa("1.3_DEPARTMENT.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"----------------<-COLLEGE PROFILE->----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;
            
    cout<<"**********************************************"<<endl;
    while(depa >> s11 >> s12 >> s13 >> s14 >> s15){
        cout<<s11<<" "<<s12<<"   "<<s13<<"   "<<s14<<" "<<s15<<endl;
    }
    depa.close();
    system("pause");
    system("cls");
}

void university :: programme(){
    string s11, s12;
    ifstream prog("1.4_PROGRAMME.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"---------------<-PROGRAMME SECTION->---------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"****************************************************************"<<endl;
    while(prog >> s11 >> s12){
        cout<<s11<<"    "<<s12<<endl;
    }
    prog.close();
    system("pause");
    system("cls");
}

void university :: calender(){
    string s11, s12, s13;
    ifstream calen("1.5_CALENDER.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"---------------<-CALENDER SECTION->----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"***************************"<<endl;
    while(calen >> s11 >> s12 >> s13){
        cout<<s11<<"   "<<s12<<"   "<<s13<<endl;
    }
    cout<<"_______________________________"<<endl;
    calen.close();
    system("pause");
    system("cls");
}

void university :: courses(){
    string s11, s12, s13, s14;
    ifstream cour("2_COURSES.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"-----------------<-COURSE SECTION->----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"*************************************************"<<endl;
    while(cour >> s11 >> s12 >> s13 >> s14){
        cout<<s11<<"  "<<s12<<"  "<<s13<<"  "<<s14<<endl;
    }
    cout<<"*************************************************"<<endl;
    cout<<"_________________________________________________"<<endl;
    cour.close();
    system("pause");
    system("cls");
}

void university :: fee(){
    string fnam, lnam;
    long long int reg;
    string course, branch;
    int totalFee, Feegiven;

    ifstream fees("4_FEE.TXT", ios::app);

    cout<<"\n==================================================="<<endl;
    cout<<"------------------<-FEE SECTION->------------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    long long int n;

    bool found = false;
    while(fees >> fnam >> lnam >> reg >> course >> branch >> totalFee >> Feegiven){
        if(reg_no == reg){
            cout<<"*****************************************"<<endl;
            cout<<"name of the student : "<<fnam<<" "<<lnam<<endl;
            cout<<"registration no : "<<reg<<endl;
            cout<<"course : "<<course<<endl;
            cout<<"branch : "<<branch<<endl;
            cout<<"total fee : "<<totalFee<<endl;
            cout<<"you have paid : "<<Feegiven<<endl;
            cout<<"Fee pending : "<<(totalFee - Feegiven)<<endl;
            cout<<"----------------------------"<<endl;
        }
    }
    fees.close();
    system("pause");
    system("cls");
}

void university :: reportcard(){
    long long int reg;
    string fnam, lnam;
    string course, branch;
    char sec;
    float cgpa;
    int mark;

    ifstream repo("3_REPORTCARD.TXT", ios::app);
    long long int n;

    
    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-REPORT CARD SECTION->--------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    bool found = false;
    while(repo >> reg >>fnam >> lnam >> course >> branch >> sec >> cgpa >> mark){
        if(reg_no == reg){
            cout<<"\n***************************************"<<endl;
            cout<<"name of the student : "<<fnam<<" "<<lnam<<endl;
            cout<<"registration no : "<<reg<<endl;
            cout<<"course : "<<course<<endl;
            cout<<"branch : "<<branch<<endl;
            cout<<"sec : "<<sec<<endl;
            cout<<"cgpa got in 1st sem : "<<cgpa<<endl;
            cout<<"mark got in internal sem 2 : "<<mark<<endl;
            cout<<"________________________________"<<endl<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<endl;
        cout<<"********************************************"<<endl;
        cout<<"the studnets data is not present in the list"<<endl;
        cout<<"============================================"<<endl;
    }
    repo.close();
    system("pause");
    system("cls");
}

void university :: performance(){
    string fnam, lnam;
    long long int reg;
    string course;
    string branch;
    int cpp, optics, dbms, prob, laplace;

    ifstream perform("5_PERFORMANCE.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-PERFORMANCE SECTION->--------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;
    
    long long int n;
    bool found = false;

    while(perform >> fnam >> lnam >> reg >> course >> branch >> cpp >> optics >> dbms >> prob >> laplace){
        if(reg_no == reg){
            cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
            cout<<"name of the student : "<<fnam<<" "<<lnam<<endl;
            cout<<"registration no : "<<reg<<endl;
            cout<<"course : "<<course<<endl;
            cout<<"branch : "<<branch<<endl<<endl;
            cout<<"*************************"<<endl;
            cout<<"ooss with c++ : "<<cpp<<"/10"<<endl;
            cout<<"optics and optical fibre : "<<optics<<"/10"<<endl;
            cout<<"database management system : "<<dbms<<"/10"<<endl;
            cout<<"probability and statistics : "<<prob<<"/10"<<endl;
            cout<<"laplace and fourior transform : "<<laplace<<"/10"<<endl;
            cout<<"__________________________________________"<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<endl;
        cout<<"********************************************"<<endl;
        cout<<"the studnets data is not present in the list"<<endl;
        cout<<"============================================"<<endl;
    }
    perform.close();
    system("pause");
    system("cls");
}

void university :: feedback(){
    string fname;
    string lname;
    long long reg;
    string degree;
    string branch;
    string messages;
    int n;

    ofstream feedbak;
    feedbak.open("6_FEEDBACK.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"---------------<-FEEDBACK SECTION->----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"ENTER YOUR NAME : ";
    cin>>fname>>lname;
    feedbak<<fname<<" "<<lname<<"    ";
    cout<<"ENTER YOUR REGISTRATION NO : ";
    cin>>reg;
    feedbak<<reg<<"    ";
    cout<<"DEGREE : ";
    cin>>degree;
    feedbak<<degree<<"    ";
    cout<<"BRANCH : ";
    cin>>branch;
    feedbak<<branch<<"    ";
    cout<<endl;
    
    cout<<"we are displaying you some questions you have to rate them from 1 to 5"<<endl<<endl;
    while(1){
        cout<<"TEACHER COVERS THE SYLABUS COMPLETELY IN TIME : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            feedbak<<n<<"  ";
            break;
        }
    }
    while(1){
        cout<<"TEACHER COMES TO THE CLASS ON TIME : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            feedbak<<n<<"  ";
            break;
        }
    }
    while(1){
        cout<<"TEACHING IS WELL PLANNED : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            feedbak<<n<<"  ";
            break;
        }
    }
    while(1){
        cout<<"DID YOU FEEL ENCOURAGE TO ASK QUESTIONS : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            feedbak<<n<<"  ";
            break;
        }
    }
    while(1){
        cout<<"AIMS AND OBJECTIVES MADE CLEAR : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            feedbak<<n<<"  ";
            break;
        }
    }
    while(1){
        cout<<"TEACHER WRITES / DRAWS LEGIBLY : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            feedbak<<n<<"  ";
            break;
        }
    }
    while(1){
        cout<<"TEACHER PROVEDES EXAMPLES OF THE CONCEPT : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            feedbak<<n<<"  "<<endl;
            break;
        }
    }
    feedbak.close();
    system("pause");
    system("cls");
}

void university :: loginasteacher(){
    string loginid;
    string password;
    
    cout<<"\n==================================================="<<endl;
    cout<<"----------<-WELCOME !! GOOD TO SEE YOU->-----------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;
    
    while(true){
        int ch;
        start:
        string user, pass;
        cout<<"Enter Loginid : ";
        cin>>user;
        cout<<"Enter Password : ";
        ch = getch();

        while(ch != 13){
            pass.push_back(ch);
            cout<<"*";
            ch = getch();
        }
        if(user == "asdf1029" && pass == "teach1234"){
            break;
        }
        else{
            cout<<"wrong password"<<endl;
            goto start;
        }
    }

    while(true){
        cout<<endl;
        cout<<"=================================================================="<<endl;
        cout<<"|| 1. ASSIGNMENTS\t2. ATTENDANCE\t3. COLLEGE INFO         ||"<<endl;
        cout<<"|| 4. COURSES\t5. STUDENTS PERFORMANCES\t0. LOG OUT      ||"<<endl;
        cout<<"=================================================================="<<endl;
        
        int n;
        cout<<"\n\nENTER YOUR CHOICE : ";
        cin>>n;
        if(n == 0){
            break;
        }

        switch (n)
        {
        case 1:
            cout<<endl;
            assignment();
            cout<<endl;
            break;
        case 2:
            cout<<endl;
            attendance_T();
            cout<<endl;
            break;
        case 3:
            cout<<endl;
            collegeInfo();
            cout<<endl;
            break;
        case 4:
            cout<<endl;
            courses();
            cout<<endl;
            break;
        case 5:
            cout<<endl;
            studeperformance();
            cout<<endl;
            break;
        default:
            cout<<"re-enter the right key"<<endl;
            break;
        }
    }
}

void university :: assignment(){
    
    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-ASSIGNMENT SECTION->---------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    while (true){
        cout<<endl;
        cout<<"==============================="<<endl;
        cout<<"|| 1. SHOW ASSIGNMENTS GIVEN ||"<<endl;
        cout<<"|| 2. GIVE ASSIGNMENTS       ||"<<endl;
        cout<<"|| 0. GO BACK                ||"<<endl;
        cout<<"==============================="<<endl;

        int n;
        cout<<"\nenter your choice : ";
        cin>>n;
        if(n == 0){
            break;
        }

        switch (n)
        {
        case 1:
            cout<<endl;
            assignments();
            cout<<endl;
            break;
        case 2:
            cout<<endl;
            giveassign();
            cout<<endl;
        default:
            break;
        }
    }
}

void university :: giveassign(){
    string date;
    string subject;
    string assignmentno;

    ofstream give;
    give.open("ASSIGNMENTS.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"----------------<-GIVE ASSIGNMENT->----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"enter date : ";
    cin>>date;
    give<<date<<"\t";
    cout<<"enter subject name : ";
    cin>>subject;
    give<<subject<<"\t";

    cout<<"enter assignment no : ";
    cin>>assignmentno;
    give<<assignmentno<<"\n";
    give.close();
    system("pause");
    system("cls");
}

void university :: attendance_T(){

    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-ATTENDANCE SECTION->---------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    while (true){
        cout<<endl;
        cout<<"=============================="<<endl;
        cout<<"|| 1. SHOW ATTENDANCE GIVEN ||"<<endl;
        cout<<"|| 2. GIVE ATTENDANCE       ||"<<endl;
        cout<<"|| 0. GO BACK               ||"<<endl;
        cout<<"=============================="<<endl;

        int n;
        cout<<"\nenter your choice : ";
        cin>>n;
        if(n == 0){
            break;
        }

        switch (n)
        {
        case 1:
            cout<<endl;
            showattendance();
            cout<<endl;
            break;
        case 2:
            cout<<endl;
            giveattendance();
            cout<<endl;
        default:
            break;
        }
    }
}

void university :: showattendance(){
    string date;
    string fname;
    string lname;
    string colon;
    char PorA;

    ifstream showatt;
    showatt.open("0_GIVEATTENDANCE.TXT", ios::app);

    cout<<"***********************************************"<<endl;

    while(showatt >> date >> fname >> lname >> colon >> PorA){
        cout<<date<<"      "<<fname<<" "<<lname<<"       "<<colon<<"       "<<PorA<<endl;
    }
    cout<<"_______________________________________________"<<endl;
    showatt.close();
    system("pause");
    system("cls");
}

void university :: giveattendance(){
    char PA;
    string fnam, lnam;
    long long int reg;
    string email;
    string course, branch;
    char sec;

    ofstream giveatten;
    giveatten.open("0_GIVEATTENDANCE.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"----------------<-GIVE ATTENDANCE->----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    string colon = ":";
    string date;

    ifstream allstudents;
    allstudents.open("AllStudentData.txt", ios::app);

    cout<<"date : ";
    cin>>date;

    while(allstudents >> fnam >> lnam >> reg >> email >> course >> branch >> sec){
        while(true){
            cout<<fnam<<" "<<lnam<<"   ";
            cin>>PA;
            if(PA == 'p' || PA == 'P' || PA == 'A' || PA == 'a'){
                giveatten<<date<<"    "<<fnam<<" "<<lnam<<"    "<<colon<<"    "<<PA<<endl;
                break;
            }
        }
    }
    giveatten<<endl<<endl;
    giveatten.close();
    allstudents.close();
    system("pause");
    system("cls");
}

void university :: studeperformance(){
    string fnam, lnam;
    long long reg;
    string course, branch;
    string s1, s2, s3, s4, s5;


    ifstream perform;
    perform.open("5_PERFORMANCE.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-STUDENT PERFORMANCE->--------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    while(perform >> fnam >> lnam >> reg >> course >> branch >> s1 >> s2 >> s3 >> s4 >> s5){
        cout<<"***************************************"<<endl;
        cout<<"name of the student : "<<fnam<<" "<<lnam<<endl;
        cout<<"registration no : "<<reg<<endl;
        cout<<"degree : "<<course<<endl;
        cout<<"branch : "<<branch<<endl;
        cout<<"oops with c++ : "<<s1<<"/10"<<endl;
        cout<<"optics and optical fibre : "<<s2<<"/10"<<endl;
        cout<<"laplace and fourior transform : "<<s3<<"/10"<<endl;
        cout<<"probability and statistics : "<<s4<<"/10"<<endl;
        cout<<"database management system : "<<s5<<"/10"<<endl;
        cout<<"__________________________________"<<endl<<endl;
    }
    perform.close();
    system("pause");
    system("cls");
}

int main(){
    university st1;
    return 0;
}