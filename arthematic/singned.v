module signed_reg();
reg [31:0] a;
initial begin
    a=14'h1234;
    
$display("current value of a %h",a);
a= -14'h1234;
$display("next value of a is %h",a);
    
end

 
endmodule