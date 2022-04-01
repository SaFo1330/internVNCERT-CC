#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
}node_t;


int LeftOf(int value,  node_t* root)
{
    // Nếu bạn muốn cây BST cho phép giá trị trùng lặp, hãy sử dụng dòng code thứ 2
    return value < root->data;
//    return value <= root->data;
}
 
int RightOf( int value,  node_t* root)
{
    return value > root->data;
}

node_t* Insert(node_t* root,  int value)
{
    if (root == NULL)//
    {
        node_t* node = (node_t*)malloc( sizeof(node_t) );
        node->left = NULL;
        node->right = NULL;
        node->data = value;
        return node;
    }
    //
    if (LeftOf( value, root))
        root->left = Insert(root->left, value);
    else if (RightOf(value, root))
        root->right = Insert(root->right, value);
    return root;
}

void PreOrder(node_t* root){//duyệt từ gốc đến nhánh bên trái rồi phải
    if(root != NULL)
    {
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

int Search(node_t* root,int value)
{
    if(root == NULL)  //nếu Tree trống thì không thể kiểm tra
        return 0;
    if(root->data==value)
        return 1;
    else if(LeftOf(value,root)){
        return Search(root->left,value);    //đệ quy để chuyển node root xuống các node root con
    }
    else if(RightOf(value,root)){
        return Search(root->right,value);
    }
    return 0;
}
void Sort(node_t* root)
{
    //đệ quy chuyển root xuống root nhỏ nhất của Tree 
    if(root!=NULL){ 
        Sort(root->left);
        printf("%d ",root->data); //in lá nhỏ nhất ra (bên trái)
        Sort(root->right);  // sau đó chuyển sang lá bên phải
        //rồi tiếp tục nâng root của cây con lên trên
    }
}

int main()
{
    node_t* root = NULL;
    int i, x , n, value;
 
    printf("Nhap so phan tu cua mang: "); 
    scanf("%d",&n);

    for(i=0;i<n;i++){  
        scanf("%d",&value);
        root = Insert(root,value);
    }
    printf("Duyet tu goc: ");
    PreOrder(root);

    printf("\nNhap x: ");
    scanf("%d",&x);
    if(Search(root,x)!=0)
        printf("x nam trong mang\n");
    else
        printf("x khong nam trong mang\n");
    
    printf("Sap xep Tang: ");
    Sort(root);
    
    return 0;
}
