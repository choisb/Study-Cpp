#pragma once
class CMyString
{

public:
	CMyString();
	~CMyString();

private:
	//���ڿ��� �����ϱ� ���� ���� �Ҵ��� �޸𸮸� ����Ű�� ������
	char* m_pszData;

	// ����� ���ڿ��� ����
	int m_nLength;

public:
	int SetString(const char* psdParam);
	const char* GetString();
	void Release();
};
