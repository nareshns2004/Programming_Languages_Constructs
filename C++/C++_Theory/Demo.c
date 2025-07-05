#define FIXED_BUFF_LEN 32
struct fixed_buff
{
 uint8_t data[FIXED_BUFF_LEN];
 unsigned int data_len;
 
 struct fixed_buff *next;  // fill up existing node or new node (32 bytes)
};
 
struct fixed_buff* fixed_buff_alloc(void);
 
/**
* @param data_len: the length of the data returned
* @return: the data from the stream, NULL when stream is done
*/
uint8_t* stream_get(struct stream *s, unsigned int *data_len);
 
/**
* @return: head of the fixed_buff list
*/
struct fixed_buff* build_fixed_buff_list(struct stream *s)
{
    struct buf* = alloc();
    struct temp* = buf;
    if(s==NULL){
        return buf ;
    }

   uint8_t* curr_data;
   unsigned int curr_data_len;
 
while ((curr_data = stream_get(s, &curr_data_len)) {
 
/* Fill in your code here */

    
    if((curr_data_len>=FIXED_BUFF_LEN)){
        memcpy(curr_data,buf->data[FIXED_BUFF_LEN]);
        curr_data = curr_data + FIXED_BUFF_LEN;
    }

    uint8_t x = curr_data_len-FIXED_BUFF_LEN;

     if(s!=NULL){
        temp = buf->next;
        temp = alloc();
        
    }else{
        return buf;
    }

    if(x<32){
        for(int i=0;i<x;i++){
            memcpy(curr_data,buf->data[FIXED_BUFF_LEN]);
        }
        curr_data = curr_data + x;
    }
    
    int st = FIXED_BUFF_LEN - x;
    
    if(s!=NULL){
        buf->next = alloc();
        continue;
    }else{
        return buf;
    }
    
   }

   return buf;
}
 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
#define POOL_SIZE 10  // Total number of nodes
 
typedef struct Node {
   int data;
   struct Node* next;
} Node;
 
typedef struct {
   Node nodes[POOL_SIZE]; // Fixed pool
   Node* free_list;       // Tracks free nodes
   int used_count;        // Count of allocated nodes
} NodePool;
 
// Pool management
void pool_init(NodePool* pool);
Node* alloc_node(NodePool* pool);
void free_node(NodePool* pool, Node* node);
int pool_used(NodePool* pool);
int pool_available(NodePool* pool);
 
// Linked list operations (using pool)
void list_insert(NodePool* pool, Node** head, int value);
bool list_delete(NodePool* pool, Node** head, int value);
void list_print(Node* head);
void list_clear(NodePool* pool, Node** head);
 
int main() {
   NodePool pool;
  pool_init(&pool);
   Node* list = NULL;
 
  list_insert(&pool, &list, 10);
  list_insert(&pool, &list, 20);
  list_insert(&pool, &list, 30);
   list_print(list);
 
  list_delete(&pool, &list, 20);
   list_print(list);
 
  list_clear(&pool, &list);
 
   printf("Used: %d, Available: %d\n", pool_used(&pool), pool_available(&pool));
 
   return 0;


memory or pool allocator, holding blocks (10 blocks, if user asks for 2 blocks, maintain list )

allocation & deallocation -> freelist