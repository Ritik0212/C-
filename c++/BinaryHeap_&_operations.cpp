#include<iostream>
#include<climits>
using namespace std;
void swap(int *a, int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
class minHeap{
	int heap_size;
	int capacity;
	int *harr;
	public:
			minHeap(int cap);
			
			int parent(int i){
				return ((i-1)/2);
			}
			
			int left(int i){
				return (2*i+1);
			}
			
			int right(int i){
				return (2*i+2);
			}
			
			int getMin(){
				return (harr[0]);
			}
			
			void Minheapify(int i);
			
			int extractMin();
			
			void insertKey(int k);
			
			void deleteKey(int i);
			
			void decreasekey(int i, int new_value);
			
};
minHeap::minHeap(int cap){
			heap_size=0;
			capacity=cap;
			harr=new int[cap];
}
		
void minHeap::Minheapify(int i){
	int l=left(i);
	int r=right(i);
	int smallest = i;
	if(l<heap_size && harr[i]>harr[l]){
		smallest=l;
	}
	if(r<heap_size && harr[smallest]>harr[r]){
		smallest=r;
	}
	if(smallest!=i){
		swap(&harr[smallest], &harr[i]);
		Minheapify(smallest);
	}	
}
void minHeap::decreasekey(int i, int new_value){
	int p = parent (i);
	harr[i]=new_value;
	while(i!=0 && harr[p]>harr[i]){
		swap(&harr[p], &harr[i]);
		i=parent(i);
		p = parent(i);
	}
}

int minHeap::extractMin(){
	if(heap_size==0){
		return INT_MAX;
	}
	if(heap_size==1){
		heap_size--;
		return harr[0];
	}
	int min=harr[0];
	harr[0]=harr[heap_size-1];
	heap_size--;
	Minheapify(0);
	return min;
} 

void minHeap::insertKey(int k){
	if (heap_size == capacity)
    {
        cout << "Error";
        return;
    }
	heap_size++;
	harr[heap_size-1]=k;
	int i=heap_size-1;
	int p=parent(i);
	while(i!=0 && harr[p]>harr[i]){
		swap(&harr[p], &harr[i]);
		i=parent(i);
		p = parent(i);
	}
}

void minHeap::deleteKey(int i){
	decreasekey(i,INT_MIN);
	extractMin();
}

int main(){
	minHeap h(11);
	h.insertKey(5);
	h.insertKey(2);
	h.insertKey(3);
	cout<<h.getMin();
	return 0;
}
