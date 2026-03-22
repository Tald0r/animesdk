#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_105013703884A094;
class Class_3_80012FE282D692CD;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_910034DFDCF5FE3F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xA07ADD0)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_07880C3C85D28804_OFFSET UNITYSDK_OFFSET(0xA07B7E0)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_69B96281FEA25FB5_OFFSET UNITYSDK_OFFSET(0xA07B710)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_6CAA14295963ECC8_OFFSET UNITYSDK_OFFSET(0xA07BA60)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_801619F9FA3E6636_OFFSET UNITYSDK_OFFSET(0xA07BC50)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_8E39177C5FE72449_OFFSET UNITYSDK_OFFSET(0xA07B330)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0xA07BB90)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0xA07B2D0)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xA07C250)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA07BBF0)
#define CLASS_3_910034DFDCF5FE3F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA07BA00)
#define CLASS_3_910034DFDCF5FE3F_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA07B0F0)
#define CLASS_3_910034DFDCF5FE3F_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA07B150)
#define CLASS_3_910034DFDCF5FE3F__CTOR_OFFSET UNITYSDK_OFFSET(0xA07B2B0)

inline static constexpr unsigned int Class_3_910034DFDCF5FE3F_TypeDefinitionIndex = 39122;

class Class_3_910034DFDCF5FE3F : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_8E39177C5FE72449(::Class_3_80012FE282D692CD* a1, ::Class_1_105013703884A094* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::Class_3_80012FE282D692CD*, ::Class_1_105013703884A094*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_8E39177C5FE72449_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_07880C3C85D28804(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_07880C3C85D28804_OFFSET))(a1);
	}

	static ::System::Void Method_3_69B96281FEA25FB5(::Class_3_80012FE282D692CD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_80012FE282D692CD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_69B96281FEA25FB5_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_6CAA14295963ECC8(::Class_3_80012FE282D692CD* a1, ::Class_1_105013703884A094* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Config::ConfigPosRot* a6)
	{
		return ((::System::Void(*)(::Class_3_80012FE282D692CD*, ::Class_1_105013703884A094*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_6CAA14295963ECC8_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_801619F9FA3E6636(::Class_3_80012FE282D692CD* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_80012FE282D692CD*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_801619F9FA3E6636_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_910034DFDCF5FE3F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
