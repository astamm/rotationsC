// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef __rotations2_RcppExports_h__
#define __rotations2_RcppExports_h__

#include <RcppArmadillo.h>
#include <Rcpp.h>
#include "rotations2.h"

namespace rotations2 {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("rotations2", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("rotations2", "rotations2_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in rotations2");
            }
        }
    }

    inline int checkQ4(NumericMatrix Q) {
        typedef SEXP(*Ptr_checkQ4)(SEXP);
        static Ptr_checkQ4 p_checkQ4 = NULL;
        if (p_checkQ4 == NULL) {
            validateSignature("int(*checkQ4)(NumericMatrix)");
            p_checkQ4 = (Ptr_checkQ4)R_GetCCallable("rotations2", "rotations2_checkQ4");
        }
        RNGScope __rngScope;
        RObject __result = p_checkQ4(Rcpp::wrap(Q));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<int >(__result);
    }

    inline int checkSO3(arma::mat Rs) {
        typedef SEXP(*Ptr_checkSO3)(SEXP);
        static Ptr_checkSO3 p_checkSO3 = NULL;
        if (p_checkSO3 == NULL) {
            validateSignature("int(*checkSO3)(arma::mat)");
            p_checkSO3 = (Ptr_checkSO3)R_GetCCallable("rotations2", "rotations2_checkSO3");
        }
        RNGScope __rngScope;
        RObject __result = p_checkSO3(Rcpp::wrap(Rs));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<int >(__result);
    }

    inline arma::mat expskewC(arma::mat M) {
        typedef SEXP(*Ptr_expskewC)(SEXP);
        static Ptr_expskewC p_expskewC = NULL;
        if (p_expskewC == NULL) {
            validateSignature("arma::mat(*expskewC)(arma::mat)");
            p_expskewC = (Ptr_expskewC)R_GetCCallable("rotations2", "rotations2_expskewC");
        }
        RNGScope __rngScope;
        RObject __result = p_expskewC(Rcpp::wrap(M));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::rowvec rdistSO3C(arma::mat Rs, arma::mat R2) {
        typedef SEXP(*Ptr_rdistSO3C)(SEXP,SEXP);
        static Ptr_rdistSO3C p_rdistSO3C = NULL;
        if (p_rdistSO3C == NULL) {
            validateSignature("arma::rowvec(*rdistSO3C)(arma::mat,arma::mat)");
            p_rdistSO3C = (Ptr_rdistSO3C)R_GetCCallable("rotations2", "rotations2_rdistSO3C");
        }
        RNGScope __rngScope;
        RObject __result = p_rdistSO3C(Rcpp::wrap(Rs), Rcpp::wrap(R2));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::rowvec >(__result);
    }

    inline arma::mat logSO3C(arma::mat R) {
        typedef SEXP(*Ptr_logSO3C)(SEXP);
        static Ptr_logSO3C p_logSO3C = NULL;
        if (p_logSO3C == NULL) {
            validateSignature("arma::mat(*logSO3C)(arma::mat)");
            p_logSO3C = (Ptr_logSO3C)R_GetCCallable("rotations2", "rotations2_logSO3C");
        }
        RNGScope __rngScope;
        RObject __result = p_logSO3C(Rcpp::wrap(R));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat projectSO3C(arma::mat M) {
        typedef SEXP(*Ptr_projectSO3C)(SEXP);
        static Ptr_projectSO3C p_projectSO3C = NULL;
        if (p_projectSO3C == NULL) {
            validateSignature("arma::mat(*projectSO3C)(arma::mat)");
            p_projectSO3C = (Ptr_projectSO3C)R_GetCCallable("rotations2", "rotations2_projectSO3C");
        }
        RNGScope __rngScope;
        RObject __result = p_projectSO3C(Rcpp::wrap(M));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat meanSO3C(arma::mat Rs) {
        typedef SEXP(*Ptr_meanSO3C)(SEXP);
        static Ptr_meanSO3C p_meanSO3C = NULL;
        if (p_meanSO3C == NULL) {
            validateSignature("arma::mat(*meanSO3C)(arma::mat)");
            p_meanSO3C = (Ptr_meanSO3C)R_GetCCallable("rotations2", "rotations2_meanSO3C");
        }
        RNGScope __rngScope;
        RObject __result = p_meanSO3C(Rcpp::wrap(Rs));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::rowvec meanQ4C(arma::mat Q) {
        typedef SEXP(*Ptr_meanQ4C)(SEXP);
        static Ptr_meanQ4C p_meanQ4C = NULL;
        if (p_meanQ4C == NULL) {
            validateSignature("arma::rowvec(*meanQ4C)(arma::mat)");
            p_meanQ4C = (Ptr_meanQ4C)R_GetCCallable("rotations2", "rotations2_meanQ4C");
        }
        RNGScope __rngScope;
        RObject __result = p_meanQ4C(Rcpp::wrap(Q));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::rowvec >(__result);
    }

    inline arma::mat medianSO3C(arma::mat Rs, int maxIterations, double maxEps) {
        typedef SEXP(*Ptr_medianSO3C)(SEXP,SEXP,SEXP);
        static Ptr_medianSO3C p_medianSO3C = NULL;
        if (p_medianSO3C == NULL) {
            validateSignature("arma::mat(*medianSO3C)(arma::mat,int,double)");
            p_medianSO3C = (Ptr_medianSO3C)R_GetCCallable("rotations2", "rotations2_medianSO3C");
        }
        RNGScope __rngScope;
        RObject __result = p_medianSO3C(Rcpp::wrap(Rs), Rcpp::wrap(maxIterations), Rcpp::wrap(maxEps));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat HartmedianSO3C(arma::mat Rs, int maxIterations, double maxEps) {
        typedef SEXP(*Ptr_HartmedianSO3C)(SEXP,SEXP,SEXP);
        static Ptr_HartmedianSO3C p_HartmedianSO3C = NULL;
        if (p_HartmedianSO3C == NULL) {
            validateSignature("arma::mat(*HartmedianSO3C)(arma::mat,int,double)");
            p_HartmedianSO3C = (Ptr_HartmedianSO3C)R_GetCCallable("rotations2", "rotations2_HartmedianSO3C");
        }
        RNGScope __rngScope;
        RObject __result = p_HartmedianSO3C(Rcpp::wrap(Rs), Rcpp::wrap(maxIterations), Rcpp::wrap(maxEps));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline arma::mat gmeanSO3C(arma::mat Rs, int maxIterations, double maxEps) {
        typedef SEXP(*Ptr_gmeanSO3C)(SEXP,SEXP,SEXP);
        static Ptr_gmeanSO3C p_gmeanSO3C = NULL;
        if (p_gmeanSO3C == NULL) {
            validateSignature("arma::mat(*gmeanSO3C)(arma::mat,int,double)");
            p_gmeanSO3C = (Ptr_gmeanSO3C)R_GetCCallable("rotations2", "rotations2_gmeanSO3C");
        }
        RNGScope __rngScope;
        RObject __result = p_gmeanSO3C(Rcpp::wrap(Rs), Rcpp::wrap(maxIterations), Rcpp::wrap(maxEps));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::mat >(__result);
    }

    inline double fisherAxisC(arma::mat Qs, arma::rowvec Qhat) {
        typedef SEXP(*Ptr_fisherAxisC)(SEXP,SEXP);
        static Ptr_fisherAxisC p_fisherAxisC = NULL;
        if (p_fisherAxisC == NULL) {
            validateSignature("double(*fisherAxisC)(arma::mat,arma::rowvec)");
            p_fisherAxisC = (Ptr_fisherAxisC)R_GetCCallable("rotations2", "rotations2_fisherAxisC");
        }
        RNGScope __rngScope;
        RObject __result = p_fisherAxisC(Rcpp::wrap(Qs), Rcpp::wrap(Qhat));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline arma::vec fisherBootC(arma::mat Qs, int m) {
        typedef SEXP(*Ptr_fisherBootC)(SEXP,SEXP);
        static Ptr_fisherBootC p_fisherBootC = NULL;
        if (p_fisherBootC == NULL) {
            validateSignature("arma::vec(*fisherBootC)(arma::mat,int)");
            p_fisherBootC = (Ptr_fisherBootC)R_GetCCallable("rotations2", "rotations2_fisherBootC");
        }
        RNGScope __rngScope;
        RObject __result = p_fisherBootC(Rcpp::wrap(Qs), Rcpp::wrap(m));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::vec >(__result);
    }

    inline NumericVector RdistC(NumericMatrix Q1, NumericVector Q2) {
        typedef SEXP(*Ptr_RdistC)(SEXP,SEXP);
        static Ptr_RdistC p_RdistC = NULL;
        if (p_RdistC == NULL) {
            validateSignature("NumericVector(*RdistC)(NumericMatrix,NumericVector)");
            p_RdistC = (Ptr_RdistC)R_GetCCallable("rotations2", "rotations2_RdistC");
        }
        RNGScope __rngScope;
        RObject __result = p_RdistC(Rcpp::wrap(Q1), Rcpp::wrap(Q2));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector cdfunsC(NumericMatrix Qs, NumericVector Qhat) {
        typedef SEXP(*Ptr_cdfunsC)(SEXP,SEXP);
        static Ptr_cdfunsC p_cdfunsC = NULL;
        if (p_cdfunsC == NULL) {
            validateSignature("NumericVector(*cdfunsC)(NumericMatrix,NumericVector)");
            p_cdfunsC = (Ptr_cdfunsC)R_GetCCallable("rotations2", "rotations2_cdfunsC");
        }
        RNGScope __rngScope;
        RObject __result = p_cdfunsC(Rcpp::wrap(Qs), Rcpp::wrap(Qhat));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector bootQhat(NumericMatrix Q, int m) {
        typedef SEXP(*Ptr_bootQhat)(SEXP,SEXP);
        static Ptr_bootQhat p_bootQhat = NULL;
        if (p_bootQhat == NULL) {
            validateSignature("NumericVector(*bootQhat)(NumericMatrix,int)");
            p_bootQhat = (Ptr_bootQhat)R_GetCCallable("rotations2", "rotations2_bootQhat");
        }
        RNGScope __rngScope;
        RObject __result = p_bootQhat(Rcpp::wrap(Q), Rcpp::wrap(m));
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

}

#endif // __rotations2_RcppExports_h__
