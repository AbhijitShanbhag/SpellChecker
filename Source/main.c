#include <stdio.h>
#include <stdlib.h>

//declaring struct of the node
struct TrieNode{
    struct TrieNode* children[26]; // assuming english language charecters
    int IsEndOfWord; //flag to check whether end of word or not
};
struct TrieNode* createTrieNode(){
    struct TrieNode* newNode = malloc(sizeof(struct TrieNode)); //malloc for new trienode
    if(newNode){
        // init child node
        for(int i = 0;i<26;i++){
            newNode->children[i]=NULL;
        }
        //init isEndOfWord
        newNode->IsEndOfWord = 0;
    }
    return newNode;
};
//basic main function
int main(int argc, char **argv){

    return 0;
}
