package org.scalegraph.communities;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;
import x10.matrix.DenseMatrix;

@NativeCPPInclude("LAPACKWrapper.h")
@NativeCPPCompilationUnit("LAPACKWrapper.cc")

public class LAPACK {
    public static def inverseDenseMatrix(a:DenseMatrix):DenseMatrix {
        var aa:Array[Double] = a.clone().d;
        val n = a.M;
        var ipiv:Array[Long] = new Array[Long](n);
        var work:Array[Double] = new Array[Double](n * n);
        var info:Long = 0;
        @Native("c++", "dgetri_wrap(n, (aa)->raw()->raw(), n, (ipiv)->raw()->raw(), (work)->raw()->raw(), n, &info);"){}
        Console.OUT.println("info = " + info);
        val result:DenseMatrix = new DenseMatrix(n, n);
        for (var i:Int = 0; i < n; i++) {
            for (var j:Int = 0; j < n; j++) {
                result(j, i) = aa(i * n + j);
            }
        }
        return result;
    }
}
