#
    int z=0,o=0,t=0;
    
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                z++;
            }
            else if(nums[i]==1){
                o++;
            }
            else{
                t++;
            }
            
            for(int j=0;j<n;j++){
                if(j<z){
                    nums[j]=0;

                }
                else if(j<0){
                    nums[j]=1;
                }
                else{
                    nums[j]=2;
                }
            }

        } }

        
    
