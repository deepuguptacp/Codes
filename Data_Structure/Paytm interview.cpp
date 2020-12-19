mymethod 100 times in a minute.

count = 0;
currtime = getcurrenttimeinsecondds();
while(count <= 100 && (getcurrenttimeinsecondds - currtime) <= 60){
    mymethod();
    count++;
}

inputstring = Ankit
sequence = nki
output = A000t


function(s, seq){
    temp = 0;
    l = s.size(); - 5
    for(i = 0 to l){
        if(s[i] == seq[0]){
            for(j = 1 to seq.size()){
                if(s[i + j] != seq[j]){
                    temp = 1;
                    break;
                }
            }
            if(!temp){
                for(j = 0 to seq.size()){
                    s[i+j] = '0';
                }
            }
        }
    }    
}


