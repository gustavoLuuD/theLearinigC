#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  const char *face;
  const char *suit;
}Card;

void fillDeck(Card * const wDeck, const char *wFace[], const char *wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck, int deckLength);

int main(){
  Card deck[52];
  const char *face[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Eleven", "Jack", "Queen", "King"};

  const char *suit[] = {"_Hearts_", "_Diamonds_", "_Clubs_",  "_Spades_"};

  srand(time(NULL));
  fillDeck(deck, face, suit); /*carrega o baralho com cards*/
  shuffle(deck);  /*embaralha o deck*/
  deal(deck, 12); /*distribui as cartas*/
  return 0;
}

void fillDeck(Card * const wDeck, const char *wFace[], const char *wSuit[]){
  int i;
  for(i = 0; i <= 52; i++){
    wDeck[i].face = wFace[i % 13];
    wDeck[i].suit = wSuit[i / 13];
  }
}

void deal(const Card * const wDeck, int deckLength){
  for(int i = 0; i < deckLength; i++){
    printf("%s %s %s", wDeck[i].face, wDeck[i].suit, (i + 1)%4 ? " " : "\n");
  }
  printf("\n");
}

void shuffle(Card * const wDeck){
  int i;
  int j;
  Card aux;
  for(int i = 0; i <= 51; i++){
    j = rand() % 52;
    aux = wDeck[i];
    wDeck[i] = wDeck[j];
    wDeck[j] = aux;
  }
}
