#include <iostream>
int BoxVolume(int length, int width = 1, int height = 1);//디폴트 값은 미리 설정하되, 함수 정의는 늦게 해도 좋다. 디폴트 설정은 오른쪽부터 해야 한다.

int main()
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	//std::cout << "[D, D, D] : " << BoxVolum() << std::endl;//디폴트 값 없이 입력을 비워두면 컴파일되지 않는다.
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}