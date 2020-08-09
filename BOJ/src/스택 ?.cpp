//스택 ~ 10828 @ 백준

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int num_of_cmds, n;
    int stack[10000], pointer;
    char command[6];
    int input_value;
    
    pointer = 0;
    cin >> num_of_cmds;

    for(n=0;n<num_of_cmds;n++){
        cin >> command;
        if(strcmp(command, "push")==0){
            cin >> stack[pointer];
            pointer++;
        }else if(strcmp(command, "pop")==0){
            if(pointer!=0){
            pointer--;
            cout << stack[pointer] << "\n";
            }else{
                cout << -1 << "\n";
            }
        }else if(strcmp(command, "size")==0){
            cout << pointer << "\n";
        }else if(strcmp(command, "empty")==0){
            if(pointer == 0){
                cout << 1 << "\n";
            }else{
                cout << 0 << "\n";
            }
        }else if(strcmp(command, "top")==0){
            if(pointer!=0){
                cout << stack[pointer-1] << "\n";
            }else{
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}





//스택 ~ 10828 @ 백준

// #include <iostream>

// using namespace std;

// int main(){
//     int num_of_cmds, n;
//     int stack[10000], pointer;
//     string command;
    
//     pointer = 0;
//     cin >> num_of_cmds;

//     for(n=0;n<num_of_cmds;n++){
//         cin >> command;
//         if(command == "push"){
//             cin >> stack[pointer];
//             pointer++;
//         }else if(command == "pop"){
//             if(pointer!=0){
//             pointer--;
//             cout << stack[pointer] << "\n";
//             }else{
//                 cout << -1 << "\n";
//             }
//         }else if(command == "size"){
//             cout << pointer << "\n";
//         }else if(command == "empty"){
//             if(pointer == 0){
//                 cout << 1 << "\n";
//             }else{
//                 cout << 0 << "\n";
//             }
//         }else if(command == "top"){
//             if(pointer!=0){
//                 cout << stack[pointer-1] << "\n";
//             }else{
//                 cout << -1 << "\n";
//             }
//         }
//     }

//     return 0;
// }
