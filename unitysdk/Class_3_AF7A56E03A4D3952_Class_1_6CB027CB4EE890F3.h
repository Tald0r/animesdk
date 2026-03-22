#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CE3B674D22BBFC73.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class CurveMoveComponent_TriggerConfig_ConfigCollider; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Collider; }

#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x74161E0)
#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x7416030)
#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_B2C73250CD07EC50_OFFSET UNITYSDK_OFFSET(0x7415C40)
#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_C57B747639794DBB_OFFSET UNITYSDK_OFFSET(0x7416280)
#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_D331A12000DBF51E_OFFSET UNITYSDK_OFFSET(0x74160F0)
#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x7415EE0)
#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3__CTOR_OFFSET UNITYSDK_OFFSET(0x7415C30)

inline static constexpr unsigned int Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3_TypeDefinitionIndex = 47734;

class Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3 : public ::System::Object
{
public:
	::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* Field_1_2; // 0x10
	::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* Field_1_1; // 0x18
	::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B2C73250CD07EC50(::System::UInt32 a1, ::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider* a2, ::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>* a3, ::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider*, ::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_B2C73250CD07EC50_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_1_D331A12000DBF51E(::Enum_3_CE3B674D22BBFC73 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CE3B674D22BBFC73))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_D331A12000DBF51E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_C57B747639794DBB(::MoleMole::Battle::ColliderEventDispatcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ColliderEventDispatcher*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_C57B747639794DBB_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}
};
