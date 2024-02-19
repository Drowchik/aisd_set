#pragma once

namespace set_realization {
	template <typename T>
	struct Node
	{
		T _val;
		Node* _left;
		Node* _right;
		Node(T val, Node* left=nullptr, Node* right=nullptr) : _val(val), _left(left), _right(right) {}
	};

	template <typename T>
	class Set {
		private:
			Node* _root;
			size_t _size;
		public:
			Set() : root(nullptr), size(0) {}
			bool insert(const int& val) {
				Node<T>* newNode = new Node<T>(val);
				if (!root) {
					root = newNode;
					return true;
				}
				Node<T>* cur = root;
				Node<T>* ptr = nullptr;
				while (cur!=nullptr)
				{
					ptr = cur;
					if (val < cur->_val) {
						cur = cur->_left;
					}
					else if(val > cur->_val) {
						cur = cur->_right

					}
					else {
						delete newNode;
						return false;
					}
					if (val < ptr->data) {
						ptr->_left = newNode;
					}
					else {
						ptr->_right = newNode;
					}
				}
			}
	};
}