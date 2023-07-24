//#import<vector>
//#import<map>
//using namespace std;
//class Node {
//public:
//    int val;
//    vector<Node*> neighbors;
//    Node() {
//        val = 0;
//        neighbors = vector<Node*>();
//    }
//    Node(int _val) {
//        val = _val;
//        neighbors = vector<Node*>();
//    }
//    Node(int _val, vector<Node*> _neighbors) {
//        val = _val;
//        neighbors = _neighbors;
//    }
//};
//
//
//class Solution {
//public:
//    Node* cloneGraph(Node* node) {
//        unordered_map<int, Node*> visited;
//        vector<Node*> list;
//        list.push_back(node);
//        while(!list.empty()) {
//            Node* curr = list[0];
//            Node* newNode = new Node(curr->val);
//            if (visited[curr->val] == nullptr) visited[curr->val] = newNode;
//            list.erase(list.begin());
//            for(Node* i : curr->neighbors) {
//                if (visited[i->val] == nullptr) {
//                    Node* neighbour = new Node(i->val);
//                    visited[i->val] = neighbour;
//                    visited[curr->val]->neighbors.push_back(neighbour);
//                    list.push_back(i);
//                } else visited[curr->val]->neighbors.push_back(visited[i->val]);
//            }
//        }
//        return visited[node->val];
//    }
//};
//
//int main() {
//    Solution s;
//    Node* node1 = new Node(1);
//    Node* node2 = new Node(2);
//    Node* node3 = new Node(3);
//    Node* node4 = new Node(4);
//    node1->neighbors.push_back(node2);
//    node1->neighbors.push_back(node4);
//    node2->neighbors.push_back(node1);
//    node2->neighbors.push_back(node3);
//    node3->neighbors.push_back(node2);
//    node3->neighbors.push_back(node4);
//    node4->neighbors.push_back(node1);
//    node4->neighbors.push_back(node3);
//    s.cloneGraph(node1);
//}