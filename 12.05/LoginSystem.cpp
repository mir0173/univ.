#include "LoginSystem.h"
#include <fstream>
#include <iostream>

void LoginSystem::Load() 
{
    ifstream fin(_fileName.c_str());
    if (!fin) {
        return;
    }

    string type, id, pw;
    while (fin >> type >> id >> pw) {
        if (type == "ADMIN") {
            _users.add(new Admin(id, pw));
        }
        else if (type == "MEMBER") {
            _users.add(new Member(id, pw));
        }
    }
    fin.close();
}

void LoginSystem::Save() const {
    ofstream fout(_fileName.c_str());
    if (!fout) {
        throw FileException("사용자 정보를 저장할 파일을 열 수 없습니다.");
    }

    for (auto it = _users.begin(); it != _users.end(); ++it) {
        User* users = *it;
        fout << users->GetRole() << " " << users->GetId() << " " << users->GetPassword() << "\n";
    }
    fout.close();
}

User* LoginSystem::Login() 
{
    string id, pw;
    cout << "\n[로그인]\n";
    cout << "ID: ";
    cin >> id;
    cout << "PW: ";
    cin >> pw;

    User* users = _users.findIf(id);
    if (users == 0) {
        throw AuthException("존재하지 않는 ID입니다.");
    }
    if (!users->CheckPassword(pw)) {
        throw AuthException("비밀번호가 일치하지 않습니다.");
    }

    cout << users->GetId() << "님, 환영합니다. (" << users->GetRole() << ")\n";
    return users;
}

void LoginSystem::RegisterUser() {
    cout << "\n[회원가입]\n";
    cout << "1. 일반 회원\n";
    cout << "2. 관리자\n";
    cout << "선택: ";

    int type;
    cin >> type;
    if (!cin) {
        cin.clear();
        cin.ignore(100, '\n');
        throw InputException("잘못된 입력입니다.");
    }

    if (type != 1 && type != 2) {
        throw InputException("메뉴는 1 또는 2만 선택 가능합니다.");
    }

    string id, pw;
    cout << "\n새 ID: ";
    cin >> id;



    if (_users.findIf(id) != 0) {
        throw AuthException("이미 존재하는 ID입니다.");
    }

    cout << "비밀번호: ";
    cin >> pw;

    if (type == 1) {
        _users.add(new Member(id, pw));
        cout << "일반 회원 가입 완료.\n";
    }
    else {
        _users.add(new Admin(id, pw));
        cout << "관리자 계정 생성 완료.\n";
    }
}

void LoginSystem::ShowAllUsers() const {
    cout << "\n[전체 사용자 목록]\n";
    for (auto it = _users.begin(); it != _users.end(); ++it) {
        User* users = *it;
        cout << "- " << users->GetId() << " (" << users->GetRole() << ")\n";
    }
}

void LoginSystem::Run() {
    Load();   
    while (true) {
        try {
            cout << "\n===== 로그인 시스템 =====\n";
            cout << "1. 로그인\n";
            cout << "2. 회원가입\n";
            cout << "3. 종료\n";
            cout << "메뉴 선택: ";

            int menu;
            cin >> menu;

            if (!cin) {
                cin.clear();
                cin.ignore(100, '\n');
                throw InputException("잘못된 입력입니다.");
            }

            if (menu == 1) {
                User* users = Login();

                while (true) {
                    users->ShowMenu();
                    cout << "선택: ";
                    int num;
                    cin >> num;

                    if (!cin) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        throw InputException("잘못된 입력입니다.");
                    }

                    if (users->GetRole() == "MEMBER") {
                        if (num == 1) {
                            cout << "\nID: " << users->GetId() << "\n";
                            cout << "PASSWARD: " << users->GetPassword() << "\n";
                            cout << "LEVEL: " << users->GetRole() << "\n";
                        }
                        else if (num == 2) {
                            cout << "로그아웃합니다.\n";
                            break;
                        }
                        else {
                            throw InputException("1~2 사이에서 선택해야 합니다.");
                        }
                    }
                    else if (users->GetRole() == "ADMIN") {
                        if (num == 1) {
                            ShowAllUsers();
                        }
                        else if (num == 2) {
                            cout << "\nID: " << users->GetId() << "\n";
                            cout << "PASSWARD: " << users->GetPassword() << "\n";
                            cout << "LEVEL: " << users->GetRole() << "\n";
                        }
                        else if (num == 3) {
                            cout << "로그아웃합니다.\n";
                            break;
                        }
                        else {
                            throw InputException("잘못된 입력입니다.");
                        }
                    }
                }
            }
            else if (menu == 2) {
                RegisterUser();
            }
            else if (menu == 3) {
                cout << "프로그램을 종료합니다.\n";
                Save();   
                break;
            }
            else {
                throw InputException("잘못된 입력입니다.");
            }
        }
        catch (AppException& e) {
            cout << "[오류 발생] " << e.Type() << "\n";
        }
    }
}
