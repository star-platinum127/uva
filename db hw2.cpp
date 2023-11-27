// index.cpp

#include <vector>
#include <fstream>
#include <algorithm>
#include<numeric>
// index.cpp

#include "index.h"
#include <iostream>
// index.cpp
using namespace std;
// Constructor
Index::Index() : root(nullptr) {}
Index::Index(int num_rows, const std::vector<int>& keys, const std::vector<int>& values) {
    // Implement your B+ tree construction logic here using num_rows, keys, and values
    // This is where you build your B+ tree index
    // You may need to insert each key-value pair into the B+ tree
    //cout<<-1<<"\n";
    //if(root!=nullptr) delete root;
    root=nullptr;
    max_keys=10;
    //cout<<num_rows<<"\n";
    for (int i = 0; i < num_rows; ++i) {
        insert(keys[i], values[i]);
    }

}
// Destructor
Index::~Index() {
    clear_index();
}

// Function to insert key-value pairs into the B+ tree
void Index::insert(int key, int value) {
    if (root==nullptr) {
        // Tree is empty, create a new root
        root = new BPlusTreeNode();
        //cout<<"y\n";
    }

    insert_into_node(root, key, value);
}

// Helper function for B+ tree insertion
/*void Index::insert_into_node(BPlusTreeNode* node, int key, int value) {
    // Implement the insertion into a B+ tree node
    // This is a simplified version; you might need to handle node splitting
    node->keys.push_back(key);
    node->values.push_back(value);

    // Sort the keys and values for simplicity
    auto sort_indices = [](const std::vector<int>& v) {
        std::vector<int> indices(v.size());
        //std::iota(indices.begin(), indices.end(), 0);
        //std::sort(indices.begin(), indices.end(), [&v](int i, int j) { return v[i] < v[j]; });
        return indices;
    };
    //cout<<node->keys.size()<<"\n";
    std::vector<int>indice = sort_indices(node->keys);
    std::sort(node->keys.begin(), node->keys.end());
    std::sort(node->values.begin(), node->values.end(), [&indices](int i, int j) { return indices[i] < indices[j]; });
}*/
void Index::insert_into_node(BPlusTreeNode* node, int key, int value) {
    // Check if the node is full
    if (node->keys.size() < max_keys) {
        // If not full, simply insert the key-value pair
        /*node->keys.push_back(key);
        node->values.push_back(value);

        // Sort the keys and values for simplicity
        auto sort_indices = [](const std::vector<int>& v) {
            std::vector<int> indices(v.size());
            std::iota(indices.begin(), indices.end(), 0);
            std::sort(indices.begin(), indices.end(), [&v](int i, int j) { return v[i] < v[j]; });
            return indices;
        };
        //cout<<node->keys.size()<<"\n";
        std::vector<int> indices = sort_indices(node->keys);
        //cout<<indices.size();
        std::sort(node->keys.begin(), node->keys.end());
        //std::sort(node->values.begin(), node->values.end(), [&indices](int i, int j) { return indices[i] < indices[j]; });
        //std::sort(node->values.begin(), node->values.end(), [&node](int i, int j) { return node->keys[i] < node->keys[j]; });*/
            int i = std::upper_bound(node->keys.begin(), node->keys.end(), key) - node->keys.begin();
            node->keys.push_back(key);
            node->values.push_back(value);

            if (i != node->keys.size() - 1) {
                for (int j = node->keys.size() - 1; j > i; j--) {  // shifting the position for keys and datapointer
                    node->keys[j] = node->keys[j - 1];
                    node->values[j] = node->values[j - 1];
                }

                //since earlier step was just to inc. the size of vectors and making space, now we are simplying inserting
                node->keys[i] = key;
               node->values[i] = value;
            }

    }
    else {
        // If the node is full, split it
        BPlusTreeNode* new_node = new BPlusTreeNode();

        // Move half of the keys and values to the new node
        size_t half_size = node->keys.size() / 2;
        new_node->keys.assign(node->keys.begin() + half_size, node->keys.end());
        new_node->values.assign(node->values.begin() + half_size, node->values.end());
        node->keys.resize(half_size);
        node->values.resize(half_size);

        // Insert the new key-value pair to the appropriate node
        if (key < new_node->keys[0]) {
            insert_into_node(node, key, value);
        } else {
            insert_into_node(new_node, key, value);
        }

        // If the current node is the root, create a new root
        if (node == root) {
            BPlusTreeNode* new_root = new BPlusTreeNode();
            new_root->keys.push_back(new_node->keys[0]);
            new_root->values.push_back(new_node->values[0]);
            new_root->children.push_back(node);
            new_root->children.push_back(new_node);
            root = new_root;
        }
    }
}
// Function to perform key queries and write results to "key_query_out.txt"
void Index::key_query(const std::vector<int>& query_keys) {
    std::ofstream outfile("key_query_out.txt");
    for (int key : query_keys) {
        int result = -1;

        // Search for the key in the tree
        // This is a simplified version; you might need to handle searching in the tree
        if (root) {
            auto it = std::find(root->keys.begin(), root->keys.end(), key);
            if (it != root->keys.end()) {
                // Key found, get the corresponding value
                int index = std::distance(root->keys.begin(), it);
                result = root->values[index];
            }
        }

        outfile << result << "\n";
    }
    outfile.close();
}

// Function to perform range queries and write results to "range_query_out.txt"
void Index::range_query(const std::vector<std::pair<int, int>>& query_pairs) {
    std::ofstream outfile("range_query_out.txt");
    for (const auto& range : query_pairs) {
        int result = range_query_in_node(root, range.first, range.second);
        outfile << result << "\n";
    }
    outfile.close();
}

// Helper function for B+ tree range query
int Index::range_query_in_node(BPlusTreeNode* node, int start_range, int end_range) {
    // Implement range query logic within a B+ tree node
    // Recursive descent through the tree

    int result = -1;

    // This is a simplified version; you might need to handle searching in the tree
    if (node) {
        for (size_t i = 0; i < node->keys.size(); ++i) {
            if (node->keys[i] >= start_range && node->keys[i] <= end_range) {
                result = (result == -1) ? node->values[i] : std::min(result, node->values[i]);
            }
        }

        // Recursively search in children
        for (BPlusTreeNode* child : node->children) {
            int child_result = range_query_in_node(child, start_range, end_range);
            if (child_result != -1) {
                result = (result == -1) ? child_result : std::min(result, child_result);
            }
        }
    }

    return result;
}

// Function to clear the B+ tree and free memory
void Index::clear_index() {
    delete_nodes_recursive(root);
    root = nullptr;
}

// Helper function for recursive deletion of B+ tree nodes
void Index::delete_nodes_recursive(BPlusTreeNode* node) {
    if (node==nullptr) {
        return;
    }

    for (BPlusTreeNode* child : node->children) {
        delete_nodes_recursive(child);
    }
    //cout<<&node<<"\n";
    delete node;
}

// Add additional helper functions and implementation details as needed
