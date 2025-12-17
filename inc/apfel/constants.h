//
// APFEL++ 2017
//
// Author: Valerio Bertone: valerio.bertone@cern.ch
//

#pragma once

#include <cmath>
#include <vector>
#include <array>
#include <map>
#include <string>
#include <cstring>

namespace apfel
{
  /**
   * @defgroup NumericalConstants Numerical constants
   * Collection of numerical constants often used
   * in the computations.
   */
  ///@{
  ///@}

  /**
   * @defgroup PertOrds Perturbative orders
   * Enumerators for the perturbative orders for both fixed order and
   * resummation.
   * @ingroup NumericalConstants
   */
  ///@{
  enum FixedOrderAccuracy: int {LO = 0, NLO = 1, NNLO = 2, NNNLO = 3, N4LO = 4};
  enum LogAccuracy: int {NNNLLp = -3, NNLLp = -2, NLLp = -1, LL = 0, NLL = 1, NNLL = 2, NNNLL = 3, N4LL = 4};
  ///@}

  /**
   * @defgroup PartonSpecies Partonic species
   * Enumerator for distinguishing different partonic species.
   * @ingroup NumericalConstants
   */
  ///@{
  enum PartonSpecies: int {GLUON = 0, QUARK = 1, PHOTON = 2, CHARGEDLEPTON = 3, NEUTRINO = 4};
  ///@}

  /**
   * @defgroup MathConstants Mathematical constants
   * Collection of mathematical constants often used in the code.
   * @ingroup NumericalConstants
   */
  ///@{
  /**
   * @name Small numbers
   * @brief Small numbers used for cutoffs, integration accuracies, etc.
   */
  ///@{
  const double eps2  = 1e-2;
  const double eps3  = 1e-3;
  const double eps4  = 1e-4;
  const double eps5  = 1e-5;
  const double eps6  = 1e-6;
  const double eps7  = 1e-7;
  const double eps8  = 1e-8;
  const double eps9  = 1e-9;
  const double eps10 = 1e-10;
  const double eps11 = 1e-11;
  const double eps12 = 1e-12;
  const double eps13 = 1e-13;
  const double eps14 = 1e-14;
  const double eps15 = 1e-15;
  const double eps25 = 1e-25;
  ///@}

  /**
   * @name Gauss-Legendre quadrature
   * @brief Coordinates and weights of the Gauss-Legendre quadrature
   * with 8 and 16-point integration.
   */
  ///@{
  const std::array<std::vector<double>, 2> gl_x =
  {
    {
      std::vector<double>{0.1834346424956498, 0.5255324099163289, 0.7966664774136267, 0.9602898564975362},
      std::vector<double>{
        0.0950125098376374, 0.2816035507792589, 0.4580167776572273, 0.6178762444026437,
        0.7554044083550030, 0.8656312023878317, 0.9445750230732325, 0.9894009349916499
      }
    }
  };
  const std::array<std::vector<double>, 2> gl_w =
  {
    {
      std::vector<double>{0.3626837833783619, 0.3137066458778872, 0.2223810344533744, 0.1012285362903762},
      std::vector<double>{
        0.1894506104550684, 0.1826034150449235, 0.1691565193950025, 0.1495959888165767,
        0.1246289712555338, 0.0951585116824927, 0.0622535239386478, 0.0271524594117540
      }
    }
  };
  ///@}

  /**
   * @name Gauss-Kronrod quadrature
   * @brief Coordinates and weights of the Gauss-Kronrod quadrature
   * with 7 and 15-point integration.
   */
  ///@{
  const std::array<std::vector<double>, 2> gk_x =
  {
    {
      std::vector<double>{0.0000000000000000e+00, 4.0584515137739717e-01, 7.4153118559939444e-01, 9.4910791234275852e-01},
      std::vector<double>{
        0.0000000000000000e+00, 2.0778495500789847e-01, 4.0584515137739717e-01, 5.8608723546769113e-01,
        7.4153118559939444e-01, 8.6486442335976907e-01, 9.4910791234275852e-01, 9.9145537112081264e-01
      }
    }
  };
  const std::array<std::vector<double>, 2> gk_w =
  {
    {
      std::vector<double>{4.1795918367346939e-01, 3.8183005050511894e-01, 2.7970539148927667e-01, 1.2948496616886969e-01},
      std::vector<double>{
        2.0948214108472783e-01, 2.0443294007529889e-01, 1.9035057806478541e-01, 1.6900472663926790e-01,
        1.4065325971552592e-01, 1.0479001032225018e-01, 6.3092092629978553e-02, 2.2935322010529225e-02
      }
    }
  };
  ///@}

  /**
   * @name Numerical constants
   * @brief Definitions for recurrent constants.
   */
  ///@{
  const double Pi2    = M_PI * M_PI;
  const double FourPi = 4 * M_PI;
  const double emc    = 0.5772156649015329;
  const double zeta2  = 1.6449340668482264; // Pi2 / 6;
  const double zeta3  = 1.2020569031595943;
  const double zeta4  = 1.0823232337111382; // Pi2 * Pi2 / 90;
  const double zeta5  = 1.0369277551433699;
  const double zeta6  = 1.0173430619844491; // Pi2 * Pi2 * Pi2 / 945
  ///@}

  /**
   * @name QCD colour factors
   * The SU(3) Casimir's.
   */
  ///@{
  const double TR = 0.5;
  const double CF = 4. / 3.;
  const double CA = 3.;
  const double NC = 3.;
  ///@}
  ///@}

  /**
   * @defgroup PhysConstants Physical constants
   * Collection of physical constants often used in the code.
   * @ingroup NumericalConstants
   */
  ///@{
  /**
   * @name Quark charges
   * @brief Quark electric charges and their square (it also includes
   * sums of charges).
   */
  ///@{
  const double ed  = - 1. / 3.;
  const double eu  =   2. / 3.;
  const double ed2 =   1. / 9.;
  const double eu2 =   4. / 9.;
  const std::vector<double> QCh  = {ed,  eu,  ed,  eu,  ed,  eu};
  const std::vector<double> QCh2 = {ed2, eu2, ed2, eu2, ed2, eu2};
  const std::vector<double> SumCh2 = {0., 1./9., 5./9., 2./3., 10./9., 11./9., 5./3.};
  const std::vector<double> SumCh4 = {0., 1./81., 17./81., 18./81., 34./81., 35./81., 51./81.};
  ///@}

  /**
   * @name Flavour factors required by the N<SUP>3</SUP>LO DIS coefficient functions
   * @brief Their definition can be found in Tab. 2 (page 8) of
   * https://arxiv.org/pdf/hep-ph/0504242v1.pdf.
   */
  ///@{
  const std::vector<double> fl11ns = {-1, 0.5, 0, 0.5, 0.2, 0.5};
  const std::vector<double> fl11sg = {1, 0.1, 0, 0.1, 0.018181818, 0.1};
  ///@}

  /**
   * @name Conversion factor
   * @brief Conversion factor from * GeV<SUP>-2</SUP> to pb taken
   * from:
   * https://pdg.lbl.gov/2022/reviews/rpp2022-rev-phys-constants.pdf.
   */
  ///@{
  const double ConvFact = 0.3893793721e9;
  ///@}

  /**
   * @name Z-boson mass and width
   * @brief Value of the mass of the Z boson and its width in GeV
   * taken from:
   * https://pdg.lbl.gov/2023/listings/rpp2023-list-z-boson.pdf.
   */
  ///@{
  const double ZMass  = 91.1876;
  const double GammaZ = 2.4955;
  ///@}

  /**
   * @name W-boson mass and width
   * @brief Value of the mass of the W bosons and their width in GeV
   * taken from:
   * https://pdg.lbl.gov/2023/listings/rpp2023-list-w-boson.pdf.
   */
  ///@{
  const double WMass  = 80.377;
  const double GammaW = 2.085;
  ///@}

  /**
   * @name Proton mass
   * @brief Value of the mass of the proton in GeV taken from:
   * https://pdg.lbl.gov/2022/reviews/rpp2022-rev-phys-constants.pdf.
   */
  ///@{
  const double ProtonMass = 0.93827208816;
  ///@}

  /**
   * @name Weinberg angle
   * @brief Value of sin<SUP>2</SUP>&theta;<SUB>W</SUB> in the MSbar
   * scheme taken from:
   * https://pdg.lbl.gov/2022/reviews/rpp2022-rev-phys-constants.pdf.
   */
  ///@{
  const double Sin2ThetaW = 0.23121;
  ///@}

  /**
   * @name Fermi constant
   * @brief Value of G<SUB>F</SUB> in GeV<SUP>-2</SUP> taken from:
   * https://pdg.lbl.gov/2022/reviews/rpp2022-rev-phys-constants.pdf.
   */
  ///@{
  const double GFermi = 1.1663788e-5;
  ///@}

  /**
   * @name Fermi constant
   * @brief Value of G<SUB>F</SUB> in GeV<SUP>-2</SUP> taken from:
   * https://pdg.lbl.gov/2022/reviews/rpp2022-rev-phys-constants.pdf.
   */
  ///@{
  const double alphaem = 7.2973525693e-3;
  ///@}

  /**
   * @name CKM matrix elements
   * @brief Absolute value of the CMK matrix elements and their square
   * taken from:
   * http://pdg.lbl.gov/2018/reviews/rpp2018-rev-ckm-matrix.pdf.
   */
  ///@{
  const double Vud  = 0.97446;
  const double Vus  = 0.22452;
  const double Vub  = 0.00365;
  const double Vcd  = 0.22438;
  const double Vcs  = 0.97359;
  const double Vcb  = 0.04214;
  const double Vtd  = 0.00896;
  const double Vts  = 0.04133;
  const double Vtb  = 0.999105;
  const double Vud2 = Vud * Vud;
  const double Vus2 = Vus * Vus;
  const double Vub2 = Vub * Vub;
  const double Vcd2 = Vcd * Vcd;
  const double Vcs2 = Vcs * Vcs;
  const double Vcb2 = Vcb * Vcb;
  const double Vtd2 = Vtd * Vtd;
  const double Vts2 = Vts * Vts;
  const double Vtb2 = Vtb * Vtb;
  const std::vector<double> CKM  = {Vud,  Vus,  Vub,  Vcd,  Vcs,  Vcb,  Vtd,  Vts,  Vtb};
  const std::vector<double> CKM2 = {Vud2, Vus2, Vub2, Vcd2, Vcs2, Vcb2, Vtd2, Vts2, Vtb2};
  ///@}
  ///@}
  
  /**
   * @defgroup Onium Physical constants
   * Collection of quarkonium masses and LDME values.
   * @ingroup NumericalConstants
   */
  ///@{
    /**
   * @name Quarkonium mass
   * @brief Mass of the quarkonia. To Do: choose PDG values or not
   * http://pdg.lbl.gov/2018/reviews/rpp2018-rev-ckm-matrix.pdf.
   */
  ///@{
  const std::map <std::string, double> Monium = {{"Jpsi", 3.0}, {"Upsilon", 9.5}, {"psi2S", 3.7}, {"Chic2", 3.556}, {"Chib2", 9.912}};
  ///@}
  ///@{
    /**
   * @name Branching mass
   * @brief Mass of the quarkonia. To Do: choose PDG values or not
   * http://pdg.lbl.gov/2018/reviews/rpp2018-rev-ckm-matrix.pdf.
   */
  ///@{
  const std::map < std::string, std::map < std::string, double> > Br = {
    {"Jpsi",{{"mumu", 5.93e-2}, {"ee", 5.94e-2}}},
    {"Upsilon",{{"mumu", 2.48e-2}, {"ee", 2.39e-2}}},
    {"Chic2",{{"Jpsi", 0.19}}},
    {"Chib2",{{"Upsilon", 0.18}}}
    };
  ///@}
    /**
   * @name LDMEs
   * @brief Quarkonia Long Distance Matrix Elements. 
   * http://pdg.lbl.gov/2018/reviews/rpp2018-rev-ckm-matrix.pdf.
   */
  ///@{
  const std::map < std::string, std::map < std::string, std::map < std::string, double > > > LDME = {
    {"Jpsi", {
      {"SV", {{"1S08", 0.018}, {"3S18", 0.0013}, {"3P08", 0.0405}, {"3P28", 0.02025}}},
      {"BK11", {{"1S08", 0.0304}, {"3S18", 0.00168}, {"3P08", -0.00908}, {"3P28", -0.0454}}},
      {"C12", {{"1S08", 0.089}, {"3S18", 0.0030}, {"3P08", 0.0126}, {"3P28", 0.063}}},
      {"SYY", {{"1S08", 0.1423}, {"3S18", -0.0093}, {"3P08", -0.039375}, {"3P28", -0.196875}, {"3P21", 0.018}, {"approx", 0.0197}}}
    }},
    {"Upsilon", { 
      {"SYY", {{"1S08", 0.119}, {"3S18", 0.06}, {"3P08", -0.27075}, {"3P28", -1.35375}, {"3P21", 0.3382}, {"approx", 0.0321}}}
    }}
    };
  /**
   * @name BQc coefficients
   * @brief: NLO Corrections for onium production.
   * Taken from Nucl. Phys. B 514 (1998) 245-309, see Eqs. (127), (129)-(131)
  */
  ///@{
  const std::map <std::string, double> BQc = {{"1S08", 3.16}, {"3P08", 3.76}, {"3P28", 2.8}, {"3P21", 4.07}};
  ///@}
  ///@}
  
}
