import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t=Integer.parseInt(br.readLine());
		while(t--!=0){
		    int size=Integer.parseInt(br.readLine());
		    String st=br.readLine();
		    
		    String string="";
		    String fstring="";
		    for(int j=0;j<size;j=j+4){
		        if((j+4)==size)
		            string=st.substring(j);
		        else
		            string=st.substring(j,j+4);
		            
		       int start=0;
		       int mid=0;
		       
		      String arr="abcdefghijklmnop";
		      int end=arr.length();
		      String a="";
		      for(int i=0;i<string.length();i++){
		          
		          if(string.charAt(i)=='0'){
		              mid=(start+end)/2;
		              a=arr.substring(start,mid);
		              end=mid;
		          }
		          else{
		              mid=(start+end)/2;
		              if(end==16)
		                  a=arr.substring(mid);
		              else
		                  a=arr.substring(mid,end);
		              start=mid;
		          }
		      }
		      fstring=fstring+a;
		    }
		    System.out.println(fstring);
		}
	}
}