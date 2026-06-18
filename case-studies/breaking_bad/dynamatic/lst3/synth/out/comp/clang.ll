; ModuleID = '/home/user/turboturtle/fuzzing/myfunc/synth/../myfunc.c'
source_filename = "/home/user/turboturtle/fuzzing/myfunc/synth/../myfunc.c"



; Function Attrs:  nounwind  uwtable
define dso_local i64 @myfunc(i64 noundef %0, i64 noundef %1) #0 {
  %3 = alloca i64, align 8
  %4 = alloca i64, align 8
  %5 = alloca i64, align 8
  %6 = alloca i64, align 8
  store i64 %0, ptr %3, align 8
  store i64 %1, ptr %4, align 8
  %7 = load i64, ptr %3, align 8
  %8 = load i64, ptr %3, align 8
  %9 = mul i64 %7, %8
  store i64 %9, ptr %5, align 8
  %10 = load i64, ptr %5, align 8
  %11 = load i64, ptr %4, align 8
  %12 = and i64 %11, 1
  %13 = mul i64 %10, %12
  store i64 %13, ptr %6, align 8
  %14 = load i64, ptr %3, align 8
  %15 = lshr i64 %14, 1
  %16 = load i64, ptr %6, align 8
  %17 = xor i64 %15, %16
  ret i64 %17
}

; Function Attrs:  nounwind  uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i64, align 8
  %3 = alloca i64, align 8
  %4 = alloca i64, align 8
  %5 = alloca i64, align 8
  %6 = alloca i64, align 8
  %7 = alloca i64, align 8
  %8 = alloca i64, align 8
  %9 = alloca i64, align 8
  %10 = alloca i64, align 8
  %11 = alloca i64, align 8
  %12 = alloca i64, align 8
  store i32 0, ptr %1, align 4
  %13 = call i32 @rand() #2
  %14 = sext i32 %13 to i64
  store i64 %14, ptr %2, align 8
  %15 = call i32 @rand() #2
  %16 = sext i32 %15 to i64
  store i64 %16, ptr %3, align 8
  %17 = call i32 @rand() #2
  %18 = sext i32 %17 to i64
  store i64 %18, ptr %4, align 8
  %19 = call i32 @rand() #2
  %20 = sext i32 %19 to i64
  store i64 %20, ptr %5, align 8
  %21 = call i32 @rand() #2
  %22 = sext i32 %21 to i64
  store i64 %22, ptr %6, align 8
  %23 = call i32 @rand() #2
  %24 = sext i32 %23 to i64
  store i64 %24, ptr %7, align 8
  %25 = call i32 @rand() #2
  %26 = sext i32 %25 to i64
  store i64 %26, ptr %8, align 8
  %27 = call i32 @rand() #2
  %28 = sext i32 %27 to i64
  store i64 %28, ptr %9, align 8
  %29 = call i32 @rand() #2
  %30 = sext i32 %29 to i64
  store i64 %30, ptr %10, align 8
  %31 = call i32 @rand() #2
  %32 = sext i32 %31 to i64
  store i64 %32, ptr %11, align 8
  %33 = call i32 @rand() #2
  %34 = sext i32 %33 to i64
  store i64 %34, ptr %12, align 8
  %35 = load i64, ptr %2, align 8
  %36 = load i64, ptr %5, align 8
  %37 = call i64 @myfunc(i64 noundef %35, i64 noundef %36)
  ret i32 0
}

; Function Attrs: nounwind
declare i32 @rand() #1

attributes #0 = {  nounwind  uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #2 = { nounwind }

!llvm.module.flags = !{!0, !1, !2, !3, !4}
!llvm.ident = !{!5}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 8, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 2}
!4 = !{i32 7, !"frame-pointer", i32 2}
!5 = !{!"clang version 18.0.0 (https://github.com/EPFL-LAP/llvm-project.git b06546b8f001a888f346b38b9f3ae0da11efbff2)"}
