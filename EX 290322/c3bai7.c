#include<stdio.h>
#include<stdlib.h>
 
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node * head;
   	struct Node * tail; //tạo cấu trúc Node
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


Node * getLinkList() // tạo dslk đơn
{
	// tạo bộ nhớ động
	Node * temp = (Node * ) malloc(sizeof(Node));
	if (temp == NULL)
	{ 
		return NULL;
	}
	// đặt dữ liệu ban đầu
	temp->head = NULL;
	temp->tail = NULL;
	return temp;
}

void push(Node * temp, int data)
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

void output(Node * temp)
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

void removeDuplicates(struct Node* head)
{
    // do nothing if the list is empty
    if (head == NULL) {
        return;
    }
 
    struct Node* current = head;
 
    // compare the current node with the next node
    while (current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            struct Node* nextNext = current->next->next;
            free(current->next);
            current->next = nextNext;
        }
        else {
            current = current->next;    // only advance if no deletion
        }
    }
}
int main()
{
	Node * sll = getLinkList();
	// thêm node
	push(sll, 7);
	push(sll, 2);
	push(sll, 10);
	push(sll, 3);
	push(sll, 9);
	push(sll, 54);
	push(sll, 5);
	push(sll, 31);
	push(sll, 10);
	
	printf(" Danh sach lien ket ban dau \n");
	output(sll);

	removeDuplicates(sll);

	printf(" Danh sach lien ket sau khi xoa\n");
	output(sll);
}