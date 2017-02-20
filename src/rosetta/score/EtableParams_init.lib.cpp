#include "rosetta/score/EtableParams_init.hpp"

namespace scheme {
namespace rosetta {
namespace score {

// #pragma GCC optimization_level 0

///@brief horrible function to fill horrible rosetta datastructure of LJ/LK
/// params
void EtableParamsInit::init_EtableParams(
    std::vector<EtableParamsOnePair<float>> &analytic_parameters) {
  typedef CubicPolynomialParamsBase<float> CubicPolynomial;
  typedef ExtraQuadraticRepulsion<float> ExtraQuadraticRepulsion;
  analytic_parameters.resize(325);
  {  // 1 1
    EtableParamsOnePair<float> &params = analytic_parameters[0];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -983.04;
    params.lj_r12_coeff = 2.01327e+06;
    params.lj_switch_intercept = 680.646;
    params.lj_switch_slope = -262.776;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.376, -1.08156, 0.245851, -0.0173024);
  }
  {  // 1 2
    EtableParamsOnePair<float> &params = analytic_parameters[1];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -983.04;
    params.lj_r12_coeff = 2.01327e+06;
    params.lj_switch_intercept = 680.646;
    params.lj_switch_slope = -262.776;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.376, -1.08156, 0.245851, -0.0173024);
  }
  {  // 1 3
    EtableParamsOnePair<float> &params = analytic_parameters[2];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -625.603;
    params.lj_r12_coeff = 1.28123e+06;
    params.lj_switch_intercept = 433.16;
    params.lj_switch_slope = -167.23;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
  }
  {  // 1 4
    EtableParamsOnePair<float> &params = analytic_parameters[3];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -958.989;
    params.lj_r12_coeff = 1.96401e+06;
    params.lj_switch_intercept = 663.993;
    params.lj_switch_slope = -256.347;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.34234, -1.05509, 0.239837, -0.0168791);
  }
  {  // 1 5
    EtableParamsOnePair<float> &params = analytic_parameters[4];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -1207.65;
    params.lj_r12_coeff = 2.47326e+06;
    params.lj_switch_intercept = 836.161;
    params.lj_switch_slope = -322.816;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.69039, -1.32867, 0.302024, -0.0212557);
    params.fasol_cubic_poly_close =
        CubicPolynomial(-1.02978, 0.957872, -0.306407, 0.0325297);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-1.05336, 0.978338, -0.312321, 0.0330986);
  }
  {  // 1 6
    EtableParamsOnePair<float> &params = analytic_parameters[5];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -983.04;
    params.lj_r12_coeff = 2.01327e+06;
    params.lj_switch_intercept = 680.646;
    params.lj_switch_slope = -262.776;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.376, -1.08156, 0.245851, -0.0173024);
  }
  {  // 1 7
    EtableParamsOnePair<float> &params = analytic_parameters[6];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.35648;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.34751, -5.31219, 1.83393, -0.210079);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.3881, 1.08904, -0.247339, 0.0173984);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.48042, -5.43588, 1.87225, -0.214031);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.40125, 1.09634, -0.248678, 0.0174795);
  }
  {  // 1 8
    EtableParamsOnePair<float> &params = analytic_parameters[7];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.50853;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.40338, -2.3875, 0.824236, -0.0944176);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.46311, -2.44309, 0.84146, -0.0961935);
  }
  {  // 1 9
    EtableParamsOnePair<float> &params = analytic_parameters[8];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.94164;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.68658, -4.65562, 1.60726, -0.184114);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.21654, 0.954441, -0.216769, 0.015248);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(4.80306, -4.76403, 1.64085, -0.187577);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.22806, 0.960842, -0.217942, 0.0153191);
  }
  {  // 1 10
    EtableParamsOnePair<float> &params = analytic_parameters[9];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 4.39988;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(6.5942, -6.47278, 2.23181, -0.255378);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-6.50196, 4.23837, -0.87096, 0.0575291);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(6.74957, -6.61738, 2.2766, -0.259997);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-6.51607, 4.24621, -0.872397, 0.0576163);
  }
  {  // 1 11
    EtableParamsOnePair<float> &params = analytic_parameters[10];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.19994;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.2971, -3.23639, 1.1159, -0.127689);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.25098, 2.11918, -0.43548, 0.0287646);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.37478, -3.30869, 1.1383, -0.129998);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-3.25804, 2.12311, -0.436199, 0.0288081);
  }
  {  // 1 12
    EtableParamsOnePair<float> &params = analytic_parameters[11];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
  }
  {  // 1 13
    EtableParamsOnePair<float> &params = analytic_parameters[12];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.52679;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.06235, -3.2491, 1.22034, -0.151634);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.15759, -3.34315, 1.25125, -0.155012);
  }
  {  // 1 14
    EtableParamsOnePair<float> &params = analytic_parameters[13];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.20623;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.67384, -2.8369, 1.06552, -0.132397);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.757, -2.91901, 1.09251, -0.135346);
  }
  {  // 1 15
    EtableParamsOnePair<float> &params = analytic_parameters[14];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -635.478;
    params.lj_r12_coeff = 635976;
    params.lj_switch_intercept = 900.41;
    params.lj_switch_slope = -391.685;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.19994;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.56365, -2.67459, 1.00232, -0.124309);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.08117, 2.01509, -0.414931, 0.0274453);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.63816, -2.74817, 1.0265, -0.126952);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-3.08823, 2.01901, -0.415651, 0.0274889);
  }
  {  // 1 16
    EtableParamsOnePair<float> &params = analytic_parameters[15];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.50853;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.82827, -1.93976, 0.728562, -0.0905276);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.88513, -1.99591, 0.747012, -0.0925445);
  }
  {  // 1 17
    EtableParamsOnePair<float> &params = analytic_parameters[16];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -975.143;
    params.lj_r12_coeff = 1.71564e+06;
    params.lj_switch_intercept = 785.942;
    params.lj_switch_slope = -311.208;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.54625;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.04762, -2.88304, 0.938443, -0.101524);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.1108, -2.93943, 0.9552, -0.103182);
  }
  {  // 1 18
    EtableParamsOnePair<float> &params = analytic_parameters[17];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.88566;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.00422, -2.98437, 1.0303, -0.118022);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.07889, -3.05387, 1.05182, -0.120242);
  }
  {  // 1 19
    EtableParamsOnePair<float> &params = analytic_parameters[18];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -625.603;
    params.lj_r12_coeff = 1.28123e+06;
    params.lj_switch_intercept = 433.16;
    params.lj_switch_slope = -167.23;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
  }
  {  // 1 20
    EtableParamsOnePair<float> &params = analytic_parameters[19];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -1061.8;
    params.lj_r12_coeff = 2.17458e+06;
    params.lj_switch_intercept = 735.182;
    params.lj_switch_slope = -283.831;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.48625, -1.16821, 0.26555, -0.0186888);
  }
  {  // 1 21
    EtableParamsOnePair<float> &params = analytic_parameters[20];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.88566;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.28534, -2.4247, 0.910703, -0.113159);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.35641, -2.49488, 0.933765, -0.115681);
  }
  {  // 1 22
    EtableParamsOnePair<float> &params = analytic_parameters[21];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -2706.99;
    params.lj_r12_coeff = 6.91426e+06;
    params.lj_switch_intercept = 1502.83;
    params.lj_switch_slope = -559.223;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 9.05119;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(6.01494, -4.14419, 0.880153, -0.0594226);
    params.fasol_cubic_poly_close =
        CubicPolynomial(21.5264, -19.0187, 5.73217, -0.574551);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.76687, 4.21633, -0.924871, 0.0637234);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(21.913, -19.3416, 5.82195, -0.582865);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-5.80233, 4.23603, -0.928482, 0.0639422);
  }
  {  // 1 23
    EtableParamsOnePair<float> &params = analytic_parameters[22];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -2706.99;
    params.lj_r12_coeff = 6.91426e+06;
    params.lj_switch_intercept = 1502.83;
    params.lj_switch_slope = -559.223;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 9.05119;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(6.01494, -4.14419, 0.880153, -0.0594226);
    params.fasol_cubic_poly_close =
        CubicPolynomial(21.5264, -19.0187, 5.73217, -0.574551);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.76687, 4.21633, -0.924871, 0.0637234);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(21.913, -19.3416, 5.82195, -0.582865);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-5.80233, 4.23603, -0.928482, 0.0639422);
  }
  {  // 1 24
    EtableParamsOnePair<float> &params = analytic_parameters[23];
    params.hydrogen_interaction = 1;
    params.maxd2 = 9;
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -112.936;
    params.lj_r12_coeff = 41165.2;
    params.lj_switch_intercept = 439.355;
    params.lj_switch_slope = -226.162;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1;
  }
  {  // 1 25
    EtableParamsOnePair<float> &params = analytic_parameters[24];
    params.hydrogen_interaction = 1;
    params.maxd2 = 10.25;
    params.ljrep_linear_ramp_d2_cutoff = 3.6864;
    params.lj_r6_coeff = -166.343;
    params.lj_r12_coeff = 89304.9;
    params.lj_switch_intercept = 439.355;
    params.lj_switch_slope = -212.027;
    params.lj_minimum = 3.2;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.2;
  }
  {  // 2 2
    EtableParamsOnePair<float> &params = analytic_parameters[25];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -983.04;
    params.lj_r12_coeff = 2.01327e+06;
    params.lj_switch_intercept = 680.646;
    params.lj_switch_slope = -262.776;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.376, -1.08156, 0.245851, -0.0173024);
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.08535, -1.00957, 0.322944, -0.0342853);
  }
  {  // 2 3
    EtableParamsOnePair<float> &params = analytic_parameters[26];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -625.603;
    params.lj_r12_coeff = 1.28123e+06;
    params.lj_switch_intercept = 433.16;
    params.lj_switch_slope = -167.23;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.64647, -1.53151, 0.489904, -0.0520106);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.58506, -1.47217, 0.469969, -0.0498055);
  }
  {  // 2 4
    EtableParamsOnePair<float> &params = analytic_parameters[27];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -958.989;
    params.lj_r12_coeff = 1.96401e+06;
    params.lj_switch_intercept = 663.993;
    params.lj_switch_slope = -256.347;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.34234, -1.05509, 0.239837, -0.0168791);
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.263, -1.17482, 0.375804, -0.0398972);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.49811, -1.39141, 0.44419, -0.0470736);
  }
  {  // 2 5
    EtableParamsOnePair<float> &params = analytic_parameters[28];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -1207.65;
    params.lj_r12_coeff = 2.47326e+06;
    params.lj_switch_intercept = 836.161;
    params.lj_switch_slope = -322.816;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.07752;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.69039, -1.32867, 0.302024, -0.0212557);
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.38004, -1.28368, 0.410627, -0.0435942);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.0064, -1.8635, 0.594897, -0.0630449);
  }
  {  // 2 6
    EtableParamsOnePair<float> &params = analytic_parameters[29];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -983.04;
    params.lj_r12_coeff = 2.01327e+06;
    params.lj_switch_intercept = 680.646;
    params.lj_switch_slope = -262.776;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.376, -1.08156, 0.245851, -0.0173024);
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.17203, -1.09019, 0.348735, -0.0370234);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.23059, -1.14295, 0.36487, -0.0386676);
  }
  {  // 2 7
    EtableParamsOnePair<float> &params = analytic_parameters[30];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.89516;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.28182, -3.25918, 1.12495, -0.128843);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.09439, -3.06924, 1.05712, -0.120847);
  }
  {  // 2 8
    EtableParamsOnePair<float> &params = analytic_parameters[31];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.61948, -1.60782, 0.55485, -0.0635372);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.39074, -1.37943, 0.47511, -0.0543133);
  }
  {  // 2 9
    EtableParamsOnePair<float> &params = analytic_parameters[32];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.66092;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.31428, -3.28994, 1.13523, -0.129987);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.71193, -2.6899, 0.926464, -0.105911);
  }
  {  // 2 10
    EtableParamsOnePair<float> &params = analytic_parameters[33];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.48429;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.39137, -4.31595, 1.48786, -0.170224);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.89157, 2.55794, -0.52835, 0.0350209);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.81098, -3.73634, 1.28543, -0.146801);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-3.67914, 2.39752, -0.492578, 0.0325316);
  }
  {  // 2 11
    EtableParamsOnePair<float> &params = analytic_parameters[34];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.24214;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.52974, -2.4886, 0.857796, -0.0981276);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.05599, 1.3614, -0.282466, 0.0187796);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.90549, -1.86817, 0.642714, -0.0734004);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.83957, 1.19876, -0.246289, 0.0162658);
  }
  {  // 2 12
    EtableParamsOnePair<float> &params = analytic_parameters[35];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
  }
  {  // 2 13
    EtableParamsOnePair<float> &params = analytic_parameters[36];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.42669;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.23819, -2.36991, 0.888917, -0.110326);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.78286, -1.88763, 0.706485, -0.0875238);
  }
  {  // 2 14
    EtableParamsOnePair<float> &params = analytic_parameters[37];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.24569;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.01883, -2.13718, 0.801502, -0.0994643);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.55667, -1.64815, 0.616857, -0.07642);
  }
  {  // 2 15
    EtableParamsOnePair<float> &params = analytic_parameters[38];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -635.478;
    params.lj_r12_coeff = 635976;
    params.lj_switch_intercept = 900.41;
    params.lj_switch_slope = -391.685;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.24214;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.95661, -2.04553, 0.765815, -0.0948978);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.95223, 1.29673, -0.269558, 0.0179441);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.48957, -1.55169, 0.579586, -0.0716804);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.7437, 1.13999, -0.234687, 0.0155209);
  }
  {  // 2 16
    EtableParamsOnePair<float> &params = analytic_parameters[39];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.54139, -1.63063, 0.611245, -0.075824);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.06439, -1.12694, 0.421782, -0.052253);
  }
  {  // 2 17
    EtableParamsOnePair<float> &params = analytic_parameters[40];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -975.143;
    params.lj_r12_coeff = 1.71564e+06;
    params.lj_switch_intercept = 785.942;
    params.lj_switch_slope = -311.208;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.77805, -2.62688, 0.854819, -0.0924537);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.07858, -1.01804, 0.330598, -0.0356895);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.75644, -1.65968, 0.539331, -0.0582589);
  }
  {  // 2 18
    EtableParamsOnePair<float> &params = analytic_parameters[41];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.0647;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.95873, -1.94483, 0.671196, -0.0768648);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.73842, -1.72429, 0.593887, -0.0678917);
  }
  {  // 2 19
    EtableParamsOnePair<float> &params = analytic_parameters[42];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -625.603;
    params.lj_r12_coeff = 1.28123e+06;
    params.lj_switch_intercept = 433.16;
    params.lj_switch_slope = -167.23;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.16194, -1.08081, 0.345733, -0.0367047);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.58506, -1.47217, 0.469969, -0.0498055);
  }
  {  // 2 20
    EtableParamsOnePair<float> &params = analytic_parameters[43];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -1061.8;
    params.lj_r12_coeff = 2.17458e+06;
    params.lj_switch_intercept = 735.182;
    params.lj_switch_slope = -283.831;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.48625, -1.16821, 0.26555, -0.0186888);
  }
  {  // 2 21
    EtableParamsOnePair<float> &params = analytic_parameters[44];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.0647;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.79947, -1.90444, 0.714087, -0.0886026);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.33049, -1.40868, 0.527228, -0.0653162);
  }
  {  // 2 22
    EtableParamsOnePair<float> &params = analytic_parameters[45];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -2706.99;
    params.lj_r12_coeff = 6.91426e+06;
    params.lj_switch_intercept = 1502.83;
    params.lj_switch_slope = -559.223;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.24993;
    params.lk_coeff2 = 5.11054;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(6.01494, -4.14419, 0.880153, -0.0594226);
    params.fasol_cubic_poly_close =
        CubicPolynomial(15.0543, -13.3043, 4.01061, -0.402063);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.94094, 2.89286, -0.635876, 0.0438671);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.95442, -2.61133, 0.786734, -0.0788281);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(12.3727, -10.9207, 3.28722, -0.329101);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-3.27614, 2.39177, -0.524245, 0.0361034);
  }
  {  // 2 23
    EtableParamsOnePair<float> &params = analytic_parameters[46];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -2706.99;
    params.lj_r12_coeff = 6.91426e+06;
    params.lj_switch_intercept = 1502.83;
    params.lj_switch_slope = -559.223;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.24993;
    params.lk_coeff2 = 5.11054;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(6.01494, -4.14419, 0.880153, -0.0594226);
    params.fasol_cubic_poly_close =
        CubicPolynomial(15.0543, -13.3043, 4.01061, -0.402063);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.94094, 2.89286, -0.635876, 0.0438671);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.95442, -2.61133, 0.786734, -0.0788281);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(12.3727, -10.9207, 3.28722, -0.329101);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-3.27614, 2.39177, -0.524245, 0.0361034);
  }
  {  // 2 24
    EtableParamsOnePair<float> &params = analytic_parameters[47];
    params.hydrogen_interaction = 1;
    params.maxd2 = 9;
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -112.936;
    params.lj_r12_coeff = 41165.2;
    params.lj_switch_intercept = 439.355;
    params.lj_switch_slope = -226.162;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1;
  }
  {  // 2 25
    EtableParamsOnePair<float> &params = analytic_parameters[48];
    params.hydrogen_interaction = 1;
    params.maxd2 = 10.25;
    params.ljrep_linear_ramp_d2_cutoff = 3.6864;
    params.lj_r6_coeff = -166.343;
    params.lj_r12_coeff = 89304.9;
    params.lj_switch_intercept = 439.355;
    params.lj_switch_slope = -212.027;
    params.lj_minimum = 3.2;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.2;
  }
  {  // 3 3
    EtableParamsOnePair<float> &params = analytic_parameters[49];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -398.131;
    params.lj_r12_coeff = 815373;
    params.lj_switch_intercept = 275.662;
    params.lj_switch_slope = -106.424;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 4.01871;
    params.fasol_cubic_poly_close_end = 4.31856;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
  }
  {  // 3 4
    EtableParamsOnePair<float> &params = analytic_parameters[50];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -610.297;
    params.lj_r12_coeff = 1.24989e+06;
    params.lj_switch_intercept = 422.563;
    params.lj_switch_slope = -163.138;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 4.01871;
    params.fasol_cubic_poly_close_end = 4.31856;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
  }
  {  // 3 5
    EtableParamsOnePair<float> &params = analytic_parameters[51];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -768.541;
    params.lj_r12_coeff = 1.57397e+06;
    params.lj_switch_intercept = 532.129;
    params.lj_switch_slope = -205.439;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 4.01871;
    params.fasol_cubic_poly_close_end = 4.31856;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.07576, -0.845561, 0.192207, -0.0135271);
    params.fasol_cubic_poly_close =
        CubicPolynomial(-1.72672, 1.35177, -0.357111, 0.0313412);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-2.23449, 1.74681, -0.46076, 0.0403819);
  }
  {  // 3 6
    EtableParamsOnePair<float> &params = analytic_parameters[52];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -625.603;
    params.lj_r12_coeff = 1.28123e+06;
    params.lj_switch_intercept = 433.16;
    params.lj_switch_slope = -167.23;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 4.01871;
    params.fasol_cubic_poly_close_end = 4.31856;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
  }
  {  // 3 7
    EtableParamsOnePair<float> &params = analytic_parameters[53];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 5.41147;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(8.66837, -8.61093, 2.97271, -0.340525);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.25342, 1.76737, -0.401337, 0.0282285);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(8.83578, -8.76398, 3.01852, -0.34507);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.25915, 1.76758, -0.40093, 0.0281813);
  }
  {  // 3 8
    EtableParamsOnePair<float> &params = analytic_parameters[54];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.43212;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.9217, -3.89562, 1.34485, -0.154051);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.02128, 0.800689, -0.181789, 0.012785);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.97114, -3.93887, 1.35664, -0.155087);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.01535, 0.794416, -0.180193, 0.0126657);
  }
  {  // 3 9
    EtableParamsOnePair<float> &params = analytic_parameters[55];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 4.74264;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(7.67523, -7.62409, 2.63196, -0.301486);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.00071, 1.56823, -0.356017, 0.0250368);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(7.74372, -7.68079, 2.64545, -0.302421);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.97993, 1.54911, -0.351376, 0.0246982);
  }
  {  // 3 10
    EtableParamsOnePair<float> &params = analytic_parameters[56];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 7.09369;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(10.7508, -10.5538, 3.63888, -0.41638);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-10.5221, 6.86272, -1.41073, 0.0932043);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(10.882, -10.6688, 3.67044, -0.419178);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-10.5055, 6.84593, -1.40652, 0.0928915);
  }
  {  // 3 11
    EtableParamsOnePair<float> &params = analytic_parameters[57];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.54685;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.43504, -5.33593, 1.83977, -0.210514);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.28073, 3.44608, -0.708633, 0.0468288);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.44098, -5.33442, 1.83522, -0.209589);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-5.25275, 3.42297, -0.703259, 0.0464458);
  }
  {  // 3 12
    EtableParamsOnePair<float> &params = analytic_parameters[58];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.5015, -1.49158, 0.514937, -0.0589869);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.53882, -1.52631, 0.525698, -0.0600964);
  }
  {  // 3 13
    EtableParamsOnePair<float> &params = analytic_parameters[59];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -352.009;
    params.lj_r12_coeff = 352284;
    params.lj_switch_intercept = 498.762;
    params.lj_switch_slope = -216.965;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 4.07381;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.02817, -5.33395, 2.00318, -0.248883);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.33938, 1.10293, -0.256027, 0.0182352);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.09081, -5.38997, 2.01731, -0.249917);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.31714, 1.08327, -0.251329, 0.0178951);
  }
  {  // 3 14
    EtableParamsOnePair<float> &params = analytic_parameters[60];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -352.009;
    params.lj_r12_coeff = 352284;
    params.lj_switch_intercept = 498.762;
    params.lj_switch_slope = -216.965;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.55698;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.4018, -4.66938, 1.75358, -0.217868);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.17427, 0.966604, -0.224345, 0.0159772);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(4.44496, -4.70617, 1.76139, -0.218211);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.15004, 0.945841, -0.219444, 0.0156248);
  }
  {  // 3 15
    EtableParamsOnePair<float> &params = analytic_parameters[61];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -404.416;
    params.lj_r12_coeff = 404732;
    params.lj_switch_intercept = 573.017;
    params.lj_switch_slope = -249.267;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.54685;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.22414, -4.4077, 1.65167, -0.204829);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.00555, 3.2772, -0.67527, 0.0446856);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(4.25336, -4.43073, 1.65496, -0.204678);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.97899, 3.25514, -0.670131, 0.0443188);
  }
  {  // 3 16
    EtableParamsOnePair<float> &params = analytic_parameters[62];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -352.009;
    params.lj_r12_coeff = 352284;
    params.lj_switch_intercept = 498.762;
    params.lj_switch_slope = -216.965;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.43212;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.03853, -3.22297, 1.21031, -0.150365);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.03929, -3.21789, 1.20437, -0.149204);
  }
  {  // 3 17
    EtableParamsOnePair<float> &params = analytic_parameters[63];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -620.577;
    params.lj_r12_coeff = 1.09183e+06;
    params.lj_switch_intercept = 500.171;
    params.lj_switch_slope = -198.052;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.49293;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.10232, -4.82657, 1.57103, -0.169955);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.27805, 0.972042, -0.21751, 0.0151674);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.01538, -4.73909, 1.54002, -0.166354);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.2362, 0.938856, -0.209935, 0.014633);
  }
  {  // 3 18
    EtableParamsOnePair<float> &params = analytic_parameters[64];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.04015;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.89041, -4.85793, 1.67706, -0.192107);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.27274, 0.99797, -0.226595, 0.0159368);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(4.96392, -4.92358, 1.6958, -0.193859);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.26919, 0.99302, -0.225241, 0.0158322);
  }
  {  // 3 19
    EtableParamsOnePair<float> &params = analytic_parameters[65];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -398.131;
    params.lj_r12_coeff = 815373;
    params.lj_switch_intercept = 275.662;
    params.lj_switch_slope = -106.424;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-1.13218, 1.05155, -0.335692, 0.0355754);
  }
  {  // 3 20
    EtableParamsOnePair<float> &params = analytic_parameters[66];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -675.728;
    params.lj_r12_coeff = 1.38389e+06;
    params.lj_switch_intercept = 467.867;
    params.lj_switch_slope = -180.629;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-1.13218, 1.05155, -0.335692, 0.0355754);
  }
  {  // 3 21
    EtableParamsOnePair<float> &params = analytic_parameters[67];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -352.009;
    params.lj_r12_coeff = 352284;
    params.lj_switch_intercept = 498.762;
    params.lj_switch_slope = -216.965;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.04015;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.77543, -4.00481, 1.50397, -0.186853);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.00917, 0.830282, -0.192663, 0.0137193);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.79911, -4.02236, 1.50546, -0.186505);
  }
  {  // 3 22
    EtableParamsOnePair<float> &params = analytic_parameters[68];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -1722.72;
    params.lj_r12_coeff = 4.40021e+06;
    params.lj_switch_intercept = 956.392;
    params.lj_switch_slope = -355.887;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 14.5927;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(3.82789, -2.63735, 0.560126, -0.0378163);
    params.fasol_cubic_poly_close =
        CubicPolynomial(35.2236, -31.121, 9.37988, -0.940184);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-9.4199, 6.88923, -1.51142, 0.104146);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(35.3292, -31.1833, 9.38641, -0.939721);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-9.35477, 6.82952, -1.49694, 0.103091);
  }
  {  // 3 23
    EtableParamsOnePair<float> &params = analytic_parameters[69];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -1722.72;
    params.lj_r12_coeff = 4.40021e+06;
    params.lj_switch_intercept = 956.392;
    params.lj_switch_slope = -355.887;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 14.5927;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(3.82789, -2.63735, 0.560126, -0.0378163);
    params.fasol_cubic_poly_close =
        CubicPolynomial(35.2236, -31.121, 9.37988, -0.940184);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-9.4199, 6.88923, -1.51142, 0.104146);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(35.3292, -31.1833, 9.38641, -0.939721);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-9.35477, 6.82952, -1.49694, 0.103091);
  }
  {  // 3 24
    EtableParamsOnePair<float> &params = analytic_parameters[70];
    params.hydrogen_interaction = 1;
    params.maxd2 = 9;
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -71.8722;
    params.lj_r12_coeff = 26197.4;
    params.lj_switch_intercept = 279.604;
    params.lj_switch_slope = -143.928;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1;
  }
  {  // 3 25
    EtableParamsOnePair<float> &params = analytic_parameters[71];
    params.hydrogen_interaction = 1;
    params.maxd2 = 10.25;
    params.ljrep_linear_ramp_d2_cutoff = 3.6864;
    params.lj_r6_coeff = -105.86;
    params.lj_r12_coeff = 56833.3;
    params.lj_switch_intercept = 279.604;
    params.lj_switch_slope = -134.933;
    params.lj_minimum = 3.2;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.2;
  }
  {  // 4 4
    EtableParamsOnePair<float> &params = analytic_parameters[72];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -935.526;
    params.lj_r12_coeff = 1.91596e+06;
    params.lj_switch_intercept = 647.748;
    params.lj_switch_slope = -250.075;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 4.01871;
    params.fasol_cubic_poly_close_end = 4.31856;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.3095, -1.02928, 0.233969, -0.0164661);
    params.fasol_cubic_poly_close =
        CubicPolynomial(-1.43407, 1.12267, -0.296587, 0.0260294);
  }
  {  // 4 5
    EtableParamsOnePair<float> &params = analytic_parameters[73];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -1178.1;
    params.lj_r12_coeff = 2.41275e+06;
    params.lj_switch_intercept = 815.703;
    params.lj_switch_slope = -314.918;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 4.01871;
    params.fasol_cubic_poly_close_end = 4.31856;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.64904, -1.29616, 0.294635, -0.0207357);
    params.fasol_cubic_poly_close =
        CubicPolynomial(-3.02868, 2.37102, -0.626377, 0.0549728);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-2.11192, 1.65099, -0.435486, 0.0381669);
  }
  {  // 4 6
    EtableParamsOnePair<float> &params = analytic_parameters[74];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -958.989;
    params.lj_r12_coeff = 1.96401e+06;
    params.lj_switch_intercept = 663.993;
    params.lj_switch_slope = -256.347;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 4.01871;
    params.fasol_cubic_poly_close_end = 4.31856;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.34234, -1.05509, 0.239837, -0.0168791);
  }
  {  // 4 7
    EtableParamsOnePair<float> &params = analytic_parameters[75];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -917.706;
    params.lj_r12_coeff = 1.27603e+06;
    params.lj_switch_intercept = 935.893;
    params.lj_switch_slope = -385.407;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 5.11464;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(8.0511, -7.99827, 2.76132, -0.316322);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.08304, 1.63544, -0.371559, 0.0261414);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(8.35112, -8.28325, 2.85295, -0.326142);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.13523, 1.67062, -0.378938, 0.0266355);
  }
  {  // 4 8
    EtableParamsOnePair<float> &params = analytic_parameters[76];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -917.706;
    params.lj_r12_coeff = 1.27603e+06;
    params.lj_switch_intercept = 935.893;
    params.lj_switch_slope = -385.407;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.29872;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.5648, -3.5416, 1.22275, -0.140076);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.75331, -3.72281, 1.28222, -0.146581);
  }
  {  // 4 9
    EtableParamsOnePair<float> &params = analytic_parameters[77];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -917.706;
    params.lj_r12_coeff = 1.27603e+06;
    params.lj_switch_intercept = 935.893;
    params.lj_switch_slope = -385.407;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 4.48249;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(6.8933, -6.84867, 2.36457, -0.270887);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.77191, 1.39316, -0.316726, 0.0222922);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(7.31896, -7.25948, 2.50034, -0.285832);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.87133, 1.46414, -0.332103, 0.0233434);
  }
  {  // 4 10
    EtableParamsOnePair<float> &params = analytic_parameters[78];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -917.706;
    params.lj_r12_coeff = 1.27603e+06;
    params.lj_switch_intercept = 935.893;
    params.lj_switch_slope = -385.407;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 6.70459;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(9.80015, -9.61767, 3.31626, -0.379478);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-9.82588, 6.39724, -1.31359, 0.0867206);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(10.2851, -10.0836, 3.46911, -0.396185);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-9.92925, 6.47042, -1.32937, 0.0877962);
  }
  {  // 4 11
    EtableParamsOnePair<float> &params = analytic_parameters[79];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -917.706;
    params.lj_r12_coeff = 1.27603e+06;
    params.lj_switch_intercept = 935.893;
    params.lj_switch_slope = -385.407;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.35229;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.776, -4.68603, 1.61584, -0.184905);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-4.87201, 3.168, -0.65, 0.0428889);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.14253, -5.04181, 1.73455, -0.198093);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.96463, 3.23521, -0.664684, 0.0438981);
  }
  {  // 4 12
    EtableParamsOnePair<float> &params = analytic_parameters[80];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -917.706;
    params.lj_r12_coeff = 1.27603e+06;
    params.lj_switch_intercept = 935.893;
    params.lj_switch_slope = -385.407;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.41914, -1.40976, 0.486692, -0.0557514);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.45441, -1.44259, 0.496862, -0.0568);
  }
  {  // 4 13
    EtableParamsOnePair<float> &params = analytic_parameters[81];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -539.595;
    params.lj_r12_coeff = 540018;
    params.lj_switch_intercept = 764.554;
    params.lj_switch_slope = -332.586;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.85035;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.47734, -4.75215, 1.78533, -0.221883);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.1511, 0.956556, -0.222927, 0.0159126);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(4.81156, -5.09432, 1.90666, -0.236209);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.24489, 1.02385, -0.237543, 0.0169135);
  }
  {  // 4 14
    EtableParamsOnePair<float> &params = analytic_parameters[82];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -539.595;
    params.lj_r12_coeff = 540018;
    params.lj_switch_intercept = 764.554;
    params.lj_switch_slope = -332.586;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.36187;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.88533, -4.12403, 1.54941, -0.192569);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(4.20114, -4.44802, 1.66477, -0.206242);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.08696, 0.89396, -0.207407, 0.0147678);
  }
  {  // 4 15
    EtableParamsOnePair<float> &params = analytic_parameters[83];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -619.93;
    params.lj_r12_coeff = 620416;
    params.lj_switch_intercept = 878.38;
    params.lj_switch_slope = -382.102;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.35229;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.71741, -3.8767, 1.4531, -0.180245);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-4.61617, 3.01156, -0.619173, 0.0409122);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(4.02005, -4.18769, 1.56418, -0.193451);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.70588, 3.07659, -0.633373, 0.0418878);
  }
  {  // 4 16
    EtableParamsOnePair<float> &params = analytic_parameters[84];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -539.595;
    params.lj_r12_coeff = 540018;
    params.lj_switch_intercept = 764.554;
    params.lj_switch_slope = -332.586;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.29872;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.59684, -2.75696, 1.03595, -0.128769);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.87258, -3.04138, 1.1383, -0.14102);
  }
  {  // 4 17
    EtableParamsOnePair<float> &params = analytic_parameters[85];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -951.285;
    params.lj_r12_coeff = 1.67366e+06;
    params.lj_switch_intercept = 766.713;
    params.lj_switch_slope = -303.594;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.35618;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.25129, -4.02214, 1.30931, -0.141654);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.05168, 0.801841, -0.179641, 0.0125356);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(4.74027, -4.47914, 1.45554, -0.157229);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.16839, 0.887357, -0.19842, 0.0138304);
  }
  {  // 4 18
    EtableParamsOnePair<float> &params = analytic_parameters[86];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -917.706;
    params.lj_r12_coeff = 1.27603e+06;
    params.lj_switch_intercept = 935.893;
    params.lj_switch_slope = -385.407;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.87339;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.48037, -4.45113, 1.53674, -0.176045);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.15615, 0.908244, -0.206402, 0.0145239);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(4.69164, -4.65351, 1.60278, -0.183226);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.19957, 0.938551, -0.212886, 0.0149637);
  }
  {  // 4 19
    EtableParamsOnePair<float> &params = analytic_parameters[87];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -610.297;
    params.lj_r12_coeff = 1.24989e+06;
    params.lj_switch_intercept = 422.563;
    params.lj_switch_slope = -163.138;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(-1.62167, 1.50844, -0.482525, 0.0512272);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-1.07008, 0.993867, -0.317278, 0.033624);
  }
  {  // 4 20
    EtableParamsOnePair<float> &params = analytic_parameters[88];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -1035.83;
    params.lj_r12_coeff = 2.12137e+06;
    params.lj_switch_intercept = 717.195;
    params.lj_switch_slope = -276.886;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.44989, -1.13963, 0.259053, -0.0182315);
    params.fasol_cubic_poly_close =
        CubicPolynomial(-1.40311, 1.30514, -0.417492, 0.044323);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-1.07008, 0.993867, -0.317278, 0.033624);
  }
  {  // 4 21
    EtableParamsOnePair<float> &params = analytic_parameters[89];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -539.595;
    params.lj_r12_coeff = 540018;
    params.lj_switch_intercept = 764.554;
    params.lj_switch_slope = -332.586;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.87339;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.29332, -3.49592, 1.3135, -0.163256);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.59072, -3.80173, 1.42288, -0.176275);
  }
  {  // 4 22
    EtableParamsOnePair<float> &params = analytic_parameters[90];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -2640.76;
    params.lj_r12_coeff = 6.7451e+06;
    params.lj_switch_intercept = 1466.06;
    params.lj_switch_slope = -545.541;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 13.7923;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(5.86778, -4.0428, 0.858619, -0.0579688);
    params.fasol_cubic_poly_close =
        CubicPolynomial(31.725, -28.0278, 8.44721, -0.846662);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-8.53326, 6.23464, -1.36711, 0.0941727);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-1.09736, 0.969924, -0.292216, 0.029279);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(33.3913, -29.4728, 8.87155, -0.888175);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-8.84164, 6.4549, -1.41483, 0.0974358);
  }
  {  // 4 23
    EtableParamsOnePair<float> &params = analytic_parameters[91];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -2640.76;
    params.lj_r12_coeff = 6.7451e+06;
    params.lj_switch_intercept = 1466.06;
    params.lj_switch_slope = -545.541;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 13.7923;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(5.86778, -4.0428, 0.858619, -0.0579688);
    params.fasol_cubic_poly_close =
        CubicPolynomial(31.725, -28.0278, 8.44721, -0.846662);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-8.53326, 6.23464, -1.36711, 0.0941727);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-1.09736, 0.969924, -0.292216, 0.029279);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(33.3913, -29.4728, 8.87155, -0.888175);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-8.84164, 6.4549, -1.41483, 0.0974358);
  }
  {  // 4 24
    EtableParamsOnePair<float> &params = analytic_parameters[92];
    params.hydrogen_interaction = 1;
    params.maxd2 = 9;
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -110.173;
    params.lj_r12_coeff = 40158.1;
    params.lj_switch_intercept = 428.606;
    params.lj_switch_slope = -220.628;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1;
  }
  {  // 4 25
    EtableParamsOnePair<float> &params = analytic_parameters[93];
    params.hydrogen_interaction = 1;
    params.maxd2 = 10.25;
    params.ljrep_linear_ramp_d2_cutoff = 3.6864;
    params.lj_r6_coeff = -162.274;
    params.lj_r12_coeff = 87120;
    params.lj_switch_intercept = 428.606;
    params.lj_switch_slope = -206.839;
    params.lj_minimum = 3.2;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.2;
  }
  {  // 5 5
    EtableParamsOnePair<float> &params = analytic_parameters[94];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -1483.57;
    params.lj_r12_coeff = 3.03835e+06;
    params.lj_switch_intercept = 1027.21;
    params.lj_switch_slope = -396.573;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = -1.15449;
    params.lk_coeff2 = -1.15449;
    params.fasol_cubic_poly_close_start = 4.01871;
    params.fasol_cubic_poly_close_end = 4.31856;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.07662, -1.63225, 0.371031, -0.0261123);
    params.fasol_cubic_poly_close =
        CubicPolynomial(-5.54027, 4.33723, -1.14581, 0.10056);
    params.fasol_cubic_poly_far =
        CubicPolynomial(1.26504, -0.946204, 0.209981, -0.0145701);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-2.82847, 2.21115, -0.58324, 0.0511164);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-2.82847, 2.21115, -0.58324, 0.0511164);
  }
  {  // 5 6
    EtableParamsOnePair<float> &params = analytic_parameters[95];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -1207.65;
    params.lj_r12_coeff = 2.47326e+06;
    params.lj_switch_intercept = 836.161;
    params.lj_switch_slope = -322.816;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 4.01871;
    params.fasol_cubic_poly_close_end = 4.31856;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.69039, -1.32867, 0.302024, -0.0212557);
    params.fasol_cubic_poly_close =
        CubicPolynomial(-1.84676, 1.44574, -0.381937, 0.03352);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-1.73479, 1.35617, -0.357721, 0.0313514);
  }
  {  // 5 7
    EtableParamsOnePair<float> &params = analytic_parameters[96];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1155.66;
    params.lj_r12_coeff = 1.6069e+06;
    params.lj_switch_intercept = 1178.56;
    params.lj_switch_slope = -485.34;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 6.84997;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(10.6321, -10.5629, 3.64685, -0.417776);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.74009, 2.15314, -0.489375, 0.0344384);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(11.1845, -11.0936, 3.82091, -0.436797);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.85968, 2.23744, -0.507506, 0.0356725);
  }
  {  // 5 8
    EtableParamsOnePair<float> &params = analytic_parameters[97];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1155.66;
    params.lj_r12_coeff = 1.6069e+06;
    params.lj_switch_intercept = 1178.56;
    params.lj_switch_slope = -485.34;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.07864;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.62363, -4.59411, 1.58626, -0.181732);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.18042, 0.929503, -0.211466, 0.0148897);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.02676, -4.98591, 1.71726, -0.196313);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.28525, 1.00559, -0.228092, 0.0160326);
  }
  {  // 5 9
    EtableParamsOnePair<float> &params = analytic_parameters[98];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1155.66;
    params.lj_r12_coeff = 1.6069e+06;
    params.lj_switch_intercept = 1178.56;
    params.lj_switch_slope = -485.34;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 6.00334;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(8.84862, -8.79279, 3.03613, -0.347853);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.24659, 1.77121, -0.403189, 0.0283987);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(9.80217, -9.72252, 3.34867, -0.382811);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.50624, 1.9609, -0.44478, 0.0312635);
  }
  {  // 5 10
    EtableParamsOnePair<float> &params = analytic_parameters[99];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1155.66;
    params.lj_r12_coeff = 1.6069e+06;
    params.lj_switch_intercept = 1178.56;
    params.lj_switch_slope = -485.34;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 8.97936;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(12.7417, -12.5013, 4.31071, -0.493289);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-13.0332, 8.47311, -1.73827, 0.114687);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(13.7746, -13.5048, 4.64613, -0.530605);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-13.2981, 8.66573, -1.7804, 0.117584);
  }
  {  // 5 11
    EtableParamsOnePair<float> &params = analytic_parameters[100];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1155.66;
    params.lj_r12_coeff = 1.6069e+06;
    params.lj_switch_intercept = 1178.56;
    params.lj_switch_slope = -485.34;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 4.48968;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(6.01294, -5.89639, 2.03336, -0.232699);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-6.39851, 4.14824, -0.849538, 0.0559835);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(6.88731, -6.75242, 2.32306, -0.265303);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-6.64905, 4.33287, -0.890201, 0.0587921);
  }
  {  // 5 12
    EtableParamsOnePair<float> &params = analytic_parameters[101];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1155.66;
    params.lj_r12_coeff = 1.6069e+06;
    params.lj_switch_intercept = 1178.56;
    params.lj_switch_slope = -485.34;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.19297;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.90063, -1.88807, 0.65182, -0.074667);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.94787, -1.93204, 0.66544, -0.0760714);
  }
  {  // 5 13
    EtableParamsOnePair<float> &params = analytic_parameters[102];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -679.508;
    params.lj_r12_coeff = 680040;
    params.lj_switch_intercept = 962.796;
    params.lj_switch_slope = -418.823;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 5.15672;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.70422, -6.05718, 2.27634, -0.282982);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.41967, 1.18986, -0.278315, 0.0199066);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(6.44406, -6.82275, 2.55356, -0.316351);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.66727, 1.37123, -0.318137, 0.022652);
  }
  {  // 5 14
    EtableParamsOnePair<float> &params = analytic_parameters[103];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -679.508;
    params.lj_r12_coeff = 680040;
    params.lj_switch_intercept = 962.796;
    params.lj_switch_slope = -418.823;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 4.50251;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.91135, -5.21595, 1.96038, -0.243722);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.21067, 1.0173, -0.238211, 0.0170484);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.62653, -5.95717, 2.2296, -0.276217);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.45575, 1.19727, -0.277777, 0.0197783);
  }
  {  // 5 15
    EtableParamsOnePair<float> &params = analytic_parameters[104];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -780.673;
    params.lj_r12_coeff = 781284;
    params.lj_switch_intercept = 1106.14;
    params.lj_switch_slope = -481.177;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 4.48968;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.68646, -4.88471, 1.83139, -0.227217);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-6.06039, 3.9421, -0.809002, 0.0533881);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.384, -5.60852, 2.09489, -0.259086);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-6.30252, 4.12043, -0.848267, 0.0560998);
  }
  {  // 5 16
    EtableParamsOnePair<float> &params = analytic_parameters[105];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -679.508;
    params.lj_r12_coeff = 680040;
    params.lj_switch_intercept = 962.796;
    params.lj_switch_slope = -418.823;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.07864;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.18569, -3.38506, 1.2727, -0.158275);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.8472, -4.07328, 1.52451, -0.188866);
  }
  {  // 5 17
    EtableParamsOnePair<float> &params = analytic_parameters[106];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -1197.94;
    params.lj_r12_coeff = 2.10763e+06;
    params.lj_switch_intercept = 965.515;
    params.lj_switch_slope = -382.313;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.1556;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.9;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.11519, -1.02381, 0.248339, -0.0181134);
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.08684, -4.81336, 1.56703, -0.169551);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.24246, 0.949705, -0.21303, 0.0148765);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-1.15562, 1.09076, -0.354212, 0.0382388);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(6.34858, -5.99884, 1.94939, -0.210574);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.56481, 1.18843, -0.265741, 0.0185228);
  }
  {  // 5 18
    EtableParamsOnePair<float> &params = analytic_parameters[107];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1155.66;
    params.lj_r12_coeff = 1.6069e+06;
    params.lj_switch_intercept = 1178.56;
    params.lj_switch_slope = -485.34;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.8483;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.84984, -5.81223, 2.00679, -0.229904);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.49872, 1.17923, -0.268182, 0.0188792);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(6.28344, -6.23238, 2.14658, -0.245392);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.60656, 1.25699, -0.285116, 0.0200407);
  }
  {  // 5 19
    EtableParamsOnePair<float> &params = analytic_parameters[108];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -768.541;
    params.lj_r12_coeff = 1.57397e+06;
    params.lj_switch_intercept = 532.129;
    params.lj_switch_slope = -205.439;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.07576, -0.845561, 0.192207, -0.0135271);
    params.fasol_cubic_poly_close =
        CubicPolynomial(-3.06131, 2.84755, -0.910884, 0.0967039);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-1.69827, 1.57732, -0.503538, 0.053363);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-1.43314, 1.33107, -0.424926, 0.0450321);
  }
  {  // 5 20
    EtableParamsOnePair<float> &params = analytic_parameters[109];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -1304.41;
    params.lj_r12_coeff = 2.67143e+06;
    params.lj_switch_intercept = 903.157;
    params.lj_switch_slope = -348.681;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.82583, -1.43513, 0.326223, -0.0229588);
    params.fasol_cubic_poly_close =
        CubicPolynomial(-2.43083, 2.2611, -0.723288, 0.0767878);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-1.05336, 0.978338, -0.312321, 0.0330986);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-1.43314, 1.33107, -0.424926, 0.0450321);
  }
  {  // 5 21
    EtableParamsOnePair<float> &params = analytic_parameters[110];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -679.508;
    params.lj_r12_coeff = 680040;
    params.lj_switch_intercept = 962.796;
    params.lj_switch_slope = -418.823;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.8483;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.11848, -4.37473, 1.64442, -0.204463);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.00168, 0.844741, -0.198107, 0.0141902);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(4.809, -5.0916, 1.90564, -0.236083);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.24423, 1.02331, -0.237416, 0.0169045);
  }
  {  // 5 22
    EtableParamsOnePair<float> &params = analytic_parameters[111];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -3325.49;
    params.lj_r12_coeff = 8.49404e+06;
    params.lj_switch_intercept = 1846.19;
    params.lj_switch_slope = -686.995;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = -1.33921;
    params.lk_coeff2 = 18.4718;
    params.lk_min_dis2sigma_value = 1.11473;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close_flat = 1.03706;
    params.fasol_cubic_poly2_close_flat = 1.11473;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(7.38924, -5.09107, 1.08125, -0.0729996);
    params.fasol_cubic_poly_close =
        CubicPolynomial(40.8243, -36.0645, 10.8689, -1.08935);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-11.0354, 8.05596, -1.7657, 0.121597);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-3.16545, 2.79786, -0.84293, 0.0844586);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(44.7205, -39.4726, 11.8815, -1.18952);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-11.8415, 8.64496, -1.89486, 0.130494);
  }
  {  // 5 23
    EtableParamsOnePair<float> &params = analytic_parameters[112];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -3325.49;
    params.lj_r12_coeff = 8.49404e+06;
    params.lj_switch_intercept = 1846.19;
    params.lj_switch_slope = -686.995;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = -1.33921;
    params.lk_coeff2 = 18.4718;
    params.lk_min_dis2sigma_value = 1.11473;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close_flat = 1.03706;
    params.fasol_cubic_poly2_close_flat = 1.11473;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(7.38924, -5.09107, 1.08125, -0.0729996);
    params.fasol_cubic_poly_close =
        CubicPolynomial(40.8243, -36.0645, 10.8689, -1.08935);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-11.0354, 8.05596, -1.7657, 0.121597);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-3.16545, 2.79786, -0.84293, 0.0844586);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(44.7205, -39.4726, 11.8815, -1.18952);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-11.8415, 8.64496, -1.89486, 0.130494);
  }
  {  // 5 24
    EtableParamsOnePair<float> &params = analytic_parameters[113];
    params.hydrogen_interaction = 1;
    params.maxd2 = 9;
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -138.74;
    params.lj_r12_coeff = 50570.7;
    params.lj_switch_intercept = 539.739;
    params.lj_switch_slope = -277.835;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1;
  }
  {  // 5 25
    EtableParamsOnePair<float> &params = analytic_parameters[114];
    params.hydrogen_interaction = 1;
    params.maxd2 = 10.25;
    params.ljrep_linear_ramp_d2_cutoff = 3.6864;
    params.lj_r6_coeff = -204.35;
    params.lj_r12_coeff = 109709;
    params.lj_switch_intercept = 539.739;
    params.lj_switch_slope = -260.471;
    params.lj_minimum = 3.2;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.2;
  }
  {  // 6 6
    EtableParamsOnePair<float> &params = analytic_parameters[115];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -983.04;
    params.lj_r12_coeff = 2.01327e+06;
    params.lj_switch_intercept = 680.646;
    params.lj_switch_slope = -262.776;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 4.01871;
    params.fasol_cubic_poly_close_end = 4.31856;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.376, -1.08156, 0.245851, -0.0173024);
  }
  {  // 6 7
    EtableParamsOnePair<float> &params = analytic_parameters[116];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 4.20131;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(6.67849, -6.63442, 2.29041, -0.262372);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.73254, 1.35945, -0.308773, 0.0217206);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(6.85985, -6.8041, 2.34349, -0.267902);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.75394, 1.3723, -0.31127, 0.0218791);
  }
  {  // 6 8
    EtableParamsOnePair<float> &params = analytic_parameters[117];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.88823;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.99331, -2.97359, 1.02658, -0.117598);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.08308, -3.05802, 1.05326, -0.120405);
  }
  {  // 6 9
    EtableParamsOnePair<float> &params = analytic_parameters[118];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.68205;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.82802, -5.78966, 1.9988, -0.228969);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.51014, 1.18525, -0.269239, 0.0189409);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(6.012, -5.96314, 2.05385, -0.234791);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.53716, 1.20269, -0.272799, 0.019175);
  }
  {  // 6 10
    EtableParamsOnePair<float> &params = analytic_parameters[119];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 5.50734;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(8.21579, -8.06419, 2.78054, -0.318169);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-8.12591, 5.29575, -1.08809, 0.0718642);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(8.44844, -8.28297, 2.84962, -0.325438);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-8.15617, 5.31498, -1.09198, 0.0721183);
  }
  {  // 6 11
    EtableParamsOnePair<float> &params = analytic_parameters[120];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.75367;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.08881, -4.0132, 1.38376, -0.158341);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-4.05666, 2.64316, -0.543, 0.0358596);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(4.22422, -4.14149, 1.42481, -0.162719);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.07809, 2.65749, -0.54599, 0.0360592);
  }
  {  // 6 12
    EtableParamsOnePair<float> &params = analytic_parameters[121];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.16572, -1.15802, 0.399783, -0.0457958);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.19469, -1.18498, 0.408137, -0.0466571);
  }
  {  // 6 13
    EtableParamsOnePair<float> &params = analytic_parameters[122];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.16279;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.80405, -4.0363, 1.51608, -0.188388);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.95236, -4.18462, 1.56618, -0.194029);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.02259, 0.841021, -0.195124, 0.0138932);
  }
  {  // 6 14
    EtableParamsOnePair<float> &params = analytic_parameters[123];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.76154;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.31776, -3.52035, 1.32229, -0.164309);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.45094, -3.65373, 1.36749, -0.169413);
  }
  {  // 6 15
    EtableParamsOnePair<float> &params = analytic_parameters[124];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -635.478;
    params.lj_r12_coeff = 635976;
    params.lj_switch_intercept = 900.41;
    params.lj_switch_slope = -391.685;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.75367;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.17983, -3.31719, 1.24318, -0.154186);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.84455, 2.5132, -0.517354, 0.0342134);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.30219, -3.43989, 1.28487, -0.158906);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-3.86554, 2.5272, -0.52027, 0.0344079);
  }
  {  // 6 16
    EtableParamsOnePair<float> &params = analytic_parameters[125];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.88823;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.25935, -2.3974, 0.90052, -0.111901);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.35962, -2.49828, 0.935035, -0.115838);
  }
  {  // 6 17
    EtableParamsOnePair<float> &params = analytic_parameters[126];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -975.143;
    params.lj_r12_coeff = 1.71564e+06;
    params.lj_switch_intercept = 785.942;
    params.lj_switch_slope = -311.208;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.93544;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.7543, -3.55162, 1.15608, -0.12507);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.89379, -3.67929, 1.19562, -0.129152);
  }
  {  // 6 18
    EtableParamsOnePair<float> &params = analytic_parameters[127];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -940.722;
    params.lj_r12_coeff = 1.30803e+06;
    params.lj_switch_intercept = 959.365;
    params.lj_switch_slope = -395.073;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.36029;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.74539, -3.7207, 1.28451, -0.147144);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.85385, -3.82253, 1.31657, -0.150507);
  }
  {  // 6 19
    EtableParamsOnePair<float> &params = analytic_parameters[128];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -625.603;
    params.lj_r12_coeff = 1.28123e+06;
    params.lj_switch_intercept = 433.16;
    params.lj_switch_slope = -167.23;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
  }
  {  // 6 20
    EtableParamsOnePair<float> &params = analytic_parameters[129];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -1061.8;
    params.lj_r12_coeff = 2.17458e+06;
    params.lj_switch_intercept = 735.182;
    params.lj_switch_slope = -283.831;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.48625, -1.16821, 0.26555, -0.0186888);
  }
  {  // 6 21
    EtableParamsOnePair<float> &params = analytic_parameters[130];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -553.128;
    params.lj_r12_coeff = 553562;
    params.lj_switch_intercept = 783.729;
    params.lj_switch_slope = -340.927;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 2.36029;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.83146, -3.0044, 1.12851, -0.14023);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.94952, -3.12285, 1.16879, -0.144797);
  }
  {  // 6 22
    EtableParamsOnePair<float> &params = analytic_parameters[131];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -2706.99;
    params.lj_r12_coeff = 6.91426e+06;
    params.lj_switch_intercept = 1502.83;
    params.lj_switch_slope = -559.223;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 11.3294;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(6.01494, -4.14419, 0.880153, -0.0594226);
    params.fasol_cubic_poly_close =
        CubicPolynomial(26.7789, -23.6591, 7.13072, -0.714728);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-7.17927, 5.24832, -1.15117, 0.0793119);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(27.4285, -24.2098, 7.28734, -0.729572);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-7.26278, 5.30224, -1.16218, 0.0800365);
  }
  {  // 6 23
    EtableParamsOnePair<float> &params = analytic_parameters[132];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -2706.99;
    params.lj_r12_coeff = 6.91426e+06;
    params.lj_switch_intercept = 1502.83;
    params.lj_switch_slope = -559.223;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 11.3294;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(6.01494, -4.14419, 0.880153, -0.0594226);
    params.fasol_cubic_poly_close =
        CubicPolynomial(26.7789, -23.6591, 7.13072, -0.714728);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-7.17927, 5.24832, -1.15117, 0.0793119);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(27.4285, -24.2098, 7.28734, -0.729572);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-7.26278, 5.30224, -1.16218, 0.0800365);
  }
  {  // 6 24
    EtableParamsOnePair<float> &params = analytic_parameters[133];
    params.hydrogen_interaction = 1;
    params.maxd2 = 9;
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -112.936;
    params.lj_r12_coeff = 41165.2;
    params.lj_switch_intercept = 439.355;
    params.lj_switch_slope = -226.162;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1;
  }
  {  // 6 25
    EtableParamsOnePair<float> &params = analytic_parameters[134];
    params.hydrogen_interaction = 1;
    params.maxd2 = 10.25;
    params.ljrep_linear_ramp_d2_cutoff = 3.6864;
    params.lj_r6_coeff = -166.343;
    params.lj_r12_coeff = 89304.9;
    params.lj_switch_intercept = 439.355;
    params.lj_switch_slope = -212.027;
    params.lj_minimum = 3.2;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.2;
  }
  {  // 7 7
    EtableParamsOnePair<float> &params = analytic_parameters[135];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.00466;
    params.lk_coeff2 = 1.00466;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.81271, -1.99356, 0.793646, -0.10366);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(0.942932, -1.03341, 0.409025, -0.0531824);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.942932, -1.03341, 0.409025, -0.0531824);
  }
  {  // 7 8
    EtableParamsOnePair<float> &params = analytic_parameters[136];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -347.587;
    params.lj_r12_coeff = 126696;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -696.065;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.00466;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(0.952494, -1.1584, 0.570156, -0.0915688);
  }
  {  // 7 9
    EtableParamsOnePair<float> &params = analytic_parameters[137];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.55732;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.10141, -3.41084, 1.35787, -0.177355);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.42173, 1.11543, -0.253332, 0.0178199);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.40019, -2.63049, 1.04115, -0.135373);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.06762, 0.83531, -0.189469, 0.0133177);
  }
  {  // 7 10
    EtableParamsOnePair<float> &params = analytic_parameters[138];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.55732;
    params.lk_coeff2 = 1.31697;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.41628, -3.73318, 1.48635, -0.194152);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.00376, 2.09837, -0.449144, 0.0304755);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.40019, -2.63049, 1.04115, -0.135373);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.06762, 0.83531, -0.189469, 0.0133177);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.15298, -1.23977, 0.490861, -0.063839);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.95039, 1.27097, -0.261126, 0.0172457);
  }
  {  // 7 11
    EtableParamsOnePair<float> &params = analytic_parameters[139];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.55732;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.86168, -3.13522, 1.24822, -0.163041);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.03068, 1.46406, -0.318796, 0.0218657);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.40019, -2.63049, 1.04115, -0.135373);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.06762, 0.83531, -0.189469, 0.0133177);
  }
  {  // 7 12
    EtableParamsOnePair<float> &params = analytic_parameters[140];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
  }
  {  // 7 13
    EtableParamsOnePair<float> &params = analytic_parameters[141];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -120.326;
    params.lj_r12_coeff = 18585.2;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -656.114;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.46599;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.26144, 0.999605, -0.228081, 0.0160868);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.02949, 0.805478, -0.182702, 0.0128421);
  }
  {  // 7 14
    EtableParamsOnePair<float> &params = analytic_parameters[142];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.46599;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.02896, -2.47132, 1.21787, -0.195773);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.23079, 0.974296, -0.222199, 0.0156676);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.68532, -2.04788, 0.999646, -0.159551);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.02949, 0.805478, -0.182702, 0.0128421);
  }
  {  // 7 15
    EtableParamsOnePair<float> &params = analytic_parameters[143];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -326.227;
    params.lj_r12_coeff = 118910;
    params.lj_switch_intercept = 1269.12;
    params.lj_switch_slope = -653.29;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.46599;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.00164, -2.42377, 1.19533, -0.192257);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.94208, 1.40327, -0.305915, 0.0209974);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.68532, -2.04788, 0.999646, -0.159551);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.02949, 0.805478, -0.182702, 0.0128421);
  }
  {  // 7 16
    EtableParamsOnePair<float> &params = analytic_parameters[144];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.46599;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.89742, -2.31016, 1.13807, -0.1829);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.16408, 0.919212, -0.209398, 0.0147552);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.68532, -2.04788, 0.999646, -0.159551);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.02949, 0.805478, -0.182702, 0.0128421);
  }
  {  // 7 17
    EtableParamsOnePair<float> &params = analytic_parameters[145];
    params.ljrep_linear_ramp_d2_cutoff = 4.7961;
    params.lj_r6_coeff = -923.635;
    params.lj_r12_coeff = 1.09201e+06;
    params.lj_switch_intercept = 1107.78;
    params.lj_switch_slope = -468.689;
    params.lj_minimum = 3.65;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.35648;
    params.fasol_cubic_poly_close_start = 3.01662;
    params.fasol_cubic_poly_close_end = 3.40588;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.0265, -4.23456, 1.57983, -0.194026);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.61578, 1.26233, -0.286129, 0.0201038);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(3.6532, -3.8316, 1.42327, -0.174188);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.40125, 1.09634, -0.248678, 0.0174795);
  }
  {  // 7 18
    EtableParamsOnePair<float> &params = analytic_parameters[146];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.00466;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.41554, -1.55677, 0.619757, -0.0809481);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(0.942932, -1.03341, 0.409025, -0.0531824);
  }
  {  // 7 19
    EtableParamsOnePair<float> &params = analytic_parameters[147];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 5.41147;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(8.43402, -8.37899, 2.89283, -0.331395);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.17611, 1.70954, -0.388505, 0.0273381);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(8.83578, -8.76398, 3.01852, -0.34507);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.25915, 1.76758, -0.40093, 0.0281813);
  }
  {  // 7 20
    EtableParamsOnePair<float> &params = analytic_parameters[148];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1016.1;
    params.lj_r12_coeff = 1.41284e+06;
    params.lj_switch_intercept = 1036.23;
    params.lj_switch_slope = -426.727;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.35648;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.16003, -5.12663, 1.77002, -0.202775);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.32625, 1.04278, -0.237073, 0.0166861);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(5.48042, -5.43588, 1.87225, -0.214031);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.40125, 1.09634, -0.248678, 0.0174795);
  }
  {  // 7 21
    EtableParamsOnePair<float> &params = analytic_parameters[149];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.46599;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.96852, -2.39727, 1.1812, -0.189859);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.20014, 0.948987, -0.216318, 0.0152484);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.68532, -2.04788, 0.999646, -0.159551);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.02949, 0.805478, -0.182702, 0.0128421);
  }
  {  // 7 22
    EtableParamsOnePair<float> &params = analytic_parameters[150];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 7.94596;
    params.lk_coeff2 = 2.7092;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(20.7679, -19.6561, 6.40035, -0.692626);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.01225, 3.84017, -0.862369, 0.0602617);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(15.5635, -14.7302, 4.79173, -0.518092);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-3.31723, 2.59543, -0.588707, 0.0413801);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.64064, -5.31521, 1.72432, -0.185979);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.73675, 1.26793, -0.277913, 0.0191392);
  }
  {  // 7 23
    EtableParamsOnePair<float> &params = analytic_parameters[151];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 7.94596;
    params.lk_coeff2 = 2.7092;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(20.7679, -19.6561, 6.40035, -0.692626);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.01225, 3.84017, -0.862369, 0.0602617);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(15.5635, -14.7302, 4.79173, -0.518092);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-3.31723, 2.59543, -0.588707, 0.0413801);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.64064, -5.31521, 1.72432, -0.185979);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.73675, 1.26793, -0.277913, 0.0191392);
  }
  {  // 7 24
    EtableParamsOnePair<float> &params = analytic_parameters[152];
    params.hydrogen_interaction = 1;
    params.maxd2 = 7.55;
    params.ljrep_linear_ramp_d2_cutoff = 2.7225;
    params.lj_r6_coeff = -94.4418;
    params.lj_r12_coeff = 20423.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -347.752;
    params.lj_minimum = 2.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1;
  }
  {  // 7 25
    EtableParamsOnePair<float> &params = analytic_parameters[153];
    params.hydrogen_interaction = 1;
    params.maxd2 = 8.7;
    params.ljrep_linear_ramp_d2_cutoff = 3.1329;
    params.lj_r6_coeff = -143.913;
    params.lj_r12_coeff = 47424.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -324.176;
    params.lj_minimum = 2.95;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.2;
  }
  {  // 8 8
    EtableParamsOnePair<float> &params = analytic_parameters[154];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
  }
  {  // 8 9
    EtableParamsOnePair<float> &params = analytic_parameters[155];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -347.587;
    params.lj_r12_coeff = 126696;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -696.065;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.14936;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.32772, -1.61474, 0.794763, -0.127641);
  }
  {  // 8 10
    EtableParamsOnePair<float> &params = analytic_parameters[156];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -347.587;
    params.lj_r12_coeff = 126696;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -696.065;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.14936;
    params.lk_coeff2 = 1.31697;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.53625, -1.84421, 0.911724, -0.146907);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.42149, 1.64155, -0.345391, 0.0231773);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.95039, 1.27097, -0.261126, 0.0172457);
  }
  {  // 8 11
    EtableParamsOnePair<float> &params = analytic_parameters[157];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -347.587;
    params.lj_r12_coeff = 126696;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -696.065;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.14936;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.14402, -1.37926, 0.680871, -0.109591);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.44841, 1.00723, -0.215044, 0.0145675);
  }
  {  // 8 12
    EtableParamsOnePair<float> &params = analytic_parameters[158];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -347.587;
    params.lj_r12_coeff = 126696;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -696.065;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
  }
  {  // 8 13
    EtableParamsOnePair<float> &params = analytic_parameters[159];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -120.326;
    params.lj_r12_coeff = 18585.2;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -656.114;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.10831;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
  }
  {  // 8 14
    EtableParamsOnePair<float> &params = analytic_parameters[160];
    params.ljrep_linear_ramp_d2_cutoff = 3.9204;
    params.lj_r6_coeff = -503.039;
    params.lj_r12_coeff = 324830;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -516.939;
    params.lj_minimum = 3.3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.10831;
    params.fasol_cubic_poly_close_start = 2.67395;
    params.fasol_cubic_poly_close_end = 3.10644;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.59707, -1.82336, 0.769206, -0.106772);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.05283, -1.19695, 0.501576, -0.0692504);
  }
  {  // 8 15
    EtableParamsOnePair<float> &params = analytic_parameters[161];
    params.ljrep_linear_ramp_d2_cutoff = 3.9204;
    params.lj_r6_coeff = -577.932;
    params.lj_r12_coeff = 373190;
    params.lj_switch_intercept = 1269.12;
    params.lj_switch_slope = -593.9;
    params.lj_minimum = 3.3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.10831;
    params.fasol_cubic_poly_close_start = 2.67395;
    params.fasol_cubic_poly_close_end = 3.10644;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.5664, -1.77443, 0.748381, -0.103862);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.3806, 0.962756, -0.205868, 0.0139598);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.05283, -1.19695, 0.501576, -0.0692504);
  }
  {  // 8 16
    EtableParamsOnePair<float> &params = analytic_parameters[162];
    params.ljrep_linear_ramp_d2_cutoff = 3.9204;
    params.lj_r6_coeff = -503.039;
    params.lj_r12_coeff = 324830;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -516.939;
    params.lj_minimum = 3.3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.10831;
    params.fasol_cubic_poly_close_start = 2.67395;
    params.fasol_cubic_poly_close_end = 3.10644;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.41317, -1.61266, 0.680084, -0.0943758);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.05283, -1.19695, 0.501576, -0.0692504);
  }
  {  // 8 17
    EtableParamsOnePair<float> &params = analytic_parameters[163];
    params.ljrep_linear_ramp_d2_cutoff = 4.7961;
    params.lj_r6_coeff = -923.635;
    params.lj_r12_coeff = 1.09201e+06;
    params.lj_switch_intercept = 1107.78;
    params.lj_switch_slope = -468.689;
    params.lj_minimum = 3.65;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.50853;
    params.fasol_cubic_poly_close_start = 3.01662;
    params.fasol_cubic_poly_close_end = 3.40588;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.08613, -2.19289, 0.817834, -0.100414);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.64189, -1.72207, 0.639671, -0.0782866);
  }
  {  // 8 18
    EtableParamsOnePair<float> &params = analytic_parameters[164];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -347.587;
    params.lj_r12_coeff = 126696;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -696.065;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
  }
  {  // 8 19
    EtableParamsOnePair<float> &params = analytic_parameters[165];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.43212;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.68735, -3.66368, 1.26497, -0.14492);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(3.97114, -3.93887, 1.35664, -0.155087);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.01535, 0.794416, -0.180193, 0.0126657);
  }
  {  // 8 20
    EtableParamsOnePair<float> &params = analytic_parameters[166];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1016.1;
    params.lj_r12_coeff = 1.41284e+06;
    params.lj_switch_intercept = 1036.23;
    params.lj_switch_slope = -426.727;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.50853;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.2159, -2.20194, 0.760333, -0.087113);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.46311, -2.44309, 0.84146, -0.0961935);
  }
  {  // 8 21
    EtableParamsOnePair<float> &params = analytic_parameters[167];
    params.ljrep_linear_ramp_d2_cutoff = 3.9204;
    params.lj_r6_coeff = -503.039;
    params.lj_r12_coeff = 324830;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -516.939;
    params.lj_minimum = 3.3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.10831;
    params.fasol_cubic_poly_close_start = 2.67395;
    params.fasol_cubic_poly_close_end = 3.10644;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.51258, -1.72655, 0.728258, -0.101077);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.05283, -1.19695, 0.501576, -0.0692504);
  }
  {  // 8 22
    EtableParamsOnePair<float> &params = analytic_parameters[168];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.57122;
    params.lk_coeff2 = 2.7092;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(12.3807, -11.7081, 3.81033, -0.412144);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.20304, 2.42075, -0.539995, 0.0375851);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(6.99483, -6.62031, 2.15359, -0.232851);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.49089, 1.16648, -0.264587, 0.0185978);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.64064, -5.31521, 1.72432, -0.185979);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.73675, 1.26793, -0.277913, 0.0191392);
  }
  {  // 8 23
    EtableParamsOnePair<float> &params = analytic_parameters[169];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.57122;
    params.lk_coeff2 = 2.7092;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(12.3807, -11.7081, 3.81033, -0.412144);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.20304, 2.42075, -0.539995, 0.0375851);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(6.99483, -6.62031, 2.15359, -0.232851);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.49089, 1.16648, -0.264587, 0.0185978);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.64064, -5.31521, 1.72432, -0.185979);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.73675, 1.26793, -0.277913, 0.0191392);
  }
  {  // 8 24
    EtableParamsOnePair<float> &params = analytic_parameters[170];
    params.hydrogen_interaction = 1;
    params.maxd2 = 3.05;
    params.ljrep_linear_ramp_d2_cutoff = 1.1025;
    params.lj_r6_coeff = -6.27186;
    params.lj_r12_coeff = 90.073;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -546.468;
    params.lj_minimum = 1.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1;
  }
  {  // 8 25
    EtableParamsOnePair<float> &params = analytic_parameters[171];
    params.hydrogen_interaction = 1;
    params.maxd2 = 8.7;
    params.ljrep_linear_ramp_d2_cutoff = 3.1329;
    params.lj_r6_coeff = -143.913;
    params.lj_r12_coeff = 47424.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -324.176;
    params.lj_minimum = 2.95;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.2;
  }
  {  // 9 9
    EtableParamsOnePair<float> &params = analytic_parameters[172];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.24125;
    params.lk_coeff2 = 2.24125;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.04387, -4.44733, 1.7705, -0.23125);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.85377, 1.45439, -0.330314, 0.0232351);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.10354, -2.30537, 0.912472, -0.118642);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.10354, -2.30537, 0.912472, -0.118642);
  }
  {  // 9 10
    EtableParamsOnePair<float> &params = analytic_parameters[173];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.24125;
    params.lk_coeff2 = 3.35229;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.84536, -5.26784, 2.09754, -0.274004);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.88076, 3.95643, -0.828745, 0.0554493);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.10354, -2.30537, 0.912472, -0.118642);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.93487, -3.15577, 1.24946, -0.162499);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.96463, 3.23521, -0.664684, 0.0438981);
  }
  {  // 9 11
    EtableParamsOnePair<float> &params = analytic_parameters[174];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.24125;
    params.lk_coeff2 = 1.67615;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.43365, -3.74575, 1.49139, -0.194815);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.40382, 2.34181, -0.496951, 0.0335334);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.10354, -2.30537, 0.912472, -0.118642);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.46743, -1.57788, 0.624732, -0.0812496);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.48231, 1.6176, -0.332342, 0.0219491);
  }
  {  // 9 12
    EtableParamsOnePair<float> &params = analytic_parameters[175];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
  }
  {  // 9 13
    EtableParamsOnePair<float> &params = analytic_parameters[176];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -120.326;
    params.lj_r12_coeff = 18585.2;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -656.114;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.1612;
    params.lk_coeff2 = 1.92517;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.05695, -1.13556, 0.903198, -0.207845);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.5088, 1.20902, -0.277274, 0.0196135);
  }
  {  // 9 14
    EtableParamsOnePair<float> &params = analytic_parameters[177];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.1612;
    params.lk_coeff2 = 1.68094;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.47246, -3.01648, 1.48851, -0.239517);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.43078, 1.1446, -0.262302, 0.0185465);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.47702, -1.79477, 0.876094, -0.139831);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.10945, -1.35758, 0.666201, -0.106755);
  }
  {  // 9 15
    EtableParamsOnePair<float> &params = analytic_parameters[178];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -326.227;
    params.lj_r12_coeff = 118910;
    params.lj_switch_intercept = 1269.12;
    params.lj_switch_slope = -653.29;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.1612;
    params.lk_coeff2 = 1.67615;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.40292, -2.89544, 1.43114, -0.230569);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.24134, 2.23652, -0.475397, 0.0321133);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.47702, -1.79477, 0.876094, -0.139831);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.0368, -1.23283, 0.607363, -0.0976132);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.35294, 1.53829, -0.316686, 0.0209439);
  }
  {  // 9 16
    EtableParamsOnePair<float> &params = analytic_parameters[179];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.1612;
    params.lk_coeff2 = 1.14936;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.13762, -2.60624, 1.28538, -0.20675);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.26096, 1.00439, -0.229715, 0.0162241);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.47702, -1.79477, 0.876094, -0.139831);
  }
  {  // 9 17
    EtableParamsOnePair<float> &params = analytic_parameters[180];
    params.ljrep_linear_ramp_d2_cutoff = 4.7961;
    params.lj_r6_coeff = -923.635;
    params.lj_r12_coeff = 1.09201e+06;
    params.lj_switch_intercept = 1107.78;
    params.lj_switch_slope = -468.689;
    params.lj_minimum = 3.65;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.94164;
    params.lk_coeff2 = 1.17809;
    params.fasol_cubic_poly_close_start = 3.01662;
    params.fasol_cubic_poly_close_end = 3.40588;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.36696, -4.58947, 1.71137, -0.210096);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.7961, 1.39554, -0.315506, 0.0221346);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(3.20168, -3.35803, 1.24736, -0.152659);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.22806, 0.960842, -0.217942, 0.0153191);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.32259, -1.38193, 0.511917, -0.0625125);
  }
  {  // 9 18
    EtableParamsOnePair<float> &params = analytic_parameters[181];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.4367;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.09045, -2.29901, 0.915246, -0.119543);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.34842, -1.4778, 0.584918, -0.0760524);
  }
  {  // 9 19
    EtableParamsOnePair<float> &params = analytic_parameters[182];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 4.74264;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(7.0787, -7.03368, 2.42863, -0.278244);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.80393, 1.42104, -0.323354, 0.0227704);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(7.74372, -7.68079, 2.64545, -0.302421);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.97993, 1.54911, -0.351376, 0.0246982);
  }
  {  // 9 20
    EtableParamsOnePair<float> &params = analytic_parameters[183];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1016.1;
    params.lj_r12_coeff = 1.41284e+06;
    params.lj_switch_intercept = 1036.23;
    params.lj_switch_slope = -426.727;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.94164;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.20936, -4.1833, 1.4446, -0.165521);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.05911, 0.836691, -0.190638, 0.0134349);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(4.80306, -4.76403, 1.64085, -0.187577);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.22806, 0.960842, -0.217942, 0.0153191);
  }
  {  // 9 21
    EtableParamsOnePair<float> &params = analytic_parameters[184];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.1612;
    params.lk_coeff2 = 1.4367;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.31861, -2.82799, 1.39518, -0.224462);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.35275, 1.08018, -0.24733, 0.0174794);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.47702, -1.79477, 0.876094, -0.139831);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.948249, -1.16032, 0.569402, -0.0912438);
  }
  {  // 9 22
    EtableParamsOnePair<float> &params = analytic_parameters[185];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 6.96388;
    params.lk_coeff2 = 6.89615;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(27.4376, -25.9391, 8.44006, -0.912757);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-7.27377, 5.47194, -1.21783, 0.0846485);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(13.6399, -12.9096, 4.1995, -0.454059);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.90724, 2.27465, -0.515945, 0.0362657);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(14.358, -13.5296, 4.38918, -0.473401);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.42082, 3.22745, -0.707415, 0.0487179);
  }
  {  // 9 23
    EtableParamsOnePair<float> &params = analytic_parameters[186];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 6.96388;
    params.lk_coeff2 = 6.89615;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(27.4376, -25.9391, 8.44006, -0.912757);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-7.27377, 5.47194, -1.21783, 0.0846485);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(13.6399, -12.9096, 4.1995, -0.454059);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.90724, 2.27465, -0.515945, 0.0362657);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(14.358, -13.5296, 4.38918, -0.473401);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.42082, 3.22745, -0.707415, 0.0487179);
  }
  {  // 9 24
    EtableParamsOnePair<float> &params = analytic_parameters[187];
    params.hydrogen_interaction = 1;
    params.maxd2 = 7.55;
    params.ljrep_linear_ramp_d2_cutoff = 2.7225;
    params.lj_r6_coeff = -94.4418;
    params.lj_r12_coeff = 20423.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -347.752;
    params.lj_minimum = 2.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1;
  }
  {  // 9 25
    EtableParamsOnePair<float> &params = analytic_parameters[188];
    params.hydrogen_interaction = 1;
    params.maxd2 = 8.7;
    params.ljrep_linear_ramp_d2_cutoff = 3.1329;
    params.lj_r6_coeff = -143.913;
    params.lj_r12_coeff = 47424.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -324.176;
    params.lj_minimum = 2.95;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.2;
  }
  {  // 10 10
    EtableParamsOnePair<float> &params = analytic_parameters[189];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.35229;
    params.lk_coeff2 = 3.35229;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.64684, -6.08835, 2.42457, -0.316758);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-9.90775, 6.45847, -1.32718, 0.0876634);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.93487, -3.15577, 1.24946, -0.162499);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-4.96463, 3.23521, -0.664684, 0.0438981);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.93487, -3.15577, 1.24946, -0.162499);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.96463, 3.23521, -0.664684, 0.0438981);
  }
  {  // 10 11
    EtableParamsOnePair<float> &params = analytic_parameters[190];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.35229;
    params.lk_coeff2 = 1.67615;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.23513, -4.56626, 1.81843, -0.237569);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-7.43081, 4.84385, -0.995382, 0.0657476);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.93487, -3.15577, 1.24946, -0.162499);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-4.96463, 3.23521, -0.664684, 0.0438981);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.46743, -1.57788, 0.624732, -0.0812496);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.48231, 1.6176, -0.332342, 0.0219491);
  }
  {  // 10 12
    EtableParamsOnePair<float> &params = analytic_parameters[191];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
  }
  {  // 10 13
    EtableParamsOnePair<float> &params = analytic_parameters[192];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -120.326;
    params.lj_r12_coeff = 18585.2;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -656.114;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.23257;
    params.lk_coeff2 = 1.92517;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.23535, -1.2472, 1.03682, -0.243411);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.39197, 3.6217, -0.757903, 0.0506772);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-4.78732, 3.11966, -0.640945, 0.0423303);
  }
  {  // 10 14
    EtableParamsOnePair<float> &params = analytic_parameters[193];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.23257;
    params.lk_coeff2 = 1.68094;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.98432, -3.57973, 1.7756, -0.286806);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.31394, 3.55728, -0.742931, 0.0496102);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.01636, -2.39076, 1.17614, -0.188823);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-4.78732, 3.11966, -0.640945, 0.0423303);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.10945, -1.35758, 0.666201, -0.106755);
  }
  {  // 10 15
    EtableParamsOnePair<float> &params = analytic_parameters[194];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -326.227;
    params.lj_r12_coeff = 118910;
    params.lj_switch_intercept = 1269.12;
    params.lj_switch_slope = -653.29;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.23257;
    params.lk_coeff2 = 1.67615;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.91478, -3.45869, 1.71823, -0.277857);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-7.1245, 4.64921, -0.956027, 0.063177);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.01636, -2.39076, 1.17614, -0.188823);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-4.78732, 3.11966, -0.640945, 0.0423303);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.0368, -1.23283, 0.607363, -0.0976132);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.35294, 1.53829, -0.316686, 0.0209439);
  }
  {  // 10 16
    EtableParamsOnePair<float> &params = analytic_parameters[195];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.23257;
    params.lk_coeff2 = 1.14936;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.64948, -3.16949, 1.57247, -0.254038);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.14413, 3.41707, -0.710345, 0.0472877);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.01636, -2.39076, 1.17614, -0.188823);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-4.78732, 3.11966, -0.640945, 0.0423303);
  }
  {  // 10 17
    EtableParamsOnePair<float> &params = analytic_parameters[196];
    params.ljrep_linear_ramp_d2_cutoff = 4.7961;
    params.lj_r6_coeff = -923.635;
    params.lj_r12_coeff = 1.09201e+06;
    params.lj_switch_intercept = 1107.78;
    params.lj_switch_slope = -468.689;
    params.lj_minimum = 3.65;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 4.39988;
    params.lk_coeff2 = 1.17809;
    params.fasol_cubic_poly_close_start = 3.01662;
    params.fasol_cubic_poly_close_end = 3.40588;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.63622, -5.84331, 2.17685, -0.267038);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-7.08152, 4.67947, -0.969697, 0.0644157);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(4.51, -4.64923, 1.72474, -0.210862);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-6.51607, 4.24621, -0.872397, 0.0576163);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.32259, -1.38193, 0.511917, -0.0625125);
  }
  {  // 10 18
    EtableParamsOnePair<float> &params = analytic_parameters[197];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.31697;
    params.lk_coeff2 = 1.4367;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.40531, -2.62135, 1.04372, -0.136339);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.54032, 1.73478, -0.366565, 0.0246667);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.15298, -1.23977, 0.490861, -0.063839);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.95039, 1.27097, -0.261126, 0.0172457);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.34842, -1.4778, 0.584918, -0.0760524);
  }
  {  // 10 19
    EtableParamsOnePair<float> &params = analytic_parameters[198];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 7.09369;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(10.1542, -9.96338, 3.43555, -0.393138);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-10.3253, 6.71554, -1.37807, 0.0909379);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(10.882, -10.6688, 3.67044, -0.419178);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-10.5055, 6.84593, -1.40652, 0.0928915);
  }
  {  // 10 20
    EtableParamsOnePair<float> &params = analytic_parameters[199];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1016.1;
    params.lj_r12_coeff = 1.41284e+06;
    params.lj_switch_intercept = 1036.23;
    params.lj_switch_slope = -426.727;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 4.39988;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(6.11698, -6.00045, 2.06914, -0.236784);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-6.34453, 4.12062, -0.844829, 0.055716);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(6.74957, -6.61738, 2.2766, -0.259997);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-6.51607, 4.24621, -0.872397, 0.0576163);
  }
  {  // 10 21
    EtableParamsOnePair<float> &params = analytic_parameters[200];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.23257;
    params.lk_coeff2 = 1.4367;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.83047, -3.39124, 1.68227, -0.271751);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.23592, 3.49286, -0.727959, 0.0485431);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.01636, -2.39076, 1.17614, -0.188823);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-4.78732, 3.11966, -0.640945, 0.0423303);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.948249, -1.16032, 0.569402, -0.0912438);
  }
  {  // 10 22
    EtableParamsOnePair<float> &params = analytic_parameters[201];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 10.4161;
    params.lk_coeff2 = 6.89615;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close_flat = 1.29267;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(33.0133, -31.041, 10.0934, -1.0909);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-19.7862, 13.2461, -2.76653, 0.184743);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(19.3067, -18.0927, 5.87696, -0.634593);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-15.4258, 10.0523, -2.06527, 0.136398);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(14.358, -13.5296, 4.38918, -0.473401);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.42082, 3.22745, -0.707415, 0.0487179);
  }
  {  // 10 23
    EtableParamsOnePair<float> &params = analytic_parameters[202];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 10.4161;
    params.lk_coeff2 = 6.89615;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close_flat = 1.29267;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(33.0133, -31.041, 10.0934, -1.0909);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-19.7862, 13.2461, -2.76653, 0.184743);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(19.3067, -18.0927, 5.87696, -0.634593);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-15.4258, 10.0523, -2.06527, 0.136398);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(14.358, -13.5296, 4.38918, -0.473401);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.42082, 3.22745, -0.707415, 0.0487179);
  }
  {  // 10 24
    EtableParamsOnePair<float> &params = analytic_parameters[203];
    params.hydrogen_interaction = 1;
    params.maxd2 = 7.55;
    params.ljrep_linear_ramp_d2_cutoff = 2.7225;
    params.lj_r6_coeff = -94.4418;
    params.lj_r12_coeff = 20423.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -347.752;
    params.lj_minimum = 2.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1;
  }
  {  // 10 25
    EtableParamsOnePair<float> &params = analytic_parameters[204];
    params.hydrogen_interaction = 1;
    params.maxd2 = 8.7;
    params.ljrep_linear_ramp_d2_cutoff = 3.1329;
    params.lj_r6_coeff = -143.913;
    params.lj_r12_coeff = 47424.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -324.176;
    params.lj_minimum = 2.95;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.2;
  }
  {  // 11 11
    EtableParamsOnePair<float> &params = analytic_parameters[205];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.67615;
    params.lk_coeff2 = 1.67615;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.82342, -3.04418, 1.21229, -0.158379);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-4.95387, 3.22923, -0.663588, 0.0438317);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.46743, -1.57788, 0.624732, -0.0812496);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.48231, 1.6176, -0.332342, 0.0219491);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.46743, -1.57788, 0.624732, -0.0812496);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.48231, 1.6176, -0.332342, 0.0219491);
  }
  {  // 11 12
    EtableParamsOnePair<float> &params = analytic_parameters[206];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
  }
  {  // 11 13
    EtableParamsOnePair<float> &params = analytic_parameters[207];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -120.326;
    params.lj_r12_coeff = 18585.2;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -656.114;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.61628;
    params.lk_coeff2 = 1.92517;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.00349, 2.06475, -0.437959, 0.0295441);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.39366, 1.55983, -0.320472, 0.0211652);
  }
  {  // 11 14
    EtableParamsOnePair<float> &params = analytic_parameters[208];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.61628;
    params.lk_coeff2 = 1.68094;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.02157, -2.43848, 1.20896, -0.195211);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.92547, 2.00033, -0.422987, 0.028477);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.00818, -1.19538, 0.588071, -0.0944115);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.39366, 1.55983, -0.320472, 0.0211652);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.10945, -1.35758, 0.666201, -0.106755);
  }
  {  // 11 15
    EtableParamsOnePair<float> &params = analytic_parameters[209];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -326.227;
    params.lj_r12_coeff = 118910;
    params.lj_switch_intercept = 1269.12;
    params.lj_switch_slope = -653.29;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.61628;
    params.lk_coeff2 = 1.67615;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.95203, -2.31744, 1.15159, -0.186262);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-4.73603, 3.09225, -0.636082, 0.0420438);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.00818, -1.19538, 0.588071, -0.0944115);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.39366, 1.55983, -0.320472, 0.0211652);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.0368, -1.23283, 0.607363, -0.0976132);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.35294, 1.53829, -0.316686, 0.0209439);
  }
  {  // 11 16
    EtableParamsOnePair<float> &params = analytic_parameters[210];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.61628;
    params.lk_coeff2 = 1.14936;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.68673, -2.02824, 1.00583, -0.162444);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.75565, 1.86012, -0.390401, 0.0261546);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.00818, -1.19538, 0.588071, -0.0944115);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.39366, 1.55983, -0.320472, 0.0211652);
  }
  {  // 11 17
    EtableParamsOnePair<float> &params = analytic_parameters[211];
    params.ljrep_linear_ramp_d2_cutoff = 4.7961;
    params.lj_r6_coeff = -923.635;
    params.lj_r12_coeff = 1.09201e+06;
    params.lj_switch_intercept = 1107.78;
    params.lj_switch_slope = -468.689;
    params.lj_minimum = 3.65;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.19994;
    params.lk_coeff2 = 1.17809;
    params.fasol_cubic_poly_close_start = 3.01662;
    params.fasol_cubic_poly_close_end = 3.40588;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.45721, -3.59138, 1.33762, -0.164059);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.83054, 2.56029, -0.534217, 0.0356511);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.255, -2.32462, 0.862369, -0.105431);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-3.25804, 2.12311, -0.436199, 0.0288081);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.32259, -1.38193, 0.511917, -0.0625125);
  }
  {  // 11 18
    EtableParamsOnePair<float> &params = analytic_parameters[212];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.4367;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.85071, -2.02339, 0.805597, -0.105229);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.56724, 1.10046, -0.236218, 0.0160569);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.34842, -1.4778, 0.584918, -0.0760524);
  }
  {  // 11 19
    EtableParamsOnePair<float> &params = analytic_parameters[213];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.54685;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.83851, -4.74553, 1.63645, -0.187272);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.08395, 3.29889, -0.675969, 0.0445624);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(5.44098, -5.33442, 1.83522, -0.209589);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-5.25275, 3.42297, -0.703259, 0.0464458);
  }
  {  // 11 20
    EtableParamsOnePair<float> &params = analytic_parameters[214];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1016.1;
    params.lj_r12_coeff = 1.41284e+06;
    params.lj_switch_intercept = 1036.23;
    params.lj_switch_slope = -426.727;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.19994;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.81988, -2.76406, 0.953239, -0.109095);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.09355, 2.00143, -0.409349, 0.0269514);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(3.37478, -3.30869, 1.1383, -0.129998);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-3.25804, 2.12311, -0.436199, 0.0288081);
  }
  {  // 11 21
    EtableParamsOnePair<float> &params = analytic_parameters[215];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.61628;
    params.lk_coeff2 = 1.4367;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.86772, -2.25, 1.11563, -0.180156);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.84744, 1.93591, -0.408015, 0.0274099);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.00818, -1.19538, 0.588071, -0.0944115);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.39366, 1.55983, -0.320472, 0.0211652);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.948249, -1.16032, 0.569402, -0.0912438);
  }
  {  // 11 22
    EtableParamsOnePair<float> &params = analytic_parameters[216];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 5.20803;
    params.lk_coeff2 = 6.89615;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(23.5499, -22.1641, 7.20527, -0.77859);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-12.09, 8.22929, -1.7356, 0.116647);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(9.65333, -9.04636, 2.93848, -0.317297);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-7.7129, 5.02613, -1.03263, 0.0681988);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(14.358, -13.5296, 4.38918, -0.473401);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.42082, 3.22745, -0.707415, 0.0487179);
  }
  {  // 11 23
    EtableParamsOnePair<float> &params = analytic_parameters[217];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 5.20803;
    params.lk_coeff2 = 6.89615;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(23.5499, -22.1641, 7.20527, -0.77859);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-12.09, 8.22929, -1.7356, 0.116647);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(9.65333, -9.04636, 2.93848, -0.317297);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-7.7129, 5.02613, -1.03263, 0.0681988);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(14.358, -13.5296, 4.38918, -0.473401);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.42082, 3.22745, -0.707415, 0.0487179);
  }
  {  // 11 24
    EtableParamsOnePair<float> &params = analytic_parameters[218];
    params.hydrogen_interaction = 1;
    params.maxd2 = 7.55;
    params.ljrep_linear_ramp_d2_cutoff = 2.7225;
    params.lj_r6_coeff = -94.4418;
    params.lj_r12_coeff = 20423.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -347.752;
    params.lj_minimum = 2.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1;
  }
  {  // 11 25
    EtableParamsOnePair<float> &params = analytic_parameters[219];
    params.hydrogen_interaction = 1;
    params.maxd2 = 8.7;
    params.ljrep_linear_ramp_d2_cutoff = 3.1329;
    params.lj_r6_coeff = -143.913;
    params.lj_r12_coeff = 47424.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -324.176;
    params.lj_minimum = 2.95;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.2;
  }
  {  // 12 12
    EtableParamsOnePair<float> &params = analytic_parameters[220];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
  }
  {  // 12 13
    EtableParamsOnePair<float> &params = analytic_parameters[221];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -120.326;
    params.lj_r12_coeff = 18585.2;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -656.114;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
  }
  {  // 12 14
    EtableParamsOnePair<float> &params = analytic_parameters[222];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
  }
  {  // 12 15
    EtableParamsOnePair<float> &params = analytic_parameters[223];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -326.227;
    params.lj_r12_coeff = 118910;
    params.lj_switch_intercept = 1269.12;
    params.lj_switch_slope = -653.29;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
  }
  {  // 12 16
    EtableParamsOnePair<float> &params = analytic_parameters[224];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
  }
  {  // 12 17
    EtableParamsOnePair<float> &params = analytic_parameters[225];
    params.ljrep_linear_ramp_d2_cutoff = 4.7961;
    params.lj_r6_coeff = -923.635;
    params.lj_r12_coeff = 1.09201e+06;
    params.lj_switch_intercept = 1107.78;
    params.lj_switch_slope = -468.689;
    params.lj_minimum = 3.65;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.01662;
    params.fasol_cubic_poly_close_end = 3.40588;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.9;
  }
  {  // 12 18
    EtableParamsOnePair<float> &params = analytic_parameters[226];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
  }
  {  // 12 19
    EtableParamsOnePair<float> &params = analytic_parameters[227];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.5015, -1.49158, 0.514937, -0.0589869);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.53882, -1.52631, 0.525698, -0.0600964);
  }
  {  // 12 20
    EtableParamsOnePair<float> &params = analytic_parameters[228];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1016.1;
    params.lj_r12_coeff = 1.41284e+06;
    params.lj_switch_intercept = 1036.23;
    params.lj_switch_slope = -426.727;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
  }
  {  // 12 21
    EtableParamsOnePair<float> &params = analytic_parameters[229];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
  }
  {  // 12 22
    EtableParamsOnePair<float> &params = analytic_parameters[230];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.38385;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.6531, -2.51414, 0.819292, -0.0887236);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.7105, -2.56537, 0.834515, -0.0902296);
  }
  {  // 12 23
    EtableParamsOnePair<float> &params = analytic_parameters[231];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.38385;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.6531, -2.51414, 0.819292, -0.0887236);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.7105, -2.56537, 0.834515, -0.0902296);
  }
  {  // 12 24
    EtableParamsOnePair<float> &params = analytic_parameters[232];
    params.hydrogen_interaction = 1;
    params.maxd2 = 7.55;
    params.ljrep_linear_ramp_d2_cutoff = 2.7225;
    params.lj_r6_coeff = -94.4418;
    params.lj_r12_coeff = 20423.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -347.752;
    params.lj_minimum = 2.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1;
  }
  {  // 12 25
    EtableParamsOnePair<float> &params = analytic_parameters[233];
    params.hydrogen_interaction = 1;
    params.maxd2 = 8.7;
    params.ljrep_linear_ramp_d2_cutoff = 3.1329;
    params.lj_r6_coeff = -143.913;
    params.lj_r12_coeff = 47424.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -324.176;
    params.lj_minimum = 2.95;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.2;
  }
  {  // 13 13
    EtableParamsOnePair<float> &params = analytic_parameters[234];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -98.297;
    params.lj_r12_coeff = 15182.7;
    params.lj_switch_intercept = 902.423;
    params.lj_switch_slope = -535.996;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.85642;
    params.lk_coeff2 = 1.85642;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.18611, 0.979328, -0.2276, 0.016221);
  }
  {  // 13 14
    EtableParamsOnePair<float> &params = analytic_parameters[235];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -98.297;
    params.lj_r12_coeff = 15182.7;
    params.lj_switch_intercept = 902.423;
    params.lj_switch_slope = -535.996;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.85642;
    params.lk_coeff2 = 1.6209;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.11087, 0.917206, -0.213163, 0.0151921);
  }
  {  // 13 15
    EtableParamsOnePair<float> &params = analytic_parameters[236];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -112.931;
    params.lj_r12_coeff = 17443.1;
    params.lj_switch_intercept = 1036.78;
    params.lj_switch_slope = -615.795;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.85642;
    params.lk_coeff2 = 1.61628;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.85677, 1.97013, -0.418647, 0.0282744);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.26891, 1.48336, -0.305376, 0.0201959);
  }
  {  // 13 16
    EtableParamsOnePair<float> &params = analytic_parameters[237];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -98.297;
    params.lj_r12_coeff = 15182.7;
    params.lj_switch_intercept = 902.423;
    params.lj_switch_slope = -535.996;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.85642;
    params.lk_coeff2 = 1.10831;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
  }
  {  // 13 17
    EtableParamsOnePair<float> &params = analytic_parameters[238];
    params.ljrep_linear_ramp_d2_cutoff = 4.2849;
    params.lj_r6_coeff = -538.071;
    params.lj_r12_coeff = 453653;
    params.lj_switch_intercept = 904.972;
    params.lj_switch_slope = -405.08;
    params.lj_minimum = 3.45;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.52679;
    params.lk_coeff2 = 1.13602;
    params.fasol_cubic_poly_close_start = 2.81957;
    params.fasol_cubic_poly_close_end = 3.23265;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.94488, -4.31286, 1.695, -0.219936);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.36608, 1.09184, -0.250106, 0.0176799);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.7575, -3.01553, 1.18217, -0.153079);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.31904, -1.43146, 0.558276, -0.0719809);
  }
  {  // 13 18
    EtableParamsOnePair<float> &params = analytic_parameters[239];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -120.326;
    params.lj_r12_coeff = 18585.2;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -656.114;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.38539;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.75;
  }
  {  // 13 19
    EtableParamsOnePair<float> &params = analytic_parameters[240];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -352.009;
    params.lj_r12_coeff = 352284;
    params.lj_switch_intercept = 498.762;
    params.lj_switch_slope = -216.965;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 4.07381;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.57361, -4.85592, 1.82472, -0.226821);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.14962, 0.960996, -0.22453, 0.0160497);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(5.09081, -5.38997, 2.01731, -0.249917);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.31714, 1.08327, -0.251329, 0.0178951);
  }
  {  // 13 20
    EtableParamsOnePair<float> &params = analytic_parameters[241];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -597.447;
    params.lj_r12_coeff = 597915;
    params.lj_switch_intercept = 846.524;
    params.lj_switch_slope = -368.244;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.52679;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.6987, -2.86667, 1.07757, -0.133984);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(3.15759, -3.34315, 1.25125, -0.155012);
  }
  {  // 13 21
    EtableParamsOnePair<float> &params = analytic_parameters[242];
    params.ljrep_linear_ramp_d2_cutoff = 2.4336;
    params.lj_r6_coeff = -98.297;
    params.lj_r12_coeff = 15182.7;
    params.lj_switch_intercept = 902.423;
    params.lj_switch_slope = -535.996;
    params.lj_minimum = 2.6;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.85642;
    params.lk_coeff2 = 1.38539;
    params.fasol_cubic_poly_close_start = 1.97484;
    params.fasol_cubic_poly_close_end = 2.52982;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.03563, 0.855085, -0.198725, 0.0141631);
  }
  {  // 13 22
    EtableParamsOnePair<float> &params = analytic_parameters[243];
    params.ljrep_linear_ramp_d2_cutoff = 4.9284;
    params.lj_r6_coeff = -1565.5;
    params.lj_r12_coeff = 2.00832e+06;
    params.lj_switch_intercept = 1730.43;
    params.lj_switch_slope = -722.231;
    params.lj_minimum = 3.7;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 5.98179;
    params.lk_coeff2 = 6.64985;
    params.fasol_cubic_poly_close_start = 3.05778;
    params.fasol_cubic_poly_close_end = 3.44238;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close =
        CubicPolynomial(20.2328, -20.2991, 7.10022, -0.824337);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-6.14784, 4.67552, -1.04619, 0.0729511);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(9.32912, -9.39015, 3.28663, -0.381798);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.93403, 1.59063, -0.369039, 0.0262764);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(11.3843, -11.363, 3.95631, -0.457471);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.26293, 3.11218, -0.68215, 0.046978);
  }
  {  // 13 23
    EtableParamsOnePair<float> &params = analytic_parameters[244];
    params.ljrep_linear_ramp_d2_cutoff = 4.9284;
    params.lj_r6_coeff = -1565.5;
    params.lj_r12_coeff = 2.00832e+06;
    params.lj_switch_intercept = 1730.43;
    params.lj_switch_slope = -722.231;
    params.lj_minimum = 3.7;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 5.98179;
    params.lk_coeff2 = 6.64985;
    params.fasol_cubic_poly_close_start = 3.05778;
    params.fasol_cubic_poly_close_end = 3.44238;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close =
        CubicPolynomial(20.2328, -20.2991, 7.10022, -0.824337);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-6.14784, 4.67552, -1.04619, 0.0729511);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(9.32912, -9.39015, 3.28663, -0.381798);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.93403, 1.59063, -0.369039, 0.0262764);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(11.3843, -11.363, 3.95631, -0.457471);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.26293, 3.11218, -0.68215, 0.046978);
  }
  {  // 13 24
    EtableParamsOnePair<float> &params = analytic_parameters[245];
    params.hydrogen_interaction = 1;
    params.maxd2 = 3.05;
    params.ljrep_linear_ramp_d2_cutoff = 1.1025;
    params.lj_r6_coeff = -5.12364;
    params.lj_r12_coeff = 73.5829;
    params.lj_switch_intercept = 505.895;
    params.lj_switch_slope = -446.423;
    params.lj_minimum = 1.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1;
  }
  {  // 13 25
    EtableParamsOnePair<float> &params = analytic_parameters[246];
    params.hydrogen_interaction = 1;
    params.maxd2 = 7.55;
    params.ljrep_linear_ramp_d2_cutoff = 2.7225;
    params.lj_r6_coeff = -77.1518;
    params.lj_r12_coeff = 16684.5;
    params.lj_switch_intercept = 505.895;
    params.lj_switch_slope = -284.087;
    params.lj_minimum = 2.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.2;
  }
  {  // 14 14
    EtableParamsOnePair<float> &params = analytic_parameters[247];
    params.ljrep_linear_ramp_d2_cutoff = 3.4596;
    params.lj_r6_coeff = -282.404;
    params.lj_r12_coeff = 125317;
    params.lj_switch_intercept = 902.423;
    params.lj_switch_slope = -449.545;
    params.lj_minimum = 3.1;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.6209;
    params.lk_coeff2 = 1.6209;
    params.fasol_cubic_poly_close_start = 2.47992;
    params.fasol_cubic_poly_close_end = 2.94109;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.90913, -2.32536, 1.12844, -0.177319);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.03563, 0.855085, -0.198725, 0.0141631);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.00584, -1.22146, 0.586618, -0.0914942);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.00584, -1.22146, 0.586618, -0.0914942);
  }
  {  // 14 15
    EtableParamsOnePair<float> &params = analytic_parameters[248];
    params.ljrep_linear_ramp_d2_cutoff = 3.4596;
    params.lj_r6_coeff = -324.448;
    params.lj_r12_coeff = 143974;
    params.lj_switch_intercept = 1036.78;
    params.lj_switch_slope = -516.473;
    params.lj_minimum = 3.1;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.6209;
    params.lk_coeff2 = 1.61628;
    params.fasol_cubic_poly_close_start = 2.47992;
    params.fasol_cubic_poly_close_end = 2.94109;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.85256, -2.22205, 1.07999, -0.169893);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.78153, 1.90801, -0.40421, 0.0272454);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.00584, -1.22146, 0.586618, -0.0914942);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.945698, -1.11406, 0.536606, -0.0838709);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.26891, 1.48336, -0.305376, 0.0201959);
  }
  {  // 14 16
    EtableParamsOnePair<float> &params = analytic_parameters[249];
    params.ljrep_linear_ramp_d2_cutoff = 3.4596;
    params.lj_r6_coeff = -282.404;
    params.lj_r12_coeff = 125317;
    params.lj_switch_intercept = 902.423;
    params.lj_switch_slope = -449.545;
    params.lj_minimum = 3.1;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.6209;
    params.lk_coeff2 = 1.10831;
    params.fasol_cubic_poly_close_start = 2.47992;
    params.fasol_cubic_poly_close_end = 2.94109;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.60726, -1.95767, 0.950014, -0.149282);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.00584, -1.22146, 0.586618, -0.0914942);
  }
  {  // 14 17
    EtableParamsOnePair<float> &params = analytic_parameters[250];
    params.ljrep_linear_ramp_d2_cutoff = 4.2849;
    params.lj_r6_coeff = -538.071;
    params.lj_r12_coeff = 453653;
    params.lj_switch_intercept = 904.972;
    params.lj_switch_slope = -405.08;
    params.lj_minimum = 3.45;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.20623;
    params.lk_coeff2 = 1.13602;
    params.fasol_cubic_poly_close_start = 2.81957;
    params.fasol_cubic_poly_close_end = 3.23265;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.60671, -3.94218, 1.54905, -0.20097);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.26367, 1.00728, -0.230455, 0.0162794);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.40767, -2.63296, 1.0322, -0.133658);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.31904, -1.43146, 0.558276, -0.0719809);
  }
  {  // 14 18
    EtableParamsOnePair<float> &params = analytic_parameters[251];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.38539;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.32214, -1.6117, 0.79477, -0.127823);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.94681, -1.15049, 0.561599, -0.0896352);
  }
  {  // 14 19
    EtableParamsOnePair<float> &params = analytic_parameters[252];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -352.009;
    params.lj_r12_coeff = 352284;
    params.lj_switch_intercept = 498.762;
    params.lj_switch_slope = -216.965;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.55698;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.94724, -4.19135, 1.57511, -0.195806);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(4.44496, -4.70617, 1.76139, -0.218211);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.15004, 0.945841, -0.219444, 0.0156248);
  }
  {  // 14 20
    EtableParamsOnePair<float> &params = analytic_parameters[253];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -597.447;
    params.lj_r12_coeff = 597915;
    params.lj_switch_intercept = 846.524;
    params.lj_switch_slope = -368.244;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.20623;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.3102, -2.45448, 0.922751, -0.114747);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.757, -2.91901, 1.09251, -0.135346);
  }
  {  // 14 21
    EtableParamsOnePair<float> &params = analytic_parameters[254];
    params.ljrep_linear_ramp_d2_cutoff = 3.4596;
    params.lj_r6_coeff = -282.404;
    params.lj_r12_coeff = 125317;
    params.lj_switch_intercept = 902.423;
    params.lj_switch_slope = -449.545;
    params.lj_minimum = 3.1;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.6209;
    params.lk_coeff2 = 1.38539;
    params.fasol_cubic_poly_close_start = 2.47992;
    params.fasol_cubic_poly_close_end = 2.94109;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.77043, -2.15642, 1.04646, -0.164437);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.00584, -1.22146, 0.586618, -0.0914942);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.85969, -1.04398, 0.501383, -0.0782002);
  }
  {  // 14 22
    EtableParamsOnePair<float> &params = analytic_parameters[255];
    params.ljrep_linear_ramp_d2_cutoff = 4.9284;
    params.lj_r6_coeff = -1565.5;
    params.lj_r12_coeff = 2.00832e+06;
    params.lj_switch_intercept = 1730.43;
    params.lj_switch_slope = -722.231;
    params.lj_minimum = 3.7;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 5.22291;
    params.lk_coeff2 = 6.64985;
    params.fasol_cubic_poly_close_start = 3.05778;
    params.fasol_cubic_poly_close_end = 3.44238;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close =
        CubicPolynomial(19.0793, -19.1362, 6.69218, -0.776833);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.90541, 4.47535, -0.999666, 0.0696356);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(8.14557, -8.19886, 2.86967, -0.333361);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.68867, 1.38883, -0.322221, 0.0229428);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(11.3843, -11.363, 3.95631, -0.457471);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.26293, 3.11218, -0.68215, 0.046978);
  }
  {  // 14 23
    EtableParamsOnePair<float> &params = analytic_parameters[256];
    params.ljrep_linear_ramp_d2_cutoff = 4.9284;
    params.lj_r6_coeff = -1565.5;
    params.lj_r12_coeff = 2.00832e+06;
    params.lj_switch_intercept = 1730.43;
    params.lj_switch_slope = -722.231;
    params.lj_minimum = 3.7;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 5.22291;
    params.lk_coeff2 = 6.64985;
    params.fasol_cubic_poly_close_start = 3.05778;
    params.fasol_cubic_poly_close_end = 3.44238;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close =
        CubicPolynomial(19.0793, -19.1362, 6.69218, -0.776833);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.90541, 4.47535, -0.999666, 0.0696356);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(8.14557, -8.19886, 2.86967, -0.333361);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.68867, 1.38883, -0.322221, 0.0229428);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(11.3843, -11.363, 3.95631, -0.457471);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.26293, 3.11218, -0.68215, 0.046978);
  }
  {  // 14 24
    EtableParamsOnePair<float> &params = analytic_parameters[257];
    params.hydrogen_interaction = 1;
    params.maxd2 = 3.05;
    params.ljrep_linear_ramp_d2_cutoff = 1.1025;
    params.lj_r6_coeff = -5.12364;
    params.lj_r12_coeff = 73.5829;
    params.lj_switch_intercept = 505.895;
    params.lj_switch_slope = -446.423;
    params.lj_minimum = 1.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1;
  }
  {  // 14 25
    EtableParamsOnePair<float> &params = analytic_parameters[258];
    params.hydrogen_interaction = 1;
    params.maxd2 = 7.55;
    params.ljrep_linear_ramp_d2_cutoff = 2.7225;
    params.lj_r6_coeff = -77.1518;
    params.lj_r12_coeff = 16684.5;
    params.lj_switch_intercept = 505.895;
    params.lj_switch_slope = -284.087;
    params.lj_minimum = 2.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.2;
  }
  {  // 15 15
    EtableParamsOnePair<float> &params = analytic_parameters[259];
    params.ljrep_linear_ramp_d2_cutoff = 3.4596;
    params.lj_r6_coeff = -372.752;
    params.lj_r12_coeff = 165409;
    params.lj_switch_intercept = 1191.13;
    params.lj_switch_slope = -593.365;
    params.lj_minimum = 3.1;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.61628;
    params.lk_coeff2 = 1.61628;
    params.fasol_cubic_poly_close_start = 2.47992;
    params.fasol_cubic_poly_close_end = 2.94109;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.79599, -2.11874, 1.03154, -0.162467);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-4.52743, 2.96094, -0.609695, 0.0403277);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(0.945698, -1.11406, 0.536606, -0.0838709);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.26891, 1.48336, -0.305376, 0.0201959);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.945698, -1.11406, 0.536606, -0.0838709);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-2.26891, 1.48336, -0.305376, 0.0201959);
  }
  {  // 15 16
    EtableParamsOnePair<float> &params = analytic_parameters[260];
    params.ljrep_linear_ramp_d2_cutoff = 3.4596;
    params.lj_r6_coeff = -324.448;
    params.lj_r12_coeff = 143974;
    params.lj_switch_intercept = 1036.78;
    params.lj_switch_slope = -516.473;
    params.lj_minimum = 3.1;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.61628;
    params.lk_coeff2 = 1.10831;
    params.fasol_cubic_poly_close_start = 2.47992;
    params.fasol_cubic_poly_close_end = 2.94109;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.55069, -1.85437, 0.901561, -0.141855);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.61778, 1.77281, -0.372788, 0.025006);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(0.945698, -1.11406, 0.536606, -0.0838709);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.26891, 1.48336, -0.305376, 0.0201959);
  }
  {  // 15 17
    EtableParamsOnePair<float> &params = analytic_parameters[261];
    params.ljrep_linear_ramp_d2_cutoff = 4.2849;
    params.lj_r6_coeff = -618.179;
    params.lj_r12_coeff = 521193;
    params.lj_switch_intercept = 1039.7;
    params.lj_switch_slope = -465.388;
    params.lj_minimum = 3.45;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.19994;
    params.lk_coeff2 = 1.13602;
    params.fasol_cubic_poly_close_start = 2.81957;
    params.fasol_cubic_poly_close_end = 3.23265;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.50068, -3.78014, 1.48358, -0.192284);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.64003, 2.44043, -0.510142, 0.0340859);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.29389, -2.46303, 0.96405, -0.124671);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-3.08823, 2.01901, -0.415651, 0.0274889);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.31904, -1.43146, 0.558276, -0.0719809);
  }
  {  // 15 18
    EtableParamsOnePair<float> &params = analytic_parameters[262];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -326.227;
    params.lj_r12_coeff = 118910;
    params.lj_switch_intercept = 1269.12;
    params.lj_switch_slope = -653.29;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.38539;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.29482, -1.56415, 0.772233, -0.124307);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.49519, 1.05266, -0.226286, 0.0153961);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.94681, -1.15049, 0.561599, -0.0896352);
  }
  {  // 15 19
    EtableParamsOnePair<float> &params = analytic_parameters[263];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -404.416;
    params.lj_r12_coeff = 404732;
    params.lj_switch_intercept = 573.017;
    params.lj_switch_slope = -249.267;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.54685;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.76958, -3.92967, 1.47321, -0.182767);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-4.81579, 3.13527, -0.643773, 0.0425001);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(4.25336, -4.43073, 1.65496, -0.204678);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-4.97899, 3.25514, -0.670131, 0.0443188);
  }
  {  // 15 20
    EtableParamsOnePair<float> &params = analytic_parameters[264];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -686.394;
    params.lj_r12_coeff = 686932;
    params.lj_switch_intercept = 972.554;
    params.lj_switch_slope = -423.068;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.19994;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.2, -2.29217, 0.859546, -0.106659);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.92936, 1.90154, -0.389733, 0.0256969);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.63816, -2.74817, 1.0265, -0.126952);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-3.08823, 2.01901, -0.415651, 0.0274889);
  }
  {  // 15 21
    EtableParamsOnePair<float> &params = analytic_parameters[265];
    params.ljrep_linear_ramp_d2_cutoff = 3.4596;
    params.lj_r6_coeff = -324.448;
    params.lj_r12_coeff = 143974;
    params.lj_switch_intercept = 1036.78;
    params.lj_switch_slope = -516.473;
    params.lj_minimum = 3.1;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.61628;
    params.lk_coeff2 = 1.38539;
    params.fasol_cubic_poly_close_start = 2.47992;
    params.fasol_cubic_poly_close_end = 2.94109;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.71386, -2.05311, 0.998009, -0.157011);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-2.70629, 1.84589, -0.389773, 0.0262165);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(0.945698, -1.11406, 0.536606, -0.0838709);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-2.26891, 1.48336, -0.305376, 0.0201959);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.85969, -1.04398, 0.501383, -0.0782002);
  }
  {  // 15 22
    EtableParamsOnePair<float> &params = analytic_parameters[266];
    params.ljrep_linear_ramp_d2_cutoff = 4.9284;
    params.lj_r6_coeff = -1798.57;
    params.lj_r12_coeff = 2.30732e+06;
    params.lj_switch_intercept = 1988.05;
    params.lj_switch_slope = -829.756;
    params.lj_minimum = 3.7;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 5.20803;
    params.lk_coeff2 = 6.64985;
    params.fasol_cubic_poly_close_start = 3.05778;
    params.fasol_cubic_poly_close_end = 3.44238;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close =
        CubicPolynomial(18.799, -18.749, 6.54984, -0.759606);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-11.5311, 7.86812, -1.66178, 0.11179);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(7.84162, -7.78922, 2.7203, -0.315397);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-7.31092, 4.7797, -0.98399, 0.0650757);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(11.3843, -11.363, 3.95631, -0.457471);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.26293, 3.11218, -0.68215, 0.046978);
  }
  {  // 15 23
    EtableParamsOnePair<float> &params = analytic_parameters[267];
    params.ljrep_linear_ramp_d2_cutoff = 4.9284;
    params.lj_r6_coeff = -1798.57;
    params.lj_r12_coeff = 2.30732e+06;
    params.lj_switch_intercept = 1988.05;
    params.lj_switch_slope = -829.756;
    params.lj_minimum = 3.7;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 5.20803;
    params.lk_coeff2 = 6.64985;
    params.fasol_cubic_poly_close_start = 3.05778;
    params.fasol_cubic_poly_close_end = 3.44238;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close =
        CubicPolynomial(18.799, -18.749, 6.54984, -0.759606);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-11.5311, 7.86812, -1.66178, 0.11179);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(7.84162, -7.78922, 2.7203, -0.315397);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-7.31092, 4.7797, -0.98399, 0.0650757);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(11.3843, -11.363, 3.95631, -0.457471);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.26293, 3.11218, -0.68215, 0.046978);
  }
  {  // 15 24
    EtableParamsOnePair<float> &params = analytic_parameters[268];
    params.hydrogen_interaction = 1;
    params.maxd2 = 3.05;
    params.ljrep_linear_ramp_d2_cutoff = 1.1025;
    params.lj_r6_coeff = -5.88644;
    params.lj_r12_coeff = 84.5379;
    params.lj_switch_intercept = 581.212;
    params.lj_switch_slope = -512.886;
    params.lj_minimum = 1.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1;
  }
  {  // 15 25
    EtableParamsOnePair<float> &params = analytic_parameters[269];
    params.hydrogen_interaction = 1;
    params.maxd2 = 7.55;
    params.ljrep_linear_ramp_d2_cutoff = 2.7225;
    params.lj_r6_coeff = -88.6382;
    params.lj_r12_coeff = 19168.4;
    params.lj_switch_intercept = 581.212;
    params.lj_switch_slope = -326.382;
    params.lj_minimum = 2.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.2;
  }
  {  // 16 16
    EtableParamsOnePair<float> &params = analytic_parameters[270];
    params.ljrep_linear_ramp_d2_cutoff = 3.4596;
    params.lj_r6_coeff = -282.404;
    params.lj_r12_coeff = 125317;
    params.lj_switch_intercept = 902.423;
    params.lj_switch_slope = -449.545;
    params.lj_minimum = 3.1;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.10831;
    params.lk_coeff2 = 1.10831;
    params.fasol_cubic_poly_close_start = 2.47992;
    params.fasol_cubic_poly_close_end = 2.94109;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.30539, -1.58999, 0.771585, -0.121244);
  }
  {  // 16 17
    EtableParamsOnePair<float> &params = analytic_parameters[271];
    params.ljrep_linear_ramp_d2_cutoff = 4.2849;
    params.lj_r6_coeff = -538.071;
    params.lj_r12_coeff = 453653;
    params.lj_switch_intercept = 904.972;
    params.lj_switch_slope = -405.08;
    params.lj_minimum = 3.45;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.50853;
    params.lk_coeff2 = 1.13602;
    params.fasol_cubic_poly_close_start = 2.81957;
    params.fasol_cubic_poly_close_end = 3.23265;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.87071, -3.13541, 1.2314, -0.15969);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.04078, 0.823252, -0.187686, 0.0132312);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.64627, -1.80032, 0.705776, -0.0913903);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(1.31904, -1.43146, 0.558276, -0.0719809);
  }
  {  // 16 18
    EtableParamsOnePair<float> &params = analytic_parameters[272];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.38539;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.1906, -1.45054, 0.714971, -0.11495);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.94681, -1.15049, 0.561599, -0.0896352);
  }
  {  // 16 19
    EtableParamsOnePair<float> &params = analytic_parameters[273];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -352.009;
    params.lj_r12_coeff = 352284;
    params.lj_switch_intercept = 498.762;
    params.lj_switch_slope = -216.965;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.43212;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.58397, -2.74494, 1.03185, -0.128303);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(3.03929, -3.21789, 1.20437, -0.149204);
  }
  {  // 16 20
    EtableParamsOnePair<float> &params = analytic_parameters[274];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -597.447;
    params.lj_r12_coeff = 597915;
    params.lj_switch_intercept = 846.524;
    params.lj_switch_slope = -368.244;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.50853;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.46462, -1.55734, 0.585791, -0.0728777);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.88513, -1.99591, 0.747012, -0.0925445);
  }
  {  // 16 21
    EtableParamsOnePair<float> &params = analytic_parameters[275];
    params.ljrep_linear_ramp_d2_cutoff = 3.4596;
    params.lj_r6_coeff = -282.404;
    params.lj_r12_coeff = 125317;
    params.lj_switch_intercept = 902.423;
    params.lj_switch_slope = -449.545;
    params.lj_minimum = 3.1;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.10831;
    params.lk_coeff2 = 1.38539;
    params.fasol_cubic_poly_close_start = 2.47992;
    params.fasol_cubic_poly_close_end = 2.94109;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.46856, -1.78874, 0.868033, -0.136399);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.85969, -1.04398, 0.501383, -0.0782002);
  }
  {  // 16 22
    EtableParamsOnePair<float> &params = analytic_parameters[276];
    params.ljrep_linear_ramp_d2_cutoff = 4.9284;
    params.lj_r6_coeff = -1565.5;
    params.lj_r12_coeff = 2.00832e+06;
    params.lj_switch_intercept = 1730.43;
    params.lj_switch_slope = -722.231;
    params.lj_minimum = 3.7;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.57122;
    params.lk_coeff2 = 6.64985;
    params.fasol_cubic_poly_close_start = 3.05778;
    params.fasol_cubic_poly_close_end = 3.44238;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close =
        CubicPolynomial(16.5687, -16.6051, 5.80408, -0.673441);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.37775, 4.03969, -0.898416, 0.0624195);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(5.56962, -5.60606, 1.96217, -0.227939);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.15465, 0.949628, -0.220322, 0.0156874);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(11.3843, -11.363, 3.95631, -0.457471);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.26293, 3.11218, -0.68215, 0.046978);
  }
  {  // 16 23
    EtableParamsOnePair<float> &params = analytic_parameters[277];
    params.ljrep_linear_ramp_d2_cutoff = 4.9284;
    params.lj_r6_coeff = -1565.5;
    params.lj_r12_coeff = 2.00832e+06;
    params.lj_switch_intercept = 1730.43;
    params.lj_switch_slope = -722.231;
    params.lj_minimum = 3.7;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.57122;
    params.lk_coeff2 = 6.64985;
    params.fasol_cubic_poly_close_start = 3.05778;
    params.fasol_cubic_poly_close_end = 3.44238;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close =
        CubicPolynomial(16.5687, -16.6051, 5.80408, -0.673441);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.37775, 4.03969, -0.898416, 0.0624195);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(5.56962, -5.60606, 1.96217, -0.227939);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.15465, 0.949628, -0.220322, 0.0156874);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(11.3843, -11.363, 3.95631, -0.457471);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.26293, 3.11218, -0.68215, 0.046978);
  }
  {  // 16 24
    EtableParamsOnePair<float> &params = analytic_parameters[278];
    params.hydrogen_interaction = 1;
    params.maxd2 = 3.05;
    params.ljrep_linear_ramp_d2_cutoff = 1.1025;
    params.lj_r6_coeff = -5.12364;
    params.lj_r12_coeff = 73.5829;
    params.lj_switch_intercept = 505.895;
    params.lj_switch_slope = -446.423;
    params.lj_minimum = 1.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1;
  }
  {  // 16 25
    EtableParamsOnePair<float> &params = analytic_parameters[279];
    params.hydrogen_interaction = 1;
    params.maxd2 = 7.55;
    params.ljrep_linear_ramp_d2_cutoff = 2.7225;
    params.lj_r6_coeff = -77.1518;
    params.lj_r12_coeff = 16684.5;
    params.lj_switch_intercept = 505.895;
    params.lj_switch_slope = -284.087;
    params.lj_minimum = 2.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.2;
  }
  {  // 17 17
    EtableParamsOnePair<float> &params = analytic_parameters[280];
    params.ljrep_linear_ramp_d2_cutoff = 5.1984;
    params.lj_r6_coeff = -963.5;
    params.lj_r12_coeff = 1.45052e+06;
    params.lj_switch_intercept = 907.528;
    params.lj_switch_slope = -368.809;
    params.lj_minimum = 3.8;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.54625;
    params.lk_coeff2 = 1.54625;
    params.fasol_cubic_poly_close_start = 3.15436;
    params.fasol_cubic_poly_close_end = 3.52846;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.9;
    params.lj_radius_2 = 1.9;
    params.fasol_cubic_poly_close =
        CubicPolynomial(5.24187, -5.12473, 1.73697, -0.195422);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.52135, 1.15789, -0.259186, 0.0180772);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(2.68214, -2.61852, 0.885636, -0.0994545);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.68214, -2.61852, 0.885636, -0.0994545);
  }
  {  // 17 18
    EtableParamsOnePair<float> &params = analytic_parameters[281];
    params.ljrep_linear_ramp_d2_cutoff = 4.7961;
    params.lj_r6_coeff = -923.635;
    params.lj_r12_coeff = 1.09201e+06;
    params.lj_switch_intercept = 1107.78;
    params.lj_switch_slope = -468.689;
    params.lj_minimum = 3.65;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.88566;
    params.fasol_cubic_poly_close_start = 3.01662;
    params.fasol_cubic_poly_close_end = 3.40588;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.9;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.48212, -2.60956, 0.973343, -0.119519);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.00752, 0.785111, -0.177744, 0.0124798);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.05236, -2.15258, 0.799589, -0.0978583);
  }
  {  // 17 19
    EtableParamsOnePair<float> &params = analytic_parameters[282];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -620.577;
    params.lj_r12_coeff = 1.09183e+06;
    params.lj_switch_intercept = 500.171;
    params.lj_switch_slope = -198.052;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 2.49293;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.9;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.15831, -3.93457, 1.28089, -0.138588);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.01977, 0.778858, -0.174639, 0.0121927);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(5.01538, -4.73909, 1.54002, -0.166354);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.2362, 0.938856, -0.209935, 0.014633);
  }
  {  // 17 20
    EtableParamsOnePair<float> &params = analytic_parameters[283];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -1053.27;
    params.lj_r12_coeff = 1.8531e+06;
    params.lj_switch_intercept = 848.915;
    params.lj_switch_slope = -336.143;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.54625;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.9;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.29242, -2.16944, 0.706336, -0.0764304);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(3.1108, -2.93943, 0.9552, -0.103182);
  }
  {  // 17 21
    EtableParamsOnePair<float> &params = analytic_parameters[284];
    params.ljrep_linear_ramp_d2_cutoff = 4.2849;
    params.lj_r6_coeff = -538.071;
    params.lj_r12_coeff = 453653;
    params.lj_switch_intercept = 904.972;
    params.lj_switch_slope = -405.08;
    params.lj_minimum = 3.45;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.13602;
    params.lk_coeff2 = 1.88566;
    params.fasol_cubic_poly_close_start = 2.81957;
    params.fasol_cubic_poly_close_end = 3.23265;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.9;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.26855, -3.5715, 1.4031, -0.182004);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.16126, 0.922727, -0.210804, 0.0148789);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(1.31904, -1.43146, 0.558276, -0.0719809);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.05783, -2.2504, 0.88222, -0.114238);
  }
  {  // 17 22
    EtableParamsOnePair<float> &params = analytic_parameters[285];
    params.ljrep_linear_ramp_d2_cutoff = 5.9049;
    params.lj_r6_coeff = -2700.21;
    params.lj_r12_coeff = 5.95797e+06;
    params.lj_switch_intercept = 1735.31;
    params.lj_switch_slope = -661.679;
    params.lj_minimum = 4.05;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.6605;
    params.lk_coeff2 = 9.05119;
    params.fasol_cubic_poly_close_start = 3.39116;
    params.fasol_cubic_poly_close_end = 3.74166;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.9;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(4.47469, -3.33491, 0.738746, -0.051204);
    params.fasol_cubic_poly_close =
        CubicPolynomial(27.8535, -25.2913, 7.86077, -0.812261);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-7.56765, 5.5869, -1.23166, 0.0851209);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(7.94579, -7.22037, 2.24351, -0.231763);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.81518, 1.37857, -0.308259, 0.0214864);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(20.439, -18.5262, 5.74719, -0.592843);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-5.80233, 4.23603, -0.928482, 0.0639422);
  }
  {  // 17 23
    EtableParamsOnePair<float> &params = analytic_parameters[286];
    params.ljrep_linear_ramp_d2_cutoff = 5.9049;
    params.lj_r6_coeff = -2700.21;
    params.lj_r12_coeff = 5.95797e+06;
    params.lj_switch_intercept = 1735.31;
    params.lj_switch_slope = -661.679;
    params.lj_minimum = 4.05;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.6605;
    params.lk_coeff2 = 9.05119;
    params.fasol_cubic_poly_close_start = 3.39116;
    params.fasol_cubic_poly_close_end = 3.74166;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.9;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(4.47469, -3.33491, 0.738746, -0.051204);
    params.fasol_cubic_poly_close =
        CubicPolynomial(27.8535, -25.2913, 7.86077, -0.812261);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-7.56765, 5.5869, -1.23166, 0.0851209);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(7.94579, -7.22037, 2.24351, -0.231763);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.81518, 1.37857, -0.308259, 0.0214864);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(20.439, -18.5262, 5.74719, -0.592843);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-5.80233, 4.23603, -0.928482, 0.0639422);
  }
  {  // 17 24
    EtableParamsOnePair<float> &params = analytic_parameters[287];
    params.hydrogen_interaction = 1;
    params.maxd2 = 8.4;
    params.ljrep_linear_ramp_d2_cutoff = 3.0276;
    params.lj_r6_coeff = -106.405;
    params.lj_r12_coeff = 31646.2;
    params.lj_switch_intercept = 507.323;
    params.lj_switch_slope = -270.154;
    params.lj_minimum = 2.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.9;
    params.lj_radius_2 = 1;
  }
  {  // 17 25
    EtableParamsOnePair<float> &params = analytic_parameters[288];
    params.hydrogen_interaction = 1;
    params.maxd2 = 9.6;
    params.ljrep_linear_ramp_d2_cutoff = 3.4596;
    params.lj_r6_coeff = -158.761;
    params.lj_r12_coeff = 70450.7;
    params.lj_switch_intercept = 507.323;
    params.lj_switch_slope = -252.725;
    params.lj_minimum = 3.1;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.9;
    params.lj_radius_2 = 1.2;
  }
  {  // 18 18
    EtableParamsOnePair<float> &params = analytic_parameters[289];
    params.ljrep_linear_ramp_d2_cutoff = 4.41;
    params.lj_r6_coeff = -876.485;
    params.lj_r12_coeff = 805606;
    params.lj_switch_intercept = 1352.22;
    params.lj_switch_slope = -596.627;
    params.lj_minimum = 3.5;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 2.87228;
    params.fasol_cubic_poly_close_end = 3.27872;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.75;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.01837, -1.11998, 0.445868, -0.0582361);
  }
  {  // 18 19
    EtableParamsOnePair<float> &params = analytic_parameters[290];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -598.672;
    params.lj_r12_coeff = 832428;
    params.lj_switch_intercept = 610.536;
    params.lj_switch_slope = -251.423;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 3.04015;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(4.65606, -4.62599, 1.59719, -0.182976);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-1.19543, 0.940146, -0.213763, 0.0150464);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(4.96392, -4.92358, 1.6958, -0.193859);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.26919, 0.99302, -0.225241, 0.0158322);
  }
  {  // 18 20
    EtableParamsOnePair<float> &params = analytic_parameters[291];
    params.ljrep_linear_ramp_d2_cutoff = 5.0625;
    params.lj_r6_coeff = -1016.1;
    params.lj_r12_coeff = 1.41284e+06;
    params.lj_switch_intercept = 1036.23;
    params.lj_switch_slope = -426.727;
    params.lj_minimum = 3.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.88566;
    params.fasol_cubic_poly_close_start = 3.10644;
    params.fasol_cubic_poly_close_end = 3.48569;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(2.81674, -2.79882, 0.966392, -0.110717);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(3.07889, -3.05387, 1.05182, -0.120242);
  }
  {  // 18 21
    EtableParamsOnePair<float> &params = analytic_parameters[292];
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -283.953;
    params.lj_r12_coeff = 103501;
    params.lj_switch_intercept = 1104.66;
    params.lj_switch_slope = -568.632;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.38539;
    params.fasol_cubic_poly_close_start = 2.37697;
    params.fasol_cubic_poly_close_end = 2.85482;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.2617, -1.53765, 0.758106, -0.121908);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(0.94681, -1.15049, 0.561599, -0.0896352);
  }
  {  // 18 22
    EtableParamsOnePair<float> &params = analytic_parameters[293];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 4.46402;
    params.lk_coeff2 = 2.7092;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(14.0924, -13.3302, 4.33891, -0.469386);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.57227, 2.71042, -0.605786, 0.042213);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(8.74354, -8.27539, 2.69198, -0.291063);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.86361, 1.45811, -0.330734, 0.0232473);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.64064, -5.31521, 1.72432, -0.185979);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.73675, 1.26793, -0.277913, 0.0191392);
  }
  {  // 18 23
    EtableParamsOnePair<float> &params = analytic_parameters[294];
    params.ljrep_linear_ramp_d2_cutoff = 5.4756;
    params.lj_r6_coeff = -2628.14;
    params.lj_r12_coeff = 4.62388e+06;
    params.lj_switch_intercept = 2118.22;
    params.lj_switch_slope = -838.747;
    params.lj_minimum = 3.9;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 4.46402;
    params.lk_coeff2 = 2.7092;
    params.fasol_cubic_poly_close_start = 3.24808;
    params.fasol_cubic_poly_close_end = 3.61248;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(2.44659, -2.24612, 0.544824, -0.0397386);
    params.fasol_cubic_poly_close =
        CubicPolynomial(14.0924, -13.3302, 4.33891, -0.469386);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-3.57227, 2.71042, -0.605786, 0.042213);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(8.74354, -8.27539, 2.69198, -0.291063);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.86361, 1.45811, -0.330734, 0.0232473);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(5.64064, -5.31521, 1.72432, -0.185979);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-1.73675, 1.26793, -0.277913, 0.0191392);
  }
  {  // 18 24
    EtableParamsOnePair<float> &params = analytic_parameters[295];
    params.hydrogen_interaction = 1;
    params.maxd2 = 7.55;
    params.ljrep_linear_ramp_d2_cutoff = 2.7225;
    params.lj_r6_coeff = -94.4418;
    params.lj_r12_coeff = 20423.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -347.752;
    params.lj_minimum = 2.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1;
  }
  {  // 18 25
    EtableParamsOnePair<float> &params = analytic_parameters[296];
    params.hydrogen_interaction = 1;
    params.maxd2 = 8.7;
    params.ljrep_linear_ramp_d2_cutoff = 3.1329;
    params.lj_r6_coeff = -143.913;
    params.lj_r12_coeff = 47424.5;
    params.lj_switch_intercept = 619.267;
    params.lj_switch_slope = -324.176;
    params.lj_minimum = 2.95;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.75;
    params.lj_radius_2 = 1.2;
  }
  {  // 19 19
    EtableParamsOnePair<float> &params = analytic_parameters[297];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -398.131;
    params.lj_r12_coeff = 815373;
    params.lj_switch_intercept = 275.662;
    params.lj_switch_slope = -106.424;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(-2.21367, 2.0591, -0.658671, 0.0699278);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-1.13218, 1.05155, -0.335692, 0.0355754);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-1.13218, 1.05155, -0.335692, 0.0355754);
  }
  {  // 19 20
    EtableParamsOnePair<float> &params = analytic_parameters[298];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -675.728;
    params.lj_r12_coeff = 1.38389e+06;
    params.lj_switch_intercept = 467.867;
    params.lj_switch_slope = -180.629;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.fasol_cubic_poly_close =
        CubicPolynomial(-1.79335, 1.66813, -0.533607, 0.0566503);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(-1.13218, 1.05155, -0.335692, 0.0355754);
  }
  {  // 19 21
    EtableParamsOnePair<float> &params = analytic_parameters[299];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -352.009;
    params.lj_r12_coeff = 352284;
    params.lj_switch_intercept = 498.762;
    params.lj_switch_slope = -216.965;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 3.04015;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(3.32087, -3.52679, 1.3255, -0.164791);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(3.79911, -4.02236, 1.50546, -0.186505);
  }
  {  // 19 22
    EtableParamsOnePair<float> &params = analytic_parameters[300];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -1722.72;
    params.lj_r12_coeff = 4.40021e+06;
    params.lj_switch_intercept = 956.392;
    params.lj_switch_slope = -355.887;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 14.5927;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(3.82789, -2.63735, 0.560126, -0.0378163);
    params.fasol_cubic_poly_close =
        CubicPolynomial(32.6344, -28.83, 8.68874, -0.870847);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-8.80846, 6.43189, -1.40993, 0.0971039);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-2.1103, 1.86524, -0.561953, 0.0563058);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(35.3292, -31.1833, 9.38641, -0.939721);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-9.35477, 6.82952, -1.49694, 0.103091);
  }
  {  // 19 23
    EtableParamsOnePair<float> &params = analytic_parameters[301];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -1722.72;
    params.lj_r12_coeff = 4.40021e+06;
    params.lj_switch_intercept = 956.392;
    params.lj_switch_slope = -355.887;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 14.5927;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(3.82789, -2.63735, 0.560126, -0.0378163);
    params.fasol_cubic_poly_close =
        CubicPolynomial(32.6344, -28.83, 8.68874, -0.870847);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-8.80846, 6.43189, -1.40993, 0.0971039);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-2.1103, 1.86524, -0.561953, 0.0563058);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(35.3292, -31.1833, 9.38641, -0.939721);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-9.35477, 6.82952, -1.49694, 0.103091);
  }
  {  // 19 24
    EtableParamsOnePair<float> &params = analytic_parameters[302];
    params.hydrogen_interaction = 1;
    params.maxd2 = 9;
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -71.8722;
    params.lj_r12_coeff = 26197.4;
    params.lj_switch_intercept = 279.604;
    params.lj_switch_slope = -143.928;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1;
  }
  {  // 19 25
    EtableParamsOnePair<float> &params = analytic_parameters[303];
    params.hydrogen_interaction = 1;
    params.maxd2 = 10.25;
    params.ljrep_linear_ramp_d2_cutoff = 3.6864;
    params.lj_r6_coeff = -105.86;
    params.lj_r12_coeff = 56833.3;
    params.lj_switch_intercept = 279.604;
    params.lj_switch_slope = -134.933;
    params.lj_minimum = 3.2;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.2;
  }
  {  // 20 20
    EtableParamsOnePair<float> &params = analytic_parameters[304];
    params.ljrep_linear_ramp_d2_cutoff = 5.76;
    params.lj_r6_coeff = -1146.88;
    params.lj_r12_coeff = 2.34881e+06;
    params.lj_switch_intercept = 794.087;
    params.lj_switch_slope = -306.572;
    params.lj_minimum = 4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 3.34664;
    params.fasol_cubic_poly_close_end = 3.70135;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(1.60534, -1.26181, 0.286827, -0.0201862);
    params.fasol_cubic_poly_close =
        CubicPolynomial(-1.37303, 1.27716, -0.408543, 0.0433729);
  }
  {  // 20 21
    EtableParamsOnePair<float> &params = analytic_parameters[305];
    params.ljrep_linear_ramp_d2_cutoff = 4.5369;
    params.lj_r6_coeff = -597.447;
    params.lj_r12_coeff = 597915;
    params.lj_switch_intercept = 846.524;
    params.lj_switch_slope = -368.244;
    params.lj_minimum = 3.55;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 1.88566;
    params.fasol_cubic_poly_close_start = 2.91548;
    params.fasol_cubic_poly_close_end = 3.31662;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.92169, -2.04228, 0.767931, -0.0955096);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(2.35641, -2.49488, 0.933765, -0.115681);
  }
  {  // 20 22
    EtableParamsOnePair<float> &params = analytic_parameters[306];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -2923.89;
    params.lj_r12_coeff = 7.46825e+06;
    params.lj_switch_intercept = 1623.24;
    params.lj_switch_slope = -604.03;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 9.05119;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(6.49688, -4.47624, 0.950674, -0.0641838);
    params.fasol_cubic_poly_close =
        CubicPolynomial(19.455, -17.1859, 5.17925, -0.519082);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.27772, 3.85047, -0.843679, 0.0580896);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-2.1103, 1.86524, -0.561953, 0.0563058);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(21.913, -19.3416, 5.82195, -0.582865);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-5.80233, 4.23603, -0.928482, 0.0639422);
  }
  {  // 20 23
    EtableParamsOnePair<float> &params = analytic_parameters[307];
    params.ljrep_linear_ramp_d2_cutoff = 6.2001;
    params.lj_r6_coeff = -2923.89;
    params.lj_r12_coeff = 7.46825e+06;
    params.lj_switch_intercept = 1623.24;
    params.lj_switch_slope = -604.03;
    params.lj_minimum = 4.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff2 = 9.05119;
    params.fasol_cubic_poly_close_start = 3.48569;
    params.fasol_cubic_poly_close_end = 3.82753;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 2.15;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(6.49688, -4.47624, 0.950674, -0.0641838);
    params.fasol_cubic_poly_close =
        CubicPolynomial(19.455, -17.1859, 5.17925, -0.519082);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.27772, 3.85047, -0.843679, 0.0580896);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(-2.1103, 1.86524, -0.561953, 0.0563058);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(21.913, -19.3416, 5.82195, -0.582865);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-5.80233, 4.23603, -0.928482, 0.0639422);
  }
  {  // 20 24
    EtableParamsOnePair<float> &params = analytic_parameters[308];
    params.hydrogen_interaction = 1;
    params.maxd2 = 9;
    params.ljrep_linear_ramp_d2_cutoff = 3.24;
    params.lj_r6_coeff = -121.985;
    params.lj_r12_coeff = 44463.5;
    params.lj_switch_intercept = 474.558;
    params.lj_switch_slope = -244.283;
    params.lj_minimum = 3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1;
  }
  {  // 20 25
    EtableParamsOnePair<float> &params = analytic_parameters[309];
    params.hydrogen_interaction = 1;
    params.maxd2 = 10.25;
    params.ljrep_linear_ramp_d2_cutoff = 3.6864;
    params.lj_r6_coeff = -179.671;
    params.lj_r12_coeff = 96460.3;
    params.lj_switch_intercept = 474.558;
    params.lj_switch_slope = -229.015;
    params.lj_minimum = 3.2;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2;
    params.lj_radius_2 = 1.2;
  }
  {  // 21 21
    EtableParamsOnePair<float> &params = analytic_parameters[310];
    params.ljrep_linear_ramp_d2_cutoff = 3.4596;
    params.lj_r6_coeff = -282.404;
    params.lj_r12_coeff = 125317;
    params.lj_switch_intercept = 902.423;
    params.lj_switch_slope = -449.545;
    params.lj_minimum = 3.1;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 1.38539;
    params.lk_coeff2 = 1.38539;
    params.fasol_cubic_poly_close_start = 2.47992;
    params.fasol_cubic_poly_close_end = 2.94109;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.55;
    params.fasol_cubic_poly_close =
        CubicPolynomial(1.63174, -1.98748, 0.964481, -0.151555);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(0.85969, -1.04398, 0.501383, -0.0782002);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(0.85969, -1.04398, 0.501383, -0.0782002);
    params.ljrep_extra_repulsion =
        ExtraQuadraticRepulsion(2.1, 3.6, 2, -6, 4.5);
  }
  {  // 21 22
    EtableParamsOnePair<float> &params = analytic_parameters[311];
    params.ljrep_linear_ramp_d2_cutoff = 4.9284;
    params.lj_r6_coeff = -1565.5;
    params.lj_r12_coeff = 2.00832e+06;
    params.lj_switch_intercept = 1730.43;
    params.lj_switch_slope = -722.231;
    params.lj_minimum = 3.7;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 4.46402;
    params.lk_coeff2 = 6.64985;
    params.fasol_cubic_poly_close_start = 3.05778;
    params.fasol_cubic_poly_close_end = 3.44238;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close =
        CubicPolynomial(17.9258, -17.9733, 6.28413, -0.729328);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.66297, 4.27518, -0.953146, 0.0663201);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(6.96203, -7.00757, 2.45271, -0.284924);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.44331, 1.18703, -0.275402, 0.0196092);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(11.3843, -11.363, 3.95631, -0.457471);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.26293, 3.11218, -0.68215, 0.046978);
  }
  {  // 21 23
    EtableParamsOnePair<float> &params = analytic_parameters[312];
    params.ljrep_linear_ramp_d2_cutoff = 4.9284;
    params.lj_r6_coeff = -1565.5;
    params.lj_r12_coeff = 2.00832e+06;
    params.lj_switch_intercept = 1730.43;
    params.lj_switch_slope = -722.231;
    params.lj_minimum = 3.7;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 4.46402;
    params.lk_coeff2 = 6.64985;
    params.fasol_cubic_poly_close_start = 3.05778;
    params.fasol_cubic_poly_close_end = 3.44238;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close =
        CubicPolynomial(17.9258, -17.9733, 6.28413, -0.729328);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-5.66297, 4.27518, -0.953146, 0.0663201);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(6.96203, -7.00757, 2.45271, -0.284924);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-1.44331, 1.18703, -0.275402, 0.0196092);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(11.3843, -11.363, 3.95631, -0.457471);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-4.26293, 3.11218, -0.68215, 0.046978);
  }
  {  // 21 24
    EtableParamsOnePair<float> &params = analytic_parameters[313];
    params.hydrogen_interaction = 1;
    params.maxd2 = 3.05;
    params.ljrep_linear_ramp_d2_cutoff = 1.1025;
    params.lj_r6_coeff = -5.12364;
    params.lj_r12_coeff = 73.5829;
    params.lj_switch_intercept = 505.895;
    params.lj_switch_slope = -446.423;
    params.lj_minimum = 1.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1;
  }
  {  // 21 25
    EtableParamsOnePair<float> &params = analytic_parameters[314];
    params.hydrogen_interaction = 1;
    params.maxd2 = 7.55;
    params.ljrep_linear_ramp_d2_cutoff = 2.7225;
    params.lj_r6_coeff = -77.1518;
    params.lj_r12_coeff = 16684.5;
    params.lj_switch_intercept = 505.895;
    params.lj_switch_slope = -284.087;
    params.lj_minimum = 2.75;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.55;
    params.lj_radius_2 = 1.2;
  }
  {  // 22 22
    EtableParamsOnePair<float> &params = analytic_parameters[315];
    params.ljrep_linear_ramp_d2_cutoff = 6.6564;
    params.lj_r6_coeff = -7395.99;
    params.lj_r12_coeff = 2.33764e+07;
    params.lj_switch_intercept = 3318.15;
    params.lj_switch_slope = -1191.66;
    params.lj_minimum = 4.3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 21.4273;
    params.lk_coeff2 = 21.4273;
    params.lk_min_dis2sigma_value = 1.16291;
    params.fasol_cubic_poly_close_start = 3.62629;
    params.fasol_cubic_poly_close_end = 3.95601;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2.15;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close_flat = 2.32582;
    params.fasol_cubic_poly1_close_flat = 1.16291;
    params.fasol_cubic_poly2_close_flat = 1.16291;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(23.7195, -15.139, 3.06969, -0.200902);
    params.fasol_cubic_poly_close =
        CubicPolynomial(115.855, -98.2723, 28.2996, -2.71161);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-27.3044, 19.963, -4.37898, 0.301711);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(58.8853, -49.9063, 14.3561, -1.37421);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-13.7361, 10.0281, -2.19804, 0.151373);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(58.8853, -49.9063, 14.3561, -1.37421);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-13.7361, 10.0281, -2.19804, 0.151373);
  }
  {  // 22 23
    EtableParamsOnePair<float> &params = analytic_parameters[316];
    params.ljrep_linear_ramp_d2_cutoff = 6.6564;
    params.lj_r6_coeff = -7395.99;
    params.lj_r12_coeff = 2.33764e+07;
    params.lj_switch_intercept = 3318.15;
    params.lj_switch_slope = -1191.66;
    params.lj_minimum = 4.3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 21.4273;
    params.lk_coeff2 = 21.4273;
    params.lk_min_dis2sigma_value = 1.16291;
    params.fasol_cubic_poly_close_start = 3.62629;
    params.fasol_cubic_poly_close_end = 3.95601;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2.15;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close_flat = 2.32582;
    params.fasol_cubic_poly1_close_flat = 1.16291;
    params.fasol_cubic_poly2_close_flat = 1.16291;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(23.7195, -15.139, 3.06969, -0.200902);
    params.fasol_cubic_poly_close =
        CubicPolynomial(115.855, -98.2723, 28.2996, -2.71161);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-27.3044, 19.963, -4.37898, 0.301711);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(58.8853, -49.9063, 14.3561, -1.37421);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-13.7361, 10.0281, -2.19804, 0.151373);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(58.8853, -49.9063, 14.3561, -1.37421);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-13.7361, 10.0281, -2.19804, 0.151373);
  }
  {  // 22 24
    EtableParamsOnePair<float> &params = analytic_parameters[317];
    params.hydrogen_interaction = 1;
    params.maxd2 = 9.9;
    params.ljrep_linear_ramp_d2_cutoff = 3.5721;
    params.lj_r6_coeff = -334.161;
    params.lj_r12_coeff = 163226;
    params.lj_switch_intercept = 970.07;
    params.lj_switch_slope = -475.573;
    params.lj_minimum = 3.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2.15;
    params.lj_radius_2 = 1;
  }
  {  // 22 25
    EtableParamsOnePair<float> &params = analytic_parameters[318];
    params.hydrogen_interaction = 1;
    params.maxd2 = 11.2;
    params.ljrep_linear_ramp_d2_cutoff = 4.0401;
    params.lj_r6_coeff = -483.461;
    params.lj_r12_coeff = 341665;
    params.lj_switch_intercept = 970.07;
    params.lj_switch_slope = -447.18;
    params.lj_minimum = 3.35;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2.15;
    params.lj_radius_2 = 1.2;
  }
  {  // 23 23
    EtableParamsOnePair<float> &params = analytic_parameters[319];
    params.ljrep_linear_ramp_d2_cutoff = 6.6564;
    params.lj_r6_coeff = -7395.99;
    params.lj_r12_coeff = 2.33764e+07;
    params.lj_switch_intercept = 3318.15;
    params.lj_switch_slope = -1191.66;
    params.lj_minimum = 4.3;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.lk_coeff1 = 21.4273;
    params.lk_coeff2 = 21.4273;
    params.lk_min_dis2sigma_value = 1.16291;
    params.fasol_cubic_poly_close_start = 3.62629;
    params.fasol_cubic_poly_close_end = 3.95601;
    params.fasol_cubic_poly_far_start = 4.5;
    params.fasol_cubic_poly_far_end = 6;
    params.lj_radius_1 = 2.15;
    params.lj_radius_2 = 2.15;
    params.fasol_cubic_poly_close_flat = 2.32582;
    params.fasol_cubic_poly1_close_flat = 1.16291;
    params.fasol_cubic_poly2_close_flat = 1.16291;
    params.ljatr_cubic_poly_parameters =
        CubicPolynomial(23.7195, -15.139, 3.06969, -0.200902);
    params.fasol_cubic_poly_close =
        CubicPolynomial(115.855, -98.2723, 28.2996, -2.71161);
    params.fasol_cubic_poly_far =
        CubicPolynomial(-27.3044, 19.963, -4.37898, 0.301711);
    params.fasol_cubic_poly1_close =
        CubicPolynomial(58.8853, -49.9063, 14.3561, -1.37421);
    params.fasol_cubic_poly1_far =
        CubicPolynomial(-13.7361, 10.0281, -2.19804, 0.151373);
    params.fasol_cubic_poly2_close =
        CubicPolynomial(58.8853, -49.9063, 14.3561, -1.37421);
    params.fasol_cubic_poly2_far =
        CubicPolynomial(-13.7361, 10.0281, -2.19804, 0.151373);
  }
  {  // 23 24
    EtableParamsOnePair<float> &params = analytic_parameters[320];
    params.hydrogen_interaction = 1;
    params.maxd2 = 9.9;
    params.ljrep_linear_ramp_d2_cutoff = 3.5721;
    params.lj_r6_coeff = -334.161;
    params.lj_r12_coeff = 163226;
    params.lj_switch_intercept = 970.07;
    params.lj_switch_slope = -475.573;
    params.lj_minimum = 3.15;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2.15;
    params.lj_radius_2 = 1;
  }
  {  // 23 25
    EtableParamsOnePair<float> &params = analytic_parameters[321];
    params.hydrogen_interaction = 1;
    params.maxd2 = 11.2;
    params.ljrep_linear_ramp_d2_cutoff = 4.0401;
    params.lj_r6_coeff = -483.461;
    params.lj_r12_coeff = 341665;
    params.lj_switch_intercept = 970.07;
    params.lj_switch_slope = -447.18;
    params.lj_minimum = 3.35;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 2.15;
    params.lj_radius_2 = 1.2;
  }
  {  // 24 24
    EtableParamsOnePair<float> &params = analytic_parameters[322];
    params.hydrogen_interaction = 1;
    params.maxd2 = 4;
    params.ljrep_linear_ramp_d2_cutoff = 1.44;
    params.lj_r6_coeff = -6.4;
    params.lj_r12_coeff = 204.8;
    params.lj_switch_intercept = 283.602;
    params.lj_switch_slope = -218.98;
    params.lj_minimum = 2;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1;
    params.lj_radius_2 = 1;
  }
  {  // 24 25
    EtableParamsOnePair<float> &params = analytic_parameters[323];
    params.hydrogen_interaction = 1;
    params.maxd2 = 4.85;
    params.ljrep_linear_ramp_d2_cutoff = 1.7424;
    params.lj_r6_coeff = -11.338;
    params.lj_r12_coeff = 642.75;
    params.lj_switch_intercept = 283.602;
    params.lj_switch_slope = -199.073;
    params.lj_minimum = 2.2;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1;
    params.lj_radius_2 = 1.2;
  }
  {  // 25 25
    EtableParamsOnePair<float> &params = analytic_parameters[324];
    params.hydrogen_interaction = 1;
    params.maxd2 = 5.75;
    params.ljrep_linear_ramp_d2_cutoff = 2.0736;
    params.lj_r6_coeff = -19.1103;
    params.lj_r12_coeff = 1826.02;
    params.lj_switch_intercept = 283.602;
    params.lj_switch_slope = -182.483;
    params.lj_minimum = 2.4;
    params.ljatr_cubic_poly_xlo = 4.5;
    params.ljatr_cubic_poly_xhi = 6;
    params.fasol_cubic_poly_close_start = 6;
    params.fasol_cubic_poly_close_end = 7;
    params.lj_radius_1 = 1.2;
    params.lj_radius_2 = 1.2;
  }
}

// #pragma GCC optimization_level reset
}
}
}
