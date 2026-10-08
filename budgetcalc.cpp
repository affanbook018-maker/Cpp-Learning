#include<iostream>
using namespace std;
int main(){
    double notebookPrice, printingPerPage, NotebooksCost, printingCost, TotalWeeklyCost;
    int numberOfBooks, pagesToPrint;
    cout<<"Enter Notebook price: ";
    cin>>notebookPrice;
    cout<<"Number of notebooks: ";
    cin>>numberOfBooks;
    cout<<"Printing cost per page: ";
    cin>>printingPerPage;
    cout<<"Number of pages to print: ";
    cin>>pagesToPrint;

    NotebooksCost = notebookPrice*numberOfBooks;
    printingCost= printingPerPage*pagesToPrint;
    TotalWeeklyCost = (NotebooksCost+printingCost);

    cout<<"Notebook price: \t"<<notebookPrice<<endl;
    cout<<"Number of notebooks: \t"<<numberOfBooks<<endl;
    cout<<"Printing cost per page: \t"<<printingPerPage<<endl;
    cout<<"Number of pages to print: \t"<<pagesToPrint<<endl;
    cout<<"Total cost of Notebooks: \t"<<NotebooksCost<<endl;
    cout<<"Total cost of Printing: \t"<<printingCost<<endl;
    cout<<"Total weekly cost: \t"<<TotalWeeklyCost<<endl;
    cout<<"Memory size of pagesToPrint"<<sizeof(pagesToPrint)<<"bytes"<<endl;
    return 0;
    
    
}