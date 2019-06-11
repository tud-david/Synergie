// CP: 65001
// SimulationX Version: 3.9.1.53326 x64
within ;
model ETAFabrik_Gesamtnetz_vorl_dyn_Wasser "Gesamtnetz_vorl_dyn_Wasser.mo"
	extends ETAFabrik.Gesamtnetz_vorl_dyn_Wasser;
	annotation(experiment(
		StopTime=30879000,
		StartTime=0,
		Interval=61758,
		Algorithm="Cvode",
		MaxInterval="3"));
end ETAFabrik_Gesamtnetz_vorl_dyn_Wasser;
