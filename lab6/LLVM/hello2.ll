@sl = constant [46 x i8] c"Hi, This is Yash Sinha of SRN: PES2UG22CS675\0a\00"

declare i32 @printf(i8*, ...)

define i32 @main() {
	%sl_ptr = getelementptr [46 x i8], [46 x i8]* @sl, i32 0, i32 0
	call i32(i8*, ...) @printf(i8* %sl_ptr)
	ret i32 0
}

