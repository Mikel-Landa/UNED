source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_402000 = local_unnamed_addr global i32 -1
@global_var_404004 = local_unnamed_addr global i32 0
@global_var_404010 = local_unnamed_addr global i32 0
@global_var_402010 = local_unnamed_addr global i32 16384
@global_var_403000 = constant [13 x i8] c"Mes (1..12)?\00"
@global_var_40300d = constant [3 x i8] c"%i\00"
@global_var_403010 = constant [19 x i8] c"Anyo (1601..3000)?\00"
@global_var_403025 = constant [7 x i8] c"|  .  \00"
@global_var_40302c = constant [5 x i8] c"  . \00"
@global_var_403031 = constant [6 x i8] c"  .  \00"
@global_var_403037 = constant [6 x i8] c"  %i \00"
@global_var_40303d = constant [5 x i8] c" %i \00"
@global_var_403042 = constant [8 x i8] c"|  %i  \00"
@global_var_40304a = constant [7 x i8] c"| %i  \00"
@global_var_403051 = constant [6 x i8] c" %i  \00"
@global_var_403057 = constant [7 x i8] c"  %i  \00"
@global_var_402020 = local_unnamed_addr global i32 4201748
@global_var_401d04 = local_unnamed_addr constant i32 -1
@global_var_401d08 = constant i32 4201716
@global_var_404020 = local_unnamed_addr global i32 0
@global_var_404030 = local_unnamed_addr global i32 0
@global_var_4040a0 = local_unnamed_addr global i32 0
@global_var_403084 = local_unnamed_addr constant [45 x i8] c"w32_sharedptr->size == sizeof(W32_EH_SHARED)\00"
@global_var_4030b4 = local_unnamed_addr constant [49 x i8] c"../../gcc-3.4.5/gcc/config/i386/w32-shared-ptr.c\00"
@global_var_4030e8 = local_unnamed_addr constant [39 x i8] c"GetAtomNameA (atom, s, sizeof(s)) != 0\00"
@global_var_403060 = local_unnamed_addr constant [34 x i8] c"-LIBGCCW32-EH-3-SJLJ-GTHR-MINGW32\00"
@global_var_403064 = local_unnamed_addr constant [30 x i8] c"GCCW32-EH-3-SJLJ-GTHR-MINGW32\00"
@global_var_403068 = local_unnamed_addr constant [26 x i8] c"32-EH-3-SJLJ-GTHR-MINGW32\00"
@global_var_40306c = local_unnamed_addr constant [22 x i8] c"H-3-SJLJ-GTHR-MINGW32\00"
@global_var_403070 = local_unnamed_addr constant [18 x i8] c"SJLJ-GTHR-MINGW32\00"
@global_var_403074 = local_unnamed_addr constant [14 x i8] c"-GTHR-MINGW32\00"
@global_var_403078 = local_unnamed_addr constant [10 x i8] c"R-MINGW32\00"
@global_var_40307c = local_unnamed_addr constant [6 x i8] c"NGW32\00"
@global_var_403080 = local_unnamed_addr constant i32 50
@global_var_404050 = local_unnamed_addr global i32 0
@global_var_404054 = local_unnamed_addr global i32 0
@global_var_402030 = local_unnamed_addr global i32 0
@global_var_402034 = local_unnamed_addr global i32 -1
@global_var_404060 = local_unnamed_addr global i32 0
@global_var_402038 = local_unnamed_addr global i32 0
@global_var_40203c = local_unnamed_addr global i32 -1
@global_var_404070 = local_unnamed_addr global i32 0
@global_var_404074 = local_unnamed_addr global i32 0
@global_var_404080 = local_unnamed_addr global i32 0
@global_var_402044 = local_unnamed_addr global i32 -1
@global_var_402040 = local_unnamed_addr global i32 0
@global_var_404090 = local_unnamed_addr global i32 0
@global_var_4040b0 = local_unnamed_addr global i32 0
@0 = external global i32
@global_var_404000 = local_unnamed_addr global i8*** null
@1 = internal constant [2 x i8] c"\0A\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@global_var_403023 = constant [2 x i8] c"\0A\00"

define i32 @_atexit(i32 %arg1) local_unnamed_addr {
dec_label_pc_4012c0:
  %0 = call i32 @atexit(void ()* bitcast (i32* @0 to void ()*)), !insn.addr !0
  ret i32 %0, !insn.addr !0
}

define i32 @__Z6getDayii(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_4012f0:
  %0 = sdiv i32 %arg1, 100, !insn.addr !1
  %1 = mul i32 %0, -100
  %2 = add i32 %1, %arg1, !insn.addr !2
  %3 = mul i32 %arg2, 13, !insn.addr !3
  %4 = add i32 %3, 13, !insn.addr !4
  %5 = sext i32 %4 to i64, !insn.addr !5
  %6 = mul nsw i64 %5, 1717986919, !insn.addr !5
  %7 = udiv i64 %6, 4294967296, !insn.addr !5
  %8 = trunc i64 %7 to i32, !insn.addr !5
  %9 = sdiv i32 %8, 2, !insn.addr !6
  %10 = icmp slt i32 %4, 0
  %11 = icmp slt i32 %2, 0, !insn.addr !7
  %12 = icmp eq i1 %11, false, !insn.addr !8
  %13 = add i32 %2, 3
  %spec.select = select i1 %12, i32 %2, i32 %13
  %14 = sdiv i32 %spec.select, 4, !insn.addr !9
  %15 = icmp slt i32 %arg1, -99, !insn.addr !10
  %16 = icmp eq i1 %15, false, !insn.addr !11
  %17 = add nsw i32 %0, 3
  %stack_var_-32.0 = select i1 %16, i32 %0, i32 %17
  %18 = sdiv i32 %stack_var_-32.0, 4, !insn.addr !12
  %19 = mul i32 %0, 2, !insn.addr !13
  %20 = select i1 %10, i32 2, i32 1, !insn.addr !14
  %21 = sub nsw i32 %20, %19, !insn.addr !15
  %22 = add nsw i32 %21, %9, !insn.addr !16
  %23 = add i32 %22, %2, !insn.addr !17
  %24 = add i32 %23, %18, !insn.addr !18
  %25 = add i32 %24, %14, !insn.addr !19
  %26 = sext i32 %25 to i64, !insn.addr !20
  %27 = mul nsw i64 %26, -1840700269, !insn.addr !20
  %28 = udiv i64 %27, 4294967296, !insn.addr !20
  %29 = trunc i64 %28 to i32, !insn.addr !20
  %30 = add i32 %25, %29, !insn.addr !21
  %31 = sdiv i32 %30, 4, !insn.addr !22
  %32 = ashr i32 %25, 31, !insn.addr !23
  %33 = sub nsw i32 %31, %32, !insn.addr !24
  %34 = mul i32 %33, -7
  %35 = add i32 %34, %25, !insn.addr !25
  ret i32 %35, !insn.addr !26
}

define i32 @__Z11getStartDayv() local_unnamed_addr {
dec_label_pc_4013d0:
  %.reg2mem2 = alloca i32, !insn.addr !27
  %.reg2mem = alloca i32, !insn.addr !27
  %stack_var_-8 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_403000, i32 0, i32 0)), !insn.addr !28
  %1 = call i32 (i8*, ...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_40300d, i32 0, i32 0), i32* nonnull %stack_var_-12), !insn.addr !29
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_403010, i32 0, i32 0)), !insn.addr !30
  %3 = call i32 (i8*, ...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_40300d, i32 0, i32 0), i32* nonnull %stack_var_-8), !insn.addr !31
  %4 = load i32, i32* %stack_var_-12, align 4, !insn.addr !32
  %5 = icmp eq i32 %4, 1, !insn.addr !32
  %6 = icmp eq i1 %5, false, !insn.addr !33
  br i1 %6, label %dec_label_pc_401428, label %dec_label_pc_40141a, !insn.addr !33

dec_label_pc_40141a:                              ; preds = %dec_label_pc_4013d0
  store i32 13, i32* %stack_var_-12, align 4, !insn.addr !34
  %7 = load i32, i32* %stack_var_-8, align 4, !insn.addr !35
  %8 = add i32 %7, -1, !insn.addr !35
  store i32 %8, i32* %stack_var_-8, align 4, !insn.addr !35
  store i32 %8, i32* %.reg2mem, !insn.addr !36
  store i32 13, i32* %.reg2mem2, !insn.addr !36
  br label %dec_label_pc_40143a, !insn.addr !36

dec_label_pc_401428:                              ; preds = %dec_label_pc_4013d0
  %9 = icmp eq i32 %4, 2, !insn.addr !37
  %10 = icmp eq i1 %9, false, !insn.addr !38
  br i1 %10, label %dec_label_pc_401428.dec_label_pc_40143a_crit_edge, label %dec_label_pc_40142e, !insn.addr !38

dec_label_pc_401428.dec_label_pc_40143a_crit_edge: ; preds = %dec_label_pc_401428
  %.pre = load i32, i32* %stack_var_-8, align 4
  store i32 %.pre, i32* %.reg2mem
  store i32 %4, i32* %.reg2mem2
  br label %dec_label_pc_40143a

dec_label_pc_40142e:                              ; preds = %dec_label_pc_401428
  store i32 14, i32* %stack_var_-12, align 4, !insn.addr !39
  %11 = load i32, i32* %stack_var_-8, align 4, !insn.addr !40
  %12 = add i32 %11, -1, !insn.addr !40
  store i32 %12, i32* %stack_var_-8, align 4, !insn.addr !40
  store i32 %12, i32* %.reg2mem, !insn.addr !40
  store i32 14, i32* %.reg2mem2, !insn.addr !40
  br label %dec_label_pc_40143a, !insn.addr !40

dec_label_pc_40143a:                              ; preds = %dec_label_pc_401428.dec_label_pc_40143a_crit_edge, %dec_label_pc_40142e, %dec_label_pc_40141a
  %.reload3 = load i32, i32* %.reg2mem2, !insn.addr !41
  %.reload = load i32, i32* %.reg2mem, !insn.addr !42
  %13 = call i32 @__Z6getDayii(i32 %.reload, i32 %.reload3), !insn.addr !43
  ret i32 %13, !insn.addr !44
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_401454:
  %storemerge49.reg2mem = alloca i32, !insn.addr !45
  %stack_var_-12.010.reg2mem = alloca i32, !insn.addr !45
  %stack_var_-20.1.off012.reg2mem = alloca i32, !insn.addr !45
  %storemerge15.reg2mem = alloca i32, !insn.addr !45
  %stack_var_-20.0.off0.lcssa.reg2mem = alloca i32, !insn.addr !45
  %0 = call i32 @__decompiler_undefined_function_0()
  %1 = call i32 @___chkstk(i32 %0), !insn.addr !46
  %2 = call i32 @___main(), !insn.addr !47
  %3 = call i32 @__Z11getStartDayv(), !insn.addr !48
  %4 = add i32 %3, 5, !insn.addr !49
  %5 = sext i32 %4 to i64, !insn.addr !50
  %6 = mul nsw i64 %5, -1840700269, !insn.addr !50
  %7 = udiv i64 %6, 4294967296, !insn.addr !50
  %8 = trunc i64 %7 to i32, !insn.addr !50
  %9 = add i32 %4, %8, !insn.addr !51
  %10 = sdiv i32 %9, 4, !insn.addr !52
  %11 = ashr i32 %4, 31, !insn.addr !53
  %12 = sub nsw i32 %10, %11, !insn.addr !54
  %13 = mul i32 %12, -7
  %14 = add i32 %13, %4, !insn.addr !55
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_403023, i32 0, i32 0)), !insn.addr !56
  %16 = icmp sgt i32 %14, 0, !insn.addr !57
  store i32 0, i32* %stack_var_-20.0.off0.lcssa.reg2mem, !insn.addr !57
  store i32 0, i32* %storemerge15.reg2mem, !insn.addr !57
  br i1 %16, label %dec_label_pc_4014df, label %dec_label_pc_40157d.preheader, !insn.addr !57

dec_label_pc_40157d.preheader:                    ; preds = %dec_label_pc_401567, %dec_label_pc_401454
  %stack_var_-20.0.off0.lcssa.reload = load i32, i32* %stack_var_-20.0.off0.lcssa.reg2mem
  %17 = add nsw i32 %stack_var_-20.0.off0.lcssa.reload, 29
  store i32 %stack_var_-20.0.off0.lcssa.reload, i32* %stack_var_-20.1.off012.reg2mem
  store i32 1, i32* %stack_var_-12.010.reg2mem
  br label %dec_label_pc_401587

dec_label_pc_4014df:                              ; preds = %dec_label_pc_401454, %dec_label_pc_401567
  %storemerge15.reload = load i32, i32* %storemerge15.reg2mem
  %18 = udiv i32 %storemerge15.reload, 2, !insn.addr !58
  %19 = add nuw i32 %storemerge15.reload, %18, !insn.addr !59
  %20 = sdiv i32 %19, 4, !insn.addr !60
  %21 = mul i32 %20, -7
  %22 = add i32 %21, %storemerge15.reload, !insn.addr !61
  %23 = icmp eq i32 %22, 5, !insn.addr !62
  %24 = icmp eq i1 %23, false, !insn.addr !63
  br i1 %24, label %dec_label_pc_40151d, label %dec_label_pc_401508, !insn.addr !63

dec_label_pc_401508:                              ; preds = %dec_label_pc_4014df
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_403025, i32 0, i32 0)), !insn.addr !64
  br label %dec_label_pc_401567, !insn.addr !65

dec_label_pc_40151d:                              ; preds = %dec_label_pc_4014df
  %26 = icmp eq i32 %22, 4, !insn.addr !66
  %27 = icmp eq i1 %26, false, !insn.addr !67
  br i1 %27, label %dec_label_pc_40155b, label %dec_label_pc_401546, !insn.addr !67

dec_label_pc_401546:                              ; preds = %dec_label_pc_40151d
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_40302c, i32 0, i32 0)), !insn.addr !68
  br label %dec_label_pc_401567, !insn.addr !69

dec_label_pc_40155b:                              ; preds = %dec_label_pc_40151d
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_403031, i32 0, i32 0)), !insn.addr !70
  br label %dec_label_pc_401567, !insn.addr !70

dec_label_pc_401567:                              ; preds = %dec_label_pc_40155b, %dec_label_pc_401546, %dec_label_pc_401508
  %30 = add nuw nsw i32 %storemerge15.reload, 1, !insn.addr !71
  %exitcond17 = icmp eq i32 %30, %14
  store i32 %14, i32* %stack_var_-20.0.off0.lcssa.reg2mem, !insn.addr !57
  store i32 %30, i32* %storemerge15.reg2mem, !insn.addr !57
  br i1 %exitcond17, label %dec_label_pc_40157d.preheader, label %dec_label_pc_4014df, !insn.addr !57

dec_label_pc_401587:                              ; preds = %dec_label_pc_40157d.preheader, %dec_label_pc_4016a2
  %stack_var_-12.010.reload = load i32, i32* %stack_var_-12.010.reg2mem
  %stack_var_-20.1.off012.reload = load i32, i32* %stack_var_-20.1.off012.reg2mem
  %31 = sext i32 %stack_var_-20.1.off012.reload to i64, !insn.addr !72
  %32 = mul nsw i64 %31, -1840700269, !insn.addr !72
  %33 = udiv i64 %32, 4294967296, !insn.addr !72
  %34 = trunc i64 %33 to i32, !insn.addr !72
  %35 = add i32 %stack_var_-20.1.off012.reload, %34, !insn.addr !73
  %36 = sdiv i32 %35, 4, !insn.addr !74
  %37 = ashr i32 %stack_var_-20.1.off012.reload, 31, !insn.addr !75
  %38 = sub nsw i32 %36, %37, !insn.addr !76
  %39 = mul i32 %38, -7
  %40 = add i32 %39, %stack_var_-20.1.off012.reload, !insn.addr !77
  %41 = icmp eq i32 %40, 4, !insn.addr !78
  %42 = icmp eq i1 %41, false, !insn.addr !79
  br i1 %42, label %dec_label_pc_4015e6, label %dec_label_pc_4015b0, !insn.addr !79

dec_label_pc_4015b0:                              ; preds = %dec_label_pc_401587
  %43 = icmp ugt i32 %stack_var_-12.010.reload, 9, !insn.addr !80
  br i1 %43, label %dec_label_pc_4015ce, label %dec_label_pc_4015b6, !insn.addr !80

dec_label_pc_4015b6:                              ; preds = %dec_label_pc_4015b0
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_403037, i32 0, i32 0), i32 %stack_var_-12.010.reload), !insn.addr !81
  br label %dec_label_pc_40166d, !insn.addr !82

dec_label_pc_4015ce:                              ; preds = %dec_label_pc_4015b0
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_40303d, i32 0, i32 0), i32 %stack_var_-12.010.reload), !insn.addr !83
  br label %dec_label_pc_40166d, !insn.addr !84

dec_label_pc_4015e6:                              ; preds = %dec_label_pc_401587
  %46 = icmp eq i32 %40, 5, !insn.addr !85
  %47 = icmp eq i1 %46, false, !insn.addr !86
  br i1 %47, label %dec_label_pc_40163f, label %dec_label_pc_40160f, !insn.addr !86

dec_label_pc_40160f:                              ; preds = %dec_label_pc_4015e6
  %48 = icmp ugt i32 %stack_var_-12.010.reload, 9, !insn.addr !87
  br i1 %48, label %dec_label_pc_40162a, label %dec_label_pc_401615, !insn.addr !87

dec_label_pc_401615:                              ; preds = %dec_label_pc_40160f
  %49 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_403042, i32 0, i32 0), i32 %stack_var_-12.010.reload), !insn.addr !88
  br label %dec_label_pc_40166d, !insn.addr !89

dec_label_pc_40162a:                              ; preds = %dec_label_pc_40160f
  %50 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_40304a, i32 0, i32 0), i32 %stack_var_-12.010.reload), !insn.addr !90
  br label %dec_label_pc_40166d, !insn.addr !91

dec_label_pc_40163f:                              ; preds = %dec_label_pc_4015e6
  %51 = icmp ult i32 %stack_var_-12.010.reload, 10, !insn.addr !92
  br i1 %51, label %dec_label_pc_40165a, label %dec_label_pc_401645, !insn.addr !92

dec_label_pc_401645:                              ; preds = %dec_label_pc_40163f
  %52 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_403051, i32 0, i32 0), i32 %stack_var_-12.010.reload), !insn.addr !93
  br label %dec_label_pc_40166d, !insn.addr !94

dec_label_pc_40165a:                              ; preds = %dec_label_pc_40163f
  %53 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_403057, i32 0, i32 0), i32 %stack_var_-12.010.reload), !insn.addr !95
  br label %dec_label_pc_40166d, !insn.addr !95

dec_label_pc_40166d:                              ; preds = %dec_label_pc_40165a, %dec_label_pc_401645, %dec_label_pc_40162a, %dec_label_pc_401615, %dec_label_pc_4015ce, %dec_label_pc_4015b6
  %54 = icmp eq i32 %40, 6, !insn.addr !96
  %55 = icmp eq i1 %54, false, !insn.addr !97
  br i1 %55, label %dec_label_pc_4016a2, label %dec_label_pc_401696, !insn.addr !97

dec_label_pc_401696:                              ; preds = %dec_label_pc_40166d
  %56 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_403023, i32 0, i32 0)), !insn.addr !98
  br label %dec_label_pc_4016a2, !insn.addr !98

dec_label_pc_4016a2:                              ; preds = %dec_label_pc_401696, %dec_label_pc_40166d
  %57 = add nuw nsw i32 %stack_var_-12.010.reload, 1, !insn.addr !99
  %58 = add nuw i32 %stack_var_-20.1.off012.reload, 1, !insn.addr !100
  %exitcond16 = icmp eq i32 %stack_var_-20.1.off012.reload, %17
  store i32 %58, i32* %stack_var_-20.1.off012.reg2mem, !insn.addr !101
  store i32 %57, i32* %stack_var_-12.010.reg2mem, !insn.addr !101
  br i1 %exitcond16, label %dec_label_pc_4016b6, label %dec_label_pc_401587, !insn.addr !101

dec_label_pc_4016b6:                              ; preds = %dec_label_pc_4016a2
  %59 = add i32 %14, 2, !insn.addr !102
  %60 = sext i32 %59 to i64, !insn.addr !103
  %61 = mul nsw i64 %60, -1840700269, !insn.addr !103
  %62 = udiv i64 %61, 4294967296, !insn.addr !103
  %63 = trunc i64 %62 to i32, !insn.addr !103
  %64 = add i32 %59, %63, !insn.addr !104
  %65 = sdiv i32 %64, 4, !insn.addr !105
  %66 = ashr i32 %59, 31, !insn.addr !106
  %67 = sub nsw i32 %65, %66, !insn.addr !107
  %.neg7 = mul i32 %67, 7
  %.neg8 = sub i32 5, %14, !insn.addr !108
  %68 = add i32 %.neg7, %.neg8, !insn.addr !109
  %69 = icmp sgt i32 %68, 0, !insn.addr !110
  store i32 0, i32* %storemerge49.reg2mem, !insn.addr !110
  br i1 %69, label %dec_label_pc_401720, label %dec_label_pc_401733, !insn.addr !110

dec_label_pc_401720:                              ; preds = %dec_label_pc_4016b6, %dec_label_pc_401720
  %storemerge49.reload = load i32, i32* %storemerge49.reg2mem
  %70 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_403031, i32 0, i32 0)), !insn.addr !111
  %71 = add nuw nsw i32 %storemerge49.reload, 1, !insn.addr !112
  %exitcond = icmp eq i32 %71, %68
  store i32 %71, i32* %storemerge49.reg2mem, !insn.addr !110
  br i1 %exitcond, label %dec_label_pc_401733, label %dec_label_pc_401720, !insn.addr !110

dec_label_pc_401733:                              ; preds = %dec_label_pc_401720, %dec_label_pc_4016b6
  ret i32 0, !insn.addr !113
}

define i32 @___do_global_ctors(i32 %arg1) local_unnamed_addr {
dec_label_pc_40176c:
  %eax.01.reg2mem = alloca i32, !insn.addr !114
  %ebx.0.reg2mem = alloca i32, !insn.addr !114
  store i32 0, i32* %eax.01.reg2mem
  br label %dec_label_pc_4017b1

dec_label_pc_40178c:                              ; preds = %dec_label_pc_4017bd, %dec_label_pc_40178c
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %0 = add i32 %ebx.0.reload, -1, !insn.addr !115
  %1 = icmp eq i32 %0, 0, !insn.addr !115
  %2 = icmp eq i1 %1, false, !insn.addr !116
  store i32 %0, i32* %ebx.0.reg2mem, !insn.addr !116
  br i1 %2, label %dec_label_pc_40178c, label %dec_label_pc_401796, !insn.addr !116

dec_label_pc_401796:                              ; preds = %dec_label_pc_40178c, %dec_label_pc_4017bd
  %3 = call i32 @_atexit(i32 4200252), !insn.addr !117
  ret i32 %3, !insn.addr !118

dec_label_pc_4017b1:                              ; preds = %dec_label_pc_40176c, %dec_label_pc_4017b1
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %4 = add i32 %eax.01.reload, 1, !insn.addr !119
  %5 = mul i32 %4, 4, !insn.addr !120
  %6 = add i32 %5, ptrtoint (i32* @global_var_401d08 to i32), !insn.addr !120
  %7 = inttoptr i32 %6 to i32*, !insn.addr !120
  %8 = load i32, i32* %7, align 4, !insn.addr !120
  %9 = icmp eq i32 %8, 0, !insn.addr !121
  %10 = icmp eq i1 %9, false, !insn.addr !122
  store i32 %4, i32* %eax.01.reg2mem, !insn.addr !122
  br i1 %10, label %dec_label_pc_4017b1, label %dec_label_pc_4017bd, !insn.addr !122

dec_label_pc_4017bd:                              ; preds = %dec_label_pc_4017b1
  %11 = icmp eq i32 %4, 0, !insn.addr !123
  store i32 %4, i32* %ebx.0.reg2mem, !insn.addr !124
  br i1 %11, label %dec_label_pc_401796, label %dec_label_pc_40178c, !insn.addr !124
}

define i32 @___main() local_unnamed_addr {
dec_label_pc_4017cc:
  %0 = call i32 @__decompiler_undefined_function_0()
  %1 = load i32, i32* @global_var_404020, align 4, !insn.addr !125
  %2 = icmp eq i32 %1, 0, !insn.addr !126
  br i1 %2, label %dec_label_pc_4017dc, label %dec_label_pc_4017d8, !insn.addr !127

dec_label_pc_4017d8:                              ; preds = %dec_label_pc_4017cc
  ret i32 %1, !insn.addr !128

dec_label_pc_4017dc:                              ; preds = %dec_label_pc_4017cc
  store i32 1, i32* @global_var_404020, align 4, !insn.addr !129
  %3 = call i32 @___do_global_ctors(i32 %0), !insn.addr !130
  ret i32 %3, !insn.addr !130
}

define i32 @___chkstk(i32 %arg1) local_unnamed_addr {
dec_label_pc_401c4c:
  ret i32 %arg1, !insn.addr !131
}

declare i32 @atexit(void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @scanf(i8*, ...) local_unnamed_addr

declare i32 @__decompiler_undefined_function_0() local_unnamed_addr

!0 = !{i64 4199114}
!1 = !{i64 4199176}
!2 = !{i64 4199222}
!3 = !{i64 4199241}
!4 = !{i64 4199243}
!5 = !{i64 4199251}
!6 = !{i64 4199253}
!7 = !{i64 4199273}
!8 = !{i64 4199277}
!9 = !{i64 4199286}
!10 = !{i64 4199298}
!11 = !{i64 4199302}
!12 = !{i64 4199311}
!13 = !{i64 4199334}
!14 = !{i64 4199260}
!15 = !{i64 4199323}
!16 = !{i64 4199325}
!17 = !{i64 4199328}
!18 = !{i64 4199338}
!19 = !{i64 4199340}
!20 = !{i64 4199346}
!21 = !{i64 4199348}
!22 = !{i64 4199353}
!23 = !{i64 4199358}
!24 = !{i64 4199361}
!25 = !{i64 4199370}
!26 = !{i64 4199375}
!27 = !{i64 4199376}
!28 = !{i64 4199389}
!29 = !{i64 4199408}
!30 = !{i64 4199420}
!31 = !{i64 4199439}
!32 = !{i64 4199444}
!33 = !{i64 4199448}
!34 = !{i64 4199450}
!35 = !{i64 4199460}
!36 = !{i64 4199462}
!37 = !{i64 4199464}
!38 = !{i64 4199468}
!39 = !{i64 4199470}
!40 = !{i64 4199480}
!41 = !{i64 4199482}
!42 = !{i64 4199489}
!43 = !{i64 4199495}
!44 = !{i64 4199507}
!45 = !{i64 4199508}
!46 = !{i64 4199540}
!47 = !{i64 4199545}
!48 = !{i64 4199550}
!49 = !{i64 4199555}
!50 = !{i64 4199563}
!51 = !{i64 4199565}
!52 = !{i64 4199570}
!53 = !{i64 4199575}
!54 = !{i64 4199578}
!55 = !{i64 4199595}
!56 = !{i64 4199623}
!57 = !{i64 4199641}
!58 = !{i64 4199655}
!59 = !{i64 4199657}
!60 = !{i64 4199662}
!61 = !{i64 4199679}
!62 = !{i64 4199683}
!63 = !{i64 4199686}
!64 = !{i64 4199702}
!65 = !{i64 4199707}
!66 = !{i64 4199745}
!67 = !{i64 4199748}
!68 = !{i64 4199764}
!69 = !{i64 4199769}
!70 = !{i64 4199778}
!71 = !{i64 4199791}
!72 = !{i64 4199823}
!73 = !{i64 4199825}
!74 = !{i64 4199830}
!75 = !{i64 4199835}
!76 = !{i64 4199838}
!77 = !{i64 4199847}
!78 = !{i64 4199851}
!79 = !{i64 4199854}
!80 = !{i64 4199860}
!81 = !{i64 4199876}
!82 = !{i64 4199881}
!83 = !{i64 4199900}
!84 = !{i64 4199905}
!85 = !{i64 4199946}
!86 = !{i64 4199949}
!87 = !{i64 4199955}
!88 = !{i64 4199971}
!89 = !{i64 4199976}
!90 = !{i64 4199992}
!91 = !{i64 4199997}
!92 = !{i64 4200003}
!93 = !{i64 4200019}
!94 = !{i64 4200024}
!95 = !{i64 4200040}
!96 = !{i64 4200081}
!97 = !{i64 4200084}
!98 = !{i64 4200093}
!99 = !{i64 4200101}
!100 = !{i64 4200106}
!101 = !{i64 4199809}
!102 = !{i64 4200157}
!103 = !{i64 4200165}
!104 = !{i64 4200167}
!105 = !{i64 4200172}
!106 = !{i64 4200177}
!107 = !{i64 4200180}
!108 = !{i64 4200197}
!109 = !{i64 4200216}
!110 = !{i64 4200222}
!111 = !{i64 4200231}
!112 = !{i64 4200239}
!113 = !{i64 4200249}
!114 = !{i64 4200300}
!115 = !{i64 4200339}
!116 = !{i64 4200340}
!117 = !{i64 4200349}
!118 = !{i64 4200357}
!119 = !{i64 4200369}
!120 = !{i64 4200370}
!121 = !{i64 4200377}
!122 = !{i64 4200379}
!123 = !{i64 4200317}
!124 = !{i64 4200321}
!125 = !{i64 4200397}
!126 = !{i64 4200404}
!127 = !{i64 4200406}
!128 = !{i64 4200409}
!129 = !{i64 4200418}
!130 = !{i64 4200423}
!131 = !{i64 4201591}
