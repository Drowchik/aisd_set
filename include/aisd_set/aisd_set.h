#pragma once
#include <iostream>
#include <random>

namespace set_realization {
	template <typename T>
	struct Node
	{
		T _val;
		Node* _left;
		Node* _right;
		Node(T val, Node* left = nullptr, Node* right = nullptr) : _val(val), _left(left), _right(right) {}
	};

	template <typename T>
	class Set {
	private:
		Node<T>* _root;


		Node<T>* create_copy_tree(Node<T>* root) {
			if (!root) {
				return nullptr;
			}

			Node<T>* new_node = new Node<T>(root->_val);
			new_node->_left = create_copy_tree(root->_left);
			new_node->_right = create_copy_tree(root->_right);

			return new_node;
		}

		void clear(Node<T>* head) {
			if (!head) {
				return;
			}
			clear(head->_left);
			clear(head->_right);
			delete head;
		}

		void recursion(Node<T>* root) {
			if (!root) {
				return;
			}
			recursion(root->_left);
			std::cout << root->_val << ' ';
			recursion(root->_right);
		}

		bool erase_with_root(Node<T>*& root, const int& val) {
			if (!root) {
				return false;
			}

			if (root->_val > val) {
				return erase_with_root(root->_left, val);
			}
			else if (root->_val < val) {
				return erase_with_root(root->_right, val);
			}

			if (!root->_left) {
				Node<T>* temp = root->_right;
				delete root;
				root = temp;
				return true;
			}
			else if (!root->_right) {
				Node<T>* temp = root->_left;
				delete root;
				root = temp;
				return true;
			}
			else {
				Node<T>* succParent = root;
				Node<T>* succ = root->_right;
				while (succ->_left != NULL) {
					succParent = succ;
					succ = succ->_left;
				}
				if (succParent != root)
					succParent->_left = succ->_right;
				else
					succParent->_right = succ->_right;

				root->_val = succ->_val;

				delete succ;
				return true;
			}
		}
	public:
		Set() : _root(nullptr) {}
		Set(std::vector<T> data) : _root(nullptr) {
			for (const auto& el : data) {
				insert(el);
			}
		}
		Set(const Set& other) {
			_root = create_copy_tree(other._root);
		}
		~Set() {
			clear(_root);
		}
		Set& operator = (Set other) {
			std::swap(_root, other._root);
			return *this;
		}
		Node<T>* get_root() const {
			return _root;
		}
		bool insert(const int& val) {
			Node<T>* new_node = new Node<T>(val);
			if (!_root) {
				_root = new_node;
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
					delete new_node;
					return false;
				}
			}
			if (val < ptr->_val) {
				ptr->_left = new_node;
			}
			else {
				ptr->_right = new_node;
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
				else if (cur->_val < val) {
					cur = cur->_right;
				}
				else if (cur->_val > val) {
					cur = cur->_left;
				}
			}
			return false;
		}
		bool erase(const int& val) {
			return erase_with_root(_root, val);
		}
	};

	std::vector<int> random(int a, int b, size_t n, size_t i) {
		std::vector<int> res;
		std::mt19937 gen(i);
		std::uniform_int_distribution<> distribution(a, b);
		for (size_t j = 0; j < n; j++) {
			size_t x = distribution(gen);
			res.push_back(x);
		}
		return res;
	}

	int random(int a, int b, size_t i) {
		std::mt19937 gen(i);
		std::uniform_int_distribution<> distribution(a, b);
		return distribution(gen);
	}

	std::vector<int> function(std::vector<int> a) {
		std::vector<int> res(a);
		Set<int> b(a);
		size_t size = a.size();
		for (size_t i = 0; i < size; i++) {

		}
		
	}
}