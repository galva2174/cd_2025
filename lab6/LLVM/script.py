llvm_global = r'''@sl = constant [46 x i8] c"Hi, This is Yash Sinha of SRN: PES2UG22CS675\0a\00"

declare i32 @printf(i8*, ...)
'''

llvm_main = r'''define i32 @main() {'''
llvm_print = r'''
	%sl_ptr = getelementptr [46 x i8], [46 x i8]* @sl, i32 0, i32 0
	call i32(i8*, ...) @printf(i8* %sl_ptr)'''
llvm_net = r'''
	ret i32 0
}'''

with open('output.ll', 'w') as file:
	file.write(llvm_global)
	file.write(llvm_main)
	file.write(llvm_print)
	file.write(llvm_net)

