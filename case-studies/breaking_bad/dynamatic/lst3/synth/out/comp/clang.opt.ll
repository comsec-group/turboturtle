; ModuleID = '/home/user/turboturtle/fuzzing/myfunc/synth/../out/comp/clang.ll'
source_filename = "/home/user/turboturtle/fuzzing/myfunc/synth/../myfunc.c"

; Function Attrs: nounwind uwtable
define dso_local i64 @myfunc(i64 noundef %0, i64 noundef %1) #0 {
  %3 = mul i64 %0, %0
  %4 = and i64 %1, 1
  %.not = icmp eq i64 %4, 0
  %5 = select i1 %.not, i64 0, i64 %3
  %6 = lshr i64 %0, 1
  %7 = xor i64 %6, %5
  ret i64 %7
}

; Function Attrs: nounwind uwtable
define dso_local i32 @main() #0 {
  %1 = call i32 @rand() #2
  %2 = call i32 @rand() #2
  %3 = call i32 @rand() #2
  %4 = call i32 @rand() #2
  %5 = call i32 @rand() #2
  %6 = call i32 @rand() #2
  %7 = call i32 @rand() #2
  %8 = call i32 @rand() #2
  %9 = call i32 @rand() #2
  %10 = call i32 @rand() #2
  %11 = call i32 @rand() #2
  ret i32 0
}

; Function Attrs: nounwind
declare i32 @rand() #1

attributes #0 = { nounwind uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
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
