#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class Cell {
public:
  Cell(const char con[]){
    strcpy(content,con);
  }
  ~Cell(){}
  void show(){
    cout<<content;
  }
private:
  char content[128];
};

class Table {
public:
  Table(){row=0;col=0;}
  Table(int row,int col):row(row),col(col){
    int count=row*col;
    while(count--){cells.push_back(Cell("none"));}
  }

  void show(){
    if(row*col==0){
      printf("Empty Table\n");
    }

    vector<Cell>::iterator cell=cells.begin();
    for (int r=0;r<row;r++){
      for (int c=0;c<col;c++){
        if(c!=0){
          {printf("\t");}
        }
        cell->show();
        cell++;   // TODO
      }
      printf("\n");
    }
  }
  void set(int row,int col,char* value){
    cells.at((row-1)*col+col-1)=Cell(value);
  }
  int addRow(){
    if(col==0){
      col=1;
    }
    int count=col;
    while(count--){
      cells.push_back(Cell("none"));
    }
    row++;
    return 0;
  }
  void delRow(int n){
    cells.erase(cells.begin()+(n-1)*col,cells.begin()+n*col-1);
    row--;
    if(col==1){
      col=0;
    }
    return;
  }
  int addColumn(){
    if(row==0){
      row=1;
    }
    for(int r=row;r>=1;r--){
      cells.insert(cells.begin()+col*r-1,Cell("none"));
    }
    col++;
    return 0;
  }
  void delColumn(int n){
    for(int r=row;r>=1;r--){
      cells.erase(cells.begin()+col*(r-1)+n-1);
    }
    col--;
    if(row==1){
      row=0;
    }
    return;
  }
private:
  vector<Cell> cells;
  int row;
  int col;
};

int main() {
  Table tb;
  tb.show();
  printf("\n");
  tb.addRow();
  tb.show();
  printf("\n");
  tb.addColumn();
  tb.show();
  printf("\n");
  Table tb1(5,5);
  tb1.show();
  printf("\n");
  tb1.set(1,1,"30");
  tb1.set(2,2,"hello");
  tb1.show();
  printf("\n");
  tb1.delRow(1);
  tb1.show();
  printf("\n");
  tb1.delColumn(1);
  tb1.show();
  printf("\n");
  return 0;
}