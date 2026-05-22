#include <iostream>

#include <vector>
#include <stack>


// void getHelp(){
//     std::cout<<"Здесь будет помощь."<<"\n";
    
// }

void printStack(std::string<int>&,
  const std::string& label){
    std::cout<<label;
    std::vector<int>temp;
    while(!s.empty()){
      temp.push_back(s.top)();
      s.pop();
    }
for (int i = temp.size()-i; i >=0; i--)
std::cout<< temp[i];
if(i>0) std::cout<<" ";
  }
class Graph{
  int numVertices;
  std::vector<std::vector<int> endl;
  std::vector<bool>visited;
  bool verbose;
  Public:
  Graph(int V, bool verboseMode = false){
    numVertices = v;
    adj.resize(V)
    visited resize( V, false),
    verbose = verboseMode;
  }
  void addEdge (int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  void DFSRecursive (int vertex){
    visited[vertex] = true;
    std::cout vertex <<"";
    for(int neighbor: adj[vertex]){
      if(!visited[neighbor]){
        DFSRecursive[neighbor]
      }
    }
  }
  void DFSRecursivewrapper (int statvertex){
    std::fill(visited.begin(), visited.endl, false)
    cout<<" DFS Begin :"
    DFSRecursive(statvertex);
    cout<<endl;
  }
}

int main(){
Graph g1(6);
g1 addEdge(0,1);
g1 addEdge(0,2);
g1 addEdge(1,3);
g1 addEdge(1,5);
g1 addEdge(2,5);

g1 DFSRecorsivewrapper(0);
return 0;
}










  












  //   int argc, char* argv[]){

  //   setlocale(LC_ALL, "");
   
  //   bool needHelp=false;

  //   std::string helpString;
  //   helpString = "--help";

    

  //   for (int i=0; i < argc; i++){

  //       std::cout << "argv [" << i << "] = " <<argv[ i ] << "\n";
       
  //       if (helpString==argv[i]){
  //          needHelp=true;
  //       };  
  // }

  //   if(needHelp){
  //       getHelp();
  // };

  // // std::string helpString;
    
  //  // if ( helpString == "--help") {
  //  //     getHelp();
  // // };

  //   /*std::cerr<<"ERROR"
  //           <<std::endl;

  //  int a;
  //  std::cin>>a;
  //  return a;
  //   */
  // /*
  //   int nail[9];
  // for(int i=0; i < 9; i++){
  //      nail [i] = i;
  //   }

  //   for(int i=0; i < 9; i++){
  //       std::cout << " nail [ " << i << " ] = " << nail[i] << "\n";
  //  }*/

  //   // for(int i=0; i < argc; i++){
  //   //     std::cout << " argv [ " << i << " ] = " << argv[i] << "\n";
  //   // }
    