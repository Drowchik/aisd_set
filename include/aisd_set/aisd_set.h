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
				_root = copyTree(other._root);
			}
			Node<T>* copyTree(Node<T>* root) {
				if (!root) {
					return nullptr;
				}

				Node<T>* newNode = new Node<T>(root->_val);
				newNode->_left = copyTree(root->_left);
				newNode->_right = copyTree(root->_right);

				return newNode;
			}
			bool insert(const int& val) {
				Node<T>* newNode = new Node<T>(val);
				if (!_root) {
					_root = newNode;
					return true;
				}
				Node<T>* cur = _root;
				Node<T>* ptr = nullptr;
				while (cur)
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
			void print() {
				if (_root) {
					recursion(_root);
				}
				std::cout << std::endl;
			}
			bool contains(const int& val) {
				if (!_root) {
					return false;
				}
				Node<T>* cur = _root;
				while (cur) {
					if (cur->_val == val) {
						return true;
					}
					else if(cur->_val<val) {
						cur = cur->_right;
					}
					else if (cur->_val > val) {
						cur = cur->_left;
					}
				}
				return false;
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