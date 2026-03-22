#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ZhenzhenWeaponVideoSceneTag.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoZhenzhenWeaponVideoScreenPlayer_Class_1_DC289E26AC59BF3B; }
namespace MoleMole { class ZhenzhenWeaponVideoConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x8F99110)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8F997B0)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_METHOD_5_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0x8F98810)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8F99180)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x8F99600)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x8F99450)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_SETACTIVESCENETAG_OFFSET UNITYSDK_OFFSET(0x8F98C50)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_SETLOOKATCAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x8F98790)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F99820)

namespace MoleMole
{
	inline static constexpr unsigned int MonoZhenzhenWeaponVideoScreenPlayer_TypeDefinitionIndex = 62742;

	class MonoZhenzhenWeaponVideoScreenPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ZhenzhenWeaponVideoConfig*>* _configs; // 0x18
		::System::Single updateInterval; // 0x20
		::System::Single Field_5_2; // 0x24
		::MoleMole::ZhenzhenWeaponVideoSceneTag Field_5_3; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::ZhenzhenWeaponVideoConfig*>* Field_5_4; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::MonoZhenzhenWeaponVideoScreenPlayer_Class_1_DC289E26AC59BF3B*>* Field_5_5; // 0x38
		::System::Boolean Field_5_6; // 0x40
		::UnityEngine::Transform* Field_5_7; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void SetLookAtCameraTransform(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_SETLOOKATCAMERATRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void SetActiveSceneTag(::MoleMole::ZhenzhenWeaponVideoSceneTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZhenzhenWeaponVideoSceneTag))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_SETACTIVESCENETAG_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_C8EED11299FD17DB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_METHOD_5_C8EED11299FD17DB_OFFSET))(this);
		}
	};
}
