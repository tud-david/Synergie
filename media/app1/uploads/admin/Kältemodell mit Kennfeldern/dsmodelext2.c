#include <moutil.c>
PreNonAliasDef(11)
PreNonAliasDef(12)
PreNonAliasDef(13)
PreNonAliasDef(14)
PreNonAliasDef(15)
StartNonAlias(10)
DeclareVariable("WRG.fan.eff.preDer2[2]", "Derivatives of flow rate vs. pressure at the support points",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("WRG.fan.eff.preDer2[3]", "Derivatives of flow rate vs. pressure at the support points",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("WRG.fan.eff.preDer3[1]", "Derivatives of flow rate vs. pressure at the support points",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("WRG.fan.eff.preDer3[2]", "Derivatives of flow rate vs. pressure at the support points",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("WRG.fan.eff.preDer3[3]", "Derivatives of flow rate vs. pressure at the support points",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("WRG.fan.eff.preDer3[4]", "Derivatives of flow rate vs. pressure at the support points",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("WRG.fan.eff.powDer[1]", "Coefficients for polynomial of power vs. flow rate",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("WRG.fan.eff.haveMinimumDecrease", "Flag used for reporting [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("WRG.fan.eff.haveDPMax", "Flag, true if user specified data that contain dpMax [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("WRG.fan.eff.dp_internal", "If dp is prescribed, use dp_in and solve for r_N, otherwise compute dp using r_N [Pa]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("WRG.fan.eff.dp_in", "Prescribed pressure increase [Pa]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("WRG.fan.dp_nominal", "Nominal pressure raise, used for default pressure curve if not specified in record per [Pa|Pa]",\
 10000, 0.0,1E+100,0.0,0,513)
DeclareParameter("WRG.fan.m_flow_start", "Initial value of mass flow rate [kg/s]",\
 931, 0, 0.0,1E+100,0.0,0,560)
DeclareVariable("WRG.fan.constantMassFlowRate", "Constant pump mass flow rate, used when inputType=Constant [kg/s]",\
 9.639, 0.0,0.0,0.0,0,513)
DeclareVariable("WRG.fan.massFlowRates[1]", "Vector of mass flow rate set points, used when inputType=Stage [kg/s]",\
 9.639, 0.0,0.0,0.0,0,513)
DeclareVariable("WRG.fan.m_flow_in", "Prescribed mass flow rate [kg/s]", 9.639, \
0.0,0.0,9.639,0,513)
DeclareAlias2("WRG.fan.m_flow_actual", "Actual mass flow rate [kg/s]", \
"WRG.T_VL_AWT.port_a.m_flow", 1, 5, 4912, 0)
DeclareVariable("WRG.realExpression1.y", "Value of Real output [kg/s]", 9.639, \
0.0,0.0,0.0,0,513)
DeclareVariable("WRG.T_VL.allowFlowReversal", "= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("WRG.T_VL.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -1E+60,100000.0,0.0,0,776)
DeclareAlias2("WRG.T_VL.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "WRG.port_b.p", 1, 5, 4909, 4)
DeclareVariable("WRG.T_VL.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 83680.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("WRG.T_VL.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "WRG.port_b.m_flow", 1, 5, 4908, 132)
DeclareAlias2("WRG.T_VL.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "WRG.port_b.p", 1, 5, 4909, 4)
DeclareAlias2("WRG.T_VL.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "WRG.port_b.h_outflow", 1, 5, 4910, 4)
DeclareVariable("WRG.T_VL.m_flow_nominal", "Nominal mass flow rate, used for regularization near zero flow [kg/s]",\
 69.4, 0.0,1E+100,0.0,0,513)
DeclareVariable("WRG.T_VL.m_flow_small", "For bi-directional flow, temperature is regularized in the region |m_flow| < m_flow_small (m_flow_small > 0 required) [kg/s]",\
 0.006940000000000001, 0.0,1E+100,0.0,0,513)
DeclareVariable("WRG.T_VL.tau", "Time constant at nominal flow rate (use tau=0 for steady-state sensor, but see user guide for potential problems) [s]",\
 1, 0.0,1E+100,0.0,0,513)
DeclareVariable("WRG.T_VL.initType", "Type of initialization (InitialState and InitialOutput are identical) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("WRG.T_VL.k", "Gain to take flow rate into account for sensor time constant [1]",\
 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("WRG.T_VL.dynamic", "Flag, true if the sensor is a dynamic sensor [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("WRG.T_VL.mNor_flow", "Normalized mass flow rate [1]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("WRG.T_VL.tauInv", "Inverse of tau [s-1]", 1.0, 0.0,0.0,0.0,0,2561)
DeclareState("WRG.T_VL.T", "Temperature of the passing fluid [K|degC]", 112, 0.0,\
 0.0,1E+100,300.0,0,544)
DeclareDerivative("WRG.T_VL.der(T)", "der(Temperature of the passing fluid) [K/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("WRG.T_VL.T_start", "Initial or guess value of output (= state) [K|degC]",\
 932, 293.15, 0.0,1E+100,300.0,0,560)
DeclareVariable("WRG.T_VL.transferHeat", "if true, temperature T converges towards TAmb when no flow [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("WRG.T_VL.TAmb", "Fixed ambient temperature for heat transfer [K|degC]",\
 933, 293.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("WRG.T_VL.tauHeaTra", "Time constant for heat transfer, default 20 minutes [s]",\
 934, 1200, 1.0,1E+100,0.0,0,560)
DeclareVariable("WRG.T_VL.tauHeaTraInv", "Dummy parameter to avoid division by tauHeaTra [1/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("WRG.T_VL.ratTau", "Ratio of tau [1]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("WRG.T_VL.TMed", "Medium temperature to which the sensor is exposed [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareVariable("WRG.T_VL.T_a_inflow", "Temperature of inflowing fluid at port_a [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareVariable("WRG.T_VL.T_b_inflow", "Temperature of inflowing fluid at port_b, or T_a_inflow if uni-directional flow [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareParameter("WRG.integrator1.k", "Integrator gain [1]", 935, \
2.7777777777777776E-07, 0.0,0.0,0.0,0,560)
DeclareVariable("WRG.integrator1.use_reset", "=true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("WRG.integrator1.use_set", "=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("WRG.integrator1.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareParameter("WRG.integrator1.y_start", "Initial or guess value of output (= state) [J]",\
 936, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("WRG.integrator1.u", "Connector of Real input signal [W]", \
"WRG.prescribedHeatFlow.Q_flow", 1, 5, 4902, 0)
DeclareState("WRG.integrator1.y", "Connector of Real output signal [J]", 113, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("WRG.integrator1.der(y)", "der(Connector of Real output signal) [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("WRG.integrator1.local_reset", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("WRG.integrator1.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareAlias2("WRG.switch2.u1", "Connector of first Real input signal [K]", \
"WRG.Vollast.k", 1, 7, 937, 0)
DeclareVariable("WRG.switch2.u2", "Connector of Boolean input signal [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,642)
DeclareAlias2("WRG.switch2.u3", "Connector of second Real input signal [K]", \
"WRG.T_VL.T", 1, 1, 112, 0)
DeclareAlias2("WRG.switch2.y", "Connector of Real output signal [K]", \
"WRG.PID.u_m", 1, 5, 4949, 0)
DeclareAlias2("WRG.booleanExpression.y", "Value of Boolean output [:#(type=Boolean)]",\
 "WRG.BHKW_stromgefuehrt", 1, 5, 4882, 65)
DeclareParameter("WRG.Vollast.k", "Constant output value [K]", 937, 273.15, \
0.0,0.0,0.0,0,560)
DeclareAlias2("WRG.Vollast.y", "Connector of Real output signal [K]", \
"WRG.Vollast.k", 1, 7, 937, 0)
DeclareVariable("WRG.and1.u1", "Connector of first Boolean input signal [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("WRG.and1.u2", "Connector of second Boolean input signal [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,642)
DeclareAlias2("WRG.and1.y", "Connector of Boolean output signal [:#(type=Boolean)]",\
 "WRG.switch2.u2", 1, 5, 6299, 65)
DeclareAlias2("WRG.abs1.u", "Connector of Real input signal [W]", \
"Verbraucher.signalBus.Q_p_th_Last", 1, 5, 2226, 0)
DeclareVariable("WRG.abs1.y", "Connector of Real output signal [W]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("WRG.abs1.generateEvent", "Choose whether events shall be generated [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("WRG.greaterEqualThreshold.threshold", "Comparison with respect to threshold",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("WRG.greaterEqualThreshold.u", "Connector of Real input signal [W]",\
 "WRG.abs1.y", 1, 5, 6302, 0)
DeclareAlias2("WRG.greaterEqualThreshold.y", "Connector of Boolean output signal [:#(type=Boolean)]",\
 "WRG.and1.u2", 1, 5, 6301, 65)
DeclareAlias2("WRG.signalBus.E_th_HK", "", "Verbraucher.signalBus.E_th_HK", 1, 5,\
 2216, 4)
DeclareAlias2("WRG.signalBus.E_bs_HK", "", "Heizkessel.integrator.y", 1, 1, 31, 4)
DeclareAlias2("WRG.signalBus.E_th_WRG", "[J]", "WRG.integrator1.y", 1, 1, 113, 4)
DeclareAlias2("WRG.signalBus.E_th_Last", "[J]", "Verbraucher.integrator2.y", 1, 1,\
 28, 4)
DeclareAlias2("WRG.signalBus.E_bs_th_BHKW", "", "BHKW_.integrator.y", 1, 1, 75, 4)
DeclareAlias2("WRG.signalBus.E_th_BHKW", "", "Verbraucher.signalBus.E_th_BHKW", 1,\
 5, 2217, 4)
DeclareAlias2("WRG.signalBus.E_bs_el_BHKW", "[J]", "wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.y", 1,\
 1, 123, 4)
DeclareAlias2("WRG.signalBus.E_el_bezug", "", "Stromerzeugung.integrator2.y", 1,\
 1, 37, 4)
DeclareAlias2("WRG.signalBus.P_EK_offline", "[W]", "Verbraucher.signalBus.P_EK_offline", 1,\
 5, 2218, 4)
DeclareAlias2("WRG.signalBus.P_EK", "[W]", "Verbraucher.signalBus.P_EK", 1, 5, 2219,\
 4)
DeclareAlias2("WRG.signalBus.P_BHKW", "[W]", "Verbraucher.signalBus.P_BHKW", 1, 5,\
 2220, 4)
DeclareAlias2("WRG.signalBus.P_Last", "[W]", "Verbraucher.signalBus.P_Last", 1, 5,\
 2221, 4)
DeclareAlias2("WRG.signalBus.P_Kt", "[W]", "Verbraucher.signalBus.P_Kt", 1, 5, 2222,\
 4)
DeclareAlias2("WRG.signalBus.Q_p_EK_offline", "[W]", "Elektrodenkessel.Q_p_ek", 1,\
 5, 9896, 4)
DeclareAlias2("WRG.signalBus.Q_p_EK", "[W]", "Verbraucher.signalBus.Q_p_EK", 1, 5,\
 2223, 4)
DeclareAlias2("WRG.signalBus.Q_p_Bs_el", "[W]", "Verbraucher.signalBus.Q_p_Bs_el", 1,\
 5, 2224, 4)
DeclareAlias2("WRG.signalBus.Q_p_Bs_offline", "[W]", "Verbraucher.signalBus.Q_p_Bs_offline", 1,\
 5, 2225, 4)
DeclareAlias2("WRG.signalBus.Q_p_th_Last", "[W]", "Verbraucher.signalBus.Q_p_th_Last", 1,\
 5, 2226, 4)
DeclareAlias2("WRG.signalBus.eta_th", "", "Verbraucher.signalBus.eta_th", 1, 5, 2227,\
 4)
DeclareAlias2("WRG.signalBus.eta_el", "", "Verbraucher.signalBus.eta_el", 1, 5, 2228,\
 4)
DeclareAlias2("WRG.signalBus.Grenzkosten", "[:#(type=Boolean)]", \
"Verbraucher.signalBus.Grenzkosten", 1, 5, 2229, 69)
DeclareAlias2("WRG.signalBus.T_ref_WRG", "[K|degC]", "WRG.T_VL.T", 1, 1, 112, 4)
DeclareAlias2("WRG.signalBus.T_ref_Puffer", "[K|degC]", "Pufferspeicher.T_VL_VK.T", 1,\
 1, 57, 4)
DeclareAlias2("WRG.signalBus.K_P_BHKW", "", "Verbraucher.signalBus.K_P_BHKW", 1,\
 5, 2230, 4)
DeclareAlias2("WRG.signalBus.Strompreis", "", "Verbraucher.signalBus.Strompreis", 1,\
 5, 2231, 4)
DeclareAlias2("WRG.signalBus.G_verg", "", "Verbraucher.signalBus.G_verg", 1, 5, 2232,\
 4)
DeclareAlias2("WRG.signalBus.K_bed_th", "", "Verbraucher.signalBus.K_bed_th", 1,\
 5, 2233, 4)
DeclareAlias2("WRG.signalBus.K_bed_el", "", "Verbraucher.signalBus.K_bed_el", 1,\
 5, 2234, 4)
DeclareAlias2("WRG.signalBus.K_w_kt", "", "Verbraucher.signalBus.K_w_kt", 1, 5, 2235,\
 4)
DeclareAlias2("WRG.signalBus.Feuchtkugeltemperatur", "[K]", "Verbraucher.signalBus.Feuchtkugeltemperatur", 1,\
 5, 2236, 4)
DeclareAlias2("WRG.booleanExpression1.y", "Value of Boolean output [:#(type=Boolean)]",\
 "WRG.konf_WRG", 1, 5, 4883, 65)
DeclareAlias2("WRG.booleanToReal.u", "Connector of Boolean input signal [:#(type=Boolean)]",\
 "WRG.konf_WRG", 1, 5, 4883, 65)
DeclareParameter("WRG.booleanToReal.realTrue", "Output signal for true Boolean input",\
 938, 1.0, 0.0,0.0,0.0,0,560)
DeclareParameter("WRG.booleanToReal.realFalse", "Output signal for false Boolean input",\
 939, 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("WRG.booleanToReal.y", "Connector of Real output signal", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("WRG.product3.u1", "Connector of Real input signal 1", 7.0, \
0.0,0.0,0.0,0,513)
DeclareAlias2("WRG.product3.u2", "Connector of Real input signal 2", \
"WRG.booleanToReal.y", 1, 5, 6305, 0)
DeclareAlias2("WRG.product3.y", "Connector of Real output signal", \
"WRG.product1.u2", 1, 5, 4946, 0)
DeclareAlias2("WRG.not1.u", "Connector of Boolean input signal [:#(type=Boolean)]",\
 "WRG.BHKW_stromgefuehrt", 1, 5, 4882, 65)
DeclareAlias2("WRG.not1.y", "Connector of Boolean output signal [:#(type=Boolean)]",\
 "WRG.and1.u1", 1, 5, 6300, 65)
DeclareVariable("WRG.Ventil_WRG.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("WRG.Ventil_WRG.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "WRG.port_a.m_flow", 1, 5, 4906, 132)
DeclareAlias2("WRG.Ventil_WRG.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Pufferspeicher.port_entladen_b.p", 1, 5, 2523, 4)
DeclareAlias2("WRG.Ventil_WRG.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "WRG.port_a.h_outflow", 1, 5, 4907, 4)
DeclareAlias2("WRG.Ventil_WRG.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "WRG.T_RL.port_b.m_flow", 1, 5, 4929, 132)
DeclareAlias2("WRG.Ventil_WRG.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "WRG.port_b.p", 1, 5, 4909, 4)
DeclareAlias2("WRG.Ventil_WRG.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "WRG.T_RL.port_b.h_outflow", 1, 5, 4930, 4)
DeclareVariable("WRG.Ventil_WRG.port_a_exposesState", "= true if port_a exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("WRG.Ventil_WRG.port_b_exposesState", "= true if port_b.p exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareParameter("WRG.Ventil_WRG.showDesignFlowDirection", "= false to hide the arrow in the model icon [:#(type=Boolean)]",\
 940, true, 0.0,0.0,0.0,0,2610)
DeclareVariable("WRG.Ventil_WRG.dp_start", "Guess value of dp = port_a.p - port_b.p [Pa|bar]",\
 300000, -1E+60,100000000.0,100000.0,0,513)
DeclareVariable("WRG.Ventil_WRG.m_flow_start", "Guess value of m_flow = port_a.m_flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("WRG.Ventil_WRG.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("WRG.Ventil_WRG.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("WRG.Ventil_WRG.show_V_flow", "= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("WRG.Ventil_WRG.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "WRG.port_a.m_flow", 1, 5, 4906, 0)
DeclareVariable("WRG.Ventil_WRG.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("WRG.Ventil_WRG.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("WRG.Ventil_WRG.port_a_T", "Temperature close to port_a, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("WRG.Ventil_WRG.port_b_T", "Temperature close to port_b, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareAlias2("WRG.Ventil_WRG.state_a.p", "Absolute pressure of medium [Pa|bar]",\
 "Pufferspeicher.port_entladen_b.p", 1, 5, 2523, 1024)
DeclareVariable("WRG.Ventil_WRG.state_a.T", "Temperature of medium [K|degC]", \
293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("WRG.Ventil_WRG.state_b.p", "Absolute pressure of medium [Pa|bar]",\
 "WRG.port_b.p", 1, 5, 4909, 1024)
DeclareVariable("WRG.Ventil_WRG.state_b.T", "Temperature of medium [K|degC]", \
293.15, 1.0,10000.0,300.0,0,2560)
DeclareParameter("WRG.Ventil_WRG.dp_nominal", "Nominal pressure drop at full opening=1 [Pa|bar]",\
 941, 1000, 0.0,1E+100,100000.0,0,560)
DeclareParameter("WRG.Ventil_WRG.m_flow_nominal", "Nominal mass flowrate at full opening=1 [kg/s]",\
 942, 69.4, -100000.0,100000.0,0.0,0,560)
DeclareVariable("WRG.Ventil_WRG.k", "Hydraulic conductance at full opening=1 [kg/(s.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("WRG.Ventil_WRG.open", "[:#(type=Boolean)]", "WRG.konf_WRG", 1, 5,\
 4883, 65)
DeclareParameter("WRG.Ventil_WRG.opening_min", "Remaining opening if closed, causing small leakage flow [1]",\
 943, 0, 0.0,1E+100,0.0,0,560)
DeclareVariable("Strommarkt.Volatil", "[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.product.u1", "Connector of Real input signal 1", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareVariable("Strommarkt.product.u2", "Connector of Real input signal 2", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareVariable("Strommarkt.product.y", "Connector of Real output signal", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.nout", "Number of outputs [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareAlias2("Strommarkt.__ctt__Preise_Winter.y[1]", "Connector of Real output signals",\
 "Strommarkt.product.u1", 1, 5, 6323, 0)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.tableOnFile", "= true, if table is defined on file or in function usertab [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[1, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[1, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.083990937, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[2, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[2, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.070354502, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[3, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[3, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.062800457, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[4, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[4, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.055131789, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[5, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[5, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.061051886, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[6, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[6, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.094009686, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[7, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[7, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.184538602, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[8, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[8, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.247663185, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[9, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[9, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.259972181, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[10, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[10, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.232114856, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[11, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[11, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.203540782, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[12, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[12, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.190428807, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[13, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 13.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[13, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.169355668, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[14, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[14, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.156125507, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[15, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[15, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.156867847, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[16, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[16, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.176652562, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[17, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[17, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.194180447, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[18, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[18, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.240102936, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[19, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[19, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.270590647, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[20, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[20, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.286067724, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[21, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[21, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.246369952, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[22, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[22, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.202845229, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[23, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[23, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.170154843, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[24, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[24, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.126096457, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[25, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[25, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.121220122, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[26, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[26, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.109894441, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[27, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 27.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[27, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.100901382, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[28, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[28, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.095311207, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[29, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[29, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.100897499, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[30, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[30, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.123543534, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[31, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 31.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[31, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.194966907, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[32, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 32.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[32, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.26277234, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[33, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 33.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[33, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.28030526, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[34, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 34.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[34, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.249715346, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[35, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 35.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[35, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.225600751, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[36, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 36.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[36, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.214726112, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[37, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 37.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[37, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.188584999, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[38, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 38.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[38, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.180615778, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[39, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 39.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[39, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.172675031, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[40, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 40.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[40, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.184436205, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[41, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 41.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[41, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.197368519, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[42, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 42.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[42, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.240742751, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[43, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 43.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[43, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.266261604, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[44, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 44.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[44, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.275874447, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[45, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 45.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[45, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.239713585, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[46, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 46.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[46, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.19996487, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[47, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 47.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[47, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.1729409, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[48, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 48.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[48, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.136154664, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[49, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 49.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[49, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.121851991, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[50, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 50.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[50, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.1103896, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[51, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 51.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[51, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.099748438, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[52, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 52.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[52, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.096445731, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[53, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 53.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[53, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.104059774, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[54, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 54.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[54, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.127601676, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[55, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 55.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[55, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.203269844, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[56, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 56.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[56, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.27548132, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[57, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 57.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[57, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.293328684, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[58, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 58.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[58, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.260313647, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[59, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 59.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[59, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.231037803, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[60, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 60.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[60, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.221722257, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[61, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 61.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[61, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.194497957, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[62, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 62.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[62, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.187194069, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[63, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[63, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.1850644, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[64, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 64.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[64, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.191319089, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[65, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[65, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.206422719, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[66, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[66, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.255641753, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[67, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[67, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.281012869, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[68, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[68, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.286595037, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[69, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[69, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.24531999, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[70, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 70.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[70, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.204443941, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[71, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[71, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.174360789, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[72, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[72, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.129112791, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[73, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[73, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.111230366, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[74, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[74, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.100723167, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[75, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[75, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.090382609, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[76, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[76, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.086832403, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[77, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[77, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.094967402, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[78, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 78.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[78, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.11876342, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[79, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[79, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.190166666, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[80, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[80, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.257394857, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[81, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[81, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.269154811, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[82, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[82, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.237434797, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[83, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[83, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.210305897, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[84, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[84, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.196645325, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[85, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[85, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.17214367, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[86, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[86, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.165658146, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[87, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[87, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.161967446, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[88, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[88, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.173833811, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[89, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[89, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.183412122, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[90, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[90, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.231195746, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[91, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[91, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.258364731, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[92, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 92.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[92, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.272781829, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[93, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 93.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[93, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.234600094, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[94, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 94.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[94, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.197493631, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[95, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 95.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[95, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.168532783, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[96, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 96.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[96, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.13250765, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[97, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 97.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[97, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.116596244, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[98, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 98.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[98, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.104495858, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[99, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 99.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[99, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.095412396, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[100, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 100.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[100, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.095374037, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[101, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 101.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[101, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.105137645, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[102, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 102.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[102, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.128605897, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[103, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 103.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[103, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.197524768, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[104, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 104.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[104, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.259861847, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[105, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 105.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[105, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.273148294, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[106, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 106.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[106, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.249833062, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[107, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 107.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[107, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.227583254, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[108, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 108.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[108, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.215576991, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[109, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 109.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[109, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.189568589, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[110, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 110.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[110, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.170235071, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[111, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 111.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[111, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.163494671, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[112, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 112.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[112, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.170865336, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[113, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 113.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[113, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.182581461, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[114, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 114.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[114, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.219637164, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[115, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 115.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[115, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.249880639, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[116, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 116.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[116, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.255820578, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[117, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 117.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[117, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.228896786, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[118, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 118.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[118, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.194217734, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[119, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 119.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[119, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.173905746, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[120, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 120.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[120, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.138733895, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[121, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 121.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[121, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.124026035, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[122, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 122.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[122, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.103635748, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[123, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 123.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[123, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.094127791, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[124, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 124.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[124, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.089487369, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[125, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 125.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[125, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.086884664, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[126, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 126.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[126, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.090410223, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[127, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 127.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[127, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.101251755, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[128, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 128.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[128, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.128809603, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[129, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 129.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[129, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.158290788, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[130, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 130.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[130, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.164838509, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[131, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 131.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[131, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.143940056, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[132, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 132.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[132, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.129636111, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[133, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 133.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[133, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.115055492, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[134, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 134.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[134, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.094512212, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[135, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 135.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[135, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.083922927, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[136, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 136.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[136, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.09357261,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[137, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 137.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[137, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.111722948, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[138, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 138.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[138, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.152836319, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[139, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 139.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[139, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.19022009,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[140, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 140.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[140, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.204753345, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[141, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 141.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[141, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.178894025, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[142, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 142.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[142, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.148181882, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[143, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 143.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[143, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.13676262,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[144, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 144.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[144, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.096368236, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[145, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 145.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[145, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.066479719, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[146, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 146.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[146, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.046136206, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[147, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 147.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[147, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.030070436, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[148, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 148.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[148, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.030530385, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[149, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 149.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[149, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.02996738,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[150, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 150.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[150, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.030052981, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[151, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 151.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[151, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.032070936, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[152, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 152.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[152, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.038924739, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[153, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 153.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[153, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.059032699, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[154, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 154.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[154, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.066596029, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[155, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 155.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[155, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.059499371, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[156, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 156.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[156, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.066530271, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[157, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 157.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[157, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.042076944, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[158, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 158.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[158, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.001248606, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[159, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 159.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[159, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
-0.020799345, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[160, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 160.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[160, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
-0.002807522, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[161, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 161.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[161, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.027820977, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[162, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 162.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[162, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.099233653, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[163, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 163.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[163, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.158036732, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[164, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 164.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[164, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.184692078, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[165, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 165.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[165, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.174143644, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[166, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 166.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[166, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.15150415,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[167, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 167.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[167, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.143721384, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[168, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 168.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.table[168, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.089182935, 0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.__ctt__Preise_Winter.verboseRead", "= true, if info message that file is loading is to be printed [:#(type=Boolean)]",\
 944, false, 0.0,0.0,0.0,0,562)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.columns[1]", "Columns of table to be interpolated [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.smoothness", "Smoothness of table interpolation [:#(type=Modelica.Blocks.Types.Smoothness)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.extrapolation", \
"Extrapolation of data outside the definition range [:#(type=Modelica.Blocks.Types.Extrapolation)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.timeScale", "Time scale of first table column [s|h]",\
 3600, 1E-15,1E+100,0.0,0,513)
DeclareParameter("Strommarkt.__ctt__Preise_Winter.offset[1]", "Offsets of output signals",\
 945, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("Strommarkt.__ctt__Preise_Winter.startTime", "Output = offset for time < startTime [s]",\
 946, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.shiftTime", "Shift time of first table column [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.__ctt__Preise_Winter.timeEvents", "Time event handling of table interpolation [:#(type=Modelica.Blocks.Types.TimeEvents)]",\
 947, 1, 1.0,3.0,0.0,0,564)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.verboseExtrapolation", \
"= true, if warning messages are to be printed if time is outside the table definition range [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.t_min", "Minimum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.t_max", "Maximum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.t_minScaled", "Minimum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.t_maxScaled", "Maximum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.p_offset[1]", "Offsets of output signals",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.tableID.id", "[:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.nextTimeEvent", \
"Next time event instant [s]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.nextTimeEventScaled", \
"Next scaled time event instant [1]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.__ctt__Preise_Winter.timeScaled", "Scaled time [1]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.nout", "Number of outputs [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.y[1]", "Connector of Real output signals",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.tableOnFile", "= true, if table is defined on file or in function usertab [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[1, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[1, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.083990937, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[2, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[2, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.070354502, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[3, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[3, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.062800457, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[4, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[4, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.055131789, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[5, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[5, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.061051886, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[6, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[6, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.094009686, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[7, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[7, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.184538602, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[8, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[8, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.247663185, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[9, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[9, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.259972181, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[10, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[10, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.232114856, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[11, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[11, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.203540782, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[12, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[12, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.190428807, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[13, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 13.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[13, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.169355668, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[14, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[14, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.156125507, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[15, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[15, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.156867847, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[16, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[16, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.176652562, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[17, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[17, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.194180447, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[18, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[18, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.240102936, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[19, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[19, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.270590647, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[20, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[20, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.286067724, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[21, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[21, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.246369952, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[22, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[22, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.202845229, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[23, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[23, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.170154843, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[24, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[24, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.126096457, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[25, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[25, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.121220122, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[26, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[26, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.109894441, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[27, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 27.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[27, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.100901382, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[28, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[28, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.095311207, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[29, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[29, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.100897499, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[30, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[30, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.123543534, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[31, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 31.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[31, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.194966907, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[32, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 32.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[32, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.26277234, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[33, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 33.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[33, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.28030526, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[34, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 34.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[34, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.249715346, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[35, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 35.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[35, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.225600751, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[36, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 36.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[36, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.214726112, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[37, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 37.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[37, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.188584999, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[38, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 38.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[38, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.180615778, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[39, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 39.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[39, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.172675031, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[40, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 40.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[40, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.184436205, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[41, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 41.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[41, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.197368519, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[42, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 42.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[42, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.240742751, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[43, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 43.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[43, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.266261604, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[44, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 44.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[44, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.275874447, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[45, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 45.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[45, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.239713585, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[46, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 46.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[46, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.19996487, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[47, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 47.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[47, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.1729409, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[48, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 48.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[48, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.136154664, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[49, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 49.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[49, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.121851991, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[50, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 50.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[50, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.1103896, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[51, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 51.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[51, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.099748438, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[52, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 52.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[52, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.096445731, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[53, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 53.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[53, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.104059774, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[54, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 54.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[54, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.127601676, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[55, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 55.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[55, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.203269844, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[56, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 56.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[56, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.27548132, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[57, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 57.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[57, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.293328684, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[58, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 58.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[58, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.260313647, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[59, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 59.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[59, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.231037803, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[60, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 60.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[60, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.221722257, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[61, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 61.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[61, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.194497957, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[62, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 62.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[62, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.187194069, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[63, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[63, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.1850644, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[64, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 64.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[64, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.191319089, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[65, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[65, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.206422719, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[66, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[66, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.255641753, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[67, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[67, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.281012869, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[68, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[68, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.286595037, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[69, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[69, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.24531999, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[70, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 70.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[70, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.204443941, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[71, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[71, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.174360789, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[72, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[72, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.129112791, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[73, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[73, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.111230366, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[74, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[74, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.100723167, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[75, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[75, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.090382609, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[76, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[76, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.086832403, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[77, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[77, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.094967402, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[78, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 78.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[78, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.11876342, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[79, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[79, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.190166666, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[80, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[80, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.257394857, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[81, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[81, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.269154811, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[82, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[82, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.237434797, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[83, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[83, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.210305897, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[84, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[84, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.196645325, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[85, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[85, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.17214367, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[86, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[86, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.165658146, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[87, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[87, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.161967446, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[88, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[88, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.173833811, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[89, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[89, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.183412122, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[90, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[90, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.231195746, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[91, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[91, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.258364731, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[92, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 92.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[92, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.272781829, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[93, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 93.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[93, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.234600094, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[94, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 94.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[94, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.197493631, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[95, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 95.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[95, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.168532783, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[96, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 96.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[96, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.13250765, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[97, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 97.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[97, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.116596244, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[98, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 98.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[98, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.104495858, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[99, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 99.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[99, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.095412396, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[100, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 100.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[100, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.095374037, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[101, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 101.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[101, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.105137645, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[102, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 102.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[102, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.128605897, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[103, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 103.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[103, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.197524768, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[104, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 104.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[104, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.259861847, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[105, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 105.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[105, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.273148294, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[106, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 106.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[106, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.249833062, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[107, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 107.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[107, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.227583254, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[108, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 108.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[108, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.215576991, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[109, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 109.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[109, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.189568589, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[110, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 110.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[110, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.170235071, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[111, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 111.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[111, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.163494671, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[112, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 112.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[112, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.170865336, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[113, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 113.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[113, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.182581461, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[114, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 114.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[114, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.219637164, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[115, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 115.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[115, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.249880639, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[116, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 116.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[116, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.255820578, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[117, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 117.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[117, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.228896786, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[118, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 118.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[118, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.194217734, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[119, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 119.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[119, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.173905746, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[120, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 120.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[120, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.138733895, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[121, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 121.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[121, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.124026035, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[122, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 122.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[122, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.103635748, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[123, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 123.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[123, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.094127791, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[124, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 124.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[124, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.089487369, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[125, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 125.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[125, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.086884664, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[126, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 126.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[126, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.090410223, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[127, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 127.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[127, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.101251755, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[128, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 128.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[128, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.128809603, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[129, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 129.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[129, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.158290788, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[130, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 130.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[130, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.164838509, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[131, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 131.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[131, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.143940056, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[132, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 132.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[132, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.129636111, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[133, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 133.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[133, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.115055492, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[134, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 134.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[134, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.094512212, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[135, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 135.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[135, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.083922927, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[136, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 136.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[136, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.09357261,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[137, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 137.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[137, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.111722948, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[138, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 138.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[138, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.152836319, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[139, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 139.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[139, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.19022009,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[140, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 140.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[140, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.204753345, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[141, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 141.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[141, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.178894025, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[142, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 142.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[142, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.148181882, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[143, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 143.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[143, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.13676262,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[144, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 144.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[144, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.096368236, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[145, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 145.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[145, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.066479719, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[146, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 146.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[146, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.046136206, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[147, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 147.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[147, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.030070436, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[148, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 148.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[148, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.030530385, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[149, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 149.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[149, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.02996738,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[150, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 150.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[150, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.030052981, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[151, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 151.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[151, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.032070936, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[152, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 152.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[152, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.038924739, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[153, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 153.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[153, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.059032699, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[154, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 154.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[154, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.066596029, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[155, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 155.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[155, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.059499371, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[156, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 156.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[156, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.066530271, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[157, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 157.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[157, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.042076944, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[158, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 158.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[158, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.001248606, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[159, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 159.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[159, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
-0.020799345, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[160, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 160.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[160, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
-0.002807522, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[161, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 161.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[161, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.027820977, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[162, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 162.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[162, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.099233653, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[163, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 163.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[163, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.158036732, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[164, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 164.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[164, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.184692078, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[165, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 165.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[165, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.174143644, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[166, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 166.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[166, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.15150415,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[167, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 167.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[167, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.143721384, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[168, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 168.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.table[168, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.089182935, 0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.__ctt__Preise_Sommer.verboseRead", "= true, if info message that file is loading is to be printed [:#(type=Boolean)]",\
 948, true, 0.0,0.0,0.0,0,562)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.columns[1]", "Columns of table to be interpolated [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.smoothness", "Smoothness of table interpolation [:#(type=Modelica.Blocks.Types.Smoothness)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.extrapolation", \
"Extrapolation of data outside the definition range [:#(type=Modelica.Blocks.Types.Extrapolation)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.timeScale", "Time scale of first table column [s|h]",\
 3600, 1E-15,1E+100,0.0,0,513)
DeclareParameter("Strommarkt.__ctt__Preise_Sommer.offset[1]", "Offsets of output signals",\
 949, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("Strommarkt.__ctt__Preise_Sommer.startTime", "Output = offset for time < startTime [s]",\
 950, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.shiftTime", "Shift time of first table column [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.__ctt__Preise_Sommer.timeEvents", "Time event handling of table interpolation [:#(type=Modelica.Blocks.Types.TimeEvents)]",\
 951, 1, 1.0,3.0,0.0,0,564)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.verboseExtrapolation", \
"= true, if warning messages are to be printed if time is outside the table definition range [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.t_min", "Minimum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.t_max", "Maximum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.t_minScaled", "Minimum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.t_maxScaled", "Maximum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.p_offset[1]", "Offsets of output signals",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.tableID.id", "[:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.nextTimeEvent", \
"Next time event instant [s]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.nextTimeEventScaled", \
"Next scaled time event instant [1]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.__ctt__Preise_Sommer.timeScaled", "Scaled time [1]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.nout", "Number of outputs [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.y[1]", "Connector of Real output signals",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.tableOnFile", \
"= true, if table is defined on file or in function usertab [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[1, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[1, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.083990937, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[2, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 2.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[2, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.070354502, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[3, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 3.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[3, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.062800457, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[4, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 4.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[4, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.055131789, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[5, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 5.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[5, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.061051886, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[6, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 6.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[6, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.094009686, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[7, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 7.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[7, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.184538602, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[8, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 8.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[8, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.247663185, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[9, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 9.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[9, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.259972181, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[10, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 10.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[10, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.232114856, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[11, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 11.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[11, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.203540782, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[12, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 12.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[12, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.190428807, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[13, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 13.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[13, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.169355668, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[14, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 14.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[14, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.156125507, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[15, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 15.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[15, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.156867847, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[16, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 16.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[16, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.176652562, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[17, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 17.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[17, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.194180447, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[18, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 18.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[18, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.240102936, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[19, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 19.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[19, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.270590647, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[20, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 20.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[20, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.286067724, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[21, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 21.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[21, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.246369952, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[22, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 22.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[22, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.202845229, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[23, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 23.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[23, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.170154843, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[24, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 24.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[24, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.126096457, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[25, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 25.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[25, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.121220122, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[26, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 26.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[26, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.109894441, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[27, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 27.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[27, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.100901382, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[28, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 28.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[28, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.095311207, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[29, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 29.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[29, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.100897499, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[30, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 30.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[30, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.123543534, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[31, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 31.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[31, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.194966907, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[32, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 32.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[32, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.26277234,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[33, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 33.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[33, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.28030526,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[34, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 34.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[34, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.249715346, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[35, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 35.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[35, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.225600751, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[36, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 36.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[36, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.214726112, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[37, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 37.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[37, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.188584999, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[38, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 38.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[38, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.180615778, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[39, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 39.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[39, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.172675031, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[40, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 40.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[40, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.184436205, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[41, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 41.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[41, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.197368519, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[42, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 42.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[42, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.240742751, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[43, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 43.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[43, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.266261604, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[44, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 44.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[44, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.275874447, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[45, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 45.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[45, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.239713585, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[46, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 46.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[46, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.19996487,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[47, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 47.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[47, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.1729409,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[48, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 48.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[48, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.136154664, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[49, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 49.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[49, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.121851991, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[50, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 50.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[50, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.1103896,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[51, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 51.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[51, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.099748438, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[52, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 52.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[52, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.096445731, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[53, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 53.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[53, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.104059774, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[54, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 54.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[54, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.127601676, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[55, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 55.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[55, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.203269844, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[56, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 56.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[56, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.27548132,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[57, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 57.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[57, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.293328684, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[58, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 58.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[58, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.260313647, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[59, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 59.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[59, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.231037803, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[60, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 60.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[60, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.221722257, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[61, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 61.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[61, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.194497957, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[62, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 62.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[62, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.187194069, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[63, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 63.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[63, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.1850644,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[64, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 64.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[64, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.191319089, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[65, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 65.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[65, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.206422719, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[66, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 66.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[66, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.255641753, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[67, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 67.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[67, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.281012869, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[68, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 68.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[68, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.286595037, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[69, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 69.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[69, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.24531999,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[70, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 70.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[70, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.204443941, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[71, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 71.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[71, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.174360789, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[72, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 72.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[72, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.129112791, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[73, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 73.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[73, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.111230366, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[74, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 74.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[74, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.100723167, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[75, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 75.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[75, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.090382609, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[76, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 76.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[76, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.086832403, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[77, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 77.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[77, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.094967402, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[78, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 78.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[78, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.11876342,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[79, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 79.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[79, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.190166666, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[80, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 80.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[80, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.257394857, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[81, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 81.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[81, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.269154811, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[82, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 82.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[82, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.237434797, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[83, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 83.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[83, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.210305897, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[84, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 84.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[84, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.196645325, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[85, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 85.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[85, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.17214367,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[86, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 86.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[86, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.165658146, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[87, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 87.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[87, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.161967446, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[88, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 88.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[88, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.173833811, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[89, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 89.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[89, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.183412122, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[90, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 90.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[90, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.231195746, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[91, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 91.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[91, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.258364731, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[92, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 92.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[92, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.272781829, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[93, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 93.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[93, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.234600094, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[94, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 94.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[94, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.197493631, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[95, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 95.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[95, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.168532783, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[96, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 96.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[96, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.13250765,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[97, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 97.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[97, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.116596244, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[98, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 98.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[98, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.104495858, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[99, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 99.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[99, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.095412396, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[100, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 100.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[100, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.095374037, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[101, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 101.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[101, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.105137645, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[102, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 102.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[102, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.128605897, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[103, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 103.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[103, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.197524768, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[104, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 104.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[104, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.259861847, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[105, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 105.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[105, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.273148294, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[106, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 106.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[106, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.249833062, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[107, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 107.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[107, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.227583254, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[108, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 108.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[108, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.215576991, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[109, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 109.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[109, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.189568589, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[110, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 110.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[110, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.170235071, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[111, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 111.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[111, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.163494671, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[112, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 112.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[112, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.170865336, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[113, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 113.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[113, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.182581461, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[114, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 114.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[114, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.219637164, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[115, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 115.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[115, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.249880639, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[116, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 116.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[116, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.255820578, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[117, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 117.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[117, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.228896786, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[118, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 118.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[118, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.194217734, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[119, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 119.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[119, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.173905746, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[120, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 120.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[120, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.138733895, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[121, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 121.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[121, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.124026035, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[122, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 122.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[122, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.103635748, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[123, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 123.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[123, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.094127791, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[124, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 124.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[124, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.089487369, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[125, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 125.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[125, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.086884664, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[126, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 126.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[126, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.090410223, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[127, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 127.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[127, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.101251755, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[128, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 128.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[128, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.128809603, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[129, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 129.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[129, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.158290788, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[130, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 130.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[130, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.164838509, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[131, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 131.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[131, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.143940056, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[132, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 132.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[132, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.129636111, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[133, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 133.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[133, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.115055492, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[134, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 134.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[134, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.094512212, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[135, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 135.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[135, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.083922927, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[136, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 136.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[136, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.09357261,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[137, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 137.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[137, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.111722948, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[138, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 138.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[138, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.152836319, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[139, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 139.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[139, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.19022009,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[140, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 140.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[140, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.204753345, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[141, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 141.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[141, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.178894025, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[142, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 142.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[142, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.148181882, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[143, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 143.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[143, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.13676262,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[144, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 144.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[144, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.096368236, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[145, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 145.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[145, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.066479719, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[146, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 146.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[146, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.046136206, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[147, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 147.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[147, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.030070436, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[148, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 148.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[148, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.030530385, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[149, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 149.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[149, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.02996738,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[150, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 150.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[150, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.030052981, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[151, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 151.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[151, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.032070936, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[152, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 152.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[152, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.038924739, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[153, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 153.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[153, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.059032699, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[154, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 154.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[154, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.066596029, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[155, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 155.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[155, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.059499371, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[156, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 156.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[156, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.066530271, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[157, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 157.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[157, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.042076944, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[158, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 158.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[158, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.001248606, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[159, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 159.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[159, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
-0.020799345, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[160, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 160.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[160, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
-0.002807522, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[161, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 161.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[161, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.027820977, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[162, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 162.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[162, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.099233653, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[163, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 163.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[163, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.158036732, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[164, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 164.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[164, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.184692078, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[165, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 165.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[165, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.174143644, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[166, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 166.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[166, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0.15150415,\
 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[167, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 167.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[167, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.143721384, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[168, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 168.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.table[168, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", \
0.089182935, 0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.__ctt__Preise_Uebergangszeit.verboseRead", \
"= true, if info message that file is loading is to be printed [:#(type=Boolean)]",\
 952, true, 0.0,0.0,0.0,0,562)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.columns[1]", \
"Columns of table to be interpolated [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,517)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.smoothness", \
"Smoothness of table interpolation [:#(type=Modelica.Blocks.Types.Smoothness)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.extrapolation", \
"Extrapolation of data outside the definition range [:#(type=Modelica.Blocks.Types.Extrapolation)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.timeScale", \
"Time scale of first table column [s|h]", 3600, 1E-15,1E+100,0.0,0,513)
DeclareParameter("Strommarkt.__ctt__Preise_Uebergangszeit.offset[1]", \
"Offsets of output signals", 953, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("Strommarkt.__ctt__Preise_Uebergangszeit.startTime", \
"Output = offset for time < startTime [s]", 954, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.shiftTime", \
"Shift time of first table column [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.__ctt__Preise_Uebergangszeit.timeEvents", \
"Time event handling of table interpolation [:#(type=Modelica.Blocks.Types.TimeEvents)]",\
 955, 1, 1.0,3.0,0.0,0,564)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.verboseExtrapolation", \
"= true, if warning messages are to be printed if time is outside the table definition range [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.t_min", \
"Minimum abscissa value defined in table [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.t_max", \
"Maximum abscissa value defined in table [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.t_minScaled", \
"Minimum (scaled) abscissa value defined in table [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.t_maxScaled", \
"Maximum (scaled) abscissa value defined in table [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.p_offset[1]", \
"Offsets of output signals", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.tableID.id", \
"[:#(type=Integer)]", 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.nextTimeEvent", \
"Next time event instant [s]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.nextTimeEventScaled", \
"Next scaled time event instant [1]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.__ctt__Preise_Uebergangszeit.timeScaled", \
"Scaled time [1]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("Strommarkt.Zuweisung_Winter.nout", "Number of outputs [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareAlias2("Strommarkt.Zuweisung_Winter.y[1]", "Connector of Real output signals",\
 "Strommarkt.product.u2", 1, 5, 6324, 0)
DeclareVariable("Strommarkt.Zuweisung_Winter.tableOnFile", "= true, if table is defined on file or in function usertab [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[1, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[1, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[2, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[2, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[3, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[3, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[4, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[4, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[5, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[5, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[6, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[6, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[7, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[7, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[8, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[8, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[9, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[9, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[10, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[10, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[11, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[11, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[12, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[12, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[13, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 13, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[13, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[14, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[14, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[15, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[15, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[16, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[16, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[17, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[17, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[18, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[18, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[19, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[19, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[20, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[20, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[21, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[21, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[22, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[22, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[23, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[23, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[24, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[24, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[25, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[25, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[26, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[26, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[27, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 27, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[27, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[28, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[28, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[29, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[29, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[30, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[30, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[31, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 31, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[31, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[32, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 32, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[32, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[33, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 33, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[33, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[34, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 34, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[34, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[35, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 35, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[35, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[36, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 36, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[36, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[37, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 37, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[37, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[38, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 38, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[38, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[39, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 39, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[39, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[40, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 40, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[40, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[41, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 41, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[41, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[42, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 42, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[42, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[43, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 43, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[43, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[44, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 44, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[44, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[45, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 45, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[45, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[46, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 46, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[46, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[47, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 47, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[47, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[48, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 48, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[48, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[49, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 49, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[49, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[50, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 50, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[50, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[51, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 51, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[51, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[52, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 52, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[52, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[53, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 53, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[53, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[54, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 54, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[54, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[55, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 55, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[55, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[56, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 56, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[56, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[57, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 57, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[57, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[58, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 58, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[58, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[59, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 59, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[59, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[60, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 60, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[60, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[61, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 61, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[61, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[62, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 62, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[62, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[63, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[63, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[64, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 64, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[64, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[65, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[65, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[66, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[66, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[67, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[67, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[68, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[68, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[69, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[69, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[70, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 70, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[70, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[71, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[71, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[72, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[72, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[73, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[73, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[74, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[74, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[75, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[75, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[76, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[76, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[77, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[77, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[78, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 78, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[78, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[79, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[79, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[80, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[80, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[81, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[81, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[82, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[82, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[83, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[83, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[84, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[84, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[85, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[85, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[86, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[86, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[87, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[87, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[88, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[88, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[89, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[89, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[90, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[90, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[91, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[91, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[92, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 92, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[92, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[93, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 93, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[93, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[94, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 94, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[94, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[95, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 95, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[95, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[96, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 96, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[96, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[97, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 97, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[97, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[98, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 98, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[98, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[99, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 99, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[99, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[100, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 100, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[100, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[101, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 101, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[101, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[102, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 102, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[102, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[103, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 103, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[103, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[104, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 104, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[104, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[105, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 105, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[105, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[106, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 106, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[106, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[107, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 107, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[107, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[108, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 108, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[108, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[109, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 109, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[109, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[110, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 110, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[110, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[111, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 111, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[111, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[112, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 112, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[112, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[113, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 113, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[113, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[114, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 114, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[114, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[115, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 115, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[115, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[116, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 116, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[116, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[117, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 117, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[117, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[118, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 118, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[118, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[119, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 119, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[119, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[120, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 120, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[120, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[121, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 121, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[121, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[122, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 122, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[122, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[123, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 123, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[123, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[124, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 124, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[124, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[125, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 125, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[125, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[126, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 126, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[126, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[127, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 127, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[127, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[128, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 128, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[128, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[129, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 129, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[129, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[130, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 130, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[130, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[131, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 131, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[131, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[132, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 132, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[132, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[133, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 133, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[133, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[134, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 134, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[134, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[135, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 135, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[135, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[136, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 136, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[136, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[137, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 137, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[137, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[138, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 138, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[138, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[139, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 139, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[139, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[140, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 140, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[140, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[141, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 141, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[141, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[142, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 142, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[142, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[143, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 143, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[143, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[144, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 144, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[144, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[145, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 145, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[145, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[146, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 146, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[146, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[147, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 147, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[147, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[148, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 148, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[148, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[149, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 149, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[149, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[150, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 150, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[150, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[151, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 151, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[151, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[152, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 152, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[152, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[153, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 153, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[153, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[154, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 154, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[154, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[155, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 155, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[155, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[156, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 156, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[156, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[157, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 157, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[157, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[158, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 158, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[158, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[159, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 159, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[159, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[160, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 160, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[160, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[161, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 161, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[161, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[162, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 162, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[162, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[163, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 163, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[163, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[164, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 164, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[164, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[165, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 165, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[165, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[166, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 166, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[166, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[167, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 167, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[167, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[168, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 168, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[168, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[169, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 169, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[169, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[170, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 170, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[170, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[171, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 171, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[171, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[172, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 172, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[172, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[173, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 173, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[173, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[174, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 174, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[174, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[175, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 175, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[175, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[176, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 176, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[176, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[177, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 177, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[177, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[178, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 178, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[178, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[179, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 179, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[179, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[180, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 180, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[180, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[181, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 181, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[181, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[182, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 182, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[182, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[183, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 183, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[183, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[184, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 184, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[184, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[185, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 185, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[185, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[186, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 186, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[186, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[187, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 187, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[187, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[188, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 188, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[188, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[189, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 189, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[189, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[190, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 190, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[190, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[191, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 191, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[191, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[192, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 192, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[192, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[193, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 193, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[193, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[194, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 194, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[194, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[195, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 195, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[195, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[196, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 196, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[196, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[197, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 197, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[197, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[198, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 198, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[198, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[199, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 199, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[199, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[200, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 200, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[200, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[201, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 201, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[201, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[202, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 202, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[202, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[203, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 203, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[203, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[204, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 204, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[204, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[205, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 205, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[205, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[206, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 206, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[206, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[207, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 207, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[207, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[208, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 208, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[208, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[209, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 209, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[209, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[210, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 210, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[210, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[211, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 211, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[211, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[212, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 212, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[212, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[213, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 213, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[213, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[214, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 214, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[214, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[215, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 215, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[215, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[216, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 216, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[216, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[217, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 217, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[217, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[218, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 218, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[218, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[219, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 219, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[219, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[220, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 220, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[220, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[221, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 221, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[221, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[222, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 222, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[222, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[223, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 223, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[223, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[224, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 224, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[224, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[225, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 225, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[225, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[226, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 226, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[226, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[227, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 227, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[227, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[228, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 228, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[228, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[229, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 229, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[229, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[230, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 230, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[230, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[231, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 231, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[231, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[232, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 232, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[232, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[233, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 233, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[233, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[234, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 234, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[234, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[235, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 235, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[235, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[236, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 236, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[236, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[237, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 237, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[237, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[238, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 238, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[238, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[239, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 239, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[239, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[240, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 240, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[240, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[241, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 241, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[241, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[242, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 242, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[242, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[243, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 243, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[243, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[244, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 244, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[244, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[245, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 245, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[245, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[246, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 246, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[246, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[247, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 247, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[247, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[248, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 248, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[248, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[249, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 249, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[249, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[250, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 250, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[250, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[251, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 251, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[251, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[252, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 252, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[252, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[253, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 253, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[253, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[254, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 254, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[254, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[255, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 255, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[255, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[256, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 256, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[256, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[257, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 257, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[257, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[258, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 258, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[258, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[259, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 259, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[259, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[260, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 260, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[260, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[261, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 261, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[261, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[262, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 262, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[262, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[263, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 263, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[263, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[264, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 264, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[264, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[265, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 265, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[265, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[266, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 266, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[266, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[267, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 267, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[267, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[268, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 268, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[268, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[269, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 269, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[269, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[270, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 270, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[270, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[271, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 271, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[271, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[272, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 272, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[272, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[273, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 273, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[273, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[274, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 274, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[274, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[275, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 275, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[275, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[276, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 276, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[276, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[277, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 277, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[277, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[278, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 278, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[278, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[279, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 279, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[279, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[280, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 280, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[280, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[281, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 281, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[281, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[282, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 282, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[282, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[283, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 283, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[283, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[284, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 284, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[284, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[285, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 285, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[285, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[286, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 286, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[286, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[287, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 287, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[287, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[288, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 288, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[288, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[289, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 289, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[289, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[290, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 290, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[290, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[291, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 291, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[291, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[292, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 292, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[292, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[293, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 293, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[293, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[294, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 294, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[294, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[295, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 295, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[295, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[296, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 296, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[296, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[297, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 297, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[297, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[298, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 298, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[298, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[299, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 299, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[299, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[300, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 300, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[300, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[301, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 301, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[301, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[302, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 302, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[302, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[303, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 303, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[303, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[304, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 304, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[304, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[305, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 305, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[305, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[306, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 306, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[306, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[307, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 307, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[307, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[308, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 308, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[308, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[309, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 309, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[309, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[310, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 310, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[310, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[311, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 311, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[311, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[312, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 312, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[312, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[313, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 313, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[313, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[314, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 314, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[314, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[315, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 315, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[315, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[316, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 316, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[316, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[317, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 317, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[317, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[318, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 318, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[318, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[319, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 319, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[319, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[320, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 320, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[320, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[321, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 321, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[321, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[322, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 322, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[322, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[323, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 323, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[323, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[324, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 324, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[324, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[325, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 325, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[325, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[326, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 326, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[326, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[327, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 327, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[327, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[328, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 328, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[328, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[329, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 329, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[329, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[330, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 330, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[330, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[331, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 331, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[331, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[332, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 332, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[332, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[333, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 333, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[333, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[334, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 334, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[334, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[335, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 335, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[335, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[336, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 336, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[336, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[337, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 337, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[337, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[338, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 338, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[338, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[339, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 339, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[339, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[340, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 340, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[340, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[341, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 341, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[341, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[342, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 342, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[342, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[343, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 343, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[343, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[344, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 344, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[344, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[345, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 345, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[345, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[346, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 346, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[346, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[347, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 347, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[347, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[348, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 348, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[348, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[349, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 349, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[349, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[350, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 350, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[350, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[351, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 351, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[351, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[352, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 352, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[352, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[353, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 353, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[353, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[354, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 354, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[354, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[355, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 355, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[355, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[356, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 356, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[356, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[357, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 357, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[357, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[358, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 358, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[358, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[359, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 359, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[359, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[360, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 360, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[360, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[361, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 361, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[361, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[362, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 362, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[362, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[363, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 363, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[363, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[364, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 364, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[364, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[365, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 365, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.table[365, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.Zuweisung_Winter.verboseRead", "= true, if info message that file is loading is to be printed [:#(type=Boolean)]",\
 956, true, 0.0,0.0,0.0,0,562)
DeclareVariable("Strommarkt.Zuweisung_Winter.columns[1]", "Columns of table to be interpolated [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("Strommarkt.Zuweisung_Winter.smoothness", "Smoothness of table interpolation [:#(type=Modelica.Blocks.Types.Smoothness)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("Strommarkt.Zuweisung_Winter.extrapolation", "Extrapolation of data outside the definition range [:#(type=Modelica.Blocks.Types.Extrapolation)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("Strommarkt.Zuweisung_Winter.timeScale", "Time scale of first table column [s|h]",\
 86400, 1E-15,1E+100,0.0,0,513)
DeclareParameter("Strommarkt.Zuweisung_Winter.offset[1]", "Offsets of output signals",\
 957, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("Strommarkt.Zuweisung_Winter.startTime", "Output = offset for time < startTime [s]",\
 958, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("Strommarkt.Zuweisung_Winter.shiftTime", "Shift time of first table column [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.Zuweisung_Winter.timeEvents", "Time event handling of table interpolation [:#(type=Modelica.Blocks.Types.TimeEvents)]",\
 959, 1, 1.0,3.0,0.0,0,564)
DeclareVariable("Strommarkt.Zuweisung_Winter.verboseExtrapolation", \
"= true, if warning messages are to be printed if time is outside the table definition range [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.Zuweisung_Winter.t_min", "Minimum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.t_max", "Maximum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.t_minScaled", "Minimum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.t_maxScaled", "Maximum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Winter.p_offset[1]", "Offsets of output signals",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Strommarkt.Zuweisung_Winter.tableID.id", "[:#(type=Integer)]", 0,\
 0.0,0.0,0.0,0,2565)
DeclareVariable("Strommarkt.Zuweisung_Winter.nextTimeEvent", "Next time event instant [s]",\
 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.Zuweisung_Winter.nextTimeEventScaled", \
"Next scaled time event instant [1]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.Zuweisung_Winter.timeScaled", "Scaled time [1]", 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.nout", "Number of outputs [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.y[1]", "Connector of Real output signals",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.tableOnFile", \
"= true, if table is defined on file or in function usertab [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[1, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[1, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[2, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 2, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[2, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[3, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 3, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[3, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[4, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 4, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[4, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[5, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 5, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[5, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[6, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 6, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[6, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[7, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 7, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[7, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[8, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 8, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[8, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[9, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 9, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[9, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[10, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 10, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[10, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[11, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 11, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[11, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[12, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 12, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[12, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[13, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 13, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[13, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[14, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 14, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[14, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[15, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 15, \
0.0,0.0,0.0,0,513)
EndNonAlias(10)
PreNonAliasNew(11)
StartNonAlias(11)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[15, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[16, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 16, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[16, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[17, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 17, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[17, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[18, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 18, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[18, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[19, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 19, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[19, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[20, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 20, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[20, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[21, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 21, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[21, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[22, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 22, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[22, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[23, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 23, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[23, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[24, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 24, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[24, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[25, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 25, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[25, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[26, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 26, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[26, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[27, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 27, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[27, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[28, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 28, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[28, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[29, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 29, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[29, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[30, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 30, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[30, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[31, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 31, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[31, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[32, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 32, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[32, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[33, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 33, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[33, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[34, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 34, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[34, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[35, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 35, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[35, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[36, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 36, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[36, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[37, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 37, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[37, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[38, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 38, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[38, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[39, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 39, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[39, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[40, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 40, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[40, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[41, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 41, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[41, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[42, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 42, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[42, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[43, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 43, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[43, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[44, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 44, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[44, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[45, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 45, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[45, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[46, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 46, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[46, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[47, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 47, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[47, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[48, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 48, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[48, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[49, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 49, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[49, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[50, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 50, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[50, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[51, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 51, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[51, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[52, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 52, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[52, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[53, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 53, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[53, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[54, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 54, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[54, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[55, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 55, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[55, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[56, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 56, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[56, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[57, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 57, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[57, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[58, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 58, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[58, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[59, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 59, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[59, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[60, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 60, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[60, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[61, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 61, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[61, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[62, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 62, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[62, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[63, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 63, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[63, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[64, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 64, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[64, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[65, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 65, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[65, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[66, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 66, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[66, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[67, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 67, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[67, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[68, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 68, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[68, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[69, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 69, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[69, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[70, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 70, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[70, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[71, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 71, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[71, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[72, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 72, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[72, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[73, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 73, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[73, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[74, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 74, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[74, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[75, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 75, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[75, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[76, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 76, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[76, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[77, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 77, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[77, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[78, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 78, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[78, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[79, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 79, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[79, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[80, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 80, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[80, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[81, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 81, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[81, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[82, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 82, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[82, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[83, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 83, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[83, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[84, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 84, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[84, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[85, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 85, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[85, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[86, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 86, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[86, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[87, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 87, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[87, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[88, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 88, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[88, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[89, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 89, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[89, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[90, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 90, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[90, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[91, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 91, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[91, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[92, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 92, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[92, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[93, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 93, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[93, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[94, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 94, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[94, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[95, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 95, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[95, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[96, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 96, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[96, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[97, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 97, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[97, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[98, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 98, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[98, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[99, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 99, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[99, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[100, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 100, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[100, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[101, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 101, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[101, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[102, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 102, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[102, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[103, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 103, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[103, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[104, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 104, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[104, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[105, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 105, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[105, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[106, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 106, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[106, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[107, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 107, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[107, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[108, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 108, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[108, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[109, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 109, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[109, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[110, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 110, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[110, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[111, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 111, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[111, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[112, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 112, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[112, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[113, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 113, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[113, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[114, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 114, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[114, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[115, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 115, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[115, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[116, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 116, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[116, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[117, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 117, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[117, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[118, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 118, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[118, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[119, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 119, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[119, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[120, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 120, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[120, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[121, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 121, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[121, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[122, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 122, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[122, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[123, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 123, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[123, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[124, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 124, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[124, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[125, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 125, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[125, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[126, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 126, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[126, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[127, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 127, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[127, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[128, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 128, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[128, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[129, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 129, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[129, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[130, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 130, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[130, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[131, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 131, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[131, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[132, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 132, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[132, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[133, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 133, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[133, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[134, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 134, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[134, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[135, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 135, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[135, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[136, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 136, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[136, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[137, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 137, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[137, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[138, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 138, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[138, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[139, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 139, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[139, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[140, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 140, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[140, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[141, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 141, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[141, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[142, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 142, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[142, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[143, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 143, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[143, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[144, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 144, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[144, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[145, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 145, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[145, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[146, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 146, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[146, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[147, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 147, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[147, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[148, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 148, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[148, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[149, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 149, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[149, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[150, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 150, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[150, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[151, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 151, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[151, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[152, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 152, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[152, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[153, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 153, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[153, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[154, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 154, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[154, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[155, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 155, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[155, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[156, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 156, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[156, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[157, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 157, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[157, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[158, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 158, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[158, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[159, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 159, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[159, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[160, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 160, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[160, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[161, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 161, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[161, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[162, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 162, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[162, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[163, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 163, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[163, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[164, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 164, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[164, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[165, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 165, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[165, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[166, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 166, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[166, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[167, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 167, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[167, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[168, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 168, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[168, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[169, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 169, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[169, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[170, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 170, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[170, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[171, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 171, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[171, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[172, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 172, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[172, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[173, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 173, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[173, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[174, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 174, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[174, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[175, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 175, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[175, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[176, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 176, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[176, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[177, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 177, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[177, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[178, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 178, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[178, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[179, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 179, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[179, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[180, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 180, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[180, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[181, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 181, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[181, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[182, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 182, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[182, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[183, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 183, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[183, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[184, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 184, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[184, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[185, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 185, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[185, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[186, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 186, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[186, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[187, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 187, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[187, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[188, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 188, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[188, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[189, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 189, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[189, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[190, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 190, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[190, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[191, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 191, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[191, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[192, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 192, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[192, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[193, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 193, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[193, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[194, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 194, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[194, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[195, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 195, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[195, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[196, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 196, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[196, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[197, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 197, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[197, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[198, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 198, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[198, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[199, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 199, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[199, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[200, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 200, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[200, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[201, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 201, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[201, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[202, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 202, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[202, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[203, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 203, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[203, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[204, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 204, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[204, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[205, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 205, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[205, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[206, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 206, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[206, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[207, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 207, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[207, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[208, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 208, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[208, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[209, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 209, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[209, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[210, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 210, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[210, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[211, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 211, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[211, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[212, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 212, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[212, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[213, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 213, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[213, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[214, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 214, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[214, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[215, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 215, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[215, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[216, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 216, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[216, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[217, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 217, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[217, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[218, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 218, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[218, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[219, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 219, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[219, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[220, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 220, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[220, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[221, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 221, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[221, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[222, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 222, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[222, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[223, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 223, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[223, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[224, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 224, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[224, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[225, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 225, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[225, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[226, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 226, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[226, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[227, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 227, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[227, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[228, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 228, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[228, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[229, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 229, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[229, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[230, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 230, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[230, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[231, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 231, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[231, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[232, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 232, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[232, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[233, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 233, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[233, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[234, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 234, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[234, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[235, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 235, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[235, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[236, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 236, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[236, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[237, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 237, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[237, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[238, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 238, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[238, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[239, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 239, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[239, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[240, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 240, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[240, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[241, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 241, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[241, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[242, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 242, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[242, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[243, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 243, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[243, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[244, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 244, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[244, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[245, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 245, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[245, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[246, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 246, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[246, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[247, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 247, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[247, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[248, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 248, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[248, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[249, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 249, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[249, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[250, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 250, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[250, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[251, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 251, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[251, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[252, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 252, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[252, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[253, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 253, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[253, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[254, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 254, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[254, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[255, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 255, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[255, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[256, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 256, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[256, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[257, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 257, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[257, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[258, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 258, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[258, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[259, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 259, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[259, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[260, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 260, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[260, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[261, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 261, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[261, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[262, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 262, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[262, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[263, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 263, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[263, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[264, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 264, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[264, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[265, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 265, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[265, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[266, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 266, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[266, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[267, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 267, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[267, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[268, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 268, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[268, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[269, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 269, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[269, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[270, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 270, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[270, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[271, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 271, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[271, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[272, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 272, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[272, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[273, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 273, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[273, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[274, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 274, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[274, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[275, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 275, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[275, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[276, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 276, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[276, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[277, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 277, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[277, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[278, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 278, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[278, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[279, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 279, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[279, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[280, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 280, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[280, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[281, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 281, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[281, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[282, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 282, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[282, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[283, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 283, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[283, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[284, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 284, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[284, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[285, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 285, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[285, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[286, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 286, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[286, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[287, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 287, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[287, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[288, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 288, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[288, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[289, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 289, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[289, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[290, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 290, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[290, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[291, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 291, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[291, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[292, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 292, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[292, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[293, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 293, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[293, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[294, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 294, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[294, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[295, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 295, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[295, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[296, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 296, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[296, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[297, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 297, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[297, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[298, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 298, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[298, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[299, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 299, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[299, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[300, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 300, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[300, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[301, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 301, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[301, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[302, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 302, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[302, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[303, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 303, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[303, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[304, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 304, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[304, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[305, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 305, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[305, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[306, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 306, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[306, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[307, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 307, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[307, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[308, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 308, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[308, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[309, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 309, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[309, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[310, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 310, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[310, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[311, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 311, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[311, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[312, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 312, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[312, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[313, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 313, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[313, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[314, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 314, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[314, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[315, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 315, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[315, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[316, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 316, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[316, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[317, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 317, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[317, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[318, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 318, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[318, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[319, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 319, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[319, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[320, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 320, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[320, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[321, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 321, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[321, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[322, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 322, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[322, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[323, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 323, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[323, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[324, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 324, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[324, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[325, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 325, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[325, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[326, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 326, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[326, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[327, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 327, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[327, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[328, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 328, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[328, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[329, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 329, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[329, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[330, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 330, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[330, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[331, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 331, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[331, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[332, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 332, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[332, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[333, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 333, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[333, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[334, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 334, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[334, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[335, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 335, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[335, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[336, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 336, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[336, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[337, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 337, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[337, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[338, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 338, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[338, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[339, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 339, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[339, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[340, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 340, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[340, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[341, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 341, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[341, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[342, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 342, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[342, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[343, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 343, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[343, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[344, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 344, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[344, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[345, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 345, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[345, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[346, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 346, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[346, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[347, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 347, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[347, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[348, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 348, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[348, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[349, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 349, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[349, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[350, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 350, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[350, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[351, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 351, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[351, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[352, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 352, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[352, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[353, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 353, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[353, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[354, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 354, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[354, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[355, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 355, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[355, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[356, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 356, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[356, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[357, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 357, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[357, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[358, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 358, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[358, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[359, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 359, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[359, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[360, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 360, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[360, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[361, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 361, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[361, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[362, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 362, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[362, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[363, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 363, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[363, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[364, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 364, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[364, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[365, 1]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 365, \
0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.table[365, 2]", \
"Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])", 0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.Zuweisung_Uebergangszeit.verboseRead", \
"= true, if info message that file is loading is to be printed [:#(type=Boolean)]",\
 960, true, 0.0,0.0,0.0,0,562)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.columns[1]", \
"Columns of table to be interpolated [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,517)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.smoothness", \
"Smoothness of table interpolation [:#(type=Modelica.Blocks.Types.Smoothness)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.extrapolation", \
"Extrapolation of data outside the definition range [:#(type=Modelica.Blocks.Types.Extrapolation)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.timeScale", \
"Time scale of first table column [s|h]", 86400, 1E-15,1E+100,0.0,0,513)
DeclareParameter("Strommarkt.Zuweisung_Uebergangszeit.offset[1]", \
"Offsets of output signals", 961, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("Strommarkt.Zuweisung_Uebergangszeit.startTime", \
"Output = offset for time < startTime [s]", 962, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.shiftTime", \
"Shift time of first table column [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.Zuweisung_Uebergangszeit.timeEvents", \
"Time event handling of table interpolation [:#(type=Modelica.Blocks.Types.TimeEvents)]",\
 963, 1, 1.0,3.0,0.0,0,564)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.verboseExtrapolation", \
"= true, if warning messages are to be printed if time is outside the table definition range [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.t_min", "Minimum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.t_max", "Maximum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.t_minScaled", \
"Minimum (scaled) abscissa value defined in table [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.t_maxScaled", \
"Maximum (scaled) abscissa value defined in table [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.p_offset[1]", \
"Offsets of output signals", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.tableID.id", \
"[:#(type=Integer)]", 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.nextTimeEvent", \
"Next time event instant [s]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.nextTimeEventScaled", \
"Next scaled time event instant [1]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.Zuweisung_Uebergangszeit.timeScaled", \
"Scaled time [1]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("Strommarkt.Zuweisung_Sommer.nout", "Number of outputs [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("Strommarkt.Zuweisung_Sommer.y[1]", "Connector of Real output signals",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Strommarkt.Zuweisung_Sommer.tableOnFile", "= true, if table is defined on file or in function usertab [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[1, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[1, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[2, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[2, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[3, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[3, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[4, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[4, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[5, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[5, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[6, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[6, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[7, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[7, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[8, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[8, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[9, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[9, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[10, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[10, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[11, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[11, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[12, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[12, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[13, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 13, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[13, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[14, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[14, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[15, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[15, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[16, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[16, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[17, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[17, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[18, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[18, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[19, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[19, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[20, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[20, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[21, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[21, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[22, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[22, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[23, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[23, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[24, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[24, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[25, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[25, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[26, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[26, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[27, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 27, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[27, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[28, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[28, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[29, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[29, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[30, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[30, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[31, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 31, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[31, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[32, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 32, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[32, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[33, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 33, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[33, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[34, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 34, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[34, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[35, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 35, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[35, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[36, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 36, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[36, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[37, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 37, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[37, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[38, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 38, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[38, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[39, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 39, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[39, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[40, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 40, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[40, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[41, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 41, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[41, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[42, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 42, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[42, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[43, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 43, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[43, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[44, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 44, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[44, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[45, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 45, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[45, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[46, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 46, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[46, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[47, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 47, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[47, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[48, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 48, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[48, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[49, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 49, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[49, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[50, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 50, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[50, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[51, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 51, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[51, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[52, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 52, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[52, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[53, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 53, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[53, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[54, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 54, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[54, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[55, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 55, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[55, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[56, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 56, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[56, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[57, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 57, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[57, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[58, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 58, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[58, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[59, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 59, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[59, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[60, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 60, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[60, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[61, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 61, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[61, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[62, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 62, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[62, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[63, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[63, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[64, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 64, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[64, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[65, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[65, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[66, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[66, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[67, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[67, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[68, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[68, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[69, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[69, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[70, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 70, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[70, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[71, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[71, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[72, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[72, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[73, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[73, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[74, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[74, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[75, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[75, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[76, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[76, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[77, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[77, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[78, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 78, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[78, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[79, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[79, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[80, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[80, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[81, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[81, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[82, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[82, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[83, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[83, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[84, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[84, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[85, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[85, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[86, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[86, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[87, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[87, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[88, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[88, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[89, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[89, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[90, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[90, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[91, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[91, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[92, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 92, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[92, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[93, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 93, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[93, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[94, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 94, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[94, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[95, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 95, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[95, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[96, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 96, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[96, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[97, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 97, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[97, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[98, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 98, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[98, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[99, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 99, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[99, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[100, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 100, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[100, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[101, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 101, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[101, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[102, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 102, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[102, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[103, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 103, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[103, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[104, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 104, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[104, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[105, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 105, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[105, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[106, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 106, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[106, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[107, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 107, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[107, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[108, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 108, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[108, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[109, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 109, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[109, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[110, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 110, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[110, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[111, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 111, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[111, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[112, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 112, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[112, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[113, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 113, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[113, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[114, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 114, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[114, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[115, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 115, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[115, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[116, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 116, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[116, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[117, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 117, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[117, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[118, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 118, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[118, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[119, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 119, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[119, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[120, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 120, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[120, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[121, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 121, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[121, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[122, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 122, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[122, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[123, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 123, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[123, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[124, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 124, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[124, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[125, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 125, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[125, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[126, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 126, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[126, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[127, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 127, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[127, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[128, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 128, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[128, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[129, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 129, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[129, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[130, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 130, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[130, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[131, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 131, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[131, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[132, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 132, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[132, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[133, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 133, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[133, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[134, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 134, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[134, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[135, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 135, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[135, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[136, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 136, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[136, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[137, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 137, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[137, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[138, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 138, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[138, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[139, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 139, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[139, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[140, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 140, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[140, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[141, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 141, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[141, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[142, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 142, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[142, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[143, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 143, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[143, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[144, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 144, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[144, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[145, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 145, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[145, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[146, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 146, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[146, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[147, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 147, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[147, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[148, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 148, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[148, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[149, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 149, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[149, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[150, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 150, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[150, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[151, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 151, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[151, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[152, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 152, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[152, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[153, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 153, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[153, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[154, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 154, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[154, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[155, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 155, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[155, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[156, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 156, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[156, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[157, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 157, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[157, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[158, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 158, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[158, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[159, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 159, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[159, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[160, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 160, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[160, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[161, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 161, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[161, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[162, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 162, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[162, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[163, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 163, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[163, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[164, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 164, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[164, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[165, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 165, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[165, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[166, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 166, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[166, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[167, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 167, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[167, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[168, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 168, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[168, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[169, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 169, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[169, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[170, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 170, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[170, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[171, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 171, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[171, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[172, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 172, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[172, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[173, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 173, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[173, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[174, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 174, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[174, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[175, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 175, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[175, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[176, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 176, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[176, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[177, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 177, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[177, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[178, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 178, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[178, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[179, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 179, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[179, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[180, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 180, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[180, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[181, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 181, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[181, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[182, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 182, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[182, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[183, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 183, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[183, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[184, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 184, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[184, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[185, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 185, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[185, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[186, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 186, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[186, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[187, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 187, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[187, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[188, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 188, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[188, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[189, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 189, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[189, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[190, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 190, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[190, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[191, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 191, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[191, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[192, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 192, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[192, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[193, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 193, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[193, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[194, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 194, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[194, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[195, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 195, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[195, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[196, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 196, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[196, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[197, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 197, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[197, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[198, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 198, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[198, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[199, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 199, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[199, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[200, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 200, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[200, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[201, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 201, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[201, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[202, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 202, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[202, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[203, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 203, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[203, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[204, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 204, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[204, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[205, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 205, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[205, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[206, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 206, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[206, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[207, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 207, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[207, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[208, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 208, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[208, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[209, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 209, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[209, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[210, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 210, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[210, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[211, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 211, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[211, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[212, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 212, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[212, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[213, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 213, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[213, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[214, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 214, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[214, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[215, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 215, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[215, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[216, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 216, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[216, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[217, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 217, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[217, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[218, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 218, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[218, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[219, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 219, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[219, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[220, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 220, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[220, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[221, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 221, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[221, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[222, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 222, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[222, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[223, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 223, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[223, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[224, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 224, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[224, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[225, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 225, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[225, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[226, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 226, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[226, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[227, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 227, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[227, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[228, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 228, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[228, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[229, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 229, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[229, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[230, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 230, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[230, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[231, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 231, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[231, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[232, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 232, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[232, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[233, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 233, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[233, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[234, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 234, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[234, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[235, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 235, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[235, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[236, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 236, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[236, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[237, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 237, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[237, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[238, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 238, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[238, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[239, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 239, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[239, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[240, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 240, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[240, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[241, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 241, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[241, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[242, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 242, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[242, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[243, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 243, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[243, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[244, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 244, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[244, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[245, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 245, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[245, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[246, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 246, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[246, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[247, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 247, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[247, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[248, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 248, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[248, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[249, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 249, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[249, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[250, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 250, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[250, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[251, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 251, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[251, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[252, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 252, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[252, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[253, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 253, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[253, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[254, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 254, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[254, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[255, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 255, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[255, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[256, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 256, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[256, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[257, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 257, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[257, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[258, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 258, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[258, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[259, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 259, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[259, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[260, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 260, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[260, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[261, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 261, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[261, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[262, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 262, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[262, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[263, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 263, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[263, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[264, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 264, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[264, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[265, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 265, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[265, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[266, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 266, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[266, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[267, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 267, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[267, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[268, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 268, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[268, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[269, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 269, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[269, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[270, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 270, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[270, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[271, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 271, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[271, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[272, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 272, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[272, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[273, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 273, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[273, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[274, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 274, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[274, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[275, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 275, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[275, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[276, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 276, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[276, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[277, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 277, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[277, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[278, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 278, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[278, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[279, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 279, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[279, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[280, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 280, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[280, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[281, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 281, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[281, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[282, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 282, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[282, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[283, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 283, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[283, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[284, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 284, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[284, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[285, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 285, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[285, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[286, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 286, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[286, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[287, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 287, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[287, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[288, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 288, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[288, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[289, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 289, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[289, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[290, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 290, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[290, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[291, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 291, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[291, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[292, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 292, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[292, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[293, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 293, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[293, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[294, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 294, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[294, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[295, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 295, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[295, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[296, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 296, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[296, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[297, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 297, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[297, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[298, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 298, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[298, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[299, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 299, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[299, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[300, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 300, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[300, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[301, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 301, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[301, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[302, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 302, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[302, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[303, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 303, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[303, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[304, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 304, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[304, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[305, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 305, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[305, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[306, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 306, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[306, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[307, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 307, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[307, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[308, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 308, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[308, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[309, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 309, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[309, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[310, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 310, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[310, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[311, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 311, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[311, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[312, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 312, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[312, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[313, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 313, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[313, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[314, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 314, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[314, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[315, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 315, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[315, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[316, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 316, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[316, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[317, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 317, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[317, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[318, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 318, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[318, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[319, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 319, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[319, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[320, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 320, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[320, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[321, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 321, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[321, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[322, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 322, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[322, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[323, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 323, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[323, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[324, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 324, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[324, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[325, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 325, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[325, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[326, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 326, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[326, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[327, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 327, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[327, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[328, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 328, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[328, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[329, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 329, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[329, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[330, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 330, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[330, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[331, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 331, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[331, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[332, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 332, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[332, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[333, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 333, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[333, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[334, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 334, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[334, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[335, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 335, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[335, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[336, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 336, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[336, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[337, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 337, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[337, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[338, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 338, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[338, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[339, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 339, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[339, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[340, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 340, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[340, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[341, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 341, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[341, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[342, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 342, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[342, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[343, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 343, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[343, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[344, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 344, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[344, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[345, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 345, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[345, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[346, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 346, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[346, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[347, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 347, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[347, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[348, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 348, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[348, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[349, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 349, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[349, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[350, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 350, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[350, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[351, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 351, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[351, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[352, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 352, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[352, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[353, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 353, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[353, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[354, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 354, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[354, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[355, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 355, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[355, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[356, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 356, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[356, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[357, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 357, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[357, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[358, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 358, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[358, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[359, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 359, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[359, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[360, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 360, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[360, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[361, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 361, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[361, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[362, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 362, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[362, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[363, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 363, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[363, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[364, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 364, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[364, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[365, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 365, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.table[365, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.Zuweisung_Sommer.verboseRead", "= true, if info message that file is loading is to be printed [:#(type=Boolean)]",\
 964, true, 0.0,0.0,0.0,0,562)
DeclareVariable("Strommarkt.Zuweisung_Sommer.columns[1]", "Columns of table to be interpolated [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("Strommarkt.Zuweisung_Sommer.smoothness", "Smoothness of table interpolation [:#(type=Modelica.Blocks.Types.Smoothness)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("Strommarkt.Zuweisung_Sommer.extrapolation", "Extrapolation of data outside the definition range [:#(type=Modelica.Blocks.Types.Extrapolation)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("Strommarkt.Zuweisung_Sommer.timeScale", "Time scale of first table column [s|h]",\
 86400, 1E-15,1E+100,0.0,0,513)
DeclareParameter("Strommarkt.Zuweisung_Sommer.offset[1]", "Offsets of output signals",\
 965, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("Strommarkt.Zuweisung_Sommer.startTime", "Output = offset for time < startTime [s]",\
 966, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("Strommarkt.Zuweisung_Sommer.shiftTime", "Shift time of first table column [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Strommarkt.Zuweisung_Sommer.timeEvents", "Time event handling of table interpolation [:#(type=Modelica.Blocks.Types.TimeEvents)]",\
 967, 1, 1.0,3.0,0.0,0,564)
DeclareVariable("Strommarkt.Zuweisung_Sommer.verboseExtrapolation", \
"= true, if warning messages are to be printed if time is outside the table definition range [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Strommarkt.Zuweisung_Sommer.t_min", "Minimum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.t_max", "Maximum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.t_minScaled", "Minimum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.t_maxScaled", "Maximum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Strommarkt.Zuweisung_Sommer.p_offset[1]", "Offsets of output signals",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Strommarkt.Zuweisung_Sommer.tableID.id", "[:#(type=Integer)]", 0,\
 0.0,0.0,0.0,0,2565)
DeclareVariable("Strommarkt.Zuweisung_Sommer.nextTimeEvent", "Next time event instant [s]",\
 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.Zuweisung_Sommer.nextTimeEventScaled", \
"Next scaled time event instant [1]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("Strommarkt.Zuweisung_Sommer.timeScaled", "Scaled time [1]", 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareAlias2("Strommarkt.product1.u1", "Connector of Real input signal 1", \
"Strommarkt.__ctt__Preise_Uebergangszeit.y[1]", 1, 5, 7034, 0)
DeclareAlias2("Strommarkt.product1.u2", "Connector of Real input signal 2", \
"Strommarkt.Zuweisung_Uebergangszeit.y[1]", 1, 5, 8135, 0)
DeclareVariable("Strommarkt.product1.y", "Connector of Real output signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareAlias2("Strommarkt.product2.u1", "Connector of Real input signal 1", \
"Strommarkt.__ctt__Preise_Sommer.y[1]", 1, 5, 6680, 0)
DeclareAlias2("Strommarkt.product2.u2", "Connector of Real input signal 2", \
"Strommarkt.Zuweisung_Sommer.y[1]", 1, 5, 8883, 0)
DeclareVariable("Strommarkt.product2.y", "Connector of Real output signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareParameter("Strommarkt.add3_1.k1", "Gain of input signal 1", 968, 1, \
0.0,0.0,0.0,0,560)
DeclareParameter("Strommarkt.add3_1.k2", "Gain of input signal 2", 969, 1, \
0.0,0.0,0.0,0,560)
DeclareParameter("Strommarkt.add3_1.k3", "Gain of input signal 3", 970, 1, \
0.0,0.0,0.0,0,560)
DeclareAlias2("Strommarkt.add3_1.u1", "Connector of Real input signal 1", \
"Strommarkt.product.y", 1, 5, 6325, 0)
DeclareAlias2("Strommarkt.add3_1.u2", "Connector of Real input signal 2", \
"Strommarkt.product1.y", 1, 5, 9630, 0)
DeclareAlias2("Strommarkt.add3_1.u3", "Connector of Real input signal 3", \
"Strommarkt.product2.y", 1, 5, 9631, 0)
DeclareVariable("Strommarkt.add3_1.y", "Connector of Real output signal", 0.0, \
0.0,0.0,0.0,0,512)
DeclareAlias2("Strommarkt.Volatilitaet.u1", "Connector of first Real input signal",\
 "Strommarkt.add3_1.y", 1, 5, 9632, 0)
DeclareAlias2("Strommarkt.Volatilitaet.u2", "Connector of Boolean input signal [:#(type=Boolean)]",\
 "Strommarkt.Volatil", 1, 5, 6322, 65)
DeclareVariable("Strommarkt.Volatilitaet.u3", "Connector of second Real input signal",\
 0.159, 0.0,0.0,0.0,0,513)
DeclareAlias2("Strommarkt.Volatilitaet.y", "Connector of Real output signal", \
"Verbraucher.signalBus.Strompreis", 1, 5, 2231, 0)
DeclareVariable("Strommarkt.Strompreis_Bosch.y", "Value of Real output", 0.159, \
0.0,0.0,0.0,0,513)
DeclareAlias2("Strommarkt.booleanExpression.y", "Value of Boolean output [:#(type=Boolean)]",\
 "Strommarkt.Volatil", 1, 5, 6322, 65)
DeclareAlias2("Strommarkt.signalBus.E_th_HK", "", "Verbraucher.signalBus.E_th_HK", 1,\
 5, 2216, 4)
DeclareAlias2("Strommarkt.signalBus.E_bs_HK", "", "Heizkessel.integrator.y", 1, 1,\
 31, 4)
DeclareAlias2("Strommarkt.signalBus.E_th_WRG", "[J]", "WRG.integrator1.y", 1, 1,\
 113, 4)
DeclareAlias2("Strommarkt.signalBus.E_th_Last", "[J]", "Verbraucher.integrator2.y", 1,\
 1, 28, 4)
DeclareAlias2("Strommarkt.signalBus.E_bs_th_BHKW", "", "BHKW_.integrator.y", 1, 1,\
 75, 4)
DeclareAlias2("Strommarkt.signalBus.E_th_BHKW", "", "Verbraucher.signalBus.E_th_BHKW", 1,\
 5, 2217, 4)
DeclareAlias2("Strommarkt.signalBus.E_bs_el_BHKW", "[J]", "wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.y", 1,\
 1, 123, 4)
DeclareAlias2("Strommarkt.signalBus.E_el_bezug", "", "Stromerzeugung.integrator2.y", 1,\
 1, 37, 4)
DeclareAlias2("Strommarkt.signalBus.P_EK_offline", "[W]", "Verbraucher.signalBus.P_EK_offline", 1,\
 5, 2218, 4)
DeclareAlias2("Strommarkt.signalBus.P_EK", "[W]", "Verbraucher.signalBus.P_EK", 1,\
 5, 2219, 4)
DeclareAlias2("Strommarkt.signalBus.P_BHKW", "[W]", "Verbraucher.signalBus.P_BHKW", 1,\
 5, 2220, 4)
DeclareAlias2("Strommarkt.signalBus.P_Last", "[W]", "Verbraucher.signalBus.P_Last", 1,\
 5, 2221, 4)
DeclareAlias2("Strommarkt.signalBus.P_Kt", "[W]", "Verbraucher.signalBus.P_Kt", 1,\
 5, 2222, 4)
DeclareAlias2("Strommarkt.signalBus.Q_p_EK_offline", "[W]", "Elektrodenkessel.Q_p_ek", 1,\
 5, 9896, 4)
DeclareAlias2("Strommarkt.signalBus.Q_p_EK", "[W]", "Verbraucher.signalBus.Q_p_EK", 1,\
 5, 2223, 4)
DeclareAlias2("Strommarkt.signalBus.Q_p_Bs_el", "[W]", "Verbraucher.signalBus.Q_p_Bs_el", 1,\
 5, 2224, 4)
DeclareAlias2("Strommarkt.signalBus.Q_p_Bs_offline", "[W]", "Verbraucher.signalBus.Q_p_Bs_offline", 1,\
 5, 2225, 4)
DeclareAlias2("Strommarkt.signalBus.Q_p_th_Last", "[W]", "Verbraucher.signalBus.Q_p_th_Last", 1,\
 5, 2226, 4)
DeclareAlias2("Strommarkt.signalBus.eta_th", "", "Verbraucher.signalBus.eta_th", 1,\
 5, 2227, 4)
DeclareAlias2("Strommarkt.signalBus.eta_el", "", "Verbraucher.signalBus.eta_el", 1,\
 5, 2228, 4)
DeclareAlias2("Strommarkt.signalBus.Grenzkosten", "[:#(type=Boolean)]", \
"Verbraucher.signalBus.Grenzkosten", 1, 5, 2229, 69)
DeclareAlias2("Strommarkt.signalBus.T_ref_WRG", "[K|degC]", "WRG.T_VL.T", 1, 1, 112,\
 4)
DeclareAlias2("Strommarkt.signalBus.T_ref_Puffer", "[K|degC]", "Pufferspeicher.T_VL_VK.T", 1,\
 1, 57, 4)
DeclareAlias2("Strommarkt.signalBus.K_P_BHKW", "", "Verbraucher.signalBus.K_P_BHKW", 1,\
 5, 2230, 4)
DeclareAlias2("Strommarkt.signalBus.Strompreis", "", "Verbraucher.signalBus.Strompreis", 1,\
 5, 2231, 4)
DeclareAlias2("Strommarkt.signalBus.G_verg", "", "Verbraucher.signalBus.G_verg", 1,\
 5, 2232, 4)
DeclareAlias2("Strommarkt.signalBus.K_bed_th", "", "Verbraucher.signalBus.K_bed_th", 1,\
 5, 2233, 4)
DeclareAlias2("Strommarkt.signalBus.K_bed_el", "", "Verbraucher.signalBus.K_bed_el", 1,\
 5, 2234, 4)
DeclareAlias2("Strommarkt.signalBus.K_w_kt", "", "Verbraucher.signalBus.K_w_kt", 1,\
 5, 2235, 4)
DeclareAlias2("Strommarkt.signalBus.Feuchtkugeltemperatur", "[K]", \
"Verbraucher.signalBus.Feuchtkugeltemperatur", 1, 5, 2236, 4)
DeclareVariable("Waermeerzeugung.Gaspreis", "[\342\202\254/kWh] []", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Waermeerzeugung.Gaspreis_BHKW", "[\342\202\254/kWh] []", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Waermeerzeugung.Bivalenz", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareParameter("Waermeerzeugung.Gesamt_Leistung_th.k1", "Gain of input signal 1",\
 971, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.Gesamt_Leistung_th.k2", "Gain of input signal 2",\
 972, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.Gesamt_Leistung_th.k3", "Gain of input signal 3",\
 973, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Waermeerzeugung.Gesamt_Leistung_th.u1", "Connector of Real input signal 1",\
 "Verbraucher.signalBus.E_th_BHKW", 1, 5, 2217, 0)
DeclareVariable("Waermeerzeugung.Gesamt_Leistung_th.u2", "Connector of Real input signal 2",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Waermeerzeugung.Gesamt_Leistung_th.u3", "Connector of Real input signal 3 [J]",\
 "WRG.integrator1.y", 1, 1, 113, 0)
DeclareVariable("Waermeerzeugung.Gesamt_Leistung_th.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Waermeerzeugung.realExpression.y", "Value of Real output", \
"Waermeerzeugung.Gaspreis", 1, 5, 9635, 0)
DeclareAlias2("Waermeerzeugung.Kosten_BHKW.u1", "Connector of Real input signal 1",\
 "BHKW_.integrator.y", 1, 1, 75, 0)
DeclareAlias2("Waermeerzeugung.Kosten_BHKW.u2", "Connector of Real input signal 2",\
 "Waermeerzeugung.Gaspreis_BHKW", 1, 5, 9636, 0)
DeclareVariable("Waermeerzeugung.Kosten_BHKW.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Waermeerzeugung.Kosten_Kessel.u1", "Connector of Real input signal 1",\
 "Heizkessel.integrator.y", 1, 1, 31, 0)
DeclareAlias2("Waermeerzeugung.Kosten_Kessel.u2", "Connector of Real input signal 2",\
 "Waermeerzeugung.Gaspreis", 1, 5, 9635, 0)
DeclareVariable("Waermeerzeugung.Kosten_Kessel.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Waermeerzeugung.Brennstoffkosten_pro_kWhStrom_BHKW.u1", \
"Connector of Real input signal 1", "Waermeerzeugung.Kosten_BHKW.y", 1, 5, 9640,\
 0)
DeclareAlias2("Waermeerzeugung.Brennstoffkosten_pro_kWhStrom_BHKW.u2", \
"Connector of Real input signal 2", "Verbraucher.signalBus.E_th_BHKW", 1, 5, 2217,\
 0)
DeclareVariable("Waermeerzeugung.Brennstoffkosten_pro_kWhStrom_BHKW.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Waermeerzeugung.Gesamt_Waermekosten.u1", "Connector of Real input signal 1",\
 "Waermeerzeugung.Kosten_BHKW.y", 1, 5, 9640, 0)
DeclareVariable("Waermeerzeugung.Gesamt_Waermekosten.u2", "Connector of Real input signal 2",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Waermeerzeugung.Gesamt_Waermekosten.y", "Connector of Real output signal",\
 "Verbraucher.signalBus.K_bed_th", 1, 5, 2233, 0)
DeclareParameter("Waermeerzeugung.Gesamt_Waermekosten.k1", "Gain of input signal 1",\
 974, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.Gesamt_Waermekosten.k2", "Gain of input signal 2",\
 975, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Waermeerzeugung.Brennstoffkosten_pro_Leistung_Heizkessel.u1", \
"Connector of Real input signal 1", "Waermeerzeugung.Kosten_Kessel.y", 1, 5, 9641,\
 0)
DeclareAlias2("Waermeerzeugung.Brennstoffkosten_pro_Leistung_Heizkessel.u2", \
"Connector of Real input signal 2", "Verbraucher.signalBus.E_th_HK", 1, 5, 2216,\
 0)
DeclareVariable("Waermeerzeugung.Brennstoffkosten_pro_Leistung_Heizkessel.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Waermeerzeugung.Waermekosten_Gesamt.u1", "Connector of Real input signal 1",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Waermeerzeugung.Waermekosten_Gesamt.u2", "Connector of Real input signal 2",\
 "Waermeerzeugung.Gesamt_Leistung_th.y", 1, 5, 9639, 0)
DeclareVariable("Waermeerzeugung.Waermekosten_Gesamt.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Waermeerzeugung.realExpression1.y", "Value of Real output", \
"Waermeerzeugung.Gaspreis_BHKW", 1, 5, 9636, 0)
DeclareAlias2("Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel.u1", \
"Connector of Real input signal 1", "Waermeerzeugung.Brennstoffkosten_pro_kWhStrom_BHKW.y", 1,\
 5, 9642, 0)
DeclareAlias2("Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel.u2", \
"Connector of Real input signal 2", "Waermeerzeugung.Brennstoffkosten_pro_Leistung_Heizkessel.y", 1,\
 5, 9644, 0)
DeclareVariable("Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel.k1", \
"Gain of input signal 1", 976, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel.k2", \
"Gain of input signal 2", 977, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Waermeerzeugung.Gesamt_Brennstoff_thermisch.u1", "Connector of Real input signal 1",\
 "BHKW_.integrator.y", 1, 1, 75, 0)
DeclareAlias2("Waermeerzeugung.Gesamt_Brennstoff_thermisch.u2", "Connector of Real input signal 2",\
 "Heizkessel.integrator.y", 1, 1, 31, 0)
DeclareVariable("Waermeerzeugung.Gesamt_Brennstoff_thermisch.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Waermeerzeugung.Gesamt_Brennstoff_thermisch.k1", \
"Gain of input signal 1", 978, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.Gesamt_Brennstoff_thermisch.k2", \
"Gain of input signal 2", 979, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Waermeerzeugung.Kosten_Kessel1.u1", "Connector of Real input signal 1 [W]",\
 "Verbraucher.signalBus.P_EK", 1, 5, 2219, 0)
DeclareAlias2("Waermeerzeugung.Kosten_Kessel1.u2", "Connector of Real input signal 2",\
 "Verbraucher.signalBus.Strompreis", 1, 5, 2231, 0)
DeclareVariable("Waermeerzeugung.Kosten_Kessel1.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Waermeerzeugung.Strom_Gas.u1", "Connector of Real input signal 1",\
 "Waermeerzeugung.Kosten_Kessel.y", 1, 5, 9641, 0)
DeclareAlias2("Waermeerzeugung.Strom_Gas.u2", "Connector of Real input signal 2",\
 "Waermeerzeugung.integrator.y", 1, 1, 114, 0)
DeclareAlias2("Waermeerzeugung.Strom_Gas.y", "Connector of Real output signal", \
"Waermeerzeugung.Gesamt_Waermekosten.u2", 1, 5, 9643, 0)
DeclareParameter("Waermeerzeugung.Strom_Gas.k1", "Gain of input signal 1", 980, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.Strom_Gas.k2", "Gain of input signal 2", 981, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.integrator.k", "Integrator gain [1]", 982, \
2.7777777777777776E-07, 0.0,0.0,0.0,0,560)
DeclareVariable("Waermeerzeugung.integrator.use_reset", "=true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Waermeerzeugung.integrator.use_set", "=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Waermeerzeugung.integrator.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareParameter("Waermeerzeugung.integrator.y_start", "Initial or guess value of output (= state)",\
 983, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Waermeerzeugung.integrator.u", "Connector of Real input signal", \
"Waermeerzeugung.Kosten_Kessel1.y", 1, 5, 9649, 0)
DeclareState("Waermeerzeugung.integrator.y", "Connector of Real output signal", 114,\
 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Waermeerzeugung.integrator.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Waermeerzeugung.integrator.local_reset", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Waermeerzeugung.integrator.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Waermeerzeugung.integrator1.k", "Integrator gain [1]", 984, \
2.7777777777777776E-07, 0.0,0.0,0.0,0,560)
DeclareVariable("Waermeerzeugung.integrator1.use_reset", "=true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Waermeerzeugung.integrator1.use_set", "=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Waermeerzeugung.integrator1.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareParameter("Waermeerzeugung.integrator1.y_start", "Initial or guess value of output (= state) [J]",\
 985, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Waermeerzeugung.integrator1.u", "Connector of Real input signal [W]",\
 "Verbraucher.signalBus.P_EK", 1, 5, 2219, 0)
DeclareState("Waermeerzeugung.integrator1.y", "Connector of Real output signal [J]",\
 115, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Waermeerzeugung.integrator1.der(y)", "der(Connector of Real output signal) [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Waermeerzeugung.integrator1.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Waermeerzeugung.integrator1.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareAlias2("Waermeerzeugung.Stromkosten_pro_Leistung_Elektrodenkessel.u1", \
"Connector of Real input signal 1", "Waermeerzeugung.Kosten_Kessel1.y", 1, 5, 9649,\
 0)
DeclareAlias2("Waermeerzeugung.Stromkosten_pro_Leistung_Elektrodenkessel.u2", \
"Connector of Real input signal 2 [W]", "Verbraucher.signalBus.Q_p_EK", 1, 5, 2223,\
 0)
DeclareVariable("Waermeerzeugung.Stromkosten_pro_Leistung_Elektrodenkessel.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel1.u1", \
"Connector of Real input signal 1", "Waermeerzeugung.Brennstoffkosten_pro_kWhStrom_BHKW.y", 1,\
 5, 9642, 0)
DeclareAlias2("Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel1.u2", \
"Connector of Real input signal 2", "Waermeerzeugung.Stromkosten_pro_Leistung_Elektrodenkessel.y", 1,\
 5, 9660, 0)
DeclareVariable("Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel1.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel1.k1", \
"Gain of input signal 1", 986, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel1.k2", \
"Gain of input signal 2", 987, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Waermeerzeugung.booleanExpression.y", "Value of Boolean output [:#(type=Boolean)]",\
 "Waermeerzeugung.Bivalenz", 1, 5, 9637, 65)
DeclareAlias2("Waermeerzeugung.switch1.u1", "Connector of first Real input signal",\
 "Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel1.y", 1, 5, 9661, 0)
DeclareAlias2("Waermeerzeugung.switch1.u2", "Connector of Boolean input signal [:#(type=Boolean)]",\
 "Waermeerzeugung.Bivalenz", 1, 5, 9637, 65)
DeclareAlias2("Waermeerzeugung.switch1.u3", "Connector of second Real input signal",\
 "Waermeerzeugung.Differenz_Waermekosten_BHKW_Kessel.y", 1, 5, 9647, 0)
DeclareVariable("Waermeerzeugung.switch1.y", "Connector of Real output signal", \
0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Waermeerzeugung.Add_HK_EK.u1", "Connector of Real input signal 1",\
 "Verbraucher.signalBus.E_th_HK", 1, 5, 2216, 0)
DeclareAlias2("Waermeerzeugung.Add_HK_EK.u2", "Connector of Real input signal 2 [J]",\
 "Waermeerzeugung.integrator2.y", 1, 1, 116, 0)
DeclareAlias2("Waermeerzeugung.Add_HK_EK.y", "Connector of Real output signal", \
"Waermeerzeugung.Gesamt_Leistung_th.u2", 1, 5, 9638, 0)
DeclareParameter("Waermeerzeugung.Add_HK_EK.k1", "Gain of input signal 1", 988, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.Add_HK_EK.k2", "Gain of input signal 2", 989, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.integrator2.k", "Integrator gain [1]", 990, \
2.7777777777777776E-07, 0.0,0.0,0.0,0,560)
DeclareVariable("Waermeerzeugung.integrator2.use_reset", "=true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Waermeerzeugung.integrator2.use_set", "=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Waermeerzeugung.integrator2.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareParameter("Waermeerzeugung.integrator2.y_start", "Initial or guess value of output (= state) [J]",\
 991, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Waermeerzeugung.integrator2.u", "Connector of Real input signal [W]",\
 "Verbraucher.signalBus.Q_p_EK", 1, 5, 2223, 0)
DeclareState("Waermeerzeugung.integrator2.y", "Connector of Real output signal [J]",\
 116, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Waermeerzeugung.integrator2.der(y)", "der(Connector of Real output signal) [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Waermeerzeugung.integrator2.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Waermeerzeugung.integrator2.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareAlias2("Waermeerzeugung.Add_HK_EK1.u1", "Connector of Real input signal 1",\
 "Verbraucher.signalBus.K_bed_th", 1, 5, 2233, 0)
DeclareAlias2("Waermeerzeugung.Add_HK_EK1.u2", "Connector of Real input signal 2",\
 "Verbraucher.signalBus.G_verg", 1, 5, 2232, 0)
DeclareAlias2("Waermeerzeugung.Add_HK_EK1.y", "Connector of Real output signal",\
 "Waermeerzeugung.Waermekosten_Gesamt.u1", 1, 5, 9645, 0)
DeclareParameter("Waermeerzeugung.Add_HK_EK1.k1", "Gain of input signal 1", 992,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.Add_HK_EK1.k2", "Gain of input signal 2", 993,\
 -1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Waermeerzeugung.signalBus.E_th_HK", "", "Verbraucher.signalBus.E_th_HK", 1,\
 5, 2216, 4)
DeclareAlias2("Waermeerzeugung.signalBus.E_bs_HK", "", "Heizkessel.integrator.y", 1,\
 1, 31, 4)
DeclareAlias2("Waermeerzeugung.signalBus.E_th_WRG", "[J]", "WRG.integrator1.y", 1,\
 1, 113, 4)
DeclareAlias2("Waermeerzeugung.signalBus.E_th_Last", "[J]", "Verbraucher.integrator2.y", 1,\
 1, 28, 4)
DeclareAlias2("Waermeerzeugung.signalBus.E_bs_th_BHKW", "", "BHKW_.integrator.y", 1,\
 1, 75, 4)
DeclareAlias2("Waermeerzeugung.signalBus.E_th_BHKW", "", "Verbraucher.signalBus.E_th_BHKW", 1,\
 5, 2217, 4)
DeclareAlias2("Waermeerzeugung.signalBus.E_bs_el_BHKW", "[J]", "wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.y", 1,\
 1, 123, 4)
DeclareAlias2("Waermeerzeugung.signalBus.E_el_bezug", "", "Stromerzeugung.integrator2.y", 1,\
 1, 37, 4)
DeclareAlias2("Waermeerzeugung.signalBus.P_EK_offline", "[W]", "Verbraucher.signalBus.P_EK_offline", 1,\
 5, 2218, 4)
DeclareAlias2("Waermeerzeugung.signalBus.P_EK", "[W]", "Verbraucher.signalBus.P_EK", 1,\
 5, 2219, 4)
DeclareAlias2("Waermeerzeugung.signalBus.P_BHKW", "[W]", "Verbraucher.signalBus.P_BHKW", 1,\
 5, 2220, 4)
DeclareAlias2("Waermeerzeugung.signalBus.P_Last", "[W]", "Verbraucher.signalBus.P_Last", 1,\
 5, 2221, 4)
DeclareAlias2("Waermeerzeugung.signalBus.P_Kt", "[W]", "Verbraucher.signalBus.P_Kt", 1,\
 5, 2222, 4)
DeclareAlias2("Waermeerzeugung.signalBus.Q_p_EK_offline", "[W]", \
"Elektrodenkessel.Q_p_ek", 1, 5, 9896, 4)
DeclareAlias2("Waermeerzeugung.signalBus.Q_p_EK", "[W]", "Verbraucher.signalBus.Q_p_EK", 1,\
 5, 2223, 4)
DeclareAlias2("Waermeerzeugung.signalBus.Q_p_Bs_el", "[W]", "Verbraucher.signalBus.Q_p_Bs_el", 1,\
 5, 2224, 4)
DeclareAlias2("Waermeerzeugung.signalBus.Q_p_Bs_offline", "[W]", \
"Verbraucher.signalBus.Q_p_Bs_offline", 1, 5, 2225, 4)
DeclareAlias2("Waermeerzeugung.signalBus.Q_p_th_Last", "[W]", "Verbraucher.signalBus.Q_p_th_Last", 1,\
 5, 2226, 4)
DeclareAlias2("Waermeerzeugung.signalBus.eta_th", "", "Verbraucher.signalBus.eta_th", 1,\
 5, 2227, 4)
DeclareAlias2("Waermeerzeugung.signalBus.eta_el", "", "Verbraucher.signalBus.eta_el", 1,\
 5, 2228, 4)
DeclareAlias2("Waermeerzeugung.signalBus.Grenzkosten", "[:#(type=Boolean)]", \
"Verbraucher.signalBus.Grenzkosten", 1, 5, 2229, 69)
DeclareAlias2("Waermeerzeugung.signalBus.T_ref_WRG", "[K|degC]", "WRG.T_VL.T", 1,\
 1, 112, 4)
DeclareAlias2("Waermeerzeugung.signalBus.T_ref_Puffer", "[K|degC]", \
"Pufferspeicher.T_VL_VK.T", 1, 1, 57, 4)
DeclareAlias2("Waermeerzeugung.signalBus.K_P_BHKW", "", "Verbraucher.signalBus.K_P_BHKW", 1,\
 5, 2230, 4)
DeclareAlias2("Waermeerzeugung.signalBus.Strompreis", "", "Verbraucher.signalBus.Strompreis", 1,\
 5, 2231, 4)
DeclareAlias2("Waermeerzeugung.signalBus.G_verg", "", "Verbraucher.signalBus.G_verg", 1,\
 5, 2232, 4)
DeclareAlias2("Waermeerzeugung.signalBus.K_bed_th", "", "Verbraucher.signalBus.K_bed_th", 1,\
 5, 2233, 4)
DeclareAlias2("Waermeerzeugung.signalBus.K_bed_el", "", "Verbraucher.signalBus.K_bed_el", 1,\
 5, 2234, 4)
DeclareAlias2("Waermeerzeugung.signalBus.K_w_kt", "", "Verbraucher.signalBus.K_w_kt", 1,\
 5, 2235, 4)
DeclareAlias2("Waermeerzeugung.signalBus.Feuchtkugeltemperatur", "[K]", \
"Verbraucher.signalBus.Feuchtkugeltemperatur", 1, 5, 2236, 4)
DeclareAlias2("Waermeerzeugung.Brennstoff_gesamt.u1", "Connector of Real input signal 1 [J]",\
 "wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.y", 1, 1, 123, 0)
DeclareAlias2("Waermeerzeugung.Brennstoff_gesamt.u2", "Connector of Real input signal 2",\
 "Waermeerzeugung.Gesamt_Brennstoff_thermisch.y", 1, 5, 9648, 0)
DeclareAlias2("Waermeerzeugung.Brennstoff_gesamt.y", "Connector of Real output signal",\
 "Ergebnisse.E_bs_gesamt", 1, 3, 9, 0)
DeclareParameter("Waermeerzeugung.Brennstoff_gesamt.k1", "Gain of input signal 1",\
 994, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.Brennstoff_gesamt.k2", "Gain of input signal 2",\
 995, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Waermeerzeugung.E_el_bezug_gesamt1.u1", "Connector of Real input signal 1 [J]",\
 "Waermeerzeugung.integrator1.y", 1, 1, 115, 0)
DeclareAlias2("Waermeerzeugung.E_el_bezug_gesamt1.u2", "Connector of Real input signal 2",\
 "Stromerzeugung.integrator2.y", 1, 1, 37, 0)
DeclareAlias2("Waermeerzeugung.E_el_bezug_gesamt1.y", "Connector of Real output signal",\
 "Ergebnisse.E_el_gesamt", 1, 3, 10, 0)
DeclareParameter("Waermeerzeugung.E_el_bezug_gesamt1.k1", "Gain of input signal 1",\
 996, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.E_el_bezug_gesamt1.k2", "Gain of input signal 2",\
 997, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Waermeerzeugung.gain.k", "Gain value multiplied with input signal [1]",\
 998, 1000, 0.0,0.0,0.0,0,560)
DeclareAlias2("Waermeerzeugung.gain.u", "Input signal connector", \
"Waermeerzeugung.Waermekosten_Gesamt.y", 1, 5, 9646, 0)
DeclareAlias2("Waermeerzeugung.gain.y", "Output signal connector", \
"Ergebnisse.K_th_spez", 1, 3, 8, 0)
DeclareAlias2("Waermeerzeugung.ergebnisse.K_bed_an", "", "Ergebnisse.K_bed_an", 1,\
 3, 0, 4)
DeclareAlias2("Waermeerzeugung.ergebnisse.K_bed_th_an", "", "Ergebnisse.K_bed_th_an", 1,\
 3, 1, 4)
DeclareAlias2("Waermeerzeugung.ergebnisse.K_bed_el_an", "", "Ergebnisse.K_bed_el_an", 1,\
 3, 2, 4)
DeclareAlias2("Waermeerzeugung.ergebnisse.K_gesamt", "", "Ergebnisse.K_gesamt", 1,\
 3, 3, 4)
DeclareAlias2("Waermeerzeugung.ergebnisse.K_kap_an", "", "Kuehlturm.ergebnisse.K_kap_an", 1,\
 5, 4235, 4)
DeclareAlias2("Waermeerzeugung.ergebnisse.K_bet_an", "", "Ergebnisse.K_bet_an", 1,\
 3, 5, 4)
DeclareAlias2("Waermeerzeugung.ergebnisse.Vbst", "[J]", "BHKW_.integrator1.y", 1,\
 1, 81, 4)
DeclareAlias2("Waermeerzeugung.ergebnisse.Stillstandszeit", "", "BHKW_.integrator2.y", 1,\
 1, 82, 4)
DeclareAlias2("Waermeerzeugung.ergebnisse.K_th_spez", "", "Ergebnisse.K_th_spez", 1,\
 3, 8, 4)
DeclareAlias2("Waermeerzeugung.ergebnisse.E_bs_gesamt", "", "Ergebnisse.E_bs_gesamt", 1,\
 3, 9, 4)
DeclareAlias2("Waermeerzeugung.ergebnisse.E_el_gesamt", "", "Ergebnisse.E_el_gesamt", 1,\
 3, 10, 4)
DeclareAlias2("Waermeerzeugung.ergebnisse.E_th_kt", "[J]", "Kuehlturm.tow.integrator.y", 1,\
 1, 62, 4)
DeclareVariable("Annuitaeten.a", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Annuitaeten.A_n_k", "", "Kuehlturm.ergebnisse.K_kap_an", 1, 5, 4235,\
 0)
DeclareAlias2("Annuitaeten.T", "Betrachtungszeitraum [a] []", "Annuitaeten.__ps__an.T", 1,\
 7, 1015, 0)
DeclareAlias2("Annuitaeten.q", "Zinsfaktor bei einem kalkulationszinssatz von 5% [-] []",\
 "Annuitaeten.__ps__an.q", 1, 7, 1016, 0)
DeclareAlias2("Annuitaeten.BHKW", "[\342\202\254] []", "Annuitaeten.__ps__an.bhkw", 1,\
 7, 1017, 0)
DeclareVariable("Annuitaeten.BHKW_A0", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Annuitaeten.BHKW_bool", "[:#(type=Boolean)]", false, 0.0,0.0,\
0.0,0,515)
DeclareVariable("Annuitaeten.BHKW_an_aus", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Annuitaeten.Kt_an_aus", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Annuitaeten.Kt_A0", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Annuitaeten.Kt", "[\342\202\254] []", "Annuitaeten.__ps__an.kt", 1,\
 7, 1018, 0)
DeclareVariable("Annuitaeten.Kt_bool", "[:#(type=Boolean)]", false, 0.0,0.0,0.0,\
0,515)
DeclareAlias2("Annuitaeten.WRG", "[\342\202\254] []", "Annuitaeten.__ps__an.wrg", 1,\
 7, 1019, 0)
DeclareVariable("Annuitaeten.Anzahl_WRG", "", 7, 0.0,0.0,0.0,0,513)
DeclareVariable("Annuitaeten.WRG_A0", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Annuitaeten.Hk", "", "Annuitaeten.__ps__an.hk", 1, 7, 1021, 0)
DeclareVariable("Annuitaeten.Anzahl_Hk", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Annuitaeten.Hk_A0", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Annuitaeten.Ek", "[\342\202\254] []", "Annuitaeten.__ps__an.ek", 1,\
 7, 1020, 0)
DeclareVariable("Annuitaeten.Bivalenz_bool", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareVariable("Annuitaeten.bivalenz", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Annuitaeten.Ek_A0", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Annuitaeten.r_Erdgas", "", 0.9679, 0.0,0.0,0.0,0,513)
DeclareVariable("Annuitaeten.r_Strom", "", 0.98, 0.0,0.0,0.0,0,513)
DeclareVariable("Annuitaeten.ab_Erdgas", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Annuitaeten.ab_Strom", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Annuitaeten.A_n_b", "", "Ergebnisse.K_bet_an", 1, 3, 5, 0)
DeclareAlias2("Annuitaeten.BHKW_b", "[%] []", "Annuitaeten.__ps__an.bhkw_b", 1, 7,\
 1022, 0)
DeclareVariable("Annuitaeten.BHKW_A_b", "[\342\202\254] []", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Annuitaeten.Hk_b", "[%] []", "Annuitaeten.__ps__an.hk_b", 1, 7, 1023,\
 0)
DeclareVariable("Annuitaeten.Hk_A_b", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Annuitaeten.EK_b", "[%] []", "Annuitaeten.__ps__an.ek_b", 1, 7, 1024,\
 0)
DeclareVariable("Annuitaeten.Ek_A_b", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Annuitaeten.Kt_A_b", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Annuitaeten.Kt_b", "[%] []", "Annuitaeten.__ps__an.kt_b", 1, 7, 1025,\
 0)
DeclareAlias2("Annuitaeten.Kapitalgebundene_Kosten.y", "Value of Real output", \
"Kuehlturm.ergebnisse.K_kap_an", 1, 5, 4235, 0)
DeclareAlias2("Annuitaeten.Betriebsgebundene_Kosten.y", "Value of Real output", \
"Ergebnisse.K_bet_an", 1, 3, 5, 0)
DeclareParameter("Annuitaeten.add3_1.k1", "Gain of input signal 1", 999, 1, \
0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.add3_1.k2", "Gain of input signal 2", 1000, 1, \
0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.add3_1.k3", "Gain of input signal 3", 1001, 1, \
0.0,0.0,0.0,0,560)
DeclareAlias2("Annuitaeten.add3_1.u1", "Connector of Real input signal 1", \
"Ergebnisse.K_bed_an", 1, 3, 0, 0)
DeclareAlias2("Annuitaeten.add3_1.u2", "Connector of Real input signal 2", \
"Kuehlturm.ergebnisse.K_kap_an", 1, 5, 4235, 0)
DeclareAlias2("Annuitaeten.add3_1.u3", "Connector of Real input signal 3", \
"Ergebnisse.K_bet_an", 1, 3, 5, 0)
DeclareAlias2("Annuitaeten.add3_1.y", "Connector of Real output signal", \
"Ergebnisse.K_gesamt", 1, 3, 3, 0)
DeclareAlias2("Annuitaeten.booleanExpression.y", "Value of Boolean output [:#(type=Boolean)]",\
 "Annuitaeten.BHKW_bool", 1, 5, 9670, 65)
DeclareAlias2("Annuitaeten.booleanToReal.u", "Connector of Boolean input signal [:#(type=Boolean)]",\
 "Annuitaeten.BHKW_bool", 1, 5, 9670, 65)
DeclareParameter("Annuitaeten.booleanToReal.realTrue", "Output signal for true Boolean input",\
 1002, 1.0, 0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.booleanToReal.realFalse", "Output signal for false Boolean input",\
 1003, 0.0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Annuitaeten.booleanToReal.y", "Connector of Real output signal", \
"Annuitaeten.BHKW_an_aus", 1, 5, 9671, 0)
DeclareParameter("Annuitaeten.integrator1.k", "Integrator gain [1]", 1004, 1, \
0.0,0.0,0.0,0,560)
DeclareVariable("Annuitaeten.integrator1.use_reset", "=true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Annuitaeten.integrator1.use_set", "=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Annuitaeten.integrator1.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareParameter("Annuitaeten.integrator1.y_start", "Initial or guess value of output (= state) [J]",\
 1005, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Annuitaeten.integrator1.u", "Connector of Real input signal [W]",\
 "Verbraucher.signalBus.P_BHKW", 1, 5, 2220, 0)
DeclareState("Annuitaeten.integrator1.y", "Connector of Real output signal [J]",\
 117, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Annuitaeten.integrator1.der(y)", "der(Connector of Real output signal) [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Annuitaeten.integrator1.local_reset", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Annuitaeten.integrator1.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Annuitaeten.BHKW_Leistung_el_kWh.k", "Gain value multiplied with input signal [1]",\
 1006, 2.7777777777777776E-07, 0.0,0.0,0.0,0,560)
DeclareAlias2("Annuitaeten.BHKW_Leistung_el_kWh.u", "Input signal connector [J]",\
 "Annuitaeten.integrator1.y", 1, 1, 117, 0)
DeclareVariable("Annuitaeten.BHKW_Leistung_el_kWh.y", "Output signal connector [J]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Annuitaeten.booleanExpression1.y", "Value of Boolean output [:#(type=Boolean)]",\
 "Annuitaeten.Kt_bool", 1, 5, 9674, 65)
DeclareAlias2("Annuitaeten.booleanToReal1.u", "Connector of Boolean input signal [:#(type=Boolean)]",\
 "Annuitaeten.Kt_bool", 1, 5, 9674, 65)
DeclareParameter("Annuitaeten.booleanToReal1.realTrue", "Output signal for true Boolean input",\
 1007, 1.0, 0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.booleanToReal1.realFalse", "Output signal for false Boolean input",\
 1008, 0.0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Annuitaeten.booleanToReal1.y", "Connector of Real output signal",\
 "Annuitaeten.Kt_an_aus", 1, 5, 9672, 0)
DeclareAlias2("Annuitaeten.Annuitaet_Erdgas.y", "Value of Real output", \
"Annuitaeten.ab_Erdgas", 1, 5, 9684, 0)
DeclareAlias2("Annuitaeten.product.u1", "Connector of Real input signal 1", \
"Verbraucher.signalBus.K_bed_th", 1, 5, 2233, 0)
DeclareAlias2("Annuitaeten.product.u2", "Connector of Real input signal 2", \
"Annuitaeten.ab_Erdgas", 1, 5, 9684, 0)
DeclareAlias2("Annuitaeten.product.y", "Connector of Real output signal", \
"Ergebnisse.K_bed_th_an", 1, 3, 1, 0)
DeclareAlias2("Annuitaeten.Annuitaet_Strom.y", "Value of Real output", \
"Annuitaeten.ab_Strom", 1, 5, 9685, 0)
DeclareAlias2("Annuitaeten.product1.u1", "Connector of Real input signal 1", \
"Annuitaeten.ab_Strom", 1, 5, 9685, 0)
DeclareAlias2("Annuitaeten.product1.u2", "Connector of Real input signal 2", \
"Verbraucher.signalBus.K_bed_el", 1, 5, 2234, 0)
DeclareAlias2("Annuitaeten.product1.y", "Connector of Real output signal", \
"Ergebnisse.K_bed_el_an", 1, 3, 2, 0)
DeclareParameter("Annuitaeten.add3_2.k1", "Gain of input signal 1", 1009, 1, \
0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.add3_2.k2", "Gain of input signal 2", 1010, 1, \
0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.add3_2.k3", "Gain of input signal 3", 1011, -1, \
0.0,0.0,0.0,0,560)
DeclareAlias2("Annuitaeten.add3_2.u1", "Connector of Real input signal 1", \
"Ergebnisse.K_bed_th_an", 1, 3, 1, 0)
DeclareAlias2("Annuitaeten.add3_2.u2", "Connector of Real input signal 2", \
"Ergebnisse.K_bed_el_an", 1, 3, 2, 0)
DeclareAlias2("Annuitaeten.add3_2.u3", "Connector of Real input signal 3", \
"Verbraucher.signalBus.G_verg", 1, 5, 2232, 0)
DeclareAlias2("Annuitaeten.add3_2.y", "Connector of Real output signal", \
"Ergebnisse.K_bed_an", 1, 3, 0, 0)
DeclareAlias2("Annuitaeten.booleanExpression2.y", "Value of Boolean output [:#(type=Boolean)]",\
 "Annuitaeten.Bivalenz_bool", 1, 5, 9679, 65)
DeclareAlias2("Annuitaeten.booleanToReal2.u", "Connector of Boolean input signal [:#(type=Boolean)]",\
 "Annuitaeten.Bivalenz_bool", 1, 5, 9679, 65)
DeclareParameter("Annuitaeten.booleanToReal2.realTrue", "Output signal for true Boolean input",\
 1012, 1.0, 0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.booleanToReal2.realFalse", "Output signal for false Boolean input",\
 1013, 0.0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Annuitaeten.booleanToReal2.y", "Connector of Real output signal",\
 "Annuitaeten.bivalenz", 1, 5, 9680, 0)
DeclareAlias2("Annuitaeten.signalBus.E_th_HK", "", "Verbraucher.signalBus.E_th_HK", 1,\
 5, 2216, 4)
DeclareAlias2("Annuitaeten.signalBus.E_bs_HK", "", "Heizkessel.integrator.y", 1,\
 1, 31, 4)
DeclareAlias2("Annuitaeten.signalBus.E_th_WRG", "[J]", "WRG.integrator1.y", 1, 1,\
 113, 4)
DeclareAlias2("Annuitaeten.signalBus.E_th_Last", "[J]", "Verbraucher.integrator2.y", 1,\
 1, 28, 4)
DeclareAlias2("Annuitaeten.signalBus.E_bs_th_BHKW", "", "BHKW_.integrator.y", 1,\
 1, 75, 4)
DeclareAlias2("Annuitaeten.signalBus.E_th_BHKW", "", "Verbraucher.signalBus.E_th_BHKW", 1,\
 5, 2217, 4)
DeclareAlias2("Annuitaeten.signalBus.E_bs_el_BHKW", "[J]", "wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.y", 1,\
 1, 123, 4)
DeclareAlias2("Annuitaeten.signalBus.E_el_bezug", "", "Stromerzeugung.integrator2.y", 1,\
 1, 37, 4)
DeclareAlias2("Annuitaeten.signalBus.P_EK_offline", "[W]", "Verbraucher.signalBus.P_EK_offline", 1,\
 5, 2218, 4)
DeclareAlias2("Annuitaeten.signalBus.P_EK", "[W]", "Verbraucher.signalBus.P_EK", 1,\
 5, 2219, 4)
DeclareAlias2("Annuitaeten.signalBus.P_BHKW", "[W]", "Verbraucher.signalBus.P_BHKW", 1,\
 5, 2220, 4)
DeclareAlias2("Annuitaeten.signalBus.P_Last", "[W]", "Verbraucher.signalBus.P_Last", 1,\
 5, 2221, 4)
DeclareAlias2("Annuitaeten.signalBus.P_Kt", "[W]", "Verbraucher.signalBus.P_Kt", 1,\
 5, 2222, 4)
DeclareAlias2("Annuitaeten.signalBus.Q_p_EK_offline", "[W]", "Elektrodenkessel.Q_p_ek", 1,\
 5, 9896, 4)
DeclareAlias2("Annuitaeten.signalBus.Q_p_EK", "[W]", "Verbraucher.signalBus.Q_p_EK", 1,\
 5, 2223, 4)
DeclareAlias2("Annuitaeten.signalBus.Q_p_Bs_el", "[W]", "Verbraucher.signalBus.Q_p_Bs_el", 1,\
 5, 2224, 4)
DeclareAlias2("Annuitaeten.signalBus.Q_p_Bs_offline", "[W]", "Verbraucher.signalBus.Q_p_Bs_offline", 1,\
 5, 2225, 4)
DeclareAlias2("Annuitaeten.signalBus.Q_p_th_Last", "[W]", "Verbraucher.signalBus.Q_p_th_Last", 1,\
 5, 2226, 4)
DeclareAlias2("Annuitaeten.signalBus.eta_th", "", "Verbraucher.signalBus.eta_th", 1,\
 5, 2227, 4)
DeclareAlias2("Annuitaeten.signalBus.eta_el", "", "Verbraucher.signalBus.eta_el", 1,\
 5, 2228, 4)
DeclareAlias2("Annuitaeten.signalBus.Grenzkosten", "[:#(type=Boolean)]", \
"Verbraucher.signalBus.Grenzkosten", 1, 5, 2229, 69)
DeclareAlias2("Annuitaeten.signalBus.T_ref_WRG", "[K|degC]", "WRG.T_VL.T", 1, 1,\
 112, 4)
DeclareAlias2("Annuitaeten.signalBus.T_ref_Puffer", "[K|degC]", "Pufferspeicher.T_VL_VK.T", 1,\
 1, 57, 4)
DeclareAlias2("Annuitaeten.signalBus.K_P_BHKW", "", "Verbraucher.signalBus.K_P_BHKW", 1,\
 5, 2230, 4)
DeclareAlias2("Annuitaeten.signalBus.Strompreis", "", "Verbraucher.signalBus.Strompreis", 1,\
 5, 2231, 4)
DeclareAlias2("Annuitaeten.signalBus.G_verg", "", "Verbraucher.signalBus.G_verg", 1,\
 5, 2232, 4)
DeclareAlias2("Annuitaeten.signalBus.K_bed_th", "", "Verbraucher.signalBus.K_bed_th", 1,\
 5, 2233, 4)
DeclareAlias2("Annuitaeten.signalBus.K_bed_el", "", "Verbraucher.signalBus.K_bed_el", 1,\
 5, 2234, 4)
DeclareAlias2("Annuitaeten.signalBus.K_w_kt", "", "Verbraucher.signalBus.K_w_kt", 1,\
 5, 2235, 4)
DeclareAlias2("Annuitaeten.signalBus.Feuchtkugeltemperatur", "[K]", \
"Verbraucher.signalBus.Feuchtkugeltemperatur", 1, 5, 2236, 4)
DeclareParameter("Annuitaeten.K_w_kt.k", "Gain value multiplied with input signal [1]",\
 1014, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Annuitaeten.K_w_kt.u", "Input signal connector", "Verbraucher.signalBus.K_w_kt", 1,\
 5, 2235, 0)
DeclareVariable("Annuitaeten.K_w_kt.y", "Output signal connector", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareAlias2("Annuitaeten.ergebnisse.K_bed_an", "", "Ergebnisse.K_bed_an", 1, 3,\
 0, 4)
DeclareAlias2("Annuitaeten.ergebnisse.K_bed_th_an", "", "Ergebnisse.K_bed_th_an", 1,\
 3, 1, 4)
DeclareAlias2("Annuitaeten.ergebnisse.K_bed_el_an", "", "Ergebnisse.K_bed_el_an", 1,\
 3, 2, 4)
DeclareAlias2("Annuitaeten.ergebnisse.K_gesamt", "", "Ergebnisse.K_gesamt", 1, 3,\
 3, 4)
DeclareAlias2("Annuitaeten.ergebnisse.K_kap_an", "", "Kuehlturm.ergebnisse.K_kap_an", 1,\
 5, 4235, 4)
DeclareAlias2("Annuitaeten.ergebnisse.K_bet_an", "", "Ergebnisse.K_bet_an", 1, 3,\
 5, 4)
DeclareAlias2("Annuitaeten.ergebnisse.Vbst", "[J]", "BHKW_.integrator1.y", 1, 1,\
 81, 4)
DeclareAlias2("Annuitaeten.ergebnisse.Stillstandszeit", "", "BHKW_.integrator2.y", 1,\
 1, 82, 4)
DeclareAlias2("Annuitaeten.ergebnisse.K_th_spez", "", "Ergebnisse.K_th_spez", 1,\
 3, 8, 4)
DeclareAlias2("Annuitaeten.ergebnisse.E_bs_gesamt", "", "Ergebnisse.E_bs_gesamt", 1,\
 3, 9, 4)
DeclareAlias2("Annuitaeten.ergebnisse.E_el_gesamt", "", "Ergebnisse.E_el_gesamt", 1,\
 3, 10, 4)
DeclareAlias2("Annuitaeten.ergebnisse.E_th_kt", "[J]", "Kuehlturm.tow.integrator.y", 1,\
 1, 62, 4)
DeclareParameter("Annuitaeten.__ps__an.T", "Betrachtungszeitraum in [a] []", 1015,\
 15, 0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.__ps__an.q", "Zinsfaktor bei einem kalkulationszinssatz von 5% [-] []",\
 1016, 1.05, 0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.__ps__an.bhkw", "[\342\202\254] []", 1017, \
701498.86, 0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.__ps__an.kt", "[\342\202\254] []", 1018, 22719, \
0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.__ps__an.wrg", "[\342\202\254] []", 1019, 134700, \
0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.__ps__an.ek", "", 1020, 751612, 0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.__ps__an.hk", "[\342\202\254] []", 1021, 940, \
0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.__ps__an.bhkw_b", "", 1022, 0.08, 0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.__ps__an.hk_b", "", 1023, 0.035, 0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.__ps__an.ek_b", "", 1024, 0.035, 0.0,0.0,0.0,0,560)
DeclareParameter("Annuitaeten.__ps__an.kt_b", "", 1025, 0.035, 0.0,0.0,0.0,0,560)
DeclareVariable("Elektrodenkessel.m_flow", "[kg/s]", 69.4, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.dp_nom_ek", "[Pa|bar]", 8330, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.T_soll", "[K|degC]", 288.15, 0.0,1E+100,300.0,\
0,513)
DeclareVariable("Elektrodenkessel.T_start", "[K|degC]", 288.15, 0.0,1E+100,300.0,\
0,513)
DeclareVariable("Elektrodenkessel.Bivalenz", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.PID.u_s", "Connector of setpoint input signal [K]",\
 0.0, 0.0,0.0,0.0,0,640)
DeclareAlias2("Elektrodenkessel.PID.u_m", "Connector of measurement input signal [K]",\
 "Elektrodenkessel.T_VL.T", 1, 1, 121, 0)
DeclareVariable("Elektrodenkessel.PID.y", "Connector of actuator output signal [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Elektrodenkessel.PID.controlError", "Control error (set point - measurement) [K]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Elektrodenkessel.PID.controllerType", "Type of controller [:#(type=Modelica.Blocks.Types.SimpleController)]",\
 4, 1.0,4.0,0.0,0,517)
DeclareParameter("Elektrodenkessel.PID.k", "Gain of controller [1]", 1026, 0.1, \
0.0,1E+100,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.Ti", "Time constant of Integrator block [s]",\
 1027, 600, 1E-60,1E+100,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.Td", "Time constant of Derivative block [s]",\
 1028, 10, 0.0,1E+100,0.0,0,560)
DeclareVariable("Elektrodenkessel.PID.yMax", "Upper limit of output", 1, \
0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.PID.yMin", "Lower limit of output", 0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Elektrodenkessel.PID.wp", "Set-point weight for Proportional block (0..1)",\
 1029, 1, 0.0,1E+100,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.wd", "Set-point weight for Derivative block (0..1)",\
 1030, 0, 0.0,1E+100,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.Ni", "Ni*Ti is time constant of anti-windup compensation",\
 1031, 0.9, 1E-13,1E+100,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.Nd", "The higher Nd, the more ideal the derivative block",\
 1032, 10, 1E-13,1E+100,0.0,0,560)
DeclareVariable("Elektrodenkessel.PID.withFeedForward", "Use feed-forward input? [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("Elektrodenkessel.PID.kFF", "Gain of feed-forward input", 1033,\
 1, 0.0,0.0,0.0,0,560)
DeclareVariable("Elektrodenkessel.PID.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.InitPID)]",\
 4, 1.0,5.0,0.0,0,517)
DeclareParameter("Elektrodenkessel.PID.xi_start", "Initial or guess value for integrator output (= integrator state)",\
 1034, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.xd_start", "Initial or guess value for state of derivative block",\
 1035, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("Elektrodenkessel.PID.y_start", "Initial value of output", 0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.PID.homotopyType", "Simplified model for homotopy-based initialization [:#(type=Modelica.Blocks.Types.LimiterHomotopy)]",\
 2, 1.0,4.0,0.0,0,517)
DeclareVariable("Elektrodenkessel.PID.strict", "= true, if strict limits with noEvent(..) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.PID.limitsAtInit", "Has no longer an effect and is only kept for backwards compatibility (the implementation uses now the homotopy operator) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.PID.unitTime", "[s]", 1, 0.0,0.0,0.0,0,1537)
DeclareAlias2("Elektrodenkessel.PID.addP.u1", "Connector of Real input signal 1 [K]",\
 "Elektrodenkessel.PID.u_s", 1, 5, 9702, 0)
DeclareAlias2("Elektrodenkessel.PID.addP.u2", "Connector of Real input signal 2 [K]",\
 "Elektrodenkessel.T_VL.T", 1, 1, 121, 0)
DeclareVariable("Elektrodenkessel.PID.addP.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Elektrodenkessel.PID.addP.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Elektrodenkessel.PID.addP.k2", "Gain of input signal 2", 1036,\
 -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.P.k", "Gain value multiplied with input signal [1]",\
 1037, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Elektrodenkessel.PID.P.u", "Input signal connector", \
"Elektrodenkessel.PID.addP.y", 1, 5, 9715, 0)
DeclareVariable("Elektrodenkessel.PID.P.y", "Output signal connector", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Elektrodenkessel.PID.gainPID.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.PID.gainPID.u", "Input signal connector", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareVariable("Elektrodenkessel.PID.gainPID.y", "Output signal connector", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareParameter("Elektrodenkessel.PID.addPID.k1", "Gain of input signal 1", 1038,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.addPID.k2", "Gain of input signal 2", 1039,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.addPID.k3", "Gain of input signal 3", 1040,\
 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Elektrodenkessel.PID.addPID.u1", "Connector of Real input signal 1",\
 "Elektrodenkessel.PID.P.y", 1, 5, 9717, 0)
DeclareVariable("Elektrodenkessel.PID.addPID.u2", "Connector of Real input signal 2",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Elektrodenkessel.PID.addPID.u3", "Connector of Real input signal 3",\
 "Elektrodenkessel.PID.I.y", 1, 1, 118, 0)
DeclareAlias2("Elektrodenkessel.PID.addPID.y", "Connector of Real output signal",\
 "Elektrodenkessel.PID.gainPID.u", 1, 5, 9719, 0)
DeclareVariable("Elektrodenkessel.PID.limiter.uMax", "Upper limits of input signals",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.PID.limiter.uMin", "Lower limits of input signals",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.PID.limiter.strict", "= true, if strict limits with noEvent(..) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.PID.limiter.homotopyType", "Simplified model for homotopy-based initialization [:#(type=Modelica.Blocks.Types.LimiterHomotopy)]",\
 2, 1.0,4.0,0.0,0,517)
DeclareVariable("Elektrodenkessel.PID.limiter.limitsAtInit", "Has no longer an effect and is only kept for backwards compatibility (the implementation uses now the homotopy operator) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.PID.limiter.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Elektrodenkessel.PID.limiter.y", "Connector of Real output signal [1]",\
 "Elektrodenkessel.PID.y", 1, 5, 9703, 0)
DeclareAlias2("Elektrodenkessel.PID.limiter.simplifiedExpr", "Simplified expression for homotopy-based initialization",\
 "Elektrodenkessel.PID.limiter.u", 1, 5, 9727, 1024)
DeclareVariable("Elektrodenkessel.PID.with_I", "[:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,1539)
DeclareVariable("Elektrodenkessel.PID.with_D", "[:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,1539)
DeclareParameter("Elektrodenkessel.PID.FFzero.k", "Constant output value", 1041,\
 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Elektrodenkessel.PID.FFzero.y", "Connector of Real output signal",\
 "Elektrodenkessel.PID.FFzero.k", 1, 7, 1041, 0)
DeclareAlias2("Elektrodenkessel.PID.addFF.u1", "Connector of Real input signal 1",\
 "Elektrodenkessel.PID.gainPID.y", 1, 5, 9720, 0)
DeclareAlias2("Elektrodenkessel.PID.addFF.u2", "Connector of Real input signal 2",\
 "Elektrodenkessel.PID.FFzero.k", 1, 7, 1041, 0)
DeclareAlias2("Elektrodenkessel.PID.addFF.y", "Connector of Real output signal",\
 "Elektrodenkessel.PID.limiter.u", 1, 5, 9727, 0)
DeclareParameter("Elektrodenkessel.PID.addFF.k1", "Gain of input signal 1", 1042,\
 1, 0.0,0.0,0.0,0,560)
DeclareVariable("Elektrodenkessel.PID.addFF.k2", "Gain of input signal 2", 0.0, \
0.0,0.0,0.0,0,513)
DeclareAlias2("Elektrodenkessel.PID.addD.u1", "Connector of Real input signal 1 [K]",\
 "Elektrodenkessel.PID.u_s", 1, 5, 9702, 0)
DeclareAlias2("Elektrodenkessel.PID.addD.u2", "Connector of Real input signal 2 [K]",\
 "Elektrodenkessel.T_VL.T", 1, 1, 121, 0)
DeclareVariable("Elektrodenkessel.PID.addD.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Elektrodenkessel.PID.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Elektrodenkessel.PID.addD.k2", "Gain of input signal 2", 1043,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Elektrodenkessel.PID.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Elektrodenkessel.PID.I.use_reset", "=true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Elektrodenkessel.PID.I.use_set", "=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Elektrodenkessel.PID.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Elektrodenkessel.PID.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.PID.I.u", "Connector of Real input signal", \
0.0, 0.0,0.0,0.0,0,512)
DeclareState("Elektrodenkessel.PID.I.y", "Connector of Real output signal", 118,\
 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Elektrodenkessel.PID.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Elektrodenkessel.PID.I.local_reset", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Elektrodenkessel.PID.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Elektrodenkessel.PID.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.PID.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.PID.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 2, 1.0,4.0,0.0,0,517)
DeclareVariable("Elektrodenkessel.PID.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Elektrodenkessel.PID.D.y_start", "Initial value of output (= state)",\
 1044, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Elektrodenkessel.PID.D.u", "Connector of Real input signal", \
"Elektrodenkessel.PID.addD.y", 1, 5, 9731, 0)
DeclareAlias2("Elektrodenkessel.PID.D.y", "Connector of Real output signal", \
"Elektrodenkessel.PID.addPID.u2", 1, 5, 9721, 0)
DeclareState("Elektrodenkessel.PID.D.x", "State of block", 119, 0.0, 0.0,0.0,0.0,\
0,544)
DeclareDerivative("Elektrodenkessel.PID.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Elektrodenkessel.PID.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Elektrodenkessel.PID.addI.k1", "Gain of input signal 1", 1045,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.addI.k2", "Gain of input signal 2", 1046,\
 -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.addI.k3", "Gain of input signal 3", 1047,\
 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Elektrodenkessel.PID.addI.u1", "Connector of Real input signal 1 [K]",\
 "Elektrodenkessel.PID.u_s", 1, 5, 9702, 0)
DeclareAlias2("Elektrodenkessel.PID.addI.u2", "Connector of Real input signal 2 [K]",\
 "Elektrodenkessel.T_VL.T", 1, 1, 121, 0)
DeclareVariable("Elektrodenkessel.PID.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Elektrodenkessel.PID.addI.y", "Connector of Real output signal", \
"Elektrodenkessel.PID.I.u", 1, 5, 9738, 0)
DeclareAlias2("Elektrodenkessel.PID.addSat.u1", "Connector of Real input signal 1 [1]",\
 "Elektrodenkessel.PID.y", 1, 5, 9703, 0)
DeclareAlias2("Elektrodenkessel.PID.addSat.u2", "Connector of Real input signal 2",\
 "Elektrodenkessel.PID.limiter.u", 1, 5, 9727, 0)
DeclareVariable("Elektrodenkessel.PID.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Elektrodenkessel.PID.addSat.k1", "Gain of input signal 1", 1048,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Elektrodenkessel.PID.addSat.k2", "Gain of input signal 2", 1049,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Elektrodenkessel.PID.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Elektrodenkessel.PID.gainTrack.u", "Input signal connector", \
"Elektrodenkessel.PID.addSat.y", 1, 5, 9747, 0)
DeclareAlias2("Elektrodenkessel.PID.gainTrack.y", "Output signal connector", \
"Elektrodenkessel.PID.addI.u3", 1, 5, 9746, 0)
DeclareAlias2("Elektrodenkessel.product.u1", "Connector of Real input signal 1 [W]",\
 "Elektrodenkessel.Q_p_ek", 1, 5, 9896, 0)
DeclareAlias2("Elektrodenkessel.product.u2", "Connector of Real input signal 2 [1]",\
 "Elektrodenkessel.PID.y", 1, 5, 9703, 0)
DeclareVariable("Elektrodenkessel.product.y", "Connector of Real output signal [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Elektrodenkessel.Kessel_Nennleistung.y", "Value of Real output [W]",\
 "Elektrodenkessel.Q_p_ek", 1, 5, 9896, 0)
DeclareAlias2("Elektrodenkessel.Solltemperatur.y", "Value of Real output [K]", \
"Elektrodenkessel.T_soll", 1, 5, 9699, 0)
DeclareVariable("Elektrodenkessel.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,100000.0,69.4,0,776)
DeclareAlias2("Elektrodenkessel.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "WRG.port_b.p", 1, 5, 4909, 4)
DeclareVariable("Elektrodenkessel.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 83680.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("Elektrodenkessel.port_a.der(h_outflow)", "der(Specific thermodynamic enthalpy close to the connection point if m_flow < 0) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("Elektrodenkessel.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.T_RL.port_b.m_flow", 1, 5, 9841, 132)
DeclareAlias2("Elektrodenkessel.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 4)
DeclareAlias2("Elektrodenkessel.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 4)
DeclareVariable("Elektrodenkessel.vol.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Elektrodenkessel.vol.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Elektrodenkessel.vol.substanceDynamics", "Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Elektrodenkessel.vol.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareParameter("Elektrodenkessel.vol.p_start", "Start value of pressure [Pa|bar]",\
 1050, 300000, 0.0,100000000.0,100000.0,0,560)
DeclareVariable("Elektrodenkessel.vol.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,513)
DeclareParameter("Elektrodenkessel.vol.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 1051, 1, 0.0,1.0,0.1,0,560)
DeclareVariable("Elektrodenkessel.vol.mSenFac", "Factor for scaling the sensible thermal mass of the volume [1]",\
 1, 1.0,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.vol.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Elektrodenkessel.vol.prescribedHeatFlowRate", "Set to true if the model has a prescribed heat flow at its heatPort. If the heat flow rate at the heatPort is only based on temperature difference, then set to false [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.vol.simplify_mWat_flow", "Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.vol.m_flow_nominal", "Nominal mass flow rate [kg/s]",\
 69.4, 0.0,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.vol.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("Elektrodenkessel.vol.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.006940000000000001, 0.0,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.vol.allowFlowReversal", "= false to simplify equations, assuming, but not enforcing, no flow reversal. Used only if model has two ports. [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.vol.V", "Volume [m3]", 4.1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Elektrodenkessel.vol.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.port_a.m_flow", 1, 5, 9750, 132)
DeclareAlias2("Elektrodenkessel.vol.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 4)
DeclareAlias2("Elektrodenkessel.vol.ports[1].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 4)
DeclareAlias2("Elektrodenkessel.vol.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.T_RL.port_b.m_flow", 1, 5, 9841, 132)
DeclareAlias2("Elektrodenkessel.vol.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 4)
DeclareAlias2("Elektrodenkessel.vol.ports[2].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 4)
DeclareAlias2("Elektrodenkessel.vol.T", "Temperature of the fluid [K|degC]", \
"Elektrodenkessel.heatCapacitor.T", 1, 5, 9836, 0)
DeclareAlias2("Elektrodenkessel.vol.U", "Internal energy of the component [J]", \
"Elektrodenkessel.vol.dynBal.U", 1, 1, 120, 0)
DeclareAlias2("Elektrodenkessel.vol.p", "Pressure of the fluid [Pa|bar]", \
"Heizkessel.port_a.p", 1, 5, 2330, 0)
DeclareVariable("Elektrodenkessel.vol.m", "Mass of the component [kg]", \
4081.9026, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.vol.rho_start", "Density, used to compute start and guess values [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.state_start.p", "Absolute pressure of medium [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.state_start.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.useSteadyStateTwoPort", "Flag, true if the model has two ports only and uses a steady state balance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("Elektrodenkessel.vol.hOut_internal", "Internal connector for leaving temperature of the component [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 1024)
DeclareAlias2("Elektrodenkessel.vol.preTem.port.T", "Port temperature [K|degC]",\
 "Elektrodenkessel.heatCapacitor.T", 1, 5, 9836, 1028)
DeclareAlias2("Elektrodenkessel.vol.preTem.port.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 "Elektrodenkessel.vol.heatPort.Q_flow", 1, 5, 9777, 1156)
DeclareAlias2("Elektrodenkessel.vol.preTem.T", "[K]", "Elektrodenkessel.heatCapacitor.T", 1,\
 5, 9836, 1024)
DeclareAlias2("Elektrodenkessel.vol.portT.y", "Value of Real output [K]", \
"Elektrodenkessel.heatCapacitor.T", 1, 5, 9836, 1024)
DeclareAlias2("Elektrodenkessel.vol.heaFloSen.Q_flow", "Heat flow from port_a to port_b as output signal [W]",\
 "Elektrodenkessel.vol.heatPort.Q_flow", 1, 5, 9777, 1024)
DeclareAlias2("Elektrodenkessel.vol.heaFloSen.port_a.T", "Port temperature [K|degC]",\
 "Elektrodenkessel.heatCapacitor.T", 1, 5, 9836, 1028)
DeclareAlias2("Elektrodenkessel.vol.heaFloSen.port_a.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 "Elektrodenkessel.vol.heatPort.Q_flow", 1, 5, 9777, 1156)
DeclareAlias2("Elektrodenkessel.vol.heaFloSen.port_b.T", "Port temperature [K|degC]",\
 "Elektrodenkessel.heatCapacitor.T", 1, 5, 9836, 1028)
DeclareVariable("Elektrodenkessel.vol.heaFloSen.port_b.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,2824)
DeclareVariable("Elektrodenkessel.vol.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("Elektrodenkessel.vol.heatPort.T", "Port temperature [K|degC]", \
"Elektrodenkessel.heatCapacitor.T", 1, 5, 9836, 4)
DeclareVariable("Elektrodenkessel.vol.heatPort.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,776)
DeclareVariable("Elektrodenkessel.vol.dynBal.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("Elektrodenkessel.vol.dynBal.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("Elektrodenkessel.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("Elektrodenkessel.vol.dynBal.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("Elektrodenkessel.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume [1]",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Elektrodenkessel.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("Elektrodenkessel.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("Elektrodenkessel.vol.dynBal.use_mWat_flow", "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("Elektrodenkessel.vol.dynBal.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("Elektrodenkessel.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 "Elektrodenkessel.vol.heatPort.Q_flow", 1, 5, 9777, 1024)
DeclareAlias2("Elektrodenkessel.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 1024)
DeclareAlias2("Elektrodenkessel.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "Elektrodenkessel.vol.dynBal.U", 1, 1, 120, 1024)
DeclareVariable("Elektrodenkessel.vol.dynBal.mOut", "Mass of the component [kg]",\
 4081.9026, 0.0,1E+100,0.0,0,2561)
EndNonAlias(11)
PreNonAliasNew(12)
StartNonAlias(12)
DeclareAlias2("Elektrodenkessel.vol.dynBal.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.port_a.m_flow", 1, 5, 9750, 1156)
DeclareAlias2("Elektrodenkessel.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 1028)
DeclareAlias2("Elektrodenkessel.vol.dynBal.ports[1].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 1028)
DeclareAlias2("Elektrodenkessel.vol.dynBal.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.T_RL.port_b.m_flow", 1, 5, 9841, 1156)
DeclareAlias2("Elektrodenkessel.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 1028)
DeclareAlias2("Elektrodenkessel.vol.dynBal.ports[2].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 1028)
DeclareVariable("Elektrodenkessel.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("Elektrodenkessel.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 1024)
DeclareAlias2("Elektrodenkessel.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 1024)
DeclareAlias2("Elektrodenkessel.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 1024)
DeclareVariable("Elektrodenkessel.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.medium.R", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("Elektrodenkessel.vol.dynBal.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 1024)
DeclareAlias2("Elektrodenkessel.vol.dynBal.medium.state.T", "Temperature of medium [K|degC]",\
 "Elektrodenkessel.vol.dynBal.medium.T", 1, 5, 9792, 1024)
DeclareVariable("Elektrodenkessel.vol.dynBal.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("Elektrodenkessel.vol.dynBal.medium.standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("Elektrodenkessel.vol.dynBal.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("Elektrodenkessel.vol.dynBal.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("Elektrodenkessel.vol.dynBal.U", "Internal energy of fluid [J]", 120,\
 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("Elektrodenkessel.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("Elektrodenkessel.vol.dynBal.m", "Mass of fluid [kg]", 4081.9026,\
 0.0,1E+100,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("Elektrodenkessel.vol.dynBal.fluidVolume", "Volume [m3]", 4.1, \
0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.ports_H_flow[1]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("Elektrodenkessel.vol.dynBal.ports_H_flow[2]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("Elektrodenkessel.vol.dynBal.cp_default", "Heat capacity, to compute additional dry mass [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.computeCSen", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("Elektrodenkessel.vol.dynBal.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.T_VL.allowFlowReversal", "= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("Elektrodenkessel.T_VL.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.port_a.m_flow", 1, 5, 9750, 132)
DeclareAlias2("Elektrodenkessel.T_VL.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 4)
DeclareVariable("Elektrodenkessel.T_VL.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 83680.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("Elektrodenkessel.T_VL.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.T_RL.port_b.m_flow", 1, 5, 9841, 132)
DeclareAlias2("Elektrodenkessel.T_VL.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 4)
DeclareAlias2("Elektrodenkessel.T_VL.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 4)
DeclareVariable("Elektrodenkessel.T_VL.m_flow_nominal", "Nominal mass flow rate, used for regularization near zero flow [kg/s]",\
 69.4, 0.0,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.T_VL.m_flow_small", "For bi-directional flow, temperature is regularized in the region |m_flow| < m_flow_small (m_flow_small > 0 required) [kg/s]",\
 0.006940000000000001, 0.0,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.T_VL.tau", "Time constant at nominal flow rate (use tau=0 for steady-state sensor, but see user guide for potential problems) [s]",\
 1, 0.0,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.T_VL.initType", "Type of initialization (InitialState and InitialOutput are identical) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("Elektrodenkessel.T_VL.k", "Gain to take flow rate into account for sensor time constant [1]",\
 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("Elektrodenkessel.T_VL.dynamic", "Flag, true if the sensor is a dynamic sensor [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("Elektrodenkessel.T_VL.mNor_flow", "Normalized mass flow rate [1]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("Elektrodenkessel.T_VL.tauInv", "Inverse of tau [s-1]", 1.0, \
0.0,0.0,0.0,0,2561)
DeclareState("Elektrodenkessel.T_VL.T", "Temperature of the passing fluid [K|degC]",\
 121, 0.0, 0.0,1E+100,0.0,0,544)
DeclareDerivative("Elektrodenkessel.T_VL.der(T)", "der(Temperature of the passing fluid) [K/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Elektrodenkessel.T_VL.T_start", "Initial or guess value of output (= state) [K|degC]",\
 1052, 293.15, 0.0,1E+100,300.0,0,560)
DeclareVariable("Elektrodenkessel.T_VL.transferHeat", "if true, temperature T converges towards TAmb when no flow [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("Elektrodenkessel.T_VL.TAmb", "Fixed ambient temperature for heat transfer [K|degC]",\
 1053, 293.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("Elektrodenkessel.T_VL.tauHeaTra", "Time constant for heat transfer, default 20 minutes [s]",\
 1054, 1200, 1.0,1E+100,0.0,0,560)
DeclareVariable("Elektrodenkessel.T_VL.tauHeaTraInv", "Dummy parameter to avoid division by tauHeaTra [1/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.T_VL.ratTau", "Ratio of tau [1]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.T_VL.TMed", "Medium temperature to which the sensor is exposed [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareVariable("Elektrodenkessel.T_VL.T_a_inflow", "Temperature of inflowing fluid at port_a [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareVariable("Elektrodenkessel.T_VL.T_b_inflow", "Temperature of inflowing fluid at port_b, or T_a_inflow if uni-directional flow [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("Elektrodenkessel.prescribedHeatFlow.Q_flow", "[W]", \
"Elektrodenkessel.product.y", 1, 5, 9749, 0)
DeclareAlias2("Elektrodenkessel.prescribedHeatFlow.port.T", "Port temperature [K|degC]",\
 "Elektrodenkessel.heatCapacitor.T", 1, 5, 9836, 4)
DeclareVariable("Elektrodenkessel.prescribedHeatFlow.port.Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,776)
DeclareVariable("Elektrodenkessel.product2.u1", "Connector of Real input signal 1 [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Elektrodenkessel.product2.u2", "Connector of Real input signal 2 [W]",\
 "Elektrodenkessel.product.y", 1, 5, 9749, 0)
DeclareAlias2("Elektrodenkessel.product2.y", "Connector of Real output signal [W]",\
 "Verbraucher.signalBus.P_EK", 1, 5, 2219, 0)
DeclareVariable("Elektrodenkessel.heatCapacitor.C", "Heat capacity of element (= cp*m) [J/K]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.heatCapacitor.T", "Temperature of element [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,512)
DeclareVariable("Elektrodenkessel.heatCapacitor.der(T)", "der(Temperature of element) [K/s]",\
 0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Elektrodenkessel.heatCapacitor.der_T", "Time derivative of temperature (= der(T)) [K/s]",\
 "Elektrodenkessel.heatCapacitor.der(T)", 1, 5, 9837, 0)
DeclareAlias2("Elektrodenkessel.heatCapacitor.port.T", "Port temperature [K|degC]",\
 "Elektrodenkessel.heatCapacitor.T", 1, 5, 9836, 4)
DeclareVariable("Elektrodenkessel.heatCapacitor.port.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,776)
DeclareVariable("Elektrodenkessel.T_RL.allowFlowReversal", "= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("Elektrodenkessel.T_RL.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.port_a.m_flow", 1, 5, 9750, 132)
DeclareVariable("Elektrodenkessel.T_RL.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,520)
DeclareAlias2("Elektrodenkessel.T_RL.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 4)
DeclareVariable("Elektrodenkessel.T_RL.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,1E+60,0.0,0,776)
DeclareAlias2("Elektrodenkessel.T_RL.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Elektrodenkessel.T_RL.port_a.p", 1, 5, 9840, 4)
DeclareVariable("Elektrodenkessel.T_RL.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 83680.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("Elektrodenkessel.T_RL.m_flow_nominal", "Nominal mass flow rate, used for regularization near zero flow [kg/s]",\
 69.4, 0.0,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.T_RL.m_flow_small", "For bi-directional flow, temperature is regularized in the region |m_flow| < m_flow_small (m_flow_small > 0 required) [kg/s]",\
 0.006940000000000001, 0.0,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.T_RL.tau", "Time constant at nominal flow rate (use tau=0 for steady-state sensor, but see user guide for potential problems) [s]",\
 1, 0.0,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.T_RL.initType", "Type of initialization (InitialState and InitialOutput are identical) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("Elektrodenkessel.T_RL.k", "Gain to take flow rate into account for sensor time constant [1]",\
 1, 0.0,0.0,0.0,0,2560)
DeclareVariable("Elektrodenkessel.T_RL.dynamic", "Flag, true if the sensor is a dynamic sensor [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("Elektrodenkessel.T_RL.mNor_flow", "Normalized mass flow rate [1]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("Elektrodenkessel.T_RL.tauInv", "Inverse of tau [s-1]", 1.0, \
0.0,0.0,0.0,0,2561)
DeclareState("Elektrodenkessel.T_RL.T", "Temperature of the passing fluid [K|degC]",\
 122, 0.0, 0.0,1E+100,0.0,0,544)
DeclareDerivative("Elektrodenkessel.T_RL.der(T)", "der(Temperature of the passing fluid) [K/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Elektrodenkessel.T_RL.T_start", "Initial or guess value of output (= state) [K|degC]",\
 1055, 293.15, 0.0,1E+100,300.0,0,560)
DeclareVariable("Elektrodenkessel.T_RL.transferHeat", "if true, temperature T converges towards TAmb when no flow [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("Elektrodenkessel.T_RL.TAmb", "Fixed ambient temperature for heat transfer [K|degC]",\
 1056, 293.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("Elektrodenkessel.T_RL.tauHeaTra", "Time constant for heat transfer, default 20 minutes [s]",\
 1057, 1200, 1.0,1E+100,0.0,0,560)
DeclareVariable("Elektrodenkessel.T_RL.tauHeaTraInv", "Dummy parameter to avoid division by tauHeaTra [1/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.T_RL.ratTau", "Ratio of tau [1]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.T_RL.TMed", "Medium temperature to which the sensor is exposed [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareVariable("Elektrodenkessel.T_RL.T_a_inflow", "Temperature of inflowing fluid at port_a [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareVariable("Elektrodenkessel.T_RL.T_b_inflow", "Temperature of inflowing fluid at port_b, or T_a_inflow if uni-directional flow [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("Elektrodenkessel.Kessel_Nennleistung2.y", "Value of Real output [1]",\
 "Elektrodenkessel.product2.u1", 1, 5, 9834, 0)
DeclareAlias2("Elektrodenkessel.booleanExpression.y", "Value of Boolean output [:#(type=Boolean)]",\
 "Elektrodenkessel.Bivalenz", 1, 5, 9701, 65)
DeclareVariable("Elektrodenkessel.booleanToReal.u", "Connector of Boolean input signal [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,642)
DeclareParameter("Elektrodenkessel.booleanToReal.realTrue", "Output signal for true Boolean input [1]",\
 1058, 1.0, 0.0,0.0,0.0,0,560)
DeclareParameter("Elektrodenkessel.booleanToReal.realFalse", "Output signal for false Boolean input [1]",\
 1059, 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("Elektrodenkessel.booleanToReal.y", "Connector of Real output signal [1]",\
 0.0, 0.0,0.0,0.0,0,640)
DeclareParameter("Elektrodenkessel.const.k", "Constant output value", 1060, \
1E-06, 0.0,0.0,0.0,0,560)
DeclareAlias2("Elektrodenkessel.const.y", "Connector of Real output signal", \
"Elektrodenkessel.const.k", 1, 7, 1060, 0)
DeclareAlias2("Elektrodenkessel.Div_0.u1", "Connector of Real input signal 1 [W]",\
 "Elektrodenkessel.product.y", 1, 5, 9749, 0)
DeclareAlias2("Elektrodenkessel.Div_0.u2", "Connector of Real input signal 2", \
"Elektrodenkessel.const.k", 1, 7, 1060, 0)
DeclareAlias2("Elektrodenkessel.Div_0.y", "Connector of Real output signal [W]",\
 "Verbraucher.signalBus.Q_p_EK", 1, 5, 2223, 0)
DeclareParameter("Elektrodenkessel.Div_0.k1", "Gain of input signal 1 [1]", 1061,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Elektrodenkessel.Div_0.k2", "Gain of input signal 2", 1062, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Elektrodenkessel.product3.u1", "Connector of Real input signal 1 [K]",\
 "Elektrodenkessel.T_soll", 1, 5, 9699, 0)
DeclareAlias2("Elektrodenkessel.product3.u2", "Connector of Real input signal 2 [1]",\
 "Elektrodenkessel.booleanToReal.y", 1, 5, 9858, 0)
DeclareAlias2("Elektrodenkessel.product3.y", "Connector of Real output signal [K]",\
 "Elektrodenkessel.PID.u_s", 1, 5, 9702, 0)
DeclareAlias2("Elektrodenkessel.not1.u", "Connector of Boolean input signal [:#(type=Boolean)]",\
 "Verbraucher.signalBus.Grenzkosten", 1, 5, 2229, 65)
DeclareVariable("Elektrodenkessel.not1.y", "Connector of Boolean output signal [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,642)
DeclareAlias2("Elektrodenkessel.and1.u1", "Connector of first Boolean input signal [:#(type=Boolean)]",\
 "Elektrodenkessel.Bivalenz", 1, 5, 9701, 65)
DeclareAlias2("Elektrodenkessel.and1.u2", "Connector of second Boolean input signal [:#(type=Boolean)]",\
 "Elektrodenkessel.not1.y", 1, 5, 9859, 65)
DeclareAlias2("Elektrodenkessel.and1.y", "Connector of Boolean output signal [:#(type=Boolean)]",\
 "Elektrodenkessel.booleanToReal.u", 1, 5, 9857, 65)
DeclareAlias2("Elektrodenkessel.product1.u1", "Connector of Real input signal 1 [W]",\
 "Elektrodenkessel.Q_p_ek", 1, 5, 9896, 0)
DeclareAlias2("Elektrodenkessel.product1.u2", "Connector of Real input signal 2 [1]",\
 "Elektrodenkessel.product2.u1", 1, 5, 9834, 0)
DeclareAlias2("Elektrodenkessel.product1.y", "Connector of Real output signal [W]",\
 "Verbraucher.signalBus.P_EK_offline", 1, 5, 2218, 0)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.E_th_HK", "", "Verbraucher.signalBus.E_th_HK", 1,\
 5, 2216, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.E_bs_HK", "", "Heizkessel.integrator.y", 1,\
 1, 31, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.E_th_WRG", "[J]", \
"WRG.integrator1.y", 1, 1, 113, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.E_th_Last", "[J]", \
"Verbraucher.integrator2.y", 1, 1, 28, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.E_bs_th_BHKW", "", \
"BHKW_.integrator.y", 1, 1, 75, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.E_th_BHKW", "", "Verbraucher.signalBus.E_th_BHKW", 1,\
 5, 2217, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.E_bs_el_BHKW", "[J]", \
"wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.y", 1, 1, 123, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.E_el_bezug", "", "Stromerzeugung.integrator2.y", 1,\
 1, 37, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.P_EK_offline", "[W]", \
"Verbraucher.signalBus.P_EK_offline", 1, 5, 2218, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.P_EK", "[W]", "Verbraucher.signalBus.P_EK", 1,\
 5, 2219, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.P_BHKW", "[W]", "Verbraucher.signalBus.P_BHKW", 1,\
 5, 2220, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.P_Last", "[W]", "Verbraucher.signalBus.P_Last", 1,\
 5, 2221, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.P_Kt", "[W]", "Verbraucher.signalBus.P_Kt", 1,\
 5, 2222, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.Q_p_EK_offline", "[W]", \
"Elektrodenkessel.Q_p_ek", 1, 5, 9896, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.Q_p_EK", "[W]", "Verbraucher.signalBus.Q_p_EK", 1,\
 5, 2223, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.Q_p_Bs_el", "[W]", \
"Verbraucher.signalBus.Q_p_Bs_el", 1, 5, 2224, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.Q_p_Bs_offline", "[W]", \
"Verbraucher.signalBus.Q_p_Bs_offline", 1, 5, 2225, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.Q_p_th_Last", "[W]", \
"Verbraucher.signalBus.Q_p_th_Last", 1, 5, 2226, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.eta_th", "", "Verbraucher.signalBus.eta_th", 1,\
 5, 2227, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.eta_el", "", "Verbraucher.signalBus.eta_el", 1,\
 5, 2228, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.Grenzkosten", "[:#(type=Boolean)]",\
 "Verbraucher.signalBus.Grenzkosten", 1, 5, 2229, 69)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.T_ref_WRG", "[K|degC]", \
"WRG.T_VL.T", 1, 1, 112, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.T_ref_Puffer", "[K|degC]", \
"Pufferspeicher.T_VL_VK.T", 1, 1, 57, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.K_P_BHKW", "", "Verbraucher.signalBus.K_P_BHKW", 1,\
 5, 2230, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.Strompreis", "", "Verbraucher.signalBus.Strompreis", 1,\
 5, 2231, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.G_verg", "", "Verbraucher.signalBus.G_verg", 1,\
 5, 2232, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.K_bed_th", "", "Verbraucher.signalBus.K_bed_th", 1,\
 5, 2233, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.K_bed_el", "", "Verbraucher.signalBus.K_bed_el", 1,\
 5, 2234, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.K_w_kt", "", "Verbraucher.signalBus.K_w_kt", 1,\
 5, 2235, 4)
DeclareAlias2("Elektrodenkessel.signalBus_BHKW.Feuchtkugeltemperatur", "[K]", \
"Verbraucher.signalBus.Feuchtkugeltemperatur", 1, 5, 2236, 4)
DeclareVariable("Elektrodenkessel.Ventil_EK.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("Elektrodenkessel.Ventil_EK.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.port_a.m_flow", 1, 5, 9750, 132)
DeclareAlias2("Elektrodenkessel.Ventil_EK.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "WRG.port_b.p", 1, 5, 4909, 4)
DeclareAlias2("Elektrodenkessel.Ventil_EK.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 4)
DeclareAlias2("Elektrodenkessel.Ventil_EK.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.T_RL.port_b.m_flow", 1, 5, 9841, 132)
DeclareAlias2("Elektrodenkessel.Ventil_EK.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Elektrodenkessel.T_RL.port_a.p", 1, 5, 9840, 4)
DeclareAlias2("Elektrodenkessel.Ventil_EK.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Elektrodenkessel.T_RL.port_b.h_outflow", 1, 5, 9842, 4)
DeclareVariable("Elektrodenkessel.Ventil_EK.port_a_exposesState", \
"= true if port_a exposes the state of a fluid volume [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("Elektrodenkessel.Ventil_EK.port_b_exposesState", \
"= true if port_b.p exposes the state of a fluid volume [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareParameter("Elektrodenkessel.Ventil_EK.showDesignFlowDirection", \
"= false to hide the arrow in the model icon [:#(type=Boolean)]", 1063, true, \
0.0,0.0,0.0,0,2610)
DeclareVariable("Elektrodenkessel.Ventil_EK.dp_start", "Guess value of dp = port_a.p - port_b.p [Pa|bar]",\
 300000, -1E+60,100000000.0,100000.0,0,513)
DeclareVariable("Elektrodenkessel.Ventil_EK.m_flow_start", "Guess value of m_flow = port_a.m_flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.Ventil_EK.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.Ventil_EK.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.Ventil_EK.show_V_flow", "= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("Elektrodenkessel.Ventil_EK.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "Elektrodenkessel.port_a.m_flow", 1, 5, 9750, 0)
DeclareVariable("Elektrodenkessel.Ventil_EK.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Elektrodenkessel.Ventil_EK.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Elektrodenkessel.Ventil_EK.port_a_T", "Temperature close to port_a, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("Elektrodenkessel.Ventil_EK.port_b_T", "Temperature close to port_b, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareAlias2("Elektrodenkessel.Ventil_EK.state_a.p", "Absolute pressure of medium [Pa|bar]",\
 "WRG.port_b.p", 1, 5, 4909, 1024)
DeclareVariable("Elektrodenkessel.Ventil_EK.state_a.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("Elektrodenkessel.Ventil_EK.state_b.p", "Absolute pressure of medium [Pa|bar]",\
 "Elektrodenkessel.T_RL.port_a.p", 1, 5, 9840, 1024)
DeclareVariable("Elektrodenkessel.Ventil_EK.state_b.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareParameter("Elektrodenkessel.Ventil_EK.dp_nominal", "Nominal pressure drop at full opening=1 [Pa|bar]",\
 1064, 1000, 0.0,1E+100,100000.0,0,560)
DeclareParameter("Elektrodenkessel.Ventil_EK.m_flow_nominal", "Nominal mass flowrate at full opening=1 [kg/s]",\
 1065, 69.4, -100000.0,100000.0,0.0,0,560)
DeclareVariable("Elektrodenkessel.Ventil_EK.k", "Hydraulic conductance at full opening=1 [kg/(s.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Elektrodenkessel.Ventil_EK.open", "[:#(type=Boolean)]", \
"Elektrodenkessel.Bivalenz", 1, 5, 9701, 65)
DeclareParameter("Elektrodenkessel.Ventil_EK.opening_min", "Remaining opening if closed, causing small leakage flow [1]",\
 1066, 0, 0.0,1E+100,0.0,0,560)
DeclareVariable("Elektrodenkessel.res.allowFlowReversal", "= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("Elektrodenkessel.res.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.port_a.m_flow", 1, 5, 9750, 132)
DeclareAlias2("Elektrodenkessel.res.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Elektrodenkessel.T_RL.port_a.p", 1, 5, 9840, 4)
DeclareAlias2("Elektrodenkessel.res.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Elektrodenkessel.port_a.h_outflow", 1, 5, 9751, 4)
DeclareAlias2("Elektrodenkessel.res.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Elektrodenkessel.T_RL.port_b.m_flow", 1, 5, 9841, 132)
DeclareAlias2("Elektrodenkessel.res.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 4)
DeclareAlias2("Elektrodenkessel.res.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Elektrodenkessel.T_RL.port_b.h_outflow", 1, 5, 9842, 4)
DeclareVariable("Elektrodenkessel.res.m_flow_nominal", "Nominal mass flow rate [kg/s]",\
 69.4, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.res.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.006940000000000001, 0.0,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.res.show_T", "= true, if actual temperature at port is computed [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("Elektrodenkessel.res.m_flow", "Mass flow rate from port_a to port_b (m_flow > 0 is design flow direction) [kg/s]",\
 "Elektrodenkessel.port_a.m_flow", 1, 5, 9750, 0)
DeclareVariable("Elektrodenkessel.res.dp", "Pressure difference between port_a and port_b [Pa|Pa]",\
 0, 0.0,0.0,8330.0,0,576)
DeclareVariable("Elektrodenkessel.res._m_flow_start", "Start value for m_flow, used to avoid a warning if not set in m_flow, and to avoid m_flow.start in parameter window [kg/s]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.res._dp_start", "Start value for dp, used to avoid a warning if not set in dp, and to avoid dp.start in parameter window [Pa|Pa]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.res.from_dp", "= true, use m_flow = f(dp) else dp = f(m_flow) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.res.dp_nominal", "Pressure drop at nominal mass flow rate [Pa|bar]",\
 8330, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.res.homotopyInitialization", "= true, use homotopy method [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.res.linearized", "= true, use linear relation between m_flow and dp for any flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Elektrodenkessel.res.m_flow_turbulent", "Turbulent flow if |m_flow| >= m_flow_turbulent [kg/s]",\
 20.82, 0.0,1E+100,0.0,0,513)
DeclareParameter("Elektrodenkessel.res.sta_default.p", "Absolute pressure of medium [Pa|bar]",\
 1067, 300000.0, 0.0,100000000.0,100000.0,0,2608)
DeclareParameter("Elektrodenkessel.res.sta_default.T", "Temperature of medium [K|degC]",\
 1068, 293.15, 1.0,10000.0,300.0,0,2608)
DeclareVariable("Elektrodenkessel.res.eta_default", "Dynamic viscosity, used to compute transition to turbulent flow regime [Pa.s]",\
 0.001, 0.0,1E+100,0.0,0,2561)
DeclareVariable("Elektrodenkessel.res.m_flow_nominal_pos", "Absolute value of nominal flow rate [kg/s]",\
 69.4, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.res.dp_nominal_pos", "Absolute value of nominal pressure difference [Pa|Pa]",\
 8330, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.res.deltaM", "Fraction of nominal mass flow rate where transition to turbulent occurs [1]",\
 0.3, 0.01,1E+100,0.0,0,513)
DeclareVariable("Elektrodenkessel.res.k", "Flow coefficient, k=m_flow/sqrt(dp), with unit=(kg.m)^(1/2)",\
 0.7603910032286788, 0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.res.computeFlowResistance", "Flag to enable/disable computation of flow resistance [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("Elektrodenkessel.__ps__ek.vol_ek", "[m3]", 4.1, 0.0,0.0,0.0,0,513)
DeclareParameter("Elektrodenkessel.__ps__ek.Q_p_ek", "[W]", 1069, 3000000, \
0.0,0.0,0.0,0,560)
DeclareParameter("Elektrodenkessel.__ps__ek.eta_ek", "", 1070, 0.99, 0.0,0.0,0.0,\
0,560)
DeclareParameter("Elektrodenkessel.__ps__ek.c_th_ek", "[J/K]", 1071, 3174000, \
0.0,0.0,0.0,0,560)
DeclareVariable("Elektrodenkessel.__ps__ek.dp_nom_ek", "[Pa|bar]", 8330, \
0.0,0.0,0.0,0,513)
DeclareVariable("Elektrodenkessel.vol_ek", "[m3]", 4.1, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.Q_p_ek", "[W]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.Waermekapazitaet", "[J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("Elektrodenkessel.eta_ek", "", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Rueckuehlung", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Gaspreis_BHKW", "[\342\202\254/kWh] []",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Gaspreis", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Zuschlag_selbst", "[ct/kWh] []", \
0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Netznutzungsentgeld", \
" [ct/kWh] []", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Energiesteuer", "[\342\202\254/kWh] ",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.EEG_Umlage", "[ct/kWh] 0.4*(-6.79)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Stromsteuer", "[ct/kWh] []", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.BHKW_stromgefuehrt", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,515)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Zuschlag", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Bivalenz", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.less.u1", "Connector of first Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.less.u2", "Connector of second Real input signal",\
 "Verbraucher.signalBus.Strompreis", 1, 5, 2231, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.less.y", "Connector of Boolean output signal [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,642)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.const.k", "Constant output value",\
 1072, 1E-05, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.const.y", "Connector of Real output signal",\
 "wirtschaftlichkeit_BHKW_neu.const.k", 1, 7, 1072, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.Div_0.u1", "Connector of Real input signal 1",\
 "wirtschaftlichkeit_BHKW_neu.const.k", 1, 7, 1072, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.Div_0.u2", "Connector of Real input signal 2 [J]",\
 "wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff1.y", 1, 1, 124, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Div_0.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.Div_0.k1", "Gain of input signal 1",\
 1073, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.Div_0.k2", "Gain of input signal 2",\
 1074, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.product.u1", "Connector of Real input signal 1 [J]",\
 "wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.y", 1, 1, 123, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.product.u2", "Connector of Real input signal 2",\
 "wirtschaftlichkeit_BHKW_neu.Gaspreis_BHKW", 1, 5, 9900, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.product.y", "Connector of Real output signal",\
 "Verbraucher.signalBus.K_P_BHKW", 1, 5, 2230, 0)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.k", \
"Integrator gain [1]", 1075, 2.7777777777777776E-07, 0.0,0.0,0.0,0,560)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.use_reset", \
"=true, if reset port enabled [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.use_set", \
"=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.initType", \
"Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.y_start", \
"Initial or guess value of output (= state) [J]", 1076, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.u", \
"Connector of Real input signal [W]", "Verbraucher.signalBus.Q_p_Bs_el", 1, 5, 2224,\
 0)
DeclareState("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.y", \
"Connector of Real output signal [J]", 123, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.der(y)", \
"der(Connector of Real output signal) [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.local_reset",\
 "[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.local_set", \
"", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff1.k", \
"Integrator gain [1]", 1077, 2.7777777777777776E-07, 0.0,0.0,0.0,0,560)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff1.use_reset", \
"=true, if reset port enabled [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff1.use_set", \
"=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff1.initType", \
"Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff1.y_start", \
"Initial or guess value of output (= state) [J]", 1078, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff1.u", \
"Connector of Real input signal [W]", "Verbraucher.signalBus.P_BHKW", 1, 5, 2220,\
 0)
DeclareState("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff1.y", \
"Connector of Real output signal [J]", 124, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff1.der(y)", \
"der(Connector of Real output signal) [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff1.local_reset",\
 "[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff1.local_set", \
"", 0, 0.0,0.0,0.0,0,1537)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.product2.u1", "Connector of Real input signal 1",\
 "wirtschaftlichkeit_BHKW_neu.Div_0.y", 1, 5, 9912, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.product2.u2", "Connector of Real input signal 2",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.product2.y", "Connector of Real output signal",\
 "Verbraucher.signalBus.G_verg", 1, 5, 2232, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.Erdgaspreis.y", "Value of Real output",\
 "wirtschaftlichkeit_BHKW_neu.Gaspreis_BHKW", 1, 5, 9900, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.or1.u1", "Connector of first Boolean input signal [:#(type=Boolean)]",\
 "wirtschaftlichkeit_BHKW_neu.less.y", 1, 5, 9911, 65)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.or1.u2", "Connector of second Boolean input signal [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.or1.y", "Connector of Boolean output signal [:#(type=Boolean)]",\
 "Verbraucher.signalBus.Grenzkosten", 1, 5, 2229, 65)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.booleanExpression.y", \
"Value of Boolean output [:#(type=Boolean)]", "wirtschaftlichkeit_BHKW_neu.BHKW_stromgefuehrt", 1,\
 5, 9907, 65)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Gaspreis", "", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Gaspreis_BHKW", "",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Bivalenz", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,515)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.eta_el",\
 "[-] []", "Verbraucher.signalBus.eta_el", 1, 5, 2228, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.eta_th",\
 "[-] []", "Verbraucher.signalBus.eta_th", 1, 5, 2227, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Q_p_Bs",\
 "[W] [W]", "Verbraucher.signalBus.Q_p_Bs_offline", 1, 5, 2225, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung.u1",\
 "Connector of Real input signal 1", "Verbraucher.signalBus.eta_th", 1, 5, 2227,\
 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung.u2",\
 "Connector of Real input signal 2", "Verbraucher.signalBus.eta_el", 1, 5, 2228,\
 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung.y",\
 "Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung.k1",\
 "Gain of input signal 1", 1079, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung.k2",\
 "Gain of input signal 2", 1080, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung_eta_el.u1",\
 "Connector of Real input signal 1", "Verbraucher.signalBus.eta_el", 1, 5, 2228,\
 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung_eta_el.u2",\
 "Connector of Real input signal 2", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung.y", 1,\
 5, 9928, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung_eta_el.y",\
 "Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_el_Verbrauch.u1",\
 "Connector of Real input signal 1 [W]", "Verbraucher.signalBus.Q_p_Bs_offline", 1,\
 5, 2225, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_el_Verbrauch.u2",\
 "Connector of Real input signal 2", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung_eta_el.y", 1,\
 5, 9929, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_el_Verbrauch.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Q_p_Bs_el", 1,\
 5, 9931, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_th_Verbrauch.u1",\
 "Connector of Real input signal 1 [W]", "Verbraucher.signalBus.Q_p_Bs_offline", 1,\
 5, 2225, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_th_Verbrauch.u2",\
 "Connector of Real input signal 2", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_th_Verbrauch.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Q_p_Bs_th", 1,\
 5, 9932, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung_eta_th.u1",\
 "Connector of Real input signal 1", "Verbraucher.signalBus.eta_th", 1, 5, 2227,\
 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung_eta_th.u2",\
 "Connector of Real input signal 2", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung.y", 1,\
 5, 9928, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Normierung_eta_th.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_th_Verbrauch.u2", 1,\
 5, 9930, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Q_p_Bs_el",\
 "[W] []", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Q_p_Bs_th",\
 "[W] []", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.W_BHKW",\
 "[W] []", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_th_Verbrauch1.u1",\
 "Connector of Real input signal 1", "Verbraucher.signalBus.eta_el", 1, 5, 2228,\
 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_th_Verbrauch1.u2",\
 "Connector of Real input signal 2 [W]", "Verbraucher.signalBus.Q_p_Bs_offline", 1,\
 5, 2225, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_th_Verbrauch1.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.W_BHKW", 1,\
 5, 9933, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.E_th_BHKW",\
 "[W] []", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_th_Verbrauch2.u1",\
 "Connector of Real input signal 1 [W]", "Verbraucher.signalBus.Q_p_Bs_offline", 1,\
 5, 2225, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_th_Verbrauch2.u2",\
 "Connector of Real input signal 2", "Verbraucher.signalBus.eta_th", 1, 5, 2227,\
 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.prod_th_Verbrauch2.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.E_th_BHKW", 1,\
 5, 9934, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Q_p_Bs_offline", \
"[W] [W]", "Verbraucher.signalBus.Q_p_Bs_offline", 1, 5, 2225, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.eta_th", "[-] []", \
"Verbraucher.signalBus.eta_th", 1, 5, 2227, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.eta_el", "[-] []", \
"Verbraucher.signalBus.eta_el", 1, 5, 2228, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.G_verg", \
"[\342\202\254/kWh]] []", "wirtschaftlichkeit_BHKW_neu.product2.u2", 1, 5, 9923,\
 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product3.u1", \
"Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.product2.u2", 1,\
 5, 9923, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product3.u2", \
"Connector of Real input signal 2", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product3.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW_zaehler.k1",\
 "Gain of input signal 1", 1081, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW_zaehler.k2",\
 "Gain of input signal 2", 1082, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW_zaehler.k3",\
 "Gain of input signal 3", 1083, 1, 0.0,0.0,0.0,0,560)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW_zaehler.u1",\
 "Connector of Real input signal 1", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW_zaehler.u2",\
 "Connector of Real input signal 2", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product3.y", 1,\
 5, 9936, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW_zaehler.u3",\
 "Connector of Real input signal 3", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW_zaehler.y",\
 "Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.gain3.k", \
"Gain value multiplied with input signal [1]", 1084, 0.001, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.gain3.u", \
"Input signal connector", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Q_p_Bs_el", 1,\
 5, 9931, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.gain3.y", \
"Output signal connector", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Erdgaspreis.y", \
"Value of Real output", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Gaspreis_BHKW", 1,\
 5, 9926, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product1.u1", \
"Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Gaspreis_BHKW", 1,\
 5, 9926, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product1.u2", \
"Connector of Real input signal 2", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.gain3.y", 1,\
 5, 9940, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product1.y", \
"Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW_zaehler.u1", 1,\
 5, 9937, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Stromverbrauch_Kuelturm",\
 "[W] [W]", "Verbraucher.signalBus.P_Kt", 1, 5, 2222, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Strompreis_", \
"[\342\202\254/kWh] []", "Verbraucher.signalBus.Strompreis", 1, 5, 2231, 0)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.gain6.k", \
"Gain value multiplied with input signal [1]", 1085, 0.001, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.gain6.u", \
"Input signal connector [W]", "Verbraucher.signalBus.P_Kt", 1, 5, 2222, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.gain6.y", \
"Output signal connector [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product4.u1", \
"Connector of Real input signal 1 [W]", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.gain6.y", 1,\
 5, 9941, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product4.u2", \
"Connector of Real input signal 2", "Verbraucher.signalBus.Strompreis", 1, 5, 2231,\
 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product4.y", \
"Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW_zaehler.u3", 1,\
 5, 9938, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW.u1", \
"Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW_zaehler.y", 1,\
 5, 9939, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW.u2", \
"Connector of Real input signal 2", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product3.u2", 1,\
 5, 9935, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.gain1.k", \
"Gain value multiplied with input signal [1]", 1086, 0.001, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.gain1.u", \
"Input signal connector", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.W_BHKW", 1,\
 5, 9933, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.gain1.y", \
"Output signal connector", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.product3.u2", 1,\
 5, 9935, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.online_Grenzkosten.u1",\
 "Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.K_el_BHKW.y", 1,\
 5, 9942, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.online_Grenzkosten.u2",\
 "Connector of Real input signal 2", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.online_Grenzkosten.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.less.u1", 1, 5,\
 9910, 0)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.online_Grenzkosten.k1",\
 "Gain of input signal 1", 1087, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.online_Grenzkosten.k2",\
 "Gain of input signal 2", 1088, -1, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Grenkosten_offline", \
"[\342\202\254/W] []", "wirtschaftlichkeit_BHKW_neu.less.u1", 1, 5, 9910, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Bivalenz",\
 "[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,515)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Gaspreis",\
 "", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW",\
 "[W] []", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.E_th_BHKW", 1,\
 5, 9934, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Q_p_Bs_th",\
 "[W] []", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Q_p_Bs_th", 1,\
 5, 9932, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Gaspreis_BHKW",\
 "[\342\202\254/kWh] []", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Gaspreis_BHKW", 1,\
 5, 9926, 0)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_th.k",\
 "Integrator gain [1]", 1089, 2.7777777777777776E-07, 0.0,0.0,0.0,0,560)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_th.use_reset",\
 "=true, if reset port enabled [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_th.use_set",\
 "=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_th.initType",\
 "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_th.y_start",\
 "Initial or guess value of output (= state)", 1090, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_th.u",\
 "Connector of Real input signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.Q_p_Bs_th", 1,\
 5, 9932, 0)
DeclareState("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_th.y",\
 "Connector of Real output signal", 125, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_th.der(y)",\
 "der(Connector of Real output signal)", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_th.local_reset",\
 "[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_th.local_set",\
 "", 0, 0.0,0.0,0.0,0,1537)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.product2.u1",\
 "Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_th.y", 1,\
 1, 125, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.product2.u2",\
 "Connector of Real input signal 2", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Gaspreis_BHKW", 1,\
 5, 9926, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.product2.y",\
 "Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Brennstoffkosten_pro_kWhStrom_BHKW.u1",\
 "Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.product2.y", 1,\
 5, 9951, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Brennstoffkosten_pro_kWhStrom_BHKW.u2",\
 "Connector of Real input signal 2", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Brennstoffkosten_pro_kWhStrom_BHKW.y",\
 "Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW1.k",\
 "Integrator gain [1]", 1091, 2.7777777777777776E-07, 0.0,0.0,0.0,0,560)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW1.use_reset",\
 "=true, if reset port enabled [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW1.use_set",\
 "=true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW1.initType",\
 "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW1.y_start",\
 "Initial or guess value of output (= state)", 1092, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW1.u",\
 "Connector of Real input signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Brennstoffzurechnung.E_th_BHKW", 1,\
 5, 9934, 0)
DeclareState("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW1.y",\
 "Connector of Real output signal", 126, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW1.der(y)",\
 "der(Connector of Real output signal)", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW1.local_reset",\
 "[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,1539)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW1.local_set",\
 "", 0, 0.0,0.0,0.0,0,1537)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel.u1",\
 "Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Brennstoffkosten_pro_kWhStrom_BHKW.y", 1,\
 5, 9953, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel.u2",\
 "Connector of Real input signal 2", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel.y",\
 "Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel.k1",\
 "Gain of input signal 1", 1093, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel.k2",\
 "Gain of input signal 2", 1094, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.switch1.u1",\
 "Connector of first Real input signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel.y", 1,\
 5, 9960, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.switch1.u2",\
 "Connector of Boolean input signal [:#(type=Boolean)]", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Bivalenz", 1,\
 5, 9944, 65)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.switch1.u3",\
 "Connector of second Real input signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.switch1.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.online_Grenzkosten.u2", 1,\
 5, 9943, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel1.u1",\
 "Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Brennstoffkosten_pro_kWhStrom_BHKW.y", 1,\
 5, 9953, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel1.u2",\
 "Connector of Real input signal 2", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel1.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.switch1.u3", 1,\
 5, 9961, 0)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel1.k1",\
 "Gain of input signal 1", 1095, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel1.k2",\
 "Gain of input signal 2", 1096, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.booleanExpression.y",\
 "Value of Boolean output [:#(type=Boolean)]", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Bivalenz", 1,\
 5, 9944, 65)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Kosten_Kessel.u1",\
 "Connector of Real input signal 1", "Heizkessel.integrator.y", 1, 1, 31, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Kosten_Kessel.u2",\
 "Connector of Real input signal 2", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Gaspreis", 1,\
 5, 9945, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Kosten_Kessel.y",\
 "Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Brennstoffkosten_pro_Leistung_Heizkessel.u1",\
 "Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Kosten_Kessel.y", 1,\
 5, 9963, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Brennstoffkosten_pro_Leistung_Heizkessel.u2",\
 "Connector of Real input signal 2", "Verbraucher.signalBus.E_th_HK", 1, 5, 2216,\
 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Brennstoffkosten_pro_Leistung_Heizkessel.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel1.u2", 1,\
 5, 9962, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.realExpression.y",\
 "Value of Real output", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Gaspreis", 1,\
 5, 9945, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_bs_hk",\
 "[kWh] []", "Heizkessel.integrator.y", 1, 1, 31, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_hk",\
 "[kWh] []", "Verbraucher.signalBus.E_th_HK", 1, 5, 2216, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Stromkosten_pro_Leistung_Elektrodenkessel.u1",\
 "Connector of Real input signal 1", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Stromkosten_pro_Leistung_Elektrodenkessel.u2",\
 "Connector of Real input signal 2 [W]", "Elektrodenkessel.Q_p_ek", 1, 5, 9896, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Stromkosten_pro_Leistung_Elektrodenkessel.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Differenz_Waermekosten_BHKW_Kessel.u2", 1,\
 5, 9959, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Q_p_th_ek",\
 "[W] [W]", "Elektrodenkessel.Q_p_ek", 1, 5, 9896, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Strompreise",\
 "[\342\202\254/kWh] []", "Verbraucher.signalBus.Strompreis", 1, 5, 2231, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Q_p_el_ek",\
 "[W] [W]", "Verbraucher.signalBus.P_EK_offline", 1, 5, 2218, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Kosten_Kessel1.u1",\
 "Connector of Real input signal 1", "Verbraucher.signalBus.Strompreis", 1, 5, 2231,\
 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Kosten_Kessel1.u2",\
 "Connector of Real input signal 2 [W]", "Verbraucher.signalBus.P_EK_offline", 1,\
 5, 2218, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Kosten_Kessel1.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Stromkosten_pro_Leistung_Elektrodenkessel.u1", 1,\
 5, 9964, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.delta_K_BHKW_HK",\
 "[W] []", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.online_Grenzkosten.u2", 1,\
 5, 9943, 0)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.const.k",\
 "Constant output value", 1097, 1E-05, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.const.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.const.k", 1,\
 7, 1097, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Div_0.u1",\
 "Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.const.k", 1,\
 7, 1097, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Div_0.u2",\
 "Connector of Real input signal 2", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.E_th_BHKW1.y", 1,\
 1, 126, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Div_0.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Brennstoffkosten_pro_kWhStrom_BHKW.u2", 1,\
 5, 9952, 0)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Div_0.k1",\
 "Gain of input signal 1", 1098, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.waermekostenabgleich.Div_0.k2",\
 "Gain of input signal 2", 1099, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.E_th_hk", "[kWh] []",\
 "Verbraucher.signalBus.E_th_HK", 1, 5, 2216, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.E_bs_hk", "[kWh] []",\
 "Heizkessel.integrator.y", 1, 1, 31, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Q_p_el_ek", "[W] [W]",\
 "Verbraucher.signalBus.P_EK_offline", 1, 5, 2218, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.grenzkosten_neu.Q_p_th_ek", "[W] [W]",\
 "Elektrodenkessel.Q_p_ek", 1, 5, 9896, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.Zuschlag", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,515)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.Zuschlag_selbst", \
"[ct/kWh] []", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.Netznutzungsentgeld", \
" [ct/kWh] []", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.Energiesteuer", \
"[\342\202\254/kWh] ", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.EEG_Umlage", \
"[ct/kWh] 0.4*(-6.79)", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.Stromsteuer", \
"[ct/kWh] []", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.y", "[\342\202\254] []", \
"wirtschaftlichkeit_BHKW_neu.product2.u2", 1, 5, 9923, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.booleanExpression1.y", \
"Value of Boolean output [:#(type=Boolean)]", "wirtschaftlichkeit_BHKW_neu.verguetung.Zuschlag", 1,\
 5, 9965, 65)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.Zuschlag_selbstgenutzt.k",\
 "Constant output value", 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.Zuschlag_selbstgenutzt.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.verguetung.Zuschlag_selbstgenutzt.k", 1,\
 5, 9971, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.Netznutzungsentgeltes.k",\
 "Constant output value", 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.Netznutzungsentgeltes.y", \
"Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.verguetung.Netznutzungsentgeltes.k", 1,\
 5, 9972, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.EEG_Umlage_Beitrag.k", \
"Constant output value", 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.EEG_Umlage_Beitrag.y", \
"Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.verguetung.EEG_Umlage_Beitrag.k", 1,\
 5, 9973, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.Stromsteuer_rueckerstattung.k",\
 "Constant output value", 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.Stromsteuer_rueckerstattung.y",\
 "Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.verguetung.Stromsteuer_rueckerstattung.k", 1,\
 5, 9974, 0)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.verguetung.add3_2.k1", \
"Gain of input signal 1", 1100, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.verguetung.add3_2.k2", \
"Gain of input signal 2", 1101, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.verguetung.add3_2.k3", \
"Gain of input signal 3", 1102, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.add3_2.u1", \
"Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.verguetung.Stromsteuer_rueckerstattung.k", 1,\
 5, 9974, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.add3_2.u2", \
"Connector of Real input signal 2", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.add3_2.u3", \
"Connector of Real input signal 3", "wirtschaftlichkeit_BHKW_neu.verguetung.Netznutzungsentgeltes.k", 1,\
 5, 9972, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.add3_2.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.booleanToReal1.u", \
"Connector of Boolean input signal [:#(type=Boolean)]", "wirtschaftlichkeit_BHKW_neu.verguetung.Zuschlag", 1,\
 5, 9965, 65)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.verguetung.booleanToReal1.realTrue",\
 "Output signal for true Boolean input", 1103, 1.0, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.verguetung.booleanToReal1.realFalse",\
 "Output signal for false Boolean input", 1104, 0.0, 0.0,0.0,0.0,0,560)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.booleanToReal1.y", \
"Connector of Real output signal", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.product6.u1", \
"Connector of Real input signal 1", "wirtschaftlichkeit_BHKW_neu.verguetung.Zuschlag_selbstgenutzt.k", 1,\
 5, 9971, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.product6.u2", \
"Connector of Real input signal 2", "wirtschaftlichkeit_BHKW_neu.verguetung.booleanToReal1.y", 1,\
 5, 9977, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.product6.y", \
"Connector of Real output signal", "wirtschaftlichkeit_BHKW_neu.verguetung.add3_2.u2", 1,\
 5, 9975, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.add.u1", "Connector of Real input signal 1",\
 "wirtschaftlichkeit_BHKW_neu.verguetung.add3_2.y", 1, 5, 9976, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.add.u2", "Connector of Real input signal 2",\
 "wirtschaftlichkeit_BHKW_neu.verguetung.EEG_Umlage_Beitrag.k", 1, 5, 9973, 0)
DeclareVariable("wirtschaftlichkeit_BHKW_neu.verguetung.add.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.verguetung.add.k1", \
"Gain of input signal 1", 1105, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.verguetung.add.k2", \
"Gain of input signal 2", 1106, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("wirtschaftlichkeit_BHKW_neu.verguetung.euro_verguetung_pro_kWh_Strom.k",\
 "Gain value multiplied with input signal [1]", 1107, 0.01, 0.0,0.0,0.0,0,560)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.euro_verguetung_pro_kWh_Strom.u",\
 "Input signal connector", "wirtschaftlichkeit_BHKW_neu.verguetung.add.y", 1, 5,\
 9978, 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.verguetung.euro_verguetung_pro_kWh_Strom.y",\
 "Output signal connector", "wirtschaftlichkeit_BHKW_neu.product2.u2", 1, 5, 9923,\
 0)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.E_th_HK", "", \
"Verbraucher.signalBus.E_th_HK", 1, 5, 2216, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.E_bs_HK", "", \
"Heizkessel.integrator.y", 1, 1, 31, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.E_th_WRG", "[J]", \
"WRG.integrator1.y", 1, 1, 113, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.E_th_Last", "[J]", \
"Verbraucher.integrator2.y", 1, 1, 28, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.E_bs_th_BHKW", "", \
"BHKW_.integrator.y", 1, 1, 75, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.E_th_BHKW", "", \
"Verbraucher.signalBus.E_th_BHKW", 1, 5, 2217, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.E_bs_el_BHKW", "[J]", \
"wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.y", 1, 1, 123, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.E_el_bezug", "", \
"Stromerzeugung.integrator2.y", 1, 1, 37, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.P_EK_offline", "[W]", \
"Verbraucher.signalBus.P_EK_offline", 1, 5, 2218, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.P_EK", "[W]", \
"Verbraucher.signalBus.P_EK", 1, 5, 2219, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.P_BHKW", "[W]", \
"Verbraucher.signalBus.P_BHKW", 1, 5, 2220, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.P_Last", "[W]", \
"Verbraucher.signalBus.P_Last", 1, 5, 2221, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.P_Kt", "[W]", \
"Verbraucher.signalBus.P_Kt", 1, 5, 2222, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.Q_p_EK_offline", "[W]",\
 "Elektrodenkessel.Q_p_ek", 1, 5, 9896, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.Q_p_EK", "[W]", \
"Verbraucher.signalBus.Q_p_EK", 1, 5, 2223, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.Q_p_Bs_el", "[W]", \
"Verbraucher.signalBus.Q_p_Bs_el", 1, 5, 2224, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.Q_p_Bs_offline", "[W]",\
 "Verbraucher.signalBus.Q_p_Bs_offline", 1, 5, 2225, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.Q_p_th_Last", "[W]", \
"Verbraucher.signalBus.Q_p_th_Last", 1, 5, 2226, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.eta_th", "", \
"Verbraucher.signalBus.eta_th", 1, 5, 2227, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.eta_el", "", \
"Verbraucher.signalBus.eta_el", 1, 5, 2228, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.Grenzkosten", \
"[:#(type=Boolean)]", "Verbraucher.signalBus.Grenzkosten", 1, 5, 2229, 69)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.T_ref_WRG", "[K|degC]",\
 "WRG.T_VL.T", 1, 1, 112, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.T_ref_Puffer", \
"[K|degC]", "Pufferspeicher.T_VL_VK.T", 1, 1, 57, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.K_P_BHKW", "", \
"Verbraucher.signalBus.K_P_BHKW", 1, 5, 2230, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.Strompreis", "", \
"Verbraucher.signalBus.Strompreis", 1, 5, 2231, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.G_verg", "", \
"Verbraucher.signalBus.G_verg", 1, 5, 2232, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.K_bed_th", "", \
"Verbraucher.signalBus.K_bed_th", 1, 5, 2233, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.K_bed_el", "", \
"Verbraucher.signalBus.K_bed_el", 1, 5, 2234, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.K_w_kt", "", \
"Verbraucher.signalBus.K_w_kt", 1, 5, 2235, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.signalBus_BHKW.Feuchtkugeltemperatur",\
 "[K]", "Verbraucher.signalBus.Feuchtkugeltemperatur", 1, 5, 2236, 4)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.not1.u", "Connector of Boolean input signal [:#(type=Boolean)]",\
 "wirtschaftlichkeit_BHKW_neu.BHKW_stromgefuehrt", 1, 5, 9907, 65)
DeclareAlias2("wirtschaftlichkeit_BHKW_neu.not1.y", "Connector of Boolean output signal [:#(type=Boolean)]",\
 "wirtschaftlichkeit_BHKW_neu.or1.u2", 1, 5, 9924, 65)
DeclareVariable("wetterdaten.wetBulTem.approximateWetBulb", "Set to true to approximate wet bulb temperature [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("wetterdaten.wetBulTem.TDryBul", "Dry bulb temperature [K]", \
293.15, 0.0,1E+100,0.0,0,512)
DeclareVariable("wetterdaten.wetBulTem.phi", "Relative air humidity", 0.0, 0.0,\
1.0,0.0,0,512)
DeclareAlias2("wetterdaten.wetBulTem.p", "Pressure [Pa]", "wetterdaten.Luftdruck.k", 1,\
 7, 1108, 0)
DeclareAlias2("wetterdaten.wetBulTem.TWetBul", "Wet bulb temperature [K]", \
"Verbraucher.signalBus.Feuchtkugeltemperatur", 1, 5, 2236, 0)
DeclareVariable("wetterdaten.wetBulTem.TDryBul_degC", "Dry bulb temperature in degree Celsius [degC;]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("wetterdaten.wetBulTem.rh_per", "Relative humidity in percentage [degC]",\
 0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("wetterdaten.wetBulTem.XiDryBul", "Water vapor mass fraction at dry bulb state [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("wetterdaten.wetBulTem.XiSat", "Water vapor mass fraction at saturation [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("wetterdaten.wetBulTem.XiSatRefIn", "Water vapor mass fraction at saturation, referenced to inlet mass flow rate [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareParameter("wetterdaten.Luftdruck.k", "Constant output value [Pa]", 1108, 100000,\
 0.0,1E+100,0.0,0,560)
DeclareAlias2("wetterdaten.Luftdruck.y", "Connector of Real output signal [Pa]",\
 "wetterdaten.Luftdruck.k", 1, 7, 1108, 0)
DeclareVariable("wetterdaten.__ctt__Feuchte.nout", "Number of outputs [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("wetterdaten.__ctt__Feuchte.y[1]", "Connector of Real output signals",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wetterdaten.__ctt__Feuchte.tableOnFile", "= true, if table is defined on file or in function usertab [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[1, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[1, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[2, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[2, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[3, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[3, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[4, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[4, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[5, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[5, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[6, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[6, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 93.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[7, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[7, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 97, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[8, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[8, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[9, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[9, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[10, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[10, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[11, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[11, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 97.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[12, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[12, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[13, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 13.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[13, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[14, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[14, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[15, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[15, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[16, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[16, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[17, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[17, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[18, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[18, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[19, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[19, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[20, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[20, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[21, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[21, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[22, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[22, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 96.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[23, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[23, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[24, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[24, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[25, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[25, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[26, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[26, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[27, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 27, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[27, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 97, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[28, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[28, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[29, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[29, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[30, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[30, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[31, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 31.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[31, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[32, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 32.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[32, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[33, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 33.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[33, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[34, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 34.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[34, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[35, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 35.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[35, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[36, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 36.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[36, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[37, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 37.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[37, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[38, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 38.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[38, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[39, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 39, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[39, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[40, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 40.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[40, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[41, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 41.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[41, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[42, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 42, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[42, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[43, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 43, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[43, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[44, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 44.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[44, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[45, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 45.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[45, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 78.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[46, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 46.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[46, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[47, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 47.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[47, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 95.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[48, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 48.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[48, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 95.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[49, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 49.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[49, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[50, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 50.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[50, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[51, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 51.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[51, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[52, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 52.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[52, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[53, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 53.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[53, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[54, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 54.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[54, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[55, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 55.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[55, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[56, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 56.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[56, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 59.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[57, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 57.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[57, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[58, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 58.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[58, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[59, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 59.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[59, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[60, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 60.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[60, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[61, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 61.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[61, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[62, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 62.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[62, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[63, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[63, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[64, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 64.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[64, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[65, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[65, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[66, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[66, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[67, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[67, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[68, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[68, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[69, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[69, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[70, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 70.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[70, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[71, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[71, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[72, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[72, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[73, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[73, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[74, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[74, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[75, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[75, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[76, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[76, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[77, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[77, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[78, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 78.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[78, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[79, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[79, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[80, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[80, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[81, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[81, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[82, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[82, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[83, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[83, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[84, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[84, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[85, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[85, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[86, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[86, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[87, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[87, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[88, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[88, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[89, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[89, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[90, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[90, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[91, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[91, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[92, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 92.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[92, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 62.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[93, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 93.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[93, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 58.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[94, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 94, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[94, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 61, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[95, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 95.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[95, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[96, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 96.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[96, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[97, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 97.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[97, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 60.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[98, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 98.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[98, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[99, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 99.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[99, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[100, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 100.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[100, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[101, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 101, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[101, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[102, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 102.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[102, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 60.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[103, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 103.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[103, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[104, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 104.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[104, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[105, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 105.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[105, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[106, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 106, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[106, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[107, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 107.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[107, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[108, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 108.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[108, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 64.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[109, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 109.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[109, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 54.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[110, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 110.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[110, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 61.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[111, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 111.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[111, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[112, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 112.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[112, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 62.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[113, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 113.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[113, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[114, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 114.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[114, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[115, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 115.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[115, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[116, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 116.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[116, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[117, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 117, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[117, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[118, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 118.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[118, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[119, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 119.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[119, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 57.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[120, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 120.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[120, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 56.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[121, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 121, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[121, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[122, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 122.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[122, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[123, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 123.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[123, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[124, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 124.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[124, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[125, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 125.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[125, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 64.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[126, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 126.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[126, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 52.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[127, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 127.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[127, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 52.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[128, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 128.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[128, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 96.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[129, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 129.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[129, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 96.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[130, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 130.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[130, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[131, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 131.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[131, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 70.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[132, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 132.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[132, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[133, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 133.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[133, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[134, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 134.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[134, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[135, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 135.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[135, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[136, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 136.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[136, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[137, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 137.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[137, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[138, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 138.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[138, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[139, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 139.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[139, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[140, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 140.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[140, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[141, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 141, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[141, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[142, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 142.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[142, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[143, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 143.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[143, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[144, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 144.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[144, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[145, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 145.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[145, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[146, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 146.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[146, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[147, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 147.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[147, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[148, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 148.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[148, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[149, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 149.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[149, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 62.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[150, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 150.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[150, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 60.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[151, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 151.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[151, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[152, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 152.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[152, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[153, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 153.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[153, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[154, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 154.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[154, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[155, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 155.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[155, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[156, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 156.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[156, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[157, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 157.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[157, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[158, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 158.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[158, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[159, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 159.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[159, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[160, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 160.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[160, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 64.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[161, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 161.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[161, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[162, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 162.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[162, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[163, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 163.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[163, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[164, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 164.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[164, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[165, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 165.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[165, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[166, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 166.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[166, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[167, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 167.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[167, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[168, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 168, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[168, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 61, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[169, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 169.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[169, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[170, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 170, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[170, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[171, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 171.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[171, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 59.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[172, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 172.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[172, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[173, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 173, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[173, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[174, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 174.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[174, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[175, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 175.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[175, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 60.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[176, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 176.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[176, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[177, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 177.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[177, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[178, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 178.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[178, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 57.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[179, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 179.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[179, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[180, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 180.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[180, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[181, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 181.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[181, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[182, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 182.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[182, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[183, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 183.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[183, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[184, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 184.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[184, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[185, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 185.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[185, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[186, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 186.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[186, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[187, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 187.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[187, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[188, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 188, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[188, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[189, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 189, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[189, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[190, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 190.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[190, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[191, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 191.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[191, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[192, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 192, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[192, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[193, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 193.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[193, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[194, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 194.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[194, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[195, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 195.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[195, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[196, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 196.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[196, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[197, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 197.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[197, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[198, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 198.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[198, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[199, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 199.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[199, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[200, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 200.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[200, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[201, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 201.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[201, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 56.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[202, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 202.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[202, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[203, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 203.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[203, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[204, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 204.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[204, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[205, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 205.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[205, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[206, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 206.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[206, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[207, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 207.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[207, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[208, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 208.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[208, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 95.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[209, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 209.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[209, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[210, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 210.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[210, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[211, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 211.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[211, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[212, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 212.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[212, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[213, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 213, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[213, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[214, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 214.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[214, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[215, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 215.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[215, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[216, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 216, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[216, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[217, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 217, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[217, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[218, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 218, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[218, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[219, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 219.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[219, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[220, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 220.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[220, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[221, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 221.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[221, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[222, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 222.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[222, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[223, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 223.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[223, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[224, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 224.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[224, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 93.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[225, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 225.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[225, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[226, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 226.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[226, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[227, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 227.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[227, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 70.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[228, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 228.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[228, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[229, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 229.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[229, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[230, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 230.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[230, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[231, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 231.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[231, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[232, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 232.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[232, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[233, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 233.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[233, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[234, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 234.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[234, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[235, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 235.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[235, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[236, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 236.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[236, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[237, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 237.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[237, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[238, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 238.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[238, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[239, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 239.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[239, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[240, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 240.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[240, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[241, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 241.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[241, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[242, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 242.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[242, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[243, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 243.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[243, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[244, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 244.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[244, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 95.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[245, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 245.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[245, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 96.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[246, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 246.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[246, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[247, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 247.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[247, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[248, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 248.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[248, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[249, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 249.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[249, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[250, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 250.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[250, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[251, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 251.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[251, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[252, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 252.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[252, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 78.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[253, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 253.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[253, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[254, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 254, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[254, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[255, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 255.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[255, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 78.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[256, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 256.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[256, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[257, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 257.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[257, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 70.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[258, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 258.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[258, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[259, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 259.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[259, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[260, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 260.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[260, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[261, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 261.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[261, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[262, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 262.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[262, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[263, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 263.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[263, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[264, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 264.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[264, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[265, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 265, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[265, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[266, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 266.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[266, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[267, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 267.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[267, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[268, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 268.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[268, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[269, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 269.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[269, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[270, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 270.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[270, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[271, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 271.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[271, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[272, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 272.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[272, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[273, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 273.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[273, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[274, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 274.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[274, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[275, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 275.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[275, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[276, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 276.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[276, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[277, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 277.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[277, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[278, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 278.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[278, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[279, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 279.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[279, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[280, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 280.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[280, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[281, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 281.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[281, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[282, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 282.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[282, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[283, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 283.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[283, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[284, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 284, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[284, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[285, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 285.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[285, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[286, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 286.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[286, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[287, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 287.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[287, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[288, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 288.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[288, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[289, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 289.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[289, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[290, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 290.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[290, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[291, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 291.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[291, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[292, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 292.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[292, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[293, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 293.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[293, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[294, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 294, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[294, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[295, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 295.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[295, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[296, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 296.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[296, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[297, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 297.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[297, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[298, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 298.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[298, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[299, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 299.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[299, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[300, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 300.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[300, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[301, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 301.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[301, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[302, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 302.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[302, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[303, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 303.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[303, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[304, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 304.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[304, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[305, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 305.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[305, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[306, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 306.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[306, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[307, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 307.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[307, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[308, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 308.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[308, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[309, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 309.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[309, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[310, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 310.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[310, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[311, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 311.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[311, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[312, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 312.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[312, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[313, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 313.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[313, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[314, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 314.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[314, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[315, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 315.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[315, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[316, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 316.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[316, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[317, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 317.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[317, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[318, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 318.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[318, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[319, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 319.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[319, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 97.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[320, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 320.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[320, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 94.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[321, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 321.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[321, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[322, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 322.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[322, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[323, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 323.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[323, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[324, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 324.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[324, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[325, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 325.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[325, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[326, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 326.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[326, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[327, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 327.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[327, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[328, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 328.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[328, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 70.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[329, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 329.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[329, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[330, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 330.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[330, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[331, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 331.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[331, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[332, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 332.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[332, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[333, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 333.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[333, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[334, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 334.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[334, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[335, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 335.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[335, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[336, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 336.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[336, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[337, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 337.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[337, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[338, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 338.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[338, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 78.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[339, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 339.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[339, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[340, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 340, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[340, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[341, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 341.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[341, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[342, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 342, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[342, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[343, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 343.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[343, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[344, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 344.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[344, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[345, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 345.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[345, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[346, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 346.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[346, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[347, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 347.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[347, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[348, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 348.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[348, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[349, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 349.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[349, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[350, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 350.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[350, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[351, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 351.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[351, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[352, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 352.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[352, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[353, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 353.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[353, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[354, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 354.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[354, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[355, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 355, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[355, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 92, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[356, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 356.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[356, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 92.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[357, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 357.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[357, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 95.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[358, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 358.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[358, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[359, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 359.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[359, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[360, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 360.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[360, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[361, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 361.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[361, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[362, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 362.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[362, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[363, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 363.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[363, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[364, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 364.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[364, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 78.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[365, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 365.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[365, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[366, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 366.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.table[366, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.7, 0.0,0.0,0.0,0,513)
DeclareParameter("wetterdaten.__ctt__Feuchte.verboseRead", "= true, if info message that file is loading is to be printed [:#(type=Boolean)]",\
 1109, true, 0.0,0.0,0.0,0,562)
DeclareVariable("wetterdaten.__ctt__Feuchte.columns[1]", "Columns of table to be interpolated [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("wetterdaten.__ctt__Feuchte.smoothness", "Smoothness of table interpolation [:#(type=Modelica.Blocks.Types.Smoothness)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("wetterdaten.__ctt__Feuchte.extrapolation", "Extrapolation of data outside the definition range [:#(type=Modelica.Blocks.Types.Extrapolation)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("wetterdaten.__ctt__Feuchte.timeScale", "Time scale of first table column [s|d]",\
 86400, 1E-15,1E+100,0.0,0,513)
DeclareParameter("wetterdaten.__ctt__Feuchte.offset[1]", "Offsets of output signals",\
 1110, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("wetterdaten.__ctt__Feuchte.startTime", "Output = offset for time < startTime [s]",\
 1111, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("wetterdaten.__ctt__Feuchte.shiftTime", "Shift time of first table column [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("wetterdaten.__ctt__Feuchte.timeEvents", "Time event handling of table interpolation [:#(type=Modelica.Blocks.Types.TimeEvents)]",\
 1112, 1, 1.0,3.0,0.0,0,564)
DeclareVariable("wetterdaten.__ctt__Feuchte.verboseExtrapolation", \
"= true, if warning messages are to be printed if time is outside the table definition range [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("wetterdaten.__ctt__Feuchte.t_min", "Minimum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.t_max", "Maximum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.t_minScaled", "Minimum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.t_maxScaled", "Maximum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Feuchte.p_offset[1]", "Offsets of output signals",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("wetterdaten.__ctt__Feuchte.tableID.id", "[:#(type=Integer)]", 0,\
 0.0,0.0,0.0,0,2565)
DeclareVariable("wetterdaten.__ctt__Feuchte.nextTimeEvent", "Next time event instant [s]",\
 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("wetterdaten.__ctt__Feuchte.nextTimeEventScaled", \
"Next scaled time event instant [1]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("wetterdaten.__ctt__Feuchte.timeScaled", "Scaled time [1]", 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("wetterdaten.__ctt__Temperatur.nout", "Number of outputs [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("wetterdaten.__ctt__Temperatur.y[1]", "Connector of Real output signals",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("wetterdaten.__ctt__Temperatur.tableOnFile", "= true, if table is defined on file or in function usertab [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[1, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[1, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[2, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[2, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[3, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[3, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[4, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[4, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[5, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[5, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[6, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[6, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[7, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[7, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[8, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[8, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[9, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[9, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[10, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[10, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[11, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[11, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[12, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[12, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[13, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 13.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[13, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[14, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[14, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[15, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[15, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[16, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[16, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[17, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[17, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[18, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[18, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[19, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[19, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[20, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[20, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[21, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[21, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[22, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[22, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[23, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[23, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[24, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[24, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[25, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[25, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 13, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[26, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[26, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[27, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 27.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[27, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[28, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[28, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[29, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[29, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[30, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[30, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[31, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 31.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[31, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[32, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 32.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[32, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[33, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 33.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[33, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[34, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 34.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[34, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[35, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 35.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[35, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[36, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 36.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[36, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[37, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 37, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[37, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[38, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 38.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[38, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -2.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[39, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 39.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[39, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[40, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 40.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[40, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[41, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 41, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[41, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[42, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 42.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[42, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[43, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 43.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[43, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[44, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 44.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[44, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[45, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 45.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[45, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[46, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 46.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[46, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[47, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 47.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[47, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[48, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 48, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[48, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[49, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 49.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[49, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[50, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 50.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[50, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -2.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[51, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 51.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[51, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[52, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 52.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[52, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -0.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[53, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 53.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[53, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -1.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[54, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 54.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[54, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -1.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[55, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 55.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[55, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -0.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[56, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 56.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[56, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -5.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[57, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 57.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[57, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -8.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[58, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 58.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[58, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -8.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[59, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 59.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[59, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -7.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[60, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 60.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[60, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -3.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[61, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 61.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[61, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -1.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[62, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 62.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[62, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[63, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 63.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[63, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[64, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 64.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[64, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[65, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 65.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[65, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[66, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 66.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[66, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[67, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 67.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[67, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[68, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 68.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[68, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[69, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 69.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[69, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[70, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 70.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[70, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 13.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[71, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 71.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[71, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[72, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 72.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[72, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[73, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 73.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[73, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[74, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 74.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[74, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[75, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 75, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[75, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[76, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 76.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[76, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[77, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 77, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[77, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[78, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 78.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[78, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -3.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[79, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 79.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[79, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[80, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 80.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[80, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[81, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 81, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[81, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[82, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 82.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[82, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[83, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 83.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[83, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[84, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 84, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[84, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[85, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 85.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[85, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[86, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 86.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[86, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[87, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 87.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[87, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[88, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 88.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[88, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[89, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 89.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[89, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[90, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 90.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[90, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[91, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 91.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[91, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[92, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 92.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[92, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[93, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 93.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[93, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[94, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 94.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[94, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[95, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 95.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[95, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[96, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 96, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[96, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 13, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[97, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 97.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[97, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[98, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 98, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[98, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[99, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 99.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[99, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[100, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 100.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[100, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[101, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 101.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[101, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[102, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 102.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[102, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[103, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 103.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[103, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[104, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 104.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[104, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[105, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 105.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[105, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[106, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 106.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[106, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[107, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 107.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[107, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[108, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 108.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[108, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[109, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 109.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[109, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[110, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 110.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[110, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[111, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 111.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[111, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[112, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 112.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[112, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[113, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 113.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[113, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[114, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 114.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[114, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[115, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 115.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[115, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[116, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 116.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[116, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 13.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[117, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 117.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[117, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[118, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 118.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[118, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[119, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 119, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[119, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[120, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 120.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[120, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[121, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 121.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[121, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[122, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 122.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[122, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[123, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 123.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[123, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[124, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 124, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[124, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[125, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 125.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[125, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[126, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 126.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[126, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[127, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 127.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[127, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[128, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 128.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[128, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[129, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 129.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[129, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[130, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 130.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[130, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[131, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 131.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[131, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[132, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 132, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[132, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[133, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 133.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[133, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[134, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 134.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[134, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[135, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 135.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[135, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[136, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 136.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[136, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[137, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 137.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[137, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[138, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 138.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[138, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[139, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 139.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[139, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[140, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 140.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[140, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[141, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 141.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[141, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[142, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 142.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[142, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[143, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 143.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[143, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[144, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 144.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[144, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[145, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 145.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[145, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[146, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 146.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[146, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[147, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 147, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[147, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[148, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 148.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[148, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[149, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 149.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[149, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[150, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 150.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[150, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[151, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 151.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[151, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[152, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 152, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[152, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[153, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 153.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[153, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[154, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 154.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[154, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[155, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 155, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[155, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[156, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 156.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[156, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[157, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 157.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[157, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[158, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 158.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[158, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[159, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 159.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[159, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[160, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 160.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[160, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[161, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 161.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[161, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[162, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 162.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[162, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[163, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 163.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[163, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 27.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[164, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 164.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[164, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[165, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 165, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[165, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[166, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 166.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[166, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[167, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 167.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[167, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[168, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 168.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[168, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[169, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 169.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[169, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[170, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 170.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[170, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[171, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 171.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[171, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[172, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 172.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[172, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[173, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 173.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[173, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[174, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 174.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[174, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 32.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[175, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 175.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[175, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[176, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 176.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[176, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 27.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[177, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 177.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[177, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[178, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 178.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[178, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[179, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 179, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[179, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 27, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[180, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 180.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[180, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[181, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 181.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[181, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[182, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 182.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[182, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[183, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 183.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[183, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[184, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 184.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[184, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[185, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 185.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[185, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[186, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 186.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[186, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[187, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 187, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[187, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[188, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 188.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[188, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 31.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[189, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 189.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[189, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[190, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 190.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[190, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[191, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 191.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[191, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[192, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 192.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[192, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[193, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 193.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[193, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[194, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 194.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[194, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[195, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 195, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[195, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[196, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 196.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[196, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[197, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 197.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[197, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[198, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 198.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[198, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[199, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 199.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[199, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[200, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 200.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[200, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[201, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 201.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[201, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 31.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[202, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 202.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[202, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[203, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 203, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[203, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[204, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 204.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[204, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[205, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 205.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[205, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[206, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 206.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[206, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[207, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 207.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[207, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[208, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 208.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[208, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[209, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 209, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[209, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[210, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 210.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[210, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[211, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 211.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[211, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[212, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 212.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[212, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 31.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[213, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 213.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[213, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[214, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 214.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[214, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 33.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[215, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 215, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[215, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[216, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 216.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[216, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[217, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 217.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[217, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[218, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 218, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[218, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[219, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 219.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[219, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[220, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 220.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[220, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[221, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 221.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[221, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[222, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 222.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[222, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[223, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 223.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[223, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[224, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 224.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[224, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[225, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 225.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[225, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[226, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 226, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[226, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[227, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 227.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[227, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[228, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 228.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[228, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[229, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 229.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[229, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 24.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[230, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 230.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[230, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[231, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 231.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[231, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[232, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 232.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[232, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[233, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 233.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[233, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[234, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 234.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[234, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[235, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 235.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[235, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[236, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 236.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[236, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[237, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 237.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[237, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[238, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 238.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[238, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 28.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[239, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 239, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[239, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 29, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[240, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 240.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[240, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[241, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 241.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[241, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 25.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[242, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 242.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[242, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 26.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[243, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 243.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[243, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 30.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[244, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 244.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[244, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[245, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 245.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[245, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[246, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 246.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[246, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 13.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[247, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 247.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[247, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[248, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 248.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[248, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[249, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 249.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[249, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 22.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[250, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 250.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[250, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[251, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 251.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[251, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[252, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 252.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[252, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[253, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 253.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[253, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[254, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 254.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[254, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[255, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 255.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[255, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[256, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 256.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[256, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[257, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 257.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[257, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[258, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 258.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[258, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[259, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 259.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[259, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[260, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 260.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[260, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[261, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 261.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[261, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[262, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 262.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[262, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[263, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 263.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[263, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[264, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 264.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[264, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[265, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 265.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[265, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 16.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[266, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 266.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[266, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[267, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 267.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[267, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[268, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 268.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[268, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[269, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 269.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[269, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[270, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 270.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[270, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[271, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 271.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[271, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[272, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 272, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[272, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[273, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 273.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[273, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[274, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 274, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[274, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[275, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 275, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[275, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[276, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 276.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[276, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[277, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 277.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[277, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[278, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 278.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[278, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[279, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 279.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[279, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[280, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 280.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[280, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[281, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 281.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[281, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[282, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 282.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[282, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[283, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 283.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[283, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[284, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 284.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[284, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[285, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 285.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[285, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[286, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 286.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[286, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[287, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 287.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[287, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[288, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 288.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[288, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[289, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 289.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[289, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[290, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 290.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[290, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[291, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 291.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[291, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 23.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[292, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 292.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[292, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 19.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[293, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 293.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[293, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 20.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[294, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 294.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[294, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 21.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[295, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 295.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[295, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 18.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[296, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 296, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[296, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[297, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 297.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[297, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[298, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 298.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[298, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[299, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 299.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[299, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[300, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 300.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[300, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 17.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[301, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 301.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[301, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[302, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 302.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[302, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[303, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 303.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[303, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[304, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 304.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[304, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[305, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 305.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[305, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[306, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 306.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[306, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[307, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 307.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[307, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[308, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 308.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[308, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[309, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 309.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[309, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[310, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 310.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[310, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 11.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[311, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 311, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[311, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[312, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 312.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[312, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[313, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 313.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[313, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[314, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 314.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[314, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[315, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 315.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[315, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[316, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 316.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[316, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[317, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 317.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[317, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[318, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 318.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[318, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[319, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 319.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[319, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[320, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 320.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[320, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[321, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 321.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[321, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[322, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 322.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[322, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[323, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 323.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[323, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[324, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 324.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[324, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[325, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 325.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[325, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[326, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 326.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[326, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[327, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 327.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[327, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[328, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 328.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[328, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 14.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[329, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 329.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[329, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 15.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[330, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 330.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[330, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 8.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[331, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 331.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[331, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[332, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 332.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[332, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[333, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 333.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[333, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[334, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 334, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[334, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[335, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 335.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[335, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[336, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 336.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[336, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[337, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 337.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[337, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -0.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[338, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 338.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[338, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -0.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[339, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 339.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[339, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[340, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 340.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[340, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[341, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 341.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[341, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[342, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 342.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[342, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[343, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 343.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[343, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7.3, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[344, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 344.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[344, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 -0.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[345, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 345.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[345, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[346, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 346.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[346, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[347, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 347.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[347, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[348, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 348.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[348, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[349, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 349.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[349, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 6.2, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[350, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 350.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[350, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[351, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 351.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[351, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[352, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 352.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[352, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[353, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 353.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[353, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 0.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[354, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 354.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[354, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[355, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 355.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[355, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 2.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[356, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 356.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[356, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[357, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 357.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[357, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 5.8, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[358, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 358.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[358, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 7.6, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[359, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 359.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[359, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 4.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[360, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 360.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[360, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 3.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[361, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 361.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[361, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 9.1, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[362, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 362.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[362, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.4, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[363, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 363.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[363, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.5, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[364, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 364.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[364, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 1.9, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[365, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 365.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[365, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 10.7, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[366, 1]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 366.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.table[366, 2]", "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])",\
 12.5, 0.0,0.0,0.0,0,513)
DeclareParameter("wetterdaten.__ctt__Temperatur.verboseRead", "= true, if info message that file is loading is to be printed [:#(type=Boolean)]",\
 1113, true, 0.0,0.0,0.0,0,562)
DeclareVariable("wetterdaten.__ctt__Temperatur.columns[1]", "Columns of table to be interpolated [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("wetterdaten.__ctt__Temperatur.smoothness", "Smoothness of table interpolation [:#(type=Modelica.Blocks.Types.Smoothness)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("wetterdaten.__ctt__Temperatur.extrapolation", "Extrapolation of data outside the definition range [:#(type=Modelica.Blocks.Types.Extrapolation)]",\
 3, 1.0,4.0,0.0,0,517)
DeclareVariable("wetterdaten.__ctt__Temperatur.timeScale", "Time scale of first table column [s|d]",\
 86400, 1E-15,1E+100,0.0,0,513)
DeclareParameter("wetterdaten.__ctt__Temperatur.offset[1]", "Offsets of output signals",\
 1114, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("wetterdaten.__ctt__Temperatur.startTime", "Output = offset for time < startTime [s]",\
 1115, 0, 0.0,0.0,0.0,0,560)
EndNonAlias(12)
PreNonAliasNew(13)
StartNonAlias(13)
DeclareVariable("wetterdaten.__ctt__Temperatur.shiftTime", "Shift time of first table column [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("wetterdaten.__ctt__Temperatur.timeEvents", "Time event handling of table interpolation [:#(type=Modelica.Blocks.Types.TimeEvents)]",\
 1116, 1, 1.0,3.0,0.0,0,564)
DeclareVariable("wetterdaten.__ctt__Temperatur.verboseExtrapolation", \
"= true, if warning messages are to be printed if time is outside the table definition range [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("wetterdaten.__ctt__Temperatur.t_min", "Minimum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.t_max", "Maximum abscissa value defined in table [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.t_minScaled", "Minimum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.t_maxScaled", "Maximum (scaled) abscissa value defined in table [1]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("wetterdaten.__ctt__Temperatur.p_offset[1]", "Offsets of output signals",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("wetterdaten.__ctt__Temperatur.tableID.id", "[:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,2565)
DeclareVariable("wetterdaten.__ctt__Temperatur.nextTimeEvent", "Next time event instant [s]",\
 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("wetterdaten.__ctt__Temperatur.nextTimeEventScaled", \
"Next scaled time event instant [1]", 0, 0.0,0.0,0.0,0,2704)
DeclareVariable("wetterdaten.__ctt__Temperatur.timeScaled", "Scaled time [1]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("wetterdaten.gain.k", "Gain value multiplied with input signal [1]",\
 1117, 0.01, 0.0,0.0,0.0,0,560)
DeclareAlias2("wetterdaten.gain.u", "Input signal connector", "wetterdaten.__ctt__Feuchte.y[1]", 1,\
 5, 9988, 0)
DeclareAlias2("wetterdaten.gain.y", "Output signal connector", "wetterdaten.wetBulTem.phi", 1,\
 5, 9981, 0)
DeclareAlias2("wetterdaten.add.u1", "Connector of Real input signal 1", \
"wetterdaten.C_K.k", 1, 7, 1120, 0)
DeclareAlias2("wetterdaten.add.u2", "Connector of Real input signal 2", \
"wetterdaten.__ctt__Temperatur.y[1]", 1, 5, 10738, 0)
DeclareAlias2("wetterdaten.add.y", "Connector of Real output signal [K]", \
"wetterdaten.wetBulTem.TDryBul", 1, 5, 9980, 0)
DeclareParameter("wetterdaten.add.k1", "Gain of input signal 1", 1118, 1, \
0.0,0.0,0.0,0,560)
DeclareParameter("wetterdaten.add.k2", "Gain of input signal 2", 1119, 1, \
0.0,0.0,0.0,0,560)
DeclareParameter("wetterdaten.C_K.k", "Constant output value", 1120, 273.15, \
0.0,0.0,0.0,0,560)
DeclareAlias2("wetterdaten.C_K.y", "Connector of Real output signal", \
"wetterdaten.C_K.k", 1, 7, 1120, 0)
DeclareAlias2("wetterdaten.signalBus.E_th_HK", "", "Verbraucher.signalBus.E_th_HK", 1,\
 5, 2216, 4)
DeclareAlias2("wetterdaten.signalBus.E_bs_HK", "", "Heizkessel.integrator.y", 1,\
 1, 31, 4)
DeclareAlias2("wetterdaten.signalBus.E_th_WRG", "[J]", "WRG.integrator1.y", 1, 1,\
 113, 4)
DeclareAlias2("wetterdaten.signalBus.E_th_Last", "[J]", "Verbraucher.integrator2.y", 1,\
 1, 28, 4)
DeclareAlias2("wetterdaten.signalBus.E_bs_th_BHKW", "", "BHKW_.integrator.y", 1,\
 1, 75, 4)
DeclareAlias2("wetterdaten.signalBus.E_th_BHKW", "", "Verbraucher.signalBus.E_th_BHKW", 1,\
 5, 2217, 4)
DeclareAlias2("wetterdaten.signalBus.E_bs_el_BHKW", "[J]", "wirtschaftlichkeit_BHKW_neu.Integrator_Brennstoff.y", 1,\
 1, 123, 4)
DeclareAlias2("wetterdaten.signalBus.E_el_bezug", "", "Stromerzeugung.integrator2.y", 1,\
 1, 37, 4)
DeclareAlias2("wetterdaten.signalBus.P_EK_offline", "[W]", "Verbraucher.signalBus.P_EK_offline", 1,\
 5, 2218, 4)
DeclareAlias2("wetterdaten.signalBus.P_EK", "[W]", "Verbraucher.signalBus.P_EK", 1,\
 5, 2219, 4)
DeclareAlias2("wetterdaten.signalBus.P_BHKW", "[W]", "Verbraucher.signalBus.P_BHKW", 1,\
 5, 2220, 4)
DeclareAlias2("wetterdaten.signalBus.P_Last", "[W]", "Verbraucher.signalBus.P_Last", 1,\
 5, 2221, 4)
DeclareAlias2("wetterdaten.signalBus.P_Kt", "[W]", "Verbraucher.signalBus.P_Kt", 1,\
 5, 2222, 4)
DeclareAlias2("wetterdaten.signalBus.Q_p_EK_offline", "[W]", "Elektrodenkessel.Q_p_ek", 1,\
 5, 9896, 4)
DeclareAlias2("wetterdaten.signalBus.Q_p_EK", "[W]", "Verbraucher.signalBus.Q_p_EK", 1,\
 5, 2223, 4)
DeclareAlias2("wetterdaten.signalBus.Q_p_Bs_el", "[W]", "Verbraucher.signalBus.Q_p_Bs_el", 1,\
 5, 2224, 4)
DeclareAlias2("wetterdaten.signalBus.Q_p_Bs_offline", "[W]", "Verbraucher.signalBus.Q_p_Bs_offline", 1,\
 5, 2225, 4)
DeclareAlias2("wetterdaten.signalBus.Q_p_th_Last", "[W]", "Verbraucher.signalBus.Q_p_th_Last", 1,\
 5, 2226, 4)
DeclareAlias2("wetterdaten.signalBus.eta_th", "", "Verbraucher.signalBus.eta_th", 1,\
 5, 2227, 4)
DeclareAlias2("wetterdaten.signalBus.eta_el", "", "Verbraucher.signalBus.eta_el", 1,\
 5, 2228, 4)
DeclareAlias2("wetterdaten.signalBus.Grenzkosten", "[:#(type=Boolean)]", \
"Verbraucher.signalBus.Grenzkosten", 1, 5, 2229, 69)
DeclareAlias2("wetterdaten.signalBus.T_ref_WRG", "[K|degC]", "WRG.T_VL.T", 1, 1,\
 112, 4)
DeclareAlias2("wetterdaten.signalBus.T_ref_Puffer", "[K|degC]", "Pufferspeicher.T_VL_VK.T", 1,\
 1, 57, 4)
DeclareAlias2("wetterdaten.signalBus.K_P_BHKW", "", "Verbraucher.signalBus.K_P_BHKW", 1,\
 5, 2230, 4)
DeclareAlias2("wetterdaten.signalBus.Strompreis", "", "Verbraucher.signalBus.Strompreis", 1,\
 5, 2231, 4)
DeclareAlias2("wetterdaten.signalBus.G_verg", "", "Verbraucher.signalBus.G_verg", 1,\
 5, 2232, 4)
DeclareAlias2("wetterdaten.signalBus.K_bed_th", "", "Verbraucher.signalBus.K_bed_th", 1,\
 5, 2233, 4)
DeclareAlias2("wetterdaten.signalBus.K_bed_el", "", "Verbraucher.signalBus.K_bed_el", 1,\
 5, 2234, 4)
DeclareAlias2("wetterdaten.signalBus.K_w_kt", "", "Verbraucher.signalBus.K_w_kt", 1,\
 5, 2235, 4)
DeclareAlias2("wetterdaten.signalBus.Feuchtkugeltemperatur", "[K]", \
"Verbraucher.signalBus.Feuchtkugeltemperatur", 1, 5, 2236, 4)
DeclareOutput("Ergebnisse.K_bed_an", "", 0, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("Ergebnisse.K_bed_th_an", "", 1, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("Ergebnisse.K_bed_el_an", "", 2, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("Ergebnisse.K_gesamt", "", 3, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("Ergebnisse.K_kap_an", "", 4, 0.0, 0.0,0.0,0.0,0,521)
DeclareOutput("Ergebnisse.K_bet_an", "", 5, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("Ergebnisse.Vbst", "[J]", 6, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("Ergebnisse.Stillstandszeit", "", 7, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("Ergebnisse.K_th_spez", "", 8, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("Ergebnisse.E_bs_gesamt", "", 9, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("Ergebnisse.E_el_gesamt", "", 10, 0.0, 0.0,0.0,0.0,0,520)
DeclareOutput("Ergebnisse.E_th_kt", "[J]", 11, 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("Ventil_BHKW.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("Ventil_BHKW.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Pufferspeicher.port_beladen_b.m_flow", 1, 5, 2517, 132)
DeclareAlias2("Ventil_BHKW.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Kuehlturm.port_a.p", 1, 5, 3737, 4)
DeclareAlias2("Ventil_BHKW.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Pufferspeicher.port_beladen_b.h_outflow", 1, 5, 2519, 4)
DeclareAlias2("Ventil_BHKW.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "Kuehlturm.T_Rl.port_a.m_flow", 1, 5, 3742, 132)
DeclareAlias2("Ventil_BHKW.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Pufferspeicher.port_beladen_b.p", 1, 5, 2518, 4)
DeclareAlias2("Ventil_BHKW.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "Kuehlturm.port_a.h_outflow", 1, 5, 3738, 4)
DeclareVariable("Ventil_BHKW.port_a_exposesState", "= true if port_a exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("Ventil_BHKW.port_b_exposesState", "= true if port_b.p exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareParameter("Ventil_BHKW.showDesignFlowDirection", "= false to hide the arrow in the model icon [:#(type=Boolean)]",\
 1121, true, 0.0,0.0,0.0,0,2610)
DeclareVariable("Ventil_BHKW.dp_start", "Guess value of dp = port_a.p - port_b.p [Pa|bar]",\
 300000, -1E+60,100000000.0,100000.0,0,513)
DeclareVariable("Ventil_BHKW.m_flow_start", "Guess value of m_flow = port_a.m_flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Ventil_BHKW.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Ventil_BHKW.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Ventil_BHKW.show_V_flow", "= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("Ventil_BHKW.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "Pufferspeicher.port_beladen_b.m_flow", 1, 5, 2517, 0)
DeclareVariable("Ventil_BHKW.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ventil_BHKW.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ventil_BHKW.port_a_T", "Temperature close to port_a, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("Ventil_BHKW.port_b_T", "Temperature close to port_b, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareAlias2("Ventil_BHKW.state_a.p", "Absolute pressure of medium [Pa|bar]", \
"Kuehlturm.port_a.p", 1, 5, 3737, 1024)
DeclareVariable("Ventil_BHKW.state_a.T", "Temperature of medium [K|degC]", \
293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("Ventil_BHKW.state_b.p", "Absolute pressure of medium [Pa|bar]", \
"Pufferspeicher.port_beladen_b.p", 1, 5, 2518, 1024)
DeclareVariable("Ventil_BHKW.state_b.T", "Temperature of medium [K|degC]", \
293.15, 1.0,10000.0,300.0,0,2560)
DeclareParameter("Ventil_BHKW.dp_nominal", "Nominal pressure drop at full opening=1 [Pa|bar]",\
 1122, 1000, 0.0,1E+100,100000.0,0,560)
DeclareParameter("Ventil_BHKW.m_flow_nominal", "Nominal mass flowrate at full opening=1 [kg/s]",\
 1123, 11.1, -100000.0,100000.0,0.0,0,560)
DeclareVariable("Ventil_BHKW.k", "Hydraulic conductance at full opening=1 [kg/(s.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ventil_BHKW.open", "[:#(type=Boolean)]", "konf_BHKW", 1, 7, 211, 65)
DeclareParameter("Ventil_BHKW.opening_min", "Remaining opening if closed, causing small leakage flow [1]",\
 1124, 0, 0.0,1E+100,0.0,0,560)
DeclareVariable("Ventil_WRG.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Ventil_WRG.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -1E+60,100000.0,0.0,0,776)
DeclareAlias2("Ventil_WRG.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Pufferspeicher.port_entladen_b.p", 1, 5, 2523, 4)
DeclareVariable("Ventil_WRG.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("Ventil_WRG.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,1E+60,0.0,0,776)
DeclareAlias2("Ventil_WRG.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "WRG.port_b.p", 1, 5, 4909, 4)
DeclareVariable("Ventil_WRG.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("Ventil_WRG.port_a_exposesState", "= true if port_a exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("Ventil_WRG.port_b_exposesState", "= true if port_b.p exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareParameter("Ventil_WRG.showDesignFlowDirection", "= false to hide the arrow in the model icon [:#(type=Boolean)]",\
 1125, true, 0.0,0.0,0.0,0,2610)
DeclareVariable("Ventil_WRG.dp_start", "Guess value of dp = port_a.p - port_b.p [Pa|bar]",\
 300000, -1E+60,100000000.0,100000.0,0,513)
DeclareVariable("Ventil_WRG.m_flow_start", "Guess value of m_flow = port_a.m_flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Ventil_WRG.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Ventil_WRG.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Ventil_WRG.show_V_flow", "= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("Ventil_WRG.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "Ventil_WRG.port_a.m_flow", 1, 5, 11503, 0)
DeclareVariable("Ventil_WRG.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ventil_WRG.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ventil_WRG.port_a_T", "Temperature close to port_a, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("Ventil_WRG.port_b_T", "Temperature close to port_b, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareAlias2("Ventil_WRG.state_a.p", "Absolute pressure of medium [Pa|bar]", \
"Pufferspeicher.port_entladen_b.p", 1, 5, 2523, 1024)
DeclareVariable("Ventil_WRG.state_a.T", "Temperature of medium [K|degC]", 293.15,\
 1.0,10000.0,300.0,0,2560)
DeclareAlias2("Ventil_WRG.state_b.p", "Absolute pressure of medium [Pa|bar]", \
"WRG.port_b.p", 1, 5, 4909, 1024)
DeclareVariable("Ventil_WRG.state_b.T", "Temperature of medium [K|degC]", 293.15,\
 1.0,10000.0,300.0,0,2560)
DeclareParameter("Ventil_WRG.dp_nominal", "Nominal pressure drop at full opening=1 [Pa|bar]",\
 1126, 1000, 0.0,1E+100,100000.0,0,560)
DeclareParameter("Ventil_WRG.m_flow_nominal", "Nominal mass flowrate at full opening=1 [kg/s]",\
 1127, 69.4, -100000.0,100000.0,0.0,0,560)
DeclareVariable("Ventil_WRG.k", "Hydraulic conductance at full opening=1 [kg/(s.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ventil_WRG.open", "[:#(type=Boolean)]", "WRG_not", 1, 5, 2264, 65)
DeclareParameter("Ventil_WRG.opening_min", "Remaining opening if closed, causing small leakage flow [1]",\
 1128, 0, 0.0,1E+100,0.0,0,560)
DeclareVariable("Ventil_EK.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Ventil_EK.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -1E+60,100000.0,0.0,0,776)
DeclareAlias2("Ventil_EK.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "WRG.port_b.p", 1, 5, 4909, 4)
DeclareVariable("Ventil_EK.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("Ventil_EK.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,1E+60,0.0,0,776)
DeclareAlias2("Ventil_EK.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 4)
DeclareVariable("Ventil_EK.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("Ventil_EK.port_a_exposesState", "= true if port_a exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("Ventil_EK.port_b_exposesState", "= true if port_b.p exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareParameter("Ventil_EK.showDesignFlowDirection", "= false to hide the arrow in the model icon [:#(type=Boolean)]",\
 1129, true, 0.0,0.0,0.0,0,2610)
DeclareVariable("Ventil_EK.dp_start", "Guess value of dp = port_a.p - port_b.p [Pa|bar]",\
 300000, -1E+60,100000000.0,100000.0,0,513)
DeclareVariable("Ventil_EK.m_flow_start", "Guess value of m_flow = port_a.m_flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Ventil_EK.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Ventil_EK.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Ventil_EK.show_V_flow", "= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("Ventil_EK.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "Ventil_EK.port_a.m_flow", 1, 5, 11522, 0)
DeclareVariable("Ventil_EK.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ventil_EK.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ventil_EK.port_a_T", "Temperature close to port_a, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("Ventil_EK.port_b_T", "Temperature close to port_b, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareAlias2("Ventil_EK.state_a.p", "Absolute pressure of medium [Pa|bar]", \
"WRG.port_b.p", 1, 5, 4909, 1024)
DeclareVariable("Ventil_EK.state_a.T", "Temperature of medium [K|degC]", 293.15,\
 1.0,10000.0,300.0,0,2560)
DeclareAlias2("Ventil_EK.state_b.p", "Absolute pressure of medium [Pa|bar]", \
"Heizkessel.port_a.p", 1, 5, 2330, 1024)
DeclareVariable("Ventil_EK.state_b.T", "Temperature of medium [K|degC]", 293.15,\
 1.0,10000.0,300.0,0,2560)
DeclareParameter("Ventil_EK.dp_nominal", "Nominal pressure drop at full opening=1 [Pa|bar]",\
 1130, 1000, 0.0,1E+100,100000.0,0,560)
DeclareParameter("Ventil_EK.m_flow_nominal", "Nominal mass flowrate at full opening=1 [kg/s]",\
 1131, 69.4, -100000.0,100000.0,0.0,0,560)
DeclareVariable("Ventil_EK.k", "Hydraulic conductance at full opening=1 [kg/(s.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ventil_EK.open", "[:#(type=Boolean)]", "EK_not", 1, 5, 2265, 65)
DeclareParameter("Ventil_EK.opening_min", "Remaining opening if closed, causing small leakage flow [1]",\
 1132, 0, 0.0,1E+100,0.0,0,560)
DeclareVariable("Ventil_HK.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Ventil_HK.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -1E+60,100000.0,0.0,0,776)
DeclareAlias2("Ventil_HK.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Heizkessel.port_a.p", 1, 5, 2330, 4)
DeclareVariable("Ventil_HK.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("Ventil_HK.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,1E+60,0.0,0,776)
DeclareAlias2("Ventil_HK.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Verbraucher.port_a_Heizkreislauf.p", 1, 5, 16, 4)
DeclareVariable("Ventil_HK.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("Ventil_HK.port_a_exposesState", "= true if port_a exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("Ventil_HK.port_b_exposesState", "= true if port_b.p exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareParameter("Ventil_HK.showDesignFlowDirection", "= false to hide the arrow in the model icon [:#(type=Boolean)]",\
 1133, true, 0.0,0.0,0.0,0,2610)
DeclareVariable("Ventil_HK.dp_start", "Guess value of dp = port_a.p - port_b.p [Pa|bar]",\
 300000, -1E+60,100000000.0,100000.0,0,513)
DeclareVariable("Ventil_HK.m_flow_start", "Guess value of m_flow = port_a.m_flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Ventil_HK.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Ventil_HK.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Ventil_HK.show_V_flow", "= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("Ventil_HK.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "Ventil_HK.port_a.m_flow", 1, 5, 11541, 0)
DeclareVariable("Ventil_HK.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ventil_HK.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ventil_HK.port_a_T", "Temperature close to port_a, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("Ventil_HK.port_b_T", "Temperature close to port_b, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareAlias2("Ventil_HK.state_a.p", "Absolute pressure of medium [Pa|bar]", \
"Heizkessel.port_a.p", 1, 5, 2330, 1024)
DeclareVariable("Ventil_HK.state_a.T", "Temperature of medium [K|degC]", 293.15,\
 1.0,10000.0,300.0,0,2560)
DeclareAlias2("Ventil_HK.state_b.p", "Absolute pressure of medium [Pa|bar]", \
"Verbraucher.port_a_Heizkreislauf.p", 1, 5, 16, 1024)
DeclareVariable("Ventil_HK.state_b.T", "Temperature of medium [K|degC]", 293.15,\
 1.0,10000.0,300.0,0,2560)
DeclareParameter("Ventil_HK.dp_nominal", "Nominal pressure drop at full opening=1 [Pa|bar]",\
 1134, 1000, 0.0,1E+100,100000.0,0,560)
DeclareParameter("Ventil_HK.m_flow_nominal", "Nominal mass flowrate at full opening=1 [kg/s]",\
 1135, 69.4, -100000.0,100000.0,0.0,0,560)
DeclareVariable("Ventil_HK.k", "Hydraulic conductance at full opening=1 [kg/(s.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ventil_HK.open", "[:#(type=Boolean)]", "HK_not", 1, 5, 2266, 65)
DeclareParameter("Ventil_HK.opening_min", "Remaining opening if closed, causing small leakage flow [1]",\
 1136, 0, 0.0,1E+100,0.0,0,560)
DeclareVariable("Ventil_Puffer.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Ventil_Puffer.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -1E+60,100000.0,0.0,0,776)
DeclareAlias2("Ventil_Puffer.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "bou.p", 1, 7, 206, 4)
DeclareVariable("Ventil_Puffer.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("Ventil_Puffer.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,1E+60,0.0,0,776)
DeclareAlias2("Ventil_Puffer.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Pufferspeicher.port_entladen_b.p", 1, 5, 2523, 4)
DeclareVariable("Ventil_Puffer.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("Ventil_Puffer.port_a_exposesState", "= true if port_a exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("Ventil_Puffer.port_b_exposesState", "= true if port_b.p exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareParameter("Ventil_Puffer.showDesignFlowDirection", "= false to hide the arrow in the model icon [:#(type=Boolean)]",\
 1137, true, 0.0,0.0,0.0,0,2610)
DeclareVariable("Ventil_Puffer.dp_start", "Guess value of dp = port_a.p - port_b.p [Pa|bar]",\
 300000, -1E+60,100000000.0,100000.0,0,513)
DeclareVariable("Ventil_Puffer.m_flow_start", "Guess value of m_flow = port_a.m_flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Ventil_Puffer.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("Ventil_Puffer.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Ventil_Puffer.show_V_flow", "= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("Ventil_Puffer.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "Ventil_Puffer.port_a.m_flow", 1, 5, 11560, 0)
DeclareVariable("Ventil_Puffer.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ventil_Puffer.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ventil_Puffer.port_a_T", "Temperature close to port_a, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("Ventil_Puffer.port_b_T", "Temperature close to port_b, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,512)
DeclareAlias2("Ventil_Puffer.state_a.p", "Absolute pressure of medium [Pa|bar]",\
 "bou.p", 1, 7, 206, 1024)
DeclareVariable("Ventil_Puffer.state_a.T", "Temperature of medium [K|degC]", \
293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("Ventil_Puffer.state_b.p", "Absolute pressure of medium [Pa|bar]",\
 "Pufferspeicher.port_entladen_b.p", 1, 5, 2523, 1024)
DeclareVariable("Ventil_Puffer.state_b.T", "Temperature of medium [K|degC]", \
293.15, 1.0,10000.0,300.0,0,2560)
DeclareParameter("Ventil_Puffer.dp_nominal", "Nominal pressure drop at full opening=1 [Pa|bar]",\
 1138, 1000, 0.0,1E+100,100000.0,0,560)
DeclareParameter("Ventil_Puffer.m_flow_nominal", "Nominal mass flowrate at full opening=1 [kg/s]",\
 1139, 69.4, -100000.0,100000.0,0.0,0,560)
DeclareVariable("Ventil_Puffer.k", "Hydraulic conductance at full opening=1 [kg/(s.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ventil_Puffer.open", "[:#(type=Boolean)]", "Puffer_not", 1, 5, 2267,\
 65)
DeclareParameter("Ventil_Puffer.opening_min", "Remaining opening if closed, causing small leakage flow [1]",\
 1140, 0, 0.0,1E+100,0.0,0,560)
DeclareVariable("__ps__bhkw.m_flow_bhkw", "[kg/s]", 11.1, 0.0,0.0,0.0,0,513)
DeclareParameter("__ps__bhkw.dp_nom_bhkw", "[Pa|bar]", 1141, 120000, 0.0,0.0,0.0,\
0,560)
DeclareParameter("__ps__oe.Zuschlag_selbst", "[ct/kWh] []", 1142, 2.4, 0.0,0.0,\
0.0,0,560)
DeclareParameter("__ps__oe.Gaspreis", "[\342\202\254/kWh] []", 1143, 0.044, \
0.0,0.0,0.0,0,560)
DeclareParameter("__ps__oe.Mineraloelsteuer", "[\342\202\254/kWh] []", 1144, \
0.0055, 0.0,0.0,0.0,0,560)
DeclareParameter("__ps__oe.Netznutzungsentgelte", "[ct/kWh] []", 1145, 2, \
0.0,0.0,0.0,0,560)
DeclareParameter("__ps__oe.EEG_Umlage", "[ct/kWh] []", 1146, -2.716, 0.0,0.0,0.0,\
0,560)
DeclareParameter("__ps__oe.Stromsteuer", "[ct/kWh] []", 1147, 2.05, 0.0,0.0,0.0,\
0,560)
DeclareVariable("__ps__initialisierung.m_flow_vk", "[kg/s]", 69.4, 0.0,0.0,0.0,0,513)
DeclareParameter("__ps__initialisierung.T_soll", "[K|degC]", 1148, 363.15, 0.0,\
1E+100,300.0,0,560)
DeclareParameter("__ps__initialisierung.T_start", "[K|degC]", 1149, 343.15, 0.0,\
1E+100,300.0,0,560)
DeclareParameter("__ps__initialisierung.T_vl_verb", "[K|degC]", 1150, 340.15, \
0.0,1E+100,300.0,0,560)
DeclareVariable("_GlobalScope.Modelica.Media.Interfaces.PartialPureSubstance.X_default[1]",\
 "Default value for mass fractions of medium (for initialization) [kg/kg]", 1, \
0.0,1.0,0.1,0,2561)
DeclareVariable("_GlobalScope.Modelica.Media.Interfaces.PartialPureSubstance.X_default_Unique13[1]",\
 "Default value for mass fractions of medium (for initialization) [kg/kg]", 1, \
0.0,1.0,0.1,0,2561)
EndNonAlias(13)
PreNonAliasNew(14)
