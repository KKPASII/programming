class Solution {
    public String solution(String video_len, String pos, String op_start, String op_end, String[] commands) {
        String answer = "";
        int present = totalTime(pos);
        int videoEnd = totalTime(video_len);
        int opStart = totalTime(op_start);
        int opEnd = totalTime(op_end);
        
        present = skip(opStart, present, opEnd);
        
        for (String command : commands) {
            switch(command) {
                case "prev":
                    present -= 10;
                    if (present < 0) {
                        present = 0;
                    }
                    break;
                case "next":
                    present += 10;
                    if (present > videoEnd) {
                        present = videoEnd;
                    }
                    break;
                default:
                    break;
            }
            
            present = skip(opStart, present, opEnd);
        }
        
        answer = timeString(present);
        return answer;
    }
    
    public int skip(int opStart, int present, int opEnd) {
        if (opStart <= present && present <= opEnd) {
            present = opEnd;
        }
        
        return present;
    }
    
    public int totalTime(String timePos) {
        int mm = Integer.parseInt(timePos.substring(0, 2));
        int ss = Integer.parseInt(timePos.substring(3));
        
        return mm * 60 + ss;
    }
    
    public String timeString(int totalTime) {
        int mm = totalTime / 60;
        int ss = totalTime % 60;
        
        return String.format("%02d:%02d", mm, ss);
    }
}