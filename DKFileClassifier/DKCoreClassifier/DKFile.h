
// author: Khiêm Đoàn Hoà - 2016-03-19

#ifndef _DK_FILE_H_

#include "windows.h"
#include "string"
#include "algorithm"
#include "cctype"

class DKFile
{
public:
	DKFile(LPTSTR szFilePath);
	~DKFile();

	DWORD	GetLastError();
	BOOL	CmpBytes(DWORD dwOffset, DWORD dwSize, LPVOID lpData);
	BOOL	SetData(DWORD dwOffset, DWORD dwSize, LPVOID lpData);
	DWORD	FindSubStringA(DWORD dwPos, DWORD dwCount, LPCH szSubString);
	DWORD	FindSubStringW(DWORD dwPos, DWORD dwCount, LPCWCHAR szSubString);

protected:
	HANDLE	m_hFile = INVALID_HANDLE_VALUE;
	HANDLE	m_hMap = NULL;
	LPVOID	m_lpAddress = 0;

	DWORD	m_dwFileSize = 0;

	DWORD	m_dwErrorCode = 0;
};

#endif // !_DK_FILE_H_
