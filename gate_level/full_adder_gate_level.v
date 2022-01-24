module full_adder(a,b,cin,s,cout);
input a,b,cin;
output s,cout;
wire w1,w2,w3;
xor(w1,a,b);
and(w2,w1,cin);
and(w3,a,b);
xor(s,w1,cin);
or(c,w2,w3);
endmodule

module test_fd1;
reg a,b,cin;
wire s,cout;
full_adder f1(a,b,cin,s,cout);

initial begin
$dumpfile("wave.vcd");
        $dumpvars(0, test_fd1);
    a=0;b=0;cin=0;#100;
    a=0;b=0;cin=1;#100;
     a=0;b=1;cin=0;#100;
     a=0;b=1;cin=1;#100;
     a=1;b=0;cin=0;#100;
     a=1;b=0;cin=1;#100;
     a=1;b=1;cin=0;#100;
     a=1;b=0;cin=1;#100;
      a=1;b=1;cin=1;#100;


end
endmodule