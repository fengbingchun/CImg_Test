#include <iostream>
#include "CImg.h"

int main(int argc, char* argv[])
{
	// ����һ��ÿ����ɫ 8 λ(bit)�� 640x400 �Ĳ�ɫͼ��
	cimg_library::CImg<unsigned char> img(640,400,1,3);  
	//������ֵ��Ϊ 0����ɫ��
	img.fill(0); 
	// ����һ����ɫ
	unsigned char purple[] = { 255,0,255 };

	// ������(100, 100)����һ����ɫ�ġ�Hello world��
	img.draw_text(100,100,"Hello World",purple);  
	// ��һ������Ϊ��My first CImg code���Ĵ�������ʾ���ͼ��
	img.display("My first CImg code");

	std::cout<<"ok!"<<std::endl;
	return 0;
}

