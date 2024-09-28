import java.util.*;

public class AlgoritmoDjikstra{
    private final int[][] grafo;//matrizes pra grafos são legais
    //[a][b] = [b][a] = k(ligação dos vertices ab é igual a ba e igual ao peso)
    public AlgoritmoDjikstra(int lado){
     this.grafo = new int[lado][lado];
        for (int[] ints : grafo) {
            Arrays.fill(ints, -1);
        }
    }
    public void criarAresta(int inicio, int fim, int peso){
        grafo[inicio][fim] = peso;
        grafo[fim][inicio] = peso;
    }
    private List<Integer> catchVizinhos(int index){
        List<Integer> vizinho = new ArrayList<>();
        for(int i = 0; i<grafo.length; i++){
            if(grafo[i][index] != -1){
                vizinho.add(i);
            }
        }
        return vizinho;
    }
    private int noProximo(int[] custos, Set<Integer> constraints){
       int min = Integer.MAX_VALUE;
       int index = -1;
       for(Integer i : constraints){
           if(custos[i]<min){
               min = custos[i];
               index = i;
           }
       }
       return index;
    }
    public List<Integer> dijkstra(int inicio, int fim){
        int[] custos = new int[grafo.length];
        int[] antecessores = new int[grafo.length];
        Set<Integer> naoVisitados = new HashSet<>();

        Arrays.fill(antecessores, -1);
        Arrays.fill(custos, Integer.MAX_VALUE);
        custos[inicio] = 0;
        for(int i = 0; i<grafo.length; i++)naoVisitados.add(i);
        while(!naoVisitados.isEmpty()){
            int current = noProximo(custos, naoVisitados);
            naoVisitados.remove(current);
            for(Integer vizinho : catchVizinhos(current)){
                int newWay = custos[current] + grafo[vizinho][current];
                if(newWay<custos[vizinho]){
                    custos[vizinho] = newWay;
                    antecessores[vizinho] = current;
                }
            }
            if(current==fim){
                return montar(fim, antecessores);
            }
        }
        return null;
    }
    private List<Integer> montar(int fim, int[] antecessores){
        List<Integer> vizinhos = new ArrayList<>();
        for(int i = fim; i!=-1; i = antecessores[i]){
            vizinhos.add(i);
        }
        return vizinhos;
    }
}