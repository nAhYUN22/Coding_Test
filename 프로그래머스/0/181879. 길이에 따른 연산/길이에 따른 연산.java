class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        int count = num_list.length;
        if(count <= 10){
            answer = 1;
            for(int i=0; i<count; i++){
                
                answer *= num_list[i];
            }
        } else {
            for(int i=0; i<count; i++){
                answer += num_list[i];
            }
        }
        return answer;
    }
}