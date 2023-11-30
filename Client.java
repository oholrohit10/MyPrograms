import java.io.*;
import java.net.*;

class Client
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("Client Of Marvellous Chat Messenger Is Running...");

        Socket sobj = new Socket("Localhost",2100);
        System.out.println("Client is Waiting For Server to accept The Request...");
        
        PrintStream ps = new PrintStream(sobj.getOutputStream());

        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Marvellous Chat Messenger Started...");

        String str1, str2;

        while(!(str1 = br2.readLine()).equals("end"))
        {
            ps.println(str1);
            System.out.println("Enter Message For Server : ");
            str2 = br1.readLine();
            System.out.println("Server Says : "+str2);
        }
        System.out.println("Thank You For Using Marvellous Chat Messanger...");  
        sobj.close();
        ps.close();
        br1.close();
        br2.close();
    }
}