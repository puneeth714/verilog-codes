module fun(a, b, c, d, e);
input a,b,c;
output d,e;
wire w1, w2, w3;

or O1(w1, a, b);
and A1(w2, b, c);
not N1(w3, w1);

or O2(d, w3, w2);
xor X1(e, w2, c);
endmodule




module fun_tb;
reg a,b,c;
wire d,e;
fun a1(a,b,c,d,e);

initial
begin
$dumpfile("check.vcd");
$dumpvars(0,fun_tb);
a=0;b=0;c=0;
#5 a=0;b=0;c=1;
#5 a=0;b=1;c=0;
#5 a=0;b=1;c=1;
#5 a=1;b=0;c=0;
#5 a=1;b=0;c=1;
#5 a=1;b=1;c=0;
#5 a=1;b=1;c=1;
#5 ;

end
endmodule