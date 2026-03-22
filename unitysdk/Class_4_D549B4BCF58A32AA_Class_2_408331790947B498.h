#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B60F0A00B4DBE12A_Class_1_618A19C96A416850.h"

namespace MoleMole { class FeaturePoint; }
namespace MoleMole { class MonoFeaturePoint; }
namespace MoleMole::Battle { class Entity; }
namespace NodeGraph::MainCity { class InteractiveNavigateContainer; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_214DD902C54806CD_1_OFFSET UNITYSDK_OFFSET(0xA0EF380)
#define CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_214DD902C54806CD_OFFSET UNITYSDK_OFFSET(0xA0EEDF0)
#define CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xA0EF120)
#define CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_870184D8D6F84385_OFFSET UNITYSDK_OFFSET(0xA0EE850)
#define CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_8A352D0131623012_OFFSET UNITYSDK_OFFSET(0xA0EEA10)
#define CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_B4E487BFAD3802C2_OFFSET UNITYSDK_OFFSET(0xA0EF6B0)
#define CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498__CTOR_OFFSET UNITYSDK_OFFSET(0xA0EE840)

inline static constexpr unsigned int Class_4_D549B4BCF58A32AA_Class_2_408331790947B498_TypeDefinitionIndex = 54307;

class Class_4_D549B4BCF58A32AA_Class_2_408331790947B498 : public ::Class_3_B60F0A00B4DBE12A_Class_1_618A19C96A416850
{
public:
	::MoleMole::Battle::Entity* Field_2_2; // 0x58
	::NodeGraph::MainCity::InteractiveNavigateContainer* Field_2_0; // 0x60
	::MoleMole::MonoFeaturePoint* Field_2_3; // 0x68
	::MoleMole::FeaturePoint* Field_2_4; // 0x70
	::System::Boolean Field_2_5; // 0x78
	::System::Boolean Field_2_6; // 0x79
	::System::Boolean Field_2_1; // 0x7A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_870184D8D6F84385(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_870184D8D6F84385_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_8A352D0131623012(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_8A352D0131623012_OFFSET))(a1, a2);
	}

	::System::Void Method_2_214DD902C54806CD(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_214DD902C54806CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_214DD902C54806CD_1(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_214DD902C54806CD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4E487BFAD3802C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D549B4BCF58A32AA_CLASS_2_408331790947B498_METHOD_2_B4E487BFAD3802C2_OFFSET))(this);
	}
};
