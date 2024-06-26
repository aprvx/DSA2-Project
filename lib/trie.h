#ifndef TRIE_H
#define TRIE_H

typedef struct trieNode{
  struct trieNode *A[26];
  bool isEndWord;
}trieNode;

typedef trieNode *trie;

void init_trie(trie *t);
void insert_trie(trie *t, char *word);
void search_trie(trie t, char *prefix, char *result[]); // returns 5 matches

#endif
