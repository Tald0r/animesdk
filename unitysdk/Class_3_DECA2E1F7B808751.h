#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_241162EBE342AA7A_1;
class Class_3_883E597458B91E77;
class Class_3_F33F9DC5F4112336;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Config { class ConfigMisc_InteractRotate; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_DECA2E1F7B808751_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x71D3910)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_3829C817A8B37449_OFFSET UNITYSDK_OFFSET(0x71D5400)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_55A067445316F6B0_OFFSET UNITYSDK_OFFSET(0x71D4850)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_7141F77727BC6DAD_OFFSET UNITYSDK_OFFSET(0x71D3F60)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_8E753D0A7DA5F566_OFFSET UNITYSDK_OFFSET(0x71D5820)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_9DB0323023867640_OFFSET UNITYSDK_OFFSET(0x71D4640)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x71D4A70)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_B8869979A49DEC15_OFFSET UNITYSDK_OFFSET(0x71D5750)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x71D4AE0)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_C9BB28FB4992894D_OFFSET UNITYSDK_OFFSET(0x71D5180)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x71D4B50)
#define CLASS_3_DECA2E1F7B808751_METHOD_3_E11C43119A62965C_OFFSET UNITYSDK_OFFSET(0x71D4BB0)
#define CLASS_3_DECA2E1F7B808751_UPDATE_OFFSET UNITYSDK_OFFSET(0x71D3CB0)
#define CLASS_3_DECA2E1F7B808751__CTOR_OFFSET UNITYSDK_OFFSET(0x71D3F40)

inline static constexpr unsigned int Class_3_DECA2E1F7B808751_TypeDefinitionIndex = 59878;

class Class_3_DECA2E1F7B808751 : public ::Class_2_F33340E023067DAF
{
public:
	// static const ::System::Single Field_3_2; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_7141F77727BC6DAD(::Class_3_F35B080B137ECC46* a1, ::Class_3_F33F9DC5F4112336* a2, ::Class_3_241162EBE342AA7A_1* a3, ::Class_3_883E597458B91E77* a4)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_F33F9DC5F4112336*, ::Class_3_241162EBE342AA7A_1*, ::Class_3_883E597458B91E77*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_7141F77727BC6DAD_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigMisc_InteractRotate* Method_3_55A067445316F6B0(::System::Single a1, ::System::Single a2)
	{
		return ((::MoleMole::Config::ConfigMisc_InteractRotate*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_55A067445316F6B0_OFFSET))(a1, a2);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_E11C43119A62965C(::Class_3_241162EBE342AA7A_1* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::Class_3_241162EBE342AA7A_1*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_E11C43119A62965C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Single Method_3_9DB0323023867640(::Class_3_241162EBE342AA7A_1* a1, ::System::Single a2, ::System::Boolean& a3)
	{
		return ((::System::Single(*)(::Class_3_241162EBE342AA7A_1*, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_9DB0323023867640_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_C9BB28FB4992894D(::Class_3_241162EBE342AA7A_1* a1, ::MoleMole::Config::ConfigMisc_InteractRotate* a2, ::System::Single a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::System::Single(*)(::Class_3_241162EBE342AA7A_1*, ::MoleMole::Config::ConfigMisc_InteractRotate*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_C9BB28FB4992894D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_3829C817A8B37449(::Class_3_241162EBE342AA7A_1* a1, ::Class_3_F33F9DC5F4112336* a2, ::UnityEngine::AnimationCurve* a3, ::System::String* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_241162EBE342AA7A_1*, ::Class_3_F33F9DC5F4112336*, ::UnityEngine::AnimationCurve*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_3829C817A8B37449_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_B8869979A49DEC15(::Class_3_241162EBE342AA7A_1* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Action* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::Class_3_241162EBE342AA7A_1*, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_B8869979A49DEC15_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_8E753D0A7DA5F566(::Class_3_241162EBE342AA7A_1* a1)
	{
		return ((::System::Void(*)(::Class_3_241162EBE342AA7A_1*))((::PBYTE)hIl2Cpp + CLASS_3_DECA2E1F7B808751_METHOD_3_8E753D0A7DA5F566_OFFSET))(a1);
	}
};
