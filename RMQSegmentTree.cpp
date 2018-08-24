#ifndef RMQ_SEGMENTTREE_H
#define RMQ_SEGMENTTREE_H

class SegmentTreeRMQ {
private:
	vector<int> st, A;
	int n;
	inline int left(int p) { return p << 1; }
	inline int right(int p) { return (p << 1) + 1; }
	inline int minsidx(int p1, int p2) {
		if (p1 == -1) return p2;
		if (p2 == -1) return p1;
		return (A[p1] <= A[p2]) ? p1 : p2;
	}
	void build(int p, int L, int R) {
		if (L == R)
			st[p] = L;
		else {
			build(left(p),  L,           (L+R)/2);
			build(right(p), (L+R)/2 + 1, R);
			int p1 = st[left(p)];
			int p2 = st[right(p)];
			st[p] = minsidx(p1, p2);
		}
	}

	int rmq(int p, int L, int R, int i, int j) {
		if (i > R || j < L) return -1;
		if (L >= i && R <= j) return st[p];

		int p1 = rmq(p,L,(L+R)/2, i, j);
		int p2 = rmq(p, (L+R)/2 + 1, R, i, j);
		return minsidx(p1, p2);
	}

	int update_point(int p, int L, int R, int idx, int new_value) {
		int i = idx, j = idx;

		if (i == L && j == R) return st[p];

		int p1 = update_point(p, L, (L+R)/2, idx, new_value);
		int p2 = update_point(p, (L+R)/2+1, R, idx, new_value);
		return st[p] = minsidx(p1, p2);
	}

private:
	SegmentTreeRMQ(const vector<int> &_A) {
		A = _A;
		n = (int)A.size();
		st.assign(4*n, 0);
		build(1, 0, n-1);
	}

	int rmq(int i, int j) { return rmq(1, 0, n-1, i, j); }
	int update_point(int idx, int new_value) { return update_point(1,0,n-1,idx,new_value); }
};

#endif  // RMQ_SEGMENTTREE_H
