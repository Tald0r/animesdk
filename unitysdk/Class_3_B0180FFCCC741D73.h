#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_B0180FFCCC741D73_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6FDB020)
#define CLASS_3_B0180FFCCC741D73_METHOD_3_0059D7679538E2B5_1_OFFSET UNITYSDK_OFFSET(0x6FDB9C0)
#define CLASS_3_B0180FFCCC741D73_METHOD_3_0059D7679538E2B5_OFFSET UNITYSDK_OFFSET(0x6FDBE60)
#define CLASS_3_B0180FFCCC741D73_METHOD_3_435E5BDF78C2CCAC_OFFSET UNITYSDK_OFFSET(0x6FDB390)
#define CLASS_3_B0180FFCCC741D73_METHOD_3_696DA7B4B1030895_OFFSET UNITYSDK_OFFSET(0x6FDB800)
#define CLASS_3_B0180FFCCC741D73_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x6FDB950)
#define CLASS_3_B0180FFCCC741D73_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6FDC310)
#define CLASS_3_B0180FFCCC741D73_METHOD_3_D39E40B3DB45D601_OFFSET UNITYSDK_OFFSET(0x6FDB540)
#define CLASS_3_B0180FFCCC741D73_UPDATE_OFFSET UNITYSDK_OFFSET(0x6FDB1F0)
#define CLASS_3_B0180FFCCC741D73__CTOR_OFFSET UNITYSDK_OFFSET(0x6FDB370)

inline static constexpr unsigned int Class_3_B0180FFCCC741D73_TypeDefinitionIndex = 66275;

class Class_3_B0180FFCCC741D73 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0180FFCCC741D73__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B0180FFCCC741D73_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0180FFCCC741D73_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_435E5BDF78C2CCAC(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_B0180FFCCC741D73_METHOD_3_435E5BDF78C2CCAC_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B0180FFCCC741D73_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_D39E40B3DB45D601(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B0180FFCCC741D73_METHOD_3_D39E40B3DB45D601_OFFSET))(a1);
	}

	static ::System::Void Method_3_696DA7B4B1030895(::System::Single a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_B0180FFCCC741D73_METHOD_3_696DA7B4B1030895_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0059D7679538E2B5(::System::Single a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_B0180FFCCC741D73_METHOD_3_0059D7679538E2B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0059D7679538E2B5_1(::System::Single a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_B0180FFCCC741D73_METHOD_3_0059D7679538E2B5_1_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0180FFCCC741D73_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
