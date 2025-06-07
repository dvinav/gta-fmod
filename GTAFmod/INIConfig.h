#pragma once
#include <string>
#include "IniReader/IniReader.h"
class INIConfig
{
public:
	// FMOD
	bool m_bUseLogo;
	std::string m_sDefaultBank;

	// Audio
	float m_fMasterVolume;

	// Vehicle Enable Flags
	bool m_bEnableOnMotorbikes;
	bool m_bEnableOnCars;
	bool m_bEnableOnBigVehicles;

	// RPM Mode
	int m_iRPMmode;

	INIConfig(std::string iniPath)
	{
		CIniReader ini(iniPath);
		m_bUseLogo = ini.ReadBoolean("FMOD", "UseLogo", true);
		m_sDefaultBank = ini.ReadString("FMOD", "DefaultBank", "");

		m_fMasterVolume = ini.ReadFloat("Audio", "MasterVolume", 1.0f);

		m_bEnableOnMotorbikes = ini.ReadBoolean("Vehicles", "EnableOnMotorbikes", true);
		m_bEnableOnCars = ini.ReadBoolean("Vehicles", "EnableOnCars", true);
		m_bEnableOnBigVehicles = ini.ReadBoolean("Vehicles", "EnableOnBigVehicles", true);

		m_iRPMmode = ini.ReadInteger("Audio", "RPMmode", 0);
	}
	

};

