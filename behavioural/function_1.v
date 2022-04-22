module find_parity(a,b);
input [7:0]a;
output b;
function calc_parity;
input [0:7]it_is;
begin
calc_parity=^it_is;
end
endfunction
b=calc_parity(a);
endmodule

module function_tb;
reg [7:0]a;
wire b;
find_parity f1(a,b);
forever
begin
a=8'b10100010;
#5;
a=8'b11010101;
#5;
a=8'b11100010;
end
endmodule
