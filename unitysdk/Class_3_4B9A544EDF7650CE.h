#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_883FBE6CFFAC5DA2;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_4B9A544EDF7650CE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xCF4B4E0)
#define CLASS_3_4B9A544EDF7650CE_METHOD_3_2D0EF4C8B528FC1E_OFFSET UNITYSDK_OFFSET(0xCF4B830)
#define CLASS_3_4B9A544EDF7650CE_METHOD_3_91A39BA8537D4067_OFFSET UNITYSDK_OFFSET(0xCF4BE70)
#define CLASS_3_4B9A544EDF7650CE_METHOD_3_9D5BEBC375A9DDE8_OFFSET UNITYSDK_OFFSET(0xCF4BF50)
#define CLASS_3_4B9A544EDF7650CE_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xCF4BE00)
#define CLASS_3_4B9A544EDF7650CE_METHOD_3_C71A50455F376B93_OFFSET UNITYSDK_OFFSET(0xCF4B780)
#define CLASS_3_4B9A544EDF7650CE_METHOD_3_E88461676B54CBED_OFFSET UNITYSDK_OFFSET(0xCF4BA80)
#define CLASS_3_4B9A544EDF7650CE__CTOR_OFFSET UNITYSDK_OFFSET(0xCF4B760)

inline static constexpr unsigned int Class_3_4B9A544EDF7650CE_TypeDefinitionIndex = 37611;

class Class_3_4B9A544EDF7650CE : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B9A544EDF7650CE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_4B9A544EDF7650CE_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_C71A50455F376B93(::Class_3_883FBE6CFFAC5DA2* a1)
	{
		return ((::System::Single(*)(::Class_3_883FBE6CFFAC5DA2*))((::PBYTE)hIl2Cpp + CLASS_3_4B9A544EDF7650CE_METHOD_3_C71A50455F376B93_OFFSET))(a1);
	}

	::System::Void Method_3_2D0EF4C8B528FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4B9A544EDF7650CE_METHOD_3_2D0EF4C8B528FC1E_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_4B9A544EDF7650CE_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_91A39BA8537D4067(::Class_3_883FBE6CFFAC5DA2* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_883FBE6CFFAC5DA2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4B9A544EDF7650CE_METHOD_3_91A39BA8537D4067_OFFSET))(a1, a2);
	}

	::System::Void Method_3_9D5BEBC375A9DDE8(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4B9A544EDF7650CE_METHOD_3_9D5BEBC375A9DDE8_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E88461676B54CBED(::Class_3_883FBE6CFFAC5DA2* a1)
	{
		return ((::System::Void(*)(::Class_3_883FBE6CFFAC5DA2*))((::PBYTE)hIl2Cpp + CLASS_3_4B9A544EDF7650CE_METHOD_3_E88461676B54CBED_OFFSET))(a1);
	}
};
