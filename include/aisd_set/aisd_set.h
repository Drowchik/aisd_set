#pragma once
#include <iostream>

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
			Node<T>* _root;
			size_t _size;
		public:
			Set() : _root(nullptr), _size(0) {}
			Set(const Set& other) {

			}
			bool insert(const int& val) {
				Node<T>* newNode = new Node<T>(val);
				if (!_root) {
					_root = newNode;
					return true;
				}
				Node<T>* cur = _root;
				Node<T>* ptr = nullptr;
				while (cur != nullptr)
				{
					ptr = cur;
					if (val < cur->_val) {
						cur = cur->_left;
					}
					else if (val > cur->_val) {
						cur = cur->_right;

					}
					else {
						delete newNode;
						return false;
					}
				}
				if (val < ptr->_val) {
					ptr->_left = newNode;
				}
				else {
					ptr->_right = newNode;
				}
				return true;
			}
			void print() const {
				if (_root) {
					recursion(_root);
				}
			}
			void recursion(Node<T>* root) {
				if (!root) {
					return;
				}
				recursion(root->_left);
				std::cout << root->_val << ' ';
				recursion(root->_right);
			}
			
	};
}