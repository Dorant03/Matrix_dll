#ifdef Matrix_operations_EXPORTS
#define Matrix_operations_API __declspec(dllexport) 
#else
#define Matrix_operations_API __declspec(dllimport) 
#endif

class Matrix
{
private:
		double **matrix;
		int n;
		int m;
public:
	Matrix_operations_API Matrix();                                                                          //������� � ���������
	Matrix_operations_API Matrix(int _n,int _m);                                                             //������ �������
	Matrix_operations_API Matrix(double upper, double diagonal, double lower, int _n, int _m);               //��������� �������
	Matrix_operations_API Matrix(char *_info);                                                               //������� � �����
	Matrix_operations_API double ** get_matrix();                                                            //������� �������
	Matrix_operations_API int get_n();                                                                       //������� n
	Matrix_operations_API int get_m();                                                                       //������� m
	Matrix_operations_API void ADD(double** matrixA, double** matrixB, int n_A, int m_A, int n_B, int m_B);  //���������
	Matrix_operations_API void SUB(double** matrixA, double** matrixB, int n_A, int m_A, int n_B, int m_B);  //��������
	Matrix_operations_API void MUL(double** matrixA, double** matrixB, int n_A, int m_A, int n_B, int m_B);  //�������� �������
	Matrix_operations_API void MUL_scalar(double** matrixA, int n_A, int m_A, double scalar);                //�������� �� ������
	Matrix_operations_API void DIV_scalar(double** matrixA, int n_A, int m_A, double scalar);                //������ �� ������
	Matrix_operations_API void transpose(double** matrixA, int n_A, int m_A);                                //������������� �������
	Matrix_operations_API void inverse(double** matrixA, int _n);                                            //�������� �������(������� ������ � ����������� ������� ��������� ��������)
	Matrix_operations_API void SLAR(double** matrixA, double** matrixB, int _n);                             //����������� �-��. �������� ������� 
	Matrix_operations_API void turning(double** matrixA, double** matrixB, int _n);                          //����, ����� ��������
	Matrix_operations_API void NUL();                                                                        //��������� �������
	Matrix_operations_API void NEW(int _n, int _m);                                                          //������� ������ �������
	Matrix_operations_API void print();                                                                      //���� �������
	Matrix_operations_API void printv(double** matrixB);                                                     //���� ������� � ��������
	Matrix_operations_API void write_matrix(char *_result);                                                  //����� � ����
	Matrix_operations_API ~Matrix();                                                                         //����������(��������� �����)
};