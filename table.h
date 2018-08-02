/* In the name of Allah, the compassionate, the merciful */
#ifndef TABLE_H
#define TABLE_H

enum BoxDrawingChar
{
    // Straight lines
    BOX_HORIZONTAL = 196,
    BOX_VERTICAL   = 179,
    // Characters of corners
    BOX_UPPER_LEFT  = 218,
    BOX_UPPER_RIGHT = 191,
    BOX_LOWER_LEFT  = 192,
    BOX_LOWER_RIGHT = 217,
    // Character of table's sides
    BOX_UP    = 194,
    BOX_LEFT  = 195,
    BOX_RIGHT = 180,
    BOX_DOWN  = 193,
    // Center character
    BOX_CENTER = 197,
    // Space character
    BOX_EMPTY = 32
};

struct Table
{
    int length;
    int width;
    std::vector<int> twoDBoard; // A two-dimensional board
};

void initializeTable(Table &theTable, const int theLength, const int theWidth);
void FillTableWithContent(Table &theTable, std::string *content);
void printGivenRowOfTable(Table &theTable, const int theRow);
void printTable(Table &theTable);
int getLengthOfBoard(const int theLength);
int getWidthOfBoard (const int theWidth) ;

#endif // TABLE_H
