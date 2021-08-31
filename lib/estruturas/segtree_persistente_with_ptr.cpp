struct Node {
	int cnt;
	Node* left, *right;
};

struct SegTree {
	vector<Node*> st;
	
	Node* init(int lo, int hi) {
		Node *no = new Node;
		no->cnt = 0;
		if(lo != hi) {
			int mid = (lo + hi) / 2;
			no->left = init(lo, mid);
			no->right = init(mid + 1, hi);
		}
		return no;
	}
	
	Node* upd(int k, int lo, int hi, Node *root) {
		Node *no = new Node;
		if(lo == hi) no->cnt = 1 + root->cnt;
		else {
			int mid = (lo + hi) / 2;
			if(k <= mid) {
				no->left = upd(k, lo, mid, root->left);
				no->right = root->right;
			} else {
				no->left = root->left;
				no->right = upd(k, mid + 1, hi, root->right);
			}
			no->cnt = no->left->cnt + no->right->cnt;
		}
		return no;
	}
	
	int kth(int k, int lo, int hi, Node *l, Node *r) {
		if(lo == hi) return lo;
		int mid = (lo + hi) / 2;
		Node *ll = l->left, *lr = r->left;
		return k <= lr->cnt - ll->cnt ? kth(k, lo, mid, ll, lr) : kth(k - lr->cnt + ll->cnt, mid + 1, hi, l->right, r->right);
	}
	
	int kth(int k, int l, int r) {
		return kth(k, 0, int(size(st)) - 2, st[l - 1], st[r]);
	}
		
	SegTree(vector<int>& a) {
		int n = size(a);
		st.resize(n + 1);
		st[0] = init(0, n - 1);
		for(int i = 1; i <= n; ++i) st[i] = upd(a[i - 1], 0, n - 1, st[i - 1]);
	}
};
