#include <iostream>
#include <string>
#include <fstream>

//3개 인자를 받음 (파일명, 찾을 문자열, 바꿀 문자열)
//파일을 읽어서 찾을 문자열을 바꿀 문자열로 바꾸고 파일명.replace로 저장
//replace 함수 사용 금지
//예외처리 필요

//ifstream : 파일 입력 스트림
//ofstream : 파일 출력 스트림
//find : 문자열에서 특정 문자열을 찾는 함수
//erase : 문자열에서 특정 위치의 문자를 지우는 함수
//insert : 문자열에서 특정 위치에 문자열을 삽입하는 함수


int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "input error" << std::endl;   
    }
    else
    {
        std::string file = argv[1];
        std::ifstream input(file);
        std::string target = argv[2];
        std::string replace = argv[3];
        if (input.is_open())
        {
            std::ofstream output(file + ".replace");
            while (!input.eof())
            {
                std::string line;
                std::getline(input, line);
                std::cout << line << std::endl;
                if (!line.find(target))
                {
                    size_t pos = line.find(target);
                    line.erase(pos, target.length());
                    line.insert(pos, replace);
                }
                output << line << std::endl;
            }
            input.close();
            output.close();
        }
        else
        {
            std::cout << "file error" << std::endl;
        }
    }
    return 0;
}