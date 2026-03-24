#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E1E8F78EF830D7DA.h"
#include "unitysdk/MoleMole/Config/IndicatorLightType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/Struct_2_C2FD185AAA4AC980.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_3_49EC1FD463B58C06_Class_1_FB0A08A3A3558640;
namespace MoleMole::Config { class ConfigHollowChessboardIndicatorLight; }
namespace MoleMole::Config { class IndicatorLightsPreset; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_49EC1FD463B58C06_METHOD_3_151568AAE207BCE4_OFFSET UNITYSDK_OFFSET(0xE291990)
#define CLASS_3_49EC1FD463B58C06_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xE291420)
#define CLASS_3_49EC1FD463B58C06_METHOD_3_9DFAB4C7B0720D25_OFFSET UNITYSDK_OFFSET(0xE2918F0)
#define CLASS_3_49EC1FD463B58C06_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE2919E0)
#define CLASS_3_49EC1FD463B58C06_METHOD_3_CA87548ADCACF41E_OFFSET UNITYSDK_OFFSET(0xE2920A0)
#define CLASS_3_49EC1FD463B58C06_METHOD_3_D7E12F717AC61D23_OFFSET UNITYSDK_OFFSET(0xE291A60)
#define CLASS_3_49EC1FD463B58C06_METHOD_3_E5C7E385DDAF1EF6_OFFSET UNITYSDK_OFFSET(0xE291500)
#define CLASS_3_49EC1FD463B58C06_METHOD_3_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xE2913B0)
#define CLASS_3_49EC1FD463B58C06__CTOR_OFFSET UNITYSDK_OFFSET(0xE291310)

inline static constexpr unsigned int Class_3_49EC1FD463B58C06_TypeDefinitionIndex = 61635;

class Class_3_49EC1FD463B58C06 : public ::Class_2_E1E8F78EF830D7DA
{
public:
	::System::Collections::Generic::List_1<::Class_3_49EC1FD463B58C06_Class_1_FB0A08A3A3558640*>* Field_3_0; // 0x28
	::UnityEngine::Color Field_3_2; // 0x30
	::UnityEngine::Color Field_3_5; // 0x40
	::UnityEngine::Color Field_3_4; // 0x50
	::UnityEngine::Color Field_3_1; // 0x60
	::UnityEngine::Color Field_3_3; // 0x70

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_49EC1FD463B58C06__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49EC1FD463B58C06_METHOD_3_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_3_E5C7E385DDAF1EF6(::Struct_2_6E23A591AC26A31E& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_49EC1FD463B58C06_METHOD_3_E5C7E385DDAF1EF6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49EC1FD463B58C06_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_3_151568AAE207BCE4(::MoleMole::Config::IndicatorLightType a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::IndicatorLightType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_3_49EC1FD463B58C06_METHOD_3_151568AAE207BCE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49EC1FD463B58C06_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigHollowChessboardIndicatorLight* Method_3_9DFAB4C7B0720D25()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardIndicatorLight*(*)())((::PBYTE)hIl2Cpp + CLASS_3_49EC1FD463B58C06_METHOD_3_9DFAB4C7B0720D25_OFFSET))();
	}

	::System::Void Method_3_D7E12F717AC61D23(::Struct_2_C2FD185AAA4AC980 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C2FD185AAA4AC980))((::PBYTE)hIl2Cpp + CLASS_3_49EC1FD463B58C06_METHOD_3_D7E12F717AC61D23_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA87548ADCACF41E(::MoleMole::Config::IndicatorLightsPreset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::IndicatorLightsPreset*))((::PBYTE)hIl2Cpp + CLASS_3_49EC1FD463B58C06_METHOD_3_CA87548ADCACF41E_OFFSET))(this, a1);
	}
};
