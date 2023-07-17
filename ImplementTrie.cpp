//class Node {
//public:
//    unordered_map<char, Node*> trieMap;
//    bool isEndOfWord = false;
//};
//
//
//class Trie {
//public:
//    Node* startNode;
//    Trie() {
//        startNode = new Node();
//    }
//
//    void insert(string word) {
//        Node* currentNode = startNode;
//        for (char c : word) {
//            if (currentNode->trieMap.find(c) == currentNode->trieMap.end()) {
//                Node* newNode = new Node();
//                currentNode->trieMap[c] = newNode;
//            }
//            currentNode = currentNode->trieMap[c];
//        }
//        currentNode->isEndOfWord = true;
//    }
//
//    bool search(string word) {
//        Node* currentNode = startNode;
//        for (char c : word) {
//            if (currentNode->trieMap.find(c) == currentNode->trieMap.end()) return false;
//            currentNode = currentNode->trieMap[c];
//        }
//        if (currentNode->isEndOfWord) return true;
//        else return false;
//    }
//
//    bool startsWith(string prefix) {
//        Node* currentNode = startNode;
//        for (char c : prefix) {
//            if (currentNode->trieMap.find(c) == currentNode->trieMap.end()) return false;
//            currentNode = currentNode->trieMap[c];
//        }
//        return true;
//    }
//};
///**
// * Your Trie object will be instantiated and called as such:
// * Trie* obj = new Trie();
// * obj->insert(word);
// * bool param_2 = obj->search(word);
// * bool param_3 = obj->startsWith(prefix);
// */
