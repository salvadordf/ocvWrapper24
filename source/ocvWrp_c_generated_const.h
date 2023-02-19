#define  CV_8U   0;
#define  CV_8S   1;
#define  CV_16U   2;
#define  CV_16S   3;
#define  CV_32S   4;
#define  CV_32F   5;
#define  CV_64F   6;
#define  CV_8UC1   0;
#define  CV_8UC2   8;
#define  CV_8UC3   16;
#define  CV_32FC1   5;
#define  CV_32FC2   13;
#define  CV_32FC3   21;
#define  CV_32SC1   4;
#define  CV_32SC2   12;
#define  CV_32SC3   20;
#define  CV_USRTYPE1   7;
#define  FILLED   -1;
#define  LINE_AA   16;
#define  LINE_8   8;
#define  LINE_4   4;
#define  REDUCE_SUM   0;
#define  REDUCE_AVG   1;
#define  REDUCE_MAX   2;
#define  REDUCE_MIN   3;
#define  KIND_SHIFT   16;
#define  CV_AA   16;
#define  CV_TERMCRIT_ITER   1;
#define  CV_TERMCRIT_NUMB   CV_TERMCRIT_ITER;
#define  CV_TERMCRIT_EPS   2;
#define  CV_C   1;
#define  CV_L1   2;
#define  CV_L2   4;
#define  CV_NORM_MASK   7;
#define  CV_RELATIVE   8;
#define  CV_DIFF   16;
#define  CV_MINMAX   32;
#define  CV_DIFF_C   (CV_DIFF or CV_C);
#define  CV_DIFF_L1   (CV_DIFF or CV_L1);
#define  CV_DIFF_L2   (CV_DIFF or CV_L2);
#define  CV_RELATIVE_C   (CV_RELATIVE or CV_C);
#define  CV_RELATIVE_L1   (CV_RELATIVE or CV_L1);
#define  CV_RELATIVE_L2   (CV_RELATIVE or CV_L2);
#define  CV_MOP_ERODE   0;
#define  CV_MOP_DILATE   1;
#define  CV_MOP_OPEN   2;
#define  CV_MOP_CLOSE   3;
#define  CV_MOP_GRADIENT   49;
#define  CV_MOP_TOPHAT   5;
#define  CV_MOP_BLACKHAT   6;
#define  CV_SHAPE_RECT   0;
#define  CV_SHAPE_CROSS   1;
#define  CV_SHAPE_ELLIPSE   2;
#define  CV_SHAPE_CUSTOM   100;
#define  CV_MAT_CONT_FLAG   16384;
#define  CV_SUBMAT_FLAG   32768;
#define  CV_MAX_DIM   32;
#define  CV_INTER_NN   0;
#define  CV_INTER_LINEAR   1;
#define  CV_INTER_CUBIC   2;
#define  CV_INTER_AREA   3;
#define  CV_INTER_LANCZOS4   4;
#define  CV_WARP_INVERSE_MAP   16;
#define  CV_THRESH_BINARY   0;
#define  CV_THRESH_BINARY_INV   1;
#define  CV_THRESH_TRUNC   2;
#define  CV_THRESH_TOZERO   3;
#define  CV_THRESH_TOZERO_INV   4;
#define  CV_THRESH_MASK   7;
#define  CV_THRESH_OTSU   8;
#define  CV_RETR_EXTERNAL   0;
#define  CV_RETR_LIST   1;
#define  CV_RETR_CCOMP   2;
#define  CV_RETR_TREE   3;
#define  CV_RETR_FLOODFILL   4;
#define  CV_CHAIN_APPROX_NONE   1;
#define  CV_CHAIN_APPROX_SIMPLE   2;
#define  CV_CHAIN_APPROX_TC89_L1   3;
#define  CV_CHAIN_APPROX_TC89_KCOS   4;
#define  CV_WND_PROP_FULLSCREEN   0;
#define  CV_WND_PROP_AUTOSIZE   1;
#define  CV_WND_PROP_ASPECTRATIO   2;
#define  CV_WND_PROP_OPENGL   3;
#define  CV_WINDOW_NORMAL   0;
#define  CV_WINDOW_AUTOSIZE   1;
#define  CV_WINDOW_OPENGL   4096;
#define  CV_INPAINT_NS   0;
#define  CV_INPAINT_TELEA   1;
#define  IPL_BORDER_CONSTANT   0;
#define  IPL_BORDER_REPLICATE   1;
#define  IPL_BORDER_REFLECT   2;
#define  IPL_BORDER_WRAP   3;
#define  IPL_BORDER_REFLECT_101   4;
#define  IPL_BORDER_TRANSPARENT   5;
#define  CV_LMEDS   4;
#define  CV_RANSAC   8;
#define  CV_FM_LMEDS   CV_LMEDS;
#define  CV_FM_RANSAC   CV_RANSAC;
#define  CV_FM_7POINT   1;
#define  CV_FM_8POINT   2;
#define  CV_CALIB_USE_INTRINSIC_GUESS   1;
#define  CV_CALIB_FIX_ASPECT_RATIO   2;
#define  CV_CALIB_FIX_PRINCIPAL_POINT   4;
#define  CV_CALIB_ZERO_TANGENT_DIST   8;
#define  CV_CALIB_FIX_FOCAL_LENGTH   16;
#define  CV_CALIB_FIX_K1   32;
#define  CV_CALIB_FIX_K2   64;
#define  CV_CALIB_FIX_K3   128;
#define  CV_CALIB_FIX_K4   2048;
#define  CV_CALIB_FIX_K5   4096;
#define  CV_CALIB_FIX_K6   8192;
#define  CV_CALIB_RATIONAL_MODEL   16384;
#define  CV_CALIB_FIX_INTRINSIC   256;
#define  CV_CALIB_SAME_FOCAL_LENGTH   512;
#define  CV_CALIB_ZERO_DISPARITY   1024;
#define  CV_LKFLOW_INITIAL_GUESSES   4;
#define  CV_LKFLOW_GET_MIN_EIGENVALS   8;
#define  CV_HAAR_DO_CANNY_PRUNING   1;
#define  CV_HAAR_SCALE_IMAGE   2;
#define  CV_HAAR_FIND_BIGGEST_OBJECT   4;
#define  CV_HAAR_DO_ROUGH_SEARCH   8;
#define  cv::DECOMP_LU   0;
#define  cv::DECOMP_SVD   1;
#define  cv::DECOMP_EIG   2;
#define  cv::DECOMP_CHOLESKY   3;
#define  cv::DECOMP_QR   4;
#define  cv::DECOMP_NORMAL   16;
#define  cv::NORM_INF   1;
#define  cv::NORM_L1   2;
#define  cv::NORM_L2   4;
#define  cv::NORM_L2SQR   5;
#define  cv::NORM_HAMMING   6;
#define  cv::NORM_HAMMING2   7;
#define  cv::NORM_TYPE_MASK   7;
#define  cv::NORM_RELATIVE   8;
#define  cv::NORM_MINMAX   32;
#define  cv::CMP_EQ   0;
#define  cv::CMP_GT   1;
#define  cv::CMP_GE   2;
#define  cv::CMP_LT   3;
#define  cv::CMP_LE   4;
#define  cv::CMP_NE   5;
#define  cv::GEMM_1_T   1;
#define  cv::GEMM_2_T   2;
#define  cv::GEMM_3_T   4;
#define  cv::DFT_INVERSE   1;
#define  cv::DFT_SCALE   2;
#define  cv::DFT_ROWS   4;
#define  cv::DFT_COMPLEX_OUTPUT   16;
#define  cv::DFT_REAL_OUTPUT   32;
#define  cv::DCT_INVERSE   DFT_INVERSE;
#define  cv::DCT_ROWS   DFT_ROWS;
#define  cv::_InputArray::KIND_SHIFT   16;
#define  cv::_InputArray::FIXED_TYPE   0x8000 << KIND_SHIFT;
#define  cv::_InputArray::FIXED_SIZE   0x4000 << KIND_SHIFT;
#define  cv::_InputArray::KIND_MASK   ~(FIXED_TYPE|FIXED_SIZE) - (1 << KIND_SHIFT) + 1;
#define  cv::_InputArray::NONE   0 << KIND_SHIFT;
#define  cv::_InputArray::MAT   1 << KIND_SHIFT;
#define  cv::_InputArray::MATX   2 << KIND_SHIFT;
#define  cv::_InputArray::STD_VECTOR   3 << KIND_SHIFT;
#define  cv::_InputArray::STD_VECTOR_VECTOR   4 << KIND_SHIFT;
#define  cv::_InputArray::STD_VECTOR_MAT   5 << KIND_SHIFT;
#define  cv::_InputArray::EXPR   6 << KIND_SHIFT;
#define  cv::_InputArray::OPENGL_BUFFER   7 << KIND_SHIFT;
#define  cv::_InputArray::OPENGL_TEXTURE   8 << KIND_SHIFT;
#define  cv::_InputArray::GPU_MAT   9 << KIND_SHIFT;
#define  cv::_InputArray::OCL_MAT   10 << KIND_SHIFT;
#define  cv::DEPTH_MASK_8U   1 << CV_8U;
#define  cv::DEPTH_MASK_8S   1 << CV_8S;
#define  cv::DEPTH_MASK_16U   1 << CV_16U;
#define  cv::DEPTH_MASK_16S   1 << CV_16S;
#define  cv::DEPTH_MASK_32S   1 << CV_32S;
#define  cv::DEPTH_MASK_32F   1 << CV_32F;
#define  cv::DEPTH_MASK_64F   1 << CV_64F;
#define  cv::DEPTH_MASK_ALL   (DEPTH_MASK_64F<<1)-1;
#define  cv::DEPTH_MASK_ALL_BUT_8S   DEPTH_MASK_ALL & ~DEPTH_MASK_8S;
#define  cv::DEPTH_MASK_FLT   DEPTH_MASK_32F + DEPTH_MASK_64F;
#define  cv::MAGIC_MASK   0xFFFF0000;
#define  cv::TYPE_MASK   0x00000FFF;
#define  cv::DEPTH_MASK   7;
#define  cv::Mat::MAGIC_VAL   0x42FF0000;
#define  cv::Mat::AUTO_STEP   0;
#define  cv::Mat::CONTINUOUS_FLAG   CV_MAT_CONT_FLAG;
#define  cv::Mat::SUBMATRIX_FLAG   CV_SUBMAT_FLAG;
#define  cv::RNG::UNIFORM   0;
#define  cv::RNG::NORMAL   1;
#define  cv::TermCriteria::COUNT   1;
#define  cv::TermCriteria::MAX_ITER   COUNT;
#define  cv::TermCriteria::EPS   2;
#define  cv::SORT_EVERY_ROW   0;
#define  cv::SORT_EVERY_COLUMN   1;
#define  cv::SORT_ASCENDING   0;
#define  cv::SORT_DESCENDING   16;
#define  cv::COVAR_SCRAMBLED   0;
#define  cv::COVAR_NORMAL   1;
#define  cv::COVAR_USE_AVG   2;
#define  cv::COVAR_SCALE   4;
#define  cv::COVAR_ROWS   8;
#define  cv::COVAR_COLS   16;
#define  cv::SVD::MODIFY_A   1;
#define  cv::SVD::NO_UV   2;
#define  cv::SVD::FULL_UV   4;
#define  cv::KMEANS_RANDOM_CENTERS   0;
#define  cv::KMEANS_PP_CENTERS   2;
#define  cv::KMEANS_USE_INITIAL_LABELS   1;
#define  cv::MARKER_CROSS   0;
#define  cv::MARKER_TILTED_CROSS   1;
#define  cv::MARKER_STAR   2;
#define  cv::MARKER_DIAMOND   3;
#define  cv::MARKER_SQUARE   4;
#define  cv::MARKER_TRIANGLE_UP   5;
#define  cv::MARKER_TRIANGLE_DOWN   6;
#define  cv::FONT_HERSHEY_SIMPLEX   0;
#define  cv::FONT_HERSHEY_PLAIN   1;
#define  cv::FONT_HERSHEY_DUPLEX   2;
#define  cv::FONT_HERSHEY_COMPLEX   3;
#define  cv::FONT_HERSHEY_TRIPLEX   4;
#define  cv::FONT_HERSHEY_COMPLEX_SMALL   5;
#define  cv::FONT_HERSHEY_SCRIPT_SIMPLEX   6;
#define  cv::FONT_HERSHEY_SCRIPT_COMPLEX   7;
#define  cv::FONT_ITALIC   16;
#define  cv::SparseMat::MAGIC_VAL   0x42FD0000;
#define  cv::SparseMat::MAX_DIM   CV_MAX_DIM;
#define  cv::SparseMat::HASH_SCALE   0x5bd1e995;
#define  cv::SparseMat::HASH_BIT   0x80000000;
#define  cv::FileStorage::READ   0;
#define  cv::FileStorage::WRITE   1;
#define  cv::FileStorage::APPEND   2;
#define  cv::FileStorage::MEMORY   4;
#define  cv::FileStorage::FORMAT_MASK   (7<<3);
#define  cv::FileStorage::FORMAT_AUTO   0;
#define  cv::FileStorage::FORMAT_XML   (1<<3);
#define  cv::FileStorage::FORMAT_YAML   (2<<3);
#define  cv::FileStorage::UNDEFINED   0;
#define  cv::FileStorage::VALUE_EXPECTED   1;
#define  cv::FileStorage::NAME_EXPECTED   2;
#define  cv::FileStorage::INSIDE_MAP   4;
#define  cv::FileNode::NONE   0;
#define  cv::FileNode::INT   1;
#define  cv::FileNode::REAL   2;
#define  cv::FileNode::FLOAT   REAL;
#define  cv::FileNode::STR   3;
#define  cv::FileNode::STRING   STR;
#define  cv::FileNode::REF   4;
#define  cv::FileNode::SEQ   5;
#define  cv::FileNode::MAP   6;
#define  cv::FileNode::TYPE_MASK   7;
#define  cv::FileNode::FLOW   8;
#define  cv::FileNode::USER   16;
#define  cv::FileNode::EMPTY   32;
#define  cv::FileNode::NAMED   64;
#define  cv::Param::INT   0;
#define  cv::Param::BOOLEAN   1;
#define  cv::Param::REAL   2;
#define  cv::Param::STRING   3;
#define  cv::Param::MAT   4;
#define  cv::Param::MAT_VECTOR   5;
#define  cv::Param::ALGORITHM   6;
#define  cv::Param::FLOAT   7;
#define  cv::Param::UNSIGNED_INT   8;
#define  cv::Param::UINT64   9;
#define  cv::Param::SHORT   10;
#define  cv::Param::UCHAR   11;
#define  CvParamGrid::SVM_C   0;
#define  CvParamGrid::SVM_GAMMA   1;
#define  CvParamGrid::SVM_P   2;
#define  CvParamGrid::SVM_NU   3;
#define  CvParamGrid::SVM_COEF   4;
#define  CvParamGrid::SVM_DEGREE   5;
#define  CvSVM::C_SVC   100;
#define  CvSVM::NU_SVC   101;
#define  CvSVM::ONE_CLASS   102;
#define  CvSVM::EPS_SVR   103;
#define  CvSVM::NU_SVR   104;
#define  CvSVM::LINEAR   0;
#define  CvSVM::POLY   1;
#define  CvSVM::RBF   2;
#define  CvSVM::SIGMOID   3;
#define  CvSVM::C   0;
#define  CvSVM::GAMMA   1;
#define  CvSVM::P   2;
#define  CvSVM::NU   3;
#define  CvSVM::COEF   4;
#define  CvSVM::DEGREE   5;
#define  cv::EM::COV_MAT_SPHERICAL   0;
#define  cv::EM::COV_MAT_DIAGONAL   1;
#define  cv::EM::COV_MAT_GENERIC   2;
#define  cv::EM::COV_MAT_DEFAULT   COV_MAT_DIAGONAL;
#define  cv::EM::DEFAULT_NCLUSTERS   5;
#define  cv::EM::DEFAULT_MAX_ITERS   100;
#define  cv::EM::START_E_STEP   1;
#define  cv::EM::START_M_STEP   2;
#define  cv::EM::START_AUTO_STEP   0;
#define  CvBoost::DISCRETE   0;
#define  CvBoost::REAL   1;
#define  CvBoost::LOGIT   2;
#define  CvBoost::GENTLE   3;
#define  CvBoost::DEFAULT   0;
#define  CvBoost::GINI   1;
#define  CvBoost::MISCLASS   3;
#define  CvBoost::SQERR   4;
#define  CvGBTrees::SQUARED_LOSS   0;
#define  CvGBTrees::ABSOLUTE_LOSS   0+1;
#define  CvGBTrees::HUBER_LOSS   3;
#define  CvGBTrees::DEVIANCE_LOSS   3+1;
#define  CvANN_MLP_TrainParams::BACKPROP   0;
#define  CvANN_MLP_TrainParams::RPROP   1;
#define  CvANN_MLP::IDENTITY   0;
#define  CvANN_MLP::SIGMOID_SYM   1;
#define  CvANN_MLP::GAUSSIAN   2;
#define  CvANN_MLP::UPDATE_WEIGHTS   1;
#define  CvANN_MLP::NO_INPUT_SCALE   2;
#define  CvANN_MLP::NO_OUTPUT_SCALE   4;
#define  cv::BORDER_REPLICATE   IPL_BORDER_REPLICATE;
#define  cv::BORDER_CONSTANT   IPL_BORDER_CONSTANT;
#define  cv::BORDER_REFLECT   IPL_BORDER_REFLECT;
#define  cv::BORDER_WRAP   IPL_BORDER_WRAP;
#define  cv::BORDER_REFLECT_101   IPL_BORDER_REFLECT_101;
#define  cv::BORDER_REFLECT101   BORDER_REFLECT_101;
#define  cv::BORDER_TRANSPARENT   IPL_BORDER_TRANSPARENT;
#define  cv::BORDER_DEFAULT   BORDER_REFLECT_101;
#define  cv::BORDER_ISOLATED   16;
#define  cv::KERNEL_GENERAL   0;
#define  cv::KERNEL_SYMMETRICAL   1;
#define  cv::KERNEL_ASYMMETRICAL   2;
#define  cv::KERNEL_SMOOTH   4;
#define  cv::KERNEL_INTEGER   8;
#define  cv::MORPH_ERODE   CV_MOP_ERODE;
#define  cv::MORPH_DILATE   CV_MOP_DILATE;
#define  cv::MORPH_OPEN   CV_MOP_OPEN;
#define  cv::MORPH_CLOSE   CV_MOP_CLOSE;
#define  cv::MORPH_GRADIENT   CV_MOP_GRADIENT;
#define  cv::MORPH_TOPHAT   CV_MOP_TOPHAT;
#define  cv::MORPH_BLACKHAT   CV_MOP_BLACKHAT;
#define  cv::MORPH_HITMISS   CV_MOP_BLACKHAT+1;
#define  cv::MORPH_RECT   0;
#define  cv::MORPH_CROSS   1;
#define  cv::MORPH_ELLIPSE   2;
#define  cv::GHT_POSITION   0;
#define  cv::GHT_SCALE   1;
#define  cv::GHT_ROTATION   2;
#define  cv::INTER_NEAREST   CV_INTER_NN;
#define  cv::INTER_LINEAR   CV_INTER_LINEAR;
#define  cv::INTER_CUBIC   CV_INTER_CUBIC;
#define  cv::INTER_AREA   CV_INTER_AREA;
#define  cv::INTER_LANCZOS4   CV_INTER_LANCZOS4;
#define  cv::INTER_MAX   7;
#define  cv::WARP_INVERSE_MAP   CV_WARP_INVERSE_MAP;
#define  cv::INTER_BITS   5;
#define  cv::INTER_BITS2   INTER_BITS*2;
#define  cv::INTER_TAB_SIZE   (1<<INTER_BITS);
#define  cv::INTER_TAB_SIZE2   INTER_TAB_SIZE*INTER_TAB_SIZE;
#define  cv::THRESH_BINARY   CV_THRESH_BINARY;
#define  cv::THRESH_BINARY_INV   CV_THRESH_BINARY_INV;
#define  cv::THRESH_TRUNC   CV_THRESH_TRUNC;
#define  cv::THRESH_TOZERO   CV_THRESH_TOZERO;
#define  cv::THRESH_TOZERO_INV   CV_THRESH_TOZERO_INV;
#define  cv::THRESH_MASK   CV_THRESH_MASK;
#define  cv::THRESH_OTSU   CV_THRESH_OTSU;
#define  cv::ADAPTIVE_THRESH_MEAN_C   0;
#define  cv::ADAPTIVE_THRESH_GAUSSIAN_C   1;
#define  cv::PROJ_SPHERICAL_ORTHO   0;
#define  cv::PROJ_SPHERICAL_EQRECT   1;
#define  cv::GC_BGD   0;
#define  cv::GC_FGD   1;
#define  cv::GC_PR_BGD   2;
#define  cv::GC_PR_FGD   3;
#define  cv::GC_INIT_WITH_RECT   0;
#define  cv::GC_INIT_WITH_MASK   1;
#define  cv::GC_EVAL   2;
#define  cv::DIST_LABEL_CCOMP   0;
#define  cv::DIST_LABEL_PIXEL   1;
#define  cv::FLOODFILL_FIXED_RANGE   1 << 16;
#define  cv::FLOODFILL_MASK_ONLY   1 << 17;
#define  cv::COLOR_BGR2BGRA   0;
#define  cv::COLOR_RGB2RGBA   COLOR_BGR2BGRA;
#define  cv::COLOR_BGRA2BGR   1;
#define  cv::COLOR_RGBA2RGB   COLOR_BGRA2BGR;
#define  cv::COLOR_BGR2RGBA   2;
#define  cv::COLOR_RGB2BGRA   COLOR_BGR2RGBA;
#define  cv::COLOR_RGBA2BGR   3;
#define  cv::COLOR_BGRA2RGB   COLOR_RGBA2BGR;
#define  cv::COLOR_BGR2RGB   4;
#define  cv::COLOR_RGB2BGR   COLOR_BGR2RGB;
#define  cv::COLOR_BGRA2RGBA   5;
#define  cv::COLOR_RGBA2BGRA   COLOR_BGRA2RGBA;
#define  cv::COLOR_BGR2GRAY   6;
#define  cv::COLOR_RGB2GRAY   7;
#define  cv::COLOR_GRAY2BGR   8;
#define  cv::COLOR_GRAY2RGB   COLOR_GRAY2BGR;
#define  cv::COLOR_GRAY2BGRA   9;
#define  cv::COLOR_GRAY2RGBA   COLOR_GRAY2BGRA;
#define  cv::COLOR_BGRA2GRAY   10;
#define  cv::COLOR_RGBA2GRAY   11;
#define  cv::COLOR_BGR2BGR565   12;
#define  cv::COLOR_RGB2BGR565   13;
#define  cv::COLOR_BGR5652BGR   14;
#define  cv::COLOR_BGR5652RGB   15;
#define  cv::COLOR_BGRA2BGR565   16;
#define  cv::COLOR_RGBA2BGR565   17;
#define  cv::COLOR_BGR5652BGRA   18;
#define  cv::COLOR_BGR5652RGBA   19;
#define  cv::COLOR_GRAY2BGR565   20;
#define  cv::COLOR_BGR5652GRAY   21;
#define  cv::COLOR_BGR2BGR555   22;
#define  cv::COLOR_RGB2BGR555   23;
#define  cv::COLOR_BGR5552BGR   24;
#define  cv::COLOR_BGR5552RGB   25;
#define  cv::COLOR_BGRA2BGR555   26;
#define  cv::COLOR_RGBA2BGR555   27;
#define  cv::COLOR_BGR5552BGRA   28;
#define  cv::COLOR_BGR5552RGBA   29;
#define  cv::COLOR_GRAY2BGR555   30;
#define  cv::COLOR_BGR5552GRAY   31;
#define  cv::COLOR_BGR2XYZ   32;
#define  cv::COLOR_RGB2XYZ   33;
#define  cv::COLOR_XYZ2BGR   34;
#define  cv::COLOR_XYZ2RGB   35;
#define  cv::COLOR_BGR2YCrCb   36;
#define  cv::COLOR_RGB2YCrCb   37;
#define  cv::COLOR_YCrCb2BGR   38;
#define  cv::COLOR_YCrCb2RGB   39;
#define  cv::COLOR_BGR2HSV   40;
#define  cv::COLOR_RGB2HSV   41;
#define  cv::COLOR_BGR2Lab   44;
#define  cv::COLOR_RGB2Lab   45;
#define  cv::COLOR_BayerBG2BGR   46;
#define  cv::COLOR_BayerGB2BGR   47;
#define  cv::COLOR_BayerRG2BGR   48;
#define  cv::COLOR_BayerGR2BGR   49;
#define  cv::COLOR_BayerBG2RGB   COLOR_BayerRG2BGR;
#define  cv::COLOR_BayerGB2RGB   COLOR_BayerGR2BGR;
#define  cv::COLOR_BayerRG2RGB   COLOR_BayerBG2BGR;
#define  cv::COLOR_BayerGR2RGB   COLOR_BayerGB2BGR;
#define  cv::COLOR_BGR2Luv   50;
#define  cv::COLOR_RGB2Luv   51;
#define  cv::COLOR_BGR2HLS   52;
#define  cv::COLOR_RGB2HLS   53;
#define  cv::COLOR_HSV2BGR   54;
#define  cv::COLOR_HSV2RGB   55;
#define  cv::COLOR_Lab2BGR   56;
#define  cv::COLOR_Lab2RGB   57;
#define  cv::COLOR_Luv2BGR   58;
#define  cv::COLOR_Luv2RGB   59;
#define  cv::COLOR_HLS2BGR   60;
#define  cv::COLOR_HLS2RGB   61;
#define  cv::COLOR_BayerBG2BGR_VNG   62;
#define  cv::COLOR_BayerGB2BGR_VNG   63;
#define  cv::COLOR_BayerRG2BGR_VNG   64;
#define  cv::COLOR_BayerGR2BGR_VNG   65;
#define  cv::COLOR_BayerBG2RGB_VNG   COLOR_BayerRG2BGR_VNG;
#define  cv::COLOR_BayerGB2RGB_VNG   COLOR_BayerGR2BGR_VNG;
#define  cv::COLOR_BayerRG2RGB_VNG   COLOR_BayerBG2BGR_VNG;
#define  cv::COLOR_BayerGR2RGB_VNG   COLOR_BayerGB2BGR_VNG;
#define  cv::COLOR_BGR2HSV_FULL   66;
#define  cv::COLOR_RGB2HSV_FULL   67;
#define  cv::COLOR_BGR2HLS_FULL   68;
#define  cv::COLOR_RGB2HLS_FULL   69;
#define  cv::COLOR_HSV2BGR_FULL   70;
#define  cv::COLOR_HSV2RGB_FULL   71;
#define  cv::COLOR_HLS2BGR_FULL   72;
#define  cv::COLOR_HLS2RGB_FULL   73;
#define  cv::COLOR_LBGR2Lab   74;
#define  cv::COLOR_LRGB2Lab   75;
#define  cv::COLOR_LBGR2Luv   76;
#define  cv::COLOR_LRGB2Luv   77;
#define  cv::COLOR_Lab2LBGR   78;
#define  cv::COLOR_Lab2LRGB   79;
#define  cv::COLOR_Luv2LBGR   80;
#define  cv::COLOR_Luv2LRGB   81;
#define  cv::COLOR_BGR2YUV   82;
#define  cv::COLOR_RGB2YUV   83;
#define  cv::COLOR_YUV2BGR   84;
#define  cv::COLOR_YUV2RGB   85;
#define  cv::COLOR_BayerBG2GRAY   86;
#define  cv::COLOR_BayerGB2GRAY   87;
#define  cv::COLOR_BayerRG2GRAY   88;
#define  cv::COLOR_BayerGR2GRAY   89;
#define  cv::COLOR_YUV2RGB_NV12   90;
#define  cv::COLOR_YUV2BGR_NV12   91;
#define  cv::COLOR_YUV2RGB_NV21   92;
#define  cv::COLOR_YUV2BGR_NV21   93;
#define  cv::COLOR_YUV420sp2RGB   COLOR_YUV2RGB_NV21;
#define  cv::COLOR_YUV420sp2BGR   COLOR_YUV2BGR_NV21;
#define  cv::COLOR_YUV2RGBA_NV12   94;
#define  cv::COLOR_YUV2BGRA_NV12   95;
#define  cv::COLOR_YUV2RGBA_NV21   96;
#define  cv::COLOR_YUV2BGRA_NV21   97;
#define  cv::COLOR_YUV420sp2RGBA   COLOR_YUV2RGBA_NV21;
#define  cv::COLOR_YUV420sp2BGRA   COLOR_YUV2BGRA_NV21;
#define  cv::COLOR_YUV2RGB_YV12   98;
#define  cv::COLOR_YUV2BGR_YV12   99;
#define  cv::COLOR_YUV2RGB_IYUV   100;
#define  cv::COLOR_YUV2BGR_IYUV   101;
#define  cv::COLOR_YUV2RGB_I420   COLOR_YUV2RGB_IYUV;
#define  cv::COLOR_YUV2BGR_I420   COLOR_YUV2BGR_IYUV;
#define  cv::COLOR_YUV420p2RGB   COLOR_YUV2RGB_YV12;
#define  cv::COLOR_YUV420p2BGR   COLOR_YUV2BGR_YV12;
#define  cv::COLOR_YUV2RGBA_YV12   102;
#define  cv::COLOR_YUV2BGRA_YV12   103;
#define  cv::COLOR_YUV2RGBA_IYUV   104;
#define  cv::COLOR_YUV2BGRA_IYUV   105;
#define  cv::COLOR_YUV2RGBA_I420   COLOR_YUV2RGBA_IYUV;
#define  cv::COLOR_YUV2BGRA_I420   COLOR_YUV2BGRA_IYUV;
#define  cv::COLOR_YUV420p2RGBA   COLOR_YUV2RGBA_YV12;
#define  cv::COLOR_YUV420p2BGRA   COLOR_YUV2BGRA_YV12;
#define  cv::COLOR_YUV2GRAY_420   106;
#define  cv::COLOR_YUV2GRAY_NV21   COLOR_YUV2GRAY_420;
#define  cv::COLOR_YUV2GRAY_NV12   COLOR_YUV2GRAY_420;
#define  cv::COLOR_YUV2GRAY_YV12   COLOR_YUV2GRAY_420;
#define  cv::COLOR_YUV2GRAY_IYUV   COLOR_YUV2GRAY_420;
#define  cv::COLOR_YUV2GRAY_I420   COLOR_YUV2GRAY_420;
#define  cv::COLOR_YUV420sp2GRAY   COLOR_YUV2GRAY_420;
#define  cv::COLOR_YUV420p2GRAY   COLOR_YUV2GRAY_420;
#define  cv::COLOR_YUV2RGB_UYVY   107;
#define  cv::COLOR_YUV2BGR_UYVY   108;
#define  cv::COLOR_YUV2RGB_Y422   COLOR_YUV2RGB_UYVY;
#define  cv::COLOR_YUV2BGR_Y422   COLOR_YUV2BGR_UYVY;
#define  cv::COLOR_YUV2RGB_UYNV   COLOR_YUV2RGB_UYVY;
#define  cv::COLOR_YUV2BGR_UYNV   COLOR_YUV2BGR_UYVY;
#define  cv::COLOR_YUV2RGBA_UYVY   111;
#define  cv::COLOR_YUV2BGRA_UYVY   112;
#define  cv::COLOR_YUV2RGBA_Y422   COLOR_YUV2RGBA_UYVY;
#define  cv::COLOR_YUV2BGRA_Y422   COLOR_YUV2BGRA_UYVY;
#define  cv::COLOR_YUV2RGBA_UYNV   COLOR_YUV2RGBA_UYVY;
#define  cv::COLOR_YUV2BGRA_UYNV   COLOR_YUV2BGRA_UYVY;
#define  cv::COLOR_YUV2RGB_YUY2   115;
#define  cv::COLOR_YUV2BGR_YUY2   116;
#define  cv::COLOR_YUV2RGB_YVYU   117;
#define  cv::COLOR_YUV2BGR_YVYU   118;
#define  cv::COLOR_YUV2RGB_YUYV   COLOR_YUV2RGB_YUY2;
#define  cv::COLOR_YUV2BGR_YUYV   COLOR_YUV2BGR_YUY2;
#define  cv::COLOR_YUV2RGB_YUNV   COLOR_YUV2RGB_YUY2;
#define  cv::COLOR_YUV2BGR_YUNV   COLOR_YUV2BGR_YUY2;
#define  cv::COLOR_YUV2RGBA_YUY2   119;
#define  cv::COLOR_YUV2BGRA_YUY2   120;
#define  cv::COLOR_YUV2RGBA_YVYU   121;
#define  cv::COLOR_YUV2BGRA_YVYU   122;
#define  cv::COLOR_YUV2RGBA_YUYV   COLOR_YUV2RGBA_YUY2;
#define  cv::COLOR_YUV2BGRA_YUYV   COLOR_YUV2BGRA_YUY2;
#define  cv::COLOR_YUV2RGBA_YUNV   COLOR_YUV2RGBA_YUY2;
#define  cv::COLOR_YUV2BGRA_YUNV   COLOR_YUV2BGRA_YUY2;
#define  cv::COLOR_YUV2GRAY_UYVY   123;
#define  cv::COLOR_YUV2GRAY_YUY2   124;
#define  cv::COLOR_YUV2GRAY_Y422   COLOR_YUV2GRAY_UYVY;
#define  cv::COLOR_YUV2GRAY_UYNV   COLOR_YUV2GRAY_UYVY;
#define  cv::COLOR_YUV2GRAY_YVYU   COLOR_YUV2GRAY_YUY2;
#define  cv::COLOR_YUV2GRAY_YUYV   COLOR_YUV2GRAY_YUY2;
#define  cv::COLOR_YUV2GRAY_YUNV   COLOR_YUV2GRAY_YUY2;
#define  cv::COLOR_RGBA2mRGBA   125;
#define  cv::COLOR_mRGBA2RGBA   126;
#define  cv::COLOR_RGB2YUV_I420   127;
#define  cv::COLOR_BGR2YUV_I420   128;
#define  cv::COLOR_RGB2YUV_IYUV   COLOR_RGB2YUV_I420;
#define  cv::COLOR_BGR2YUV_IYUV   COLOR_BGR2YUV_I420;
#define  cv::COLOR_RGBA2YUV_I420   129;
#define  cv::COLOR_BGRA2YUV_I420   130;
#define  cv::COLOR_RGBA2YUV_IYUV   COLOR_RGBA2YUV_I420;
#define  cv::COLOR_BGRA2YUV_IYUV   COLOR_BGRA2YUV_I420;
#define  cv::COLOR_RGB2YUV_YV12   131;
#define  cv::COLOR_BGR2YUV_YV12   132;
#define  cv::COLOR_RGBA2YUV_YV12   133;
#define  cv::COLOR_BGRA2YUV_YV12   134;
#define  cv::COLOR_COLORCVT_MAX   135;
#define  cv::TM_SQDIFF   0;
#define  cv::TM_SQDIFF_NORMED   1;
#define  cv::TM_CCORR   2;
#define  cv::TM_CCORR_NORMED   3;
#define  cv::TM_CCOEFF   4;
#define  cv::TM_CCOEFF_NORMED   5;
#define  cv::RETR_EXTERNAL   CV_RETR_EXTERNAL;
#define  cv::RETR_LIST   CV_RETR_LIST;
#define  cv::RETR_CCOMP   CV_RETR_CCOMP;
#define  cv::RETR_TREE   CV_RETR_TREE;
#define  cv::RETR_FLOODFILL   CV_RETR_FLOODFILL;
#define  cv::CHAIN_APPROX_NONE   CV_CHAIN_APPROX_NONE;
#define  cv::CHAIN_APPROX_SIMPLE   CV_CHAIN_APPROX_SIMPLE;
#define  cv::CHAIN_APPROX_TC89_L1   CV_CHAIN_APPROX_TC89_L1;
#define  cv::CHAIN_APPROX_TC89_KCOS   CV_CHAIN_APPROX_TC89_KCOS;
#define  cv::Subdiv2D::PTLOC_ERROR   -2;
#define  cv::Subdiv2D::PTLOC_OUTSIDE_RECT   -1;
#define  cv::Subdiv2D::PTLOC_INSIDE   0;
#define  cv::Subdiv2D::PTLOC_VERTEX   1;
#define  cv::Subdiv2D::PTLOC_ON_EDGE   2;
#define  cv::Subdiv2D::NEXT_AROUND_ORG   0x00;
#define  cv::Subdiv2D::NEXT_AROUND_DST   0x22;
#define  cv::Subdiv2D::PREV_AROUND_ORG   0x11;
#define  cv::Subdiv2D::PREV_AROUND_DST   0x33;
#define  cv::Subdiv2D::NEXT_AROUND_LEFT   0x13;
#define  cv::Subdiv2D::NEXT_AROUND_RIGHT   0x31;
#define  cv::Subdiv2D::PREV_AROUND_LEFT   0x20;
#define  cv::Subdiv2D::PREV_AROUND_RIGHT   0x02;
#define  CV_ITERATIVE   0;
#define  CV_EPNP   1;
#define  CV_P3P   2;
#define  CvLevMarq::DONE   0;
#define  CvLevMarq::STARTED   1;
#define  CvLevMarq::CALC_J   2;
#define  CvLevMarq::CHECK_ERR   3;
#define  cv::LMEDS   CV_LMEDS;
#define  cv::RANSAC   CV_RANSAC;
#define  cv::ITERATIVE   CV_ITERATIVE;
#define  cv::EPNP   CV_EPNP;
#define  cv::P3P   CV_P3P;
#define  cv::CALIB_CB_ADAPTIVE_THRESH   1;
#define  cv::CALIB_CB_NORMALIZE_IMAGE   2;
#define  cv::CALIB_CB_FILTER_QUADS   4;
#define  cv::CALIB_CB_FAST_CHECK   8;
#define  cv::CALIB_CB_SYMMETRIC_GRID   1;
#define  cv::CALIB_CB_ASYMMETRIC_GRID   2;
#define  cv::CALIB_CB_CLUSTERING   4;
#define  cv::CALIB_USE_INTRINSIC_GUESS   CV_CALIB_USE_INTRINSIC_GUESS;
#define  cv::CALIB_FIX_ASPECT_RATIO   CV_CALIB_FIX_ASPECT_RATIO;
#define  cv::CALIB_FIX_PRINCIPAL_POINT   CV_CALIB_FIX_PRINCIPAL_POINT;
#define  cv::CALIB_ZERO_TANGENT_DIST   CV_CALIB_ZERO_TANGENT_DIST;
#define  cv::CALIB_FIX_FOCAL_LENGTH   CV_CALIB_FIX_FOCAL_LENGTH;
#define  cv::CALIB_FIX_K1   CV_CALIB_FIX_K1;
#define  cv::CALIB_FIX_K2   CV_CALIB_FIX_K2;
#define  cv::CALIB_FIX_K3   CV_CALIB_FIX_K3;
#define  cv::CALIB_FIX_K4   CV_CALIB_FIX_K4;
#define  cv::CALIB_FIX_K5   CV_CALIB_FIX_K5;
#define  cv::CALIB_FIX_K6   CV_CALIB_FIX_K6;
#define  cv::CALIB_RATIONAL_MODEL   CV_CALIB_RATIONAL_MODEL;
#define  cv::CALIB_FIX_INTRINSIC   CV_CALIB_FIX_INTRINSIC;
#define  cv::CALIB_SAME_FOCAL_LENGTH   CV_CALIB_SAME_FOCAL_LENGTH;
#define  cv::CALIB_ZERO_DISPARITY   CV_CALIB_ZERO_DISPARITY;
#define  cv::FM_7POINT   CV_FM_7POINT;
#define  cv::FM_8POINT   CV_FM_8POINT;
#define  cv::FM_LMEDS   CV_FM_LMEDS;
#define  cv::FM_RANSAC   CV_FM_RANSAC;
#define  cv::StereoBM::PREFILTER_NORMALIZED_RESPONSE   0;
#define  cv::StereoBM::PREFILTER_XSOBEL   1;
#define  cv::StereoBM::BASIC_PRESET   0;
#define  cv::StereoBM::FISH_EYE_PRESET   1;
#define  cv::StereoBM::NARROW_PRESET   2;
#define  cv::StereoSGBM::DISP_SHIFT   4;
#define  cv::StereoSGBM::DISP_SCALE   (1<<DISP_SHIFT);
#define  cv::fisheye::CALIB_USE_INTRINSIC_GUESS   1;
#define  cv::fisheye::CALIB_RECOMPUTE_EXTRINSIC   2;
#define  cv::fisheye::CALIB_CHECK_COND   4;
#define  cv::fisheye::CALIB_FIX_SKEW   8;
#define  cv::fisheye::CALIB_FIX_K1   16;
#define  cv::fisheye::CALIB_FIX_K2   32;
#define  cv::fisheye::CALIB_FIX_K3   64;
#define  cv::fisheye::CALIB_FIX_K4   128;
#define  cv::fisheye::CALIB_FIX_INTRINSIC   256;
#define  cv::ORB::kBytes   32;
#define  cv::ORB::HARRIS_SCORE   0;
#define  cv::ORB::FAST_SCORE   1;
#define  cv::FREAK::NB_SCALES   64;
#define  cv::FREAK::NB_PAIRS   512;
#define  cv::FREAK::NB_ORIENPAIRS   45;
#define  cv::FastFeatureDetector::TYPE_5_8   0;
#define  cv::FastFeatureDetector::TYPE_7_12   1;
#define  cv::FastFeatureDetector::TYPE_9_16   2;
#define  cv::Hamming::normType   NORM_HAMMING;
#define  cv::DrawMatchesFlags::DEFAULT   0;
#define  cv::DrawMatchesFlags::DRAW_OVER_OUTIMG   1;
#define  cv::DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS   2;
#define  cv::DrawMatchesFlags::DRAW_RICH_KEYPOINTS   4;
#define  cv::OPTFLOW_USE_INITIAL_FLOW   CV_LKFLOW_INITIAL_GUESSES;
#define  cv::OPTFLOW_LK_GET_MIN_EIGENVALS   CV_LKFLOW_GET_MIN_EIGENVALS;
#define  cv::OPTFLOW_FARNEBACK_GAUSSIAN   256;
#define  cv::INPAINT_NS   CV_INPAINT_NS;
#define  cv::INPAINT_TELEA   CV_INPAINT_TELEA;
#define  cv::FeatureEvaluator::HAAR   0;
#define  cv::FeatureEvaluator::LBP   1;
#define  cv::FeatureEvaluator::HOG   2;
#define  cv::CASCADE_DO_CANNY_PRUNING   1;
#define  cv::CASCADE_SCALE_IMAGE   2;
#define  cv::CASCADE_FIND_BIGGEST_OBJECT   4;
#define  cv::CASCADE_DO_ROUGH_SEARCH   8;
#define  cv::HOGDescriptor::L2Hys   0;
#define  cv::HOGDescriptor::DEFAULT_NLEVELS   64;
#define  CvAdaptiveSkinDetector::MORPHING_METHOD_NONE   0;
#define  CvAdaptiveSkinDetector::MORPHING_METHOD_ERODE   1;
#define  CvAdaptiveSkinDetector::MORPHING_METHOD_ERODE_ERODE   2;
#define  CvAdaptiveSkinDetector::MORPHING_METHOD_ERODE_DILATE   3;
#define  CvFuzzyMeanShiftTracker::tsNone   0;
#define  CvFuzzyMeanShiftTracker::tsSearching   1;
#define  CvFuzzyMeanShiftTracker::tsTracking   2;
#define  CvFuzzyMeanShiftTracker::tsSetWindow   3;
#define  CvFuzzyMeanShiftTracker::tsDisabled   10;
#define  CvFuzzyMeanShiftTracker::rmEdgeDensityLinear   0;
#define  CvFuzzyMeanShiftTracker::rmEdgeDensityFuzzy   1;
#define  CvFuzzyMeanShiftTracker::rmInnerDensity   2;
#define  CvFuzzyMeanShiftTracker::MinKernelMass   1000;
#define  cv::SelfSimDescriptor::DEFAULT_SMALL_SIZE   5;
#define  cv::SelfSimDescriptor::DEFAULT_LARGE_SIZE   41;
#define  cv::SelfSimDescriptor::DEFAULT_NUM_ANGLES   20;
#define  cv::SelfSimDescriptor::DEFAULT_START_DISTANCE_BUCKET   3;
#define  cv::SelfSimDescriptor::DEFAULT_NUM_DISTANCE_BUCKETS   7;
#define  cv::StereoVar::USE_INITIAL_DISPARITY   1;
#define  cv::StereoVar::USE_EQUALIZE_HIST   2;
#define  cv::StereoVar::USE_SMART_ID   4;
#define  cv::StereoVar::USE_AUTO_PARAMS   8;
#define  cv::StereoVar::USE_MEDIAN_FILTERING   16;
#define  cv::StereoVar::CYCLE_O   0;
#define  cv::StereoVar::CYCLE_V   1;
#define  cv::StereoVar::PENALIZATION_TICHONOV   0;
#define  cv::StereoVar::PENALIZATION_CHARBONNIER   1;
#define  cv::StereoVar::PENALIZATION_PERONA_MALIK   2;
#define  cv::ROTATION   1;
#define  cv::TRANSLATION   2;
#define  cv::RIGID_BODY_MOTION   4;
#define  cv::COLORMAP_AUTUMN   0;
#define  cv::COLORMAP_BONE   1;
#define  cv::COLORMAP_JET   2;
#define  cv::COLORMAP_WINTER   3;
#define  cv::COLORMAP_RAINBOW   4;
#define  cv::COLORMAP_OCEAN   5;
#define  cv::COLORMAP_SUMMER   6;
#define  cv::COLORMAP_SPRING   7;
#define  cv::COLORMAP_COOL   8;
#define  cv::COLORMAP_HSV   9;
#define  cv::COLORMAP_PINK   10;
#define  cv::COLORMAP_HOT   11;
#define  cv::WINDOW_NORMAL   CV_WINDOW_NORMAL;
#define  cv::WINDOW_AUTOSIZE   CV_WINDOW_AUTOSIZE;
#define  cv::WINDOW_OPENGL   CV_WINDOW_OPENGL;
#define  cv::WND_PROP_FULLSCREEN   CV_WND_PROP_FULLSCREEN;
#define  cv::WND_PROP_AUTOSIZE   CV_WND_PROP_AUTOSIZE;
#define  cv::WND_PROP_ASPECT_RATIO   CV_WND_PROP_ASPECTRATIO;
#define  cv::WND_PROP_OPENGL   CV_WND_PROP_OPENGL;
#define  cv::EVENT_MOUSEMOVE   0;
#define  cv::EVENT_LBUTTONDOWN   1;
#define  cv::EVENT_RBUTTONDOWN   2;
#define  cv::EVENT_MBUTTONDOWN   3;
#define  cv::EVENT_LBUTTONUP   4;
#define  cv::EVENT_RBUTTONUP   5;
#define  cv::EVENT_MBUTTONUP   6;
#define  cv::EVENT_LBUTTONDBLCLK   7;
#define  cv::EVENT_RBUTTONDBLCLK   8;
#define  cv::EVENT_MBUTTONDBLCLK   9;
#define  cv::EVENT_FLAG_LBUTTON   1;
#define  cv::EVENT_FLAG_RBUTTON   2;
#define  cv::EVENT_FLAG_MBUTTON   4;
#define  cv::EVENT_FLAG_CTRLKEY   8;
#define  cv::EVENT_FLAG_SHIFTKEY   16;
#define  cv::EVENT_FLAG_ALTKEY   32;
#define  cv::IMREAD_UNCHANGED   -1;
#define  cv::IMREAD_GRAYSCALE   0;
#define  cv::IMREAD_COLOR   1;
#define  cv::IMREAD_ANYDEPTH   2;
#define  cv::IMREAD_ANYCOLOR   4;
#define  cv::IMWRITE_JPEG_QUALITY   1;
#define  cv::IMWRITE_PNG_COMPRESSION   16;
#define  cv::IMWRITE_PNG_STRATEGY   17;
#define  cv::IMWRITE_PNG_BILEVEL   18;
#define  cv::IMWRITE_PNG_STRATEGY_DEFAULT   0;
#define  cv::IMWRITE_PNG_STRATEGY_FILTERED   1;
#define  cv::IMWRITE_PNG_STRATEGY_HUFFMAN_ONLY   2;
#define  cv::IMWRITE_PNG_STRATEGY_RLE   3;
#define  cv::IMWRITE_PNG_STRATEGY_FIXED   4;
#define  cv::IMWRITE_PXM_BINARY   32;
