bool search(const Vector<int> &V, int target)
{
	int i ,j,k;
	i = 0;
	j = V.size() - 1;
	while(i<=j)
	{
		k = (i+j)/2;
		
		i ....  k .target.. j
		
		if(V[k]<target)	i=k;
		if(V[k]>target) j=k;  
		if(V[k]==target) return true;
	}
	return false;
}

3
2 rectangle
2D

R1.xmin,R1.xmax,
R2.xmin,R2.xmax,

if(!(R1.xmax<R2.xmin||R2.xmax<R1.xmin)) xoverlap = true;
if(!(R1.ymax<R2.ymin||R2.ymax<R1.ymin)) yoverlap = true;
if(xoverlap&&yoverlap)					overlap = true;

R2.xmin<R2.xmax&&


R1.ymin,R1.ymax,
R2.ymin,R2.ymax,

class BNode{
public:
	int val;
	BNode* Left;
	BNode* Right;
};

void insertNode(BNode* &root,int x)
{
	if(root == nullptr) { root = new BNode(x);	return root; }
	if(root->val  <= x)  return insertNode(root->Left, x);
	if(root->val  >  x)  return insertNode(root->Right, x);
}

root = null;

insertNode(root,x)

0.34

0,0.25,0.5,0.75,	1
0,	 1,	 2,	  3,	4
float getSnap(float val,int n)
{
	int x = val;
	float length = (val - x)*n;
	int snap = length; //0<pos-i<1
	if(length > snap + 0.5) snap++;
	return x + snap/n;
}


()[]{}
"([234)sfef]"
"]"

bool isBalanced(string str)
{
	Vector<char> bopen  = {'[' , '{' , '('};
	Vector<char> bclose = {']' , '}' , ')'};
	stack<int> OpenBrackets = {};

	int open,close;

	for( auto c : str )
	{
		if(find(bopen ,c,open))
			OpenBrackets.push(open);

		else if(find(bclose,c,close)) 
		{
			open = OpenBrackets.pop();
			if( close!=open) return false;
		}
	}  ,.
	if(!OpenBrackets.isEmpty()) return false;

return true;

}
