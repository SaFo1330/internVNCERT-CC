#include<stdio.h>
#include<stdlib.h>
 
typedef struct Node
{
    int data;
    struct Node *next; //tạo cấu trúc Node
}Node;

Node *CreateNode(int data){
    Node *temp = (Node*)malloc(sizeof(Node)); // Cấp phát vùng nhớ dùng malloc()
    if (temp == NULL)
    {
        return NULL;//xét TH xem có rỗng không
    }
    temp->next = NULL;// Cho next trỏ tới NULL
    temp->data = data; // Gán giá trị cho Node
    return temp;//Trả về node mới đã có giá trị
}
typedef struct LinkList
{
	// xác định đầu đuôi của dslk đơn
	struct Node * head;
	struct Node * tail;
}LinkList;

LinkList * getLinkList() // tạo dslk đơn
{
	// tạo bộ nhớ động
	LinkList * temp = (LinkList * ) malloc(sizeof(LinkList));
	if (temp == NULL)
	{ 
		return NULL;
	}
	// đặt dữ liệu ban đầu
	temp->head = NULL;
	temp->tail = NULL;
	return temp;
}

void push(LinkList * temp, int data)
{
	Node * node = CreateNode(data);
	if (temp->head == NULL)
	{
		// tạo node đầu
		temp->head = node;
	}
	else
	{
		// thêm node ở vị trí cuối
		temp->tail->next = node;
	}
	// tạo node mới
	temp->tail = node;
}

void output(LinkList * temp)
{
	if (temp->head == NULL)
	{
		return;
	}
	Node * tempp = temp->head;
	// lặp các phần tử danh sách liên kết
	while (tempp != NULL)
	{
		printf(" %d -", tempp->data);
		// chạy đến các phần tử 
		tempp = tempp->next;
	}
	printf(" NULL\n");
}

void deleteNode(LinkList * temp)
{
	Node * current = temp->head;
	Node * auxiliary = NULL;
	Node * back = NULL;
	// lặp lại các phần tử danh sách liên kết
	while (current->next != NULL)
	{
		if (current->data == current->next -> data)
		{
			// khi nhân được chẵn
			auxiliary = current;
		}
		else
		{
			back = current;
		}
	    // tiếp tục trỏ tiếp
		current = current->next;
		if (auxiliary != NULL)
		{
			
			if (temp->tail == auxiliary)
			{
				// Case A
				// khi loại bỏ hết quay về back
				temp->tail = back;
			}
			if (back == NULL)
			{
				// Case B
				/* Khi nút phía trước là nút chẵn
                 truy cập đầu đến nút tiếp theo */
				temp->head = current;
			}
			else
			{
				// Case C
				/*Nút đã xóa tồn tại ở trạng thái trung gian hoặc
				vị trí cuối cùng của danh sách liên kết.
				Trước khi xóa nút có nút bên trái đang kết nối với
                nút sắp tới tiếp theo.
				*/
				back->next = current;
			}
			// Hủy liên kết đã xóa
			auxiliary->next = NULL;
          	free(auxiliary);
			
			auxiliary = NULL;
		}
	}
}

int main()
{
	LinkList * sll = getLinkList();
	// thêm node
	push(sll, 1);
	push(sll, 1);
	push(sll, 2);
	push(sll, 3);
	push(sll, 3);
	push(sll, 3);
	push(sll, 4);
	push(sll, 5);
	push(sll, 5);
	
	printf(" Danh sach lien ket ban dau \n");
	output(sll);

	deleteNode(sll);

	printf(" Danh sach lien ket sau khi xoa\n");
	output(sll);
}