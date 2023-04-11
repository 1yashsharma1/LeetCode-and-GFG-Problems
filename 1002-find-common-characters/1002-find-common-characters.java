class Solution {
    	public  List<String> commonChars(String[] words) {
	    int charcount[]=new int[26];
	    Arrays.fill(charcount,Integer.MAX_VALUE);
	    for(String str:words){
	        int count[]=buildCharFrequencyTable(str);
	    for(int i=0;i<26;i++){
	        charcount[i]=Math.min(charcount[i],count[i]);
	    }
	    }
	    return toList(charcount);
    }
    
private  int[] buildCharFrequencyTable(String str) {
    int[] count = new int[26];
    for (char c : str.toCharArray()) {
        count[c - 'a']++;
    }
    return count;
}

private  List<String> toList(int[] charcount) {
    List<String> result = new ArrayList<>();
    for (int i = 0; i < charcount.length; i++) {
        for (int sz = charcount[i]; sz > 0; sz--) {
            result.add("" + (char) (i + 'a'));
        }
    }
    return result;
}
}