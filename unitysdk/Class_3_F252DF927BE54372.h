#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_846182BC37DE078E;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigFrozenBuff; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_F252DF927BE54372_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x72800B0)
#define CLASS_3_F252DF927BE54372_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7280390)
#define CLASS_3_F252DF927BE54372_METHOD_3_1BA75C6150620A8E_OFFSET UNITYSDK_OFFSET(0x72806B0)
#define CLASS_3_F252DF927BE54372_METHOD_3_3CCC3D954F66487F_OFFSET UNITYSDK_OFFSET(0x7280530)
#define CLASS_3_F252DF927BE54372_METHOD_3_454D70CDB124A604_OFFSET UNITYSDK_OFFSET(0x72807E0)
#define CLASS_3_F252DF927BE54372_METHOD_3_5589F61274034008_OFFSET UNITYSDK_OFFSET(0x7280B10)
#define CLASS_3_F252DF927BE54372_METHOD_3_5B9A404D4873E310_OFFSET UNITYSDK_OFFSET(0x7280D70)
#define CLASS_3_F252DF927BE54372_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x7281240)
#define CLASS_3_F252DF927BE54372_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7280AB0)
#define CLASS_3_F252DF927BE54372_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0x7280E20)
#define CLASS_3_F252DF927BE54372__CTOR_OFFSET UNITYSDK_OFFSET(0x7280510)

inline static constexpr unsigned int Class_3_F252DF927BE54372_TypeDefinitionIndex = 44275;

class Class_3_F252DF927BE54372 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_3CCC3D954F66487F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372_METHOD_3_3CCC3D954F66487F_OFFSET))(a1);
	}

	static ::System::Void Method_3_1BA75C6150620A8E(::Class_3_846182BC37DE078E* a1)
	{
		return ((::System::Void(*)(::Class_3_846182BC37DE078E*))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372_METHOD_3_1BA75C6150620A8E_OFFSET))(a1);
	}

	static ::System::Void Method_3_454D70CDB124A604(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372_METHOD_3_454D70CDB124A604_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_5589F61274034008(::Class_3_846182BC37DE078E* a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::Class_3_846182BC37DE078E*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372_METHOD_3_5589F61274034008_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_5B9A404D4873E310(::Class_3_846182BC37DE078E* a1, ::MoleMole::Config::ConfigFrozenBuff* a2)
	{
		return ((::System::Void(*)(::Class_3_846182BC37DE078E*, ::MoleMole::Config::ConfigFrozenBuff*))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372_METHOD_3_5B9A404D4873E310_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372_METHOD_3_F5B50F2A74C670C4_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F252DF927BE54372_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
