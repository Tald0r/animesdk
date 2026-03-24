#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_81169F718F8970FA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x807E040)
#define CLASS_3_81169F718F8970FA_METHOD_3_169E48D0752099B7_OFFSET UNITYSDK_OFFSET(0x807EAB0)
#define CLASS_3_81169F718F8970FA_METHOD_3_1A6E4B8032170F57_OFFSET UNITYSDK_OFFSET(0x807FC30)
#define CLASS_3_81169F718F8970FA_METHOD_3_388F7AC45B18BAF4_OFFSET UNITYSDK_OFFSET(0x807F1E0)
#define CLASS_3_81169F718F8970FA_METHOD_3_42B1858173354DB9_OFFSET UNITYSDK_OFFSET(0x8080200)
#define CLASS_3_81169F718F8970FA_METHOD_3_4C7AA62905DC1988_OFFSET UNITYSDK_OFFSET(0x807EE10)
#define CLASS_3_81169F718F8970FA_METHOD_3_690E973C1E11B6F5_OFFSET UNITYSDK_OFFSET(0x807E680)
#define CLASS_3_81169F718F8970FA_METHOD_3_6DD1BE228613C999_OFFSET UNITYSDK_OFFSET(0x807F130)
#define CLASS_3_81169F718F8970FA_METHOD_3_6F52D049C0A20254_OFFSET UNITYSDK_OFFSET(0x807E5F0)
#define CLASS_3_81169F718F8970FA_METHOD_3_A566853AB0FB0970_OFFSET UNITYSDK_OFFSET(0x80800B0)
#define CLASS_3_81169F718F8970FA_METHOD_3_BA56E526A4900D7D_OFFSET UNITYSDK_OFFSET(0x807EA30)
#define CLASS_3_81169F718F8970FA_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x807E580)
#define CLASS_3_81169F718F8970FA_METHOD_3_DC5BBB4AC98C027B_OFFSET UNITYSDK_OFFSET(0x807FCA0)
#define CLASS_3_81169F718F8970FA_METHOD_3_E424FC307A0E8010_OFFSET UNITYSDK_OFFSET(0x80802A0)
#define CLASS_3_81169F718F8970FA__CTOR_OFFSET UNITYSDK_OFFSET(0x807E560)

inline static constexpr unsigned int Class_3_81169F718F8970FA_TypeDefinitionIndex = 47463;

class Class_3_81169F718F8970FA : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6F52D049C0A20254(::Class_3_F97B015544BE936B* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_6F52D049C0A20254_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_690E973C1E11B6F5(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_690E973C1E11B6F5_OFFSET))(a1);
	}

	static ::System::Void Method_3_BA56E526A4900D7D(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_BA56E526A4900D7D_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_169E48D0752099B7(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_169E48D0752099B7_OFFSET))(a1);
	}

	static ::System::Void Method_3_4C7AA62905DC1988(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_4C7AA62905DC1988_OFFSET))(a1);
	}

	static ::System::Void Method_3_6DD1BE228613C999(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_6DD1BE228613C999_OFFSET))(a1, a2);
	}

	::System::Void Method_3_1A6E4B8032170F57(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_1A6E4B8032170F57_OFFSET))(this, a1);
	}

	::System::Void Method_3_DC5BBB4AC98C027B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_DC5BBB4AC98C027B_OFFSET))(this, a1);
	}

	::System::Void Method_3_42B1858173354DB9(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_42B1858173354DB9_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_A566853AB0FB0970(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_A566853AB0FB0970_OFFSET))(a1);
	}

	static ::System::Void Method_3_388F7AC45B18BAF4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_388F7AC45B18BAF4_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_E424FC307A0E8010(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_E424FC307A0E8010_OFFSET))(a1);
	}
};
