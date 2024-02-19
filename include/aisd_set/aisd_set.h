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

}