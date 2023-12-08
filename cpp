class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       int extraF=0;
       int start = 0;
       int reqF=0;
       
       for(int i = 0;i<n;i++){
           extraF+=(p[i].petrol-p[i].distance);
           
           if(extraF<0){
               start = i+1;
               reqF+=extraF;
               extraF=0;
           }
           
           
       }
       
       if(extraF+reqF>=0){
           return start;
       }
       
       return -1;
    }
};
