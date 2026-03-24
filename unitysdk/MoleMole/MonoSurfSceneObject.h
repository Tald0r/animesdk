#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SurfGameTriggerDataEntry.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"
#include "unitysdk/Struct_2_9A6EB2DDAF7C08FF.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOSURFSCENEOBJECT_GETROTATION_OFFSET UNITYSDK_OFFSET(0x6EBE410)
#define MOLEMOLE_MONOSURFSCENEOBJECT_METHOD_7_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x6EBDD80)
#define MOLEMOLE_MONOSURFSCENEOBJECT_METHOD_7_637B937DC0F2692B_OFFSET UNITYSDK_OFFSET(0x6EBDC10)
#define MOLEMOLE_MONOSURFSCENEOBJECT_METHOD_7_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x6EBE390)
#define MOLEMOLE_MONOSURFSCENEOBJECT_METHOD_7_C240407BAEA69CE9_OFFSET UNITYSDK_OFFSET(0x6EBE050)
#define MOLEMOLE_MONOSURFSCENEOBJECT_METHOD_7_FCA7C739F8E5F729_OFFSET UNITYSDK_OFFSET(0x6EBE2A0)
#define MOLEMOLE_MONOSURFSCENEOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x6EBDD10)
#define MOLEMOLE_MONOSURFSCENEOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x6EBDB50)
#define MOLEMOLE_MONOSURFSCENEOBJECT_ONTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x6EBDEF0)
#define MOLEMOLE_MONOSURFSCENEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x6EBE4C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfSceneObject_TypeDefinitionIndex = 62462;

	class MonoSurfSceneObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::UnityEngine::Collider* TriggerCollider; // 0x28
		::System::Int32 SurfSceneObjectID; // 0x30
		::MoleMole::Config::SurfGameTriggerDataEntry Field_7_2; // 0x38
		::System::Boolean Field_7_3; // 0x50
		::System::Collections::Generic::HashSet_1<::MoleMole::MonoTriggerEventDispatcher*>* Field_7_4; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEvent(::Struct_2_9A6EB2DDAF7C08FF a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9A6EB2DDAF7C08FF))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_ONTRIGGEREVENT_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_GETROTATION_OFFSET))(this);
		}

		::System::Void Method_7_637B937DC0F2692B(::MoleMole::MonoTriggerEventDispatcher* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTriggerEventDispatcher*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_METHOD_7_637B937DC0F2692B_OFFSET))(this, a1);
		}

		::System::Void Method_7_FCA7C739F8E5F729(::Struct_2_9A6EB2DDAF7C08FF a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9A6EB2DDAF7C08FF))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_METHOD_7_FCA7C739F8E5F729_OFFSET))(this, a1);
		}

		::System::Void Method_7_C240407BAEA69CE9(::Struct_2_9A6EB2DDAF7C08FF a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9A6EB2DDAF7C08FF))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_METHOD_7_C240407BAEA69CE9_OFFSET))(this, a1);
		}

		::System::Void Method_7_8CE0803574BB66D7(::Struct_2_9A6EB2DDAF7C08FF a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9A6EB2DDAF7C08FF))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_METHOD_7_8CE0803574BB66D7_OFFSET))(this, a1);
		}

		::System::Void Method_7_14014646206E49EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_METHOD_7_14014646206E49EF_OFFSET))(this);
		}
	};
}
