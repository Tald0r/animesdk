#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E8C6F87138B2C440;
class Class_3_846182BC37DE078E_1_Class_1_CB8A78CCBB2B128D;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define MOLEMOLE_MONONAVMESHHANDLER_CALCULATEPATH_OFFSET UNITYSDK_OFFSET(0xCD63FE0)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_DEBUGPATHROOT_OFFSET UNITYSDK_OFFSET(0xCD63EC0)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_MOVEPATHDEBUGGER_OFFSET UNITYSDK_OFFSET(0xCD63C80)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_NAVMESHHELPER_OFFSET UNITYSDK_OFFSET(0xCD63ED0)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0xCD63EB0)
#define MOLEMOLE_MONONAVMESHHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCD64180)
#define MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCD64680)
#define MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_CCAB1FEBC1E7CB11_OFFSET UNITYSDK_OFFSET(0xCD64620)
#define MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xCD644E0)
#define MOLEMOLE_MONONAVMESHHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD64300)
#define MOLEMOLE_MONONAVMESHHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD643E0)
#define MOLEMOLE_MONONAVMESHHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD64380)
#define MOLEMOLE_MONONAVMESHHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD64270)
#define MOLEMOLE_MONONAVMESHHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCD64450)

namespace MoleMole
{
	inline static constexpr unsigned int MonoNavmeshHandler_TypeDefinitionIndex = 42264;

	class MonoNavmeshHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AI::NavMeshAgent* navMeshAgent; // 0x18
		::UnityEngine::Transform* target; // 0x20
		::System::Single colliderRadius; // 0x28
		::System::Boolean withColliderOffset; // 0x2C
		::System::Boolean autoCalculate; // 0x2D
		::Class_3_846182BC37DE078E_1_Class_1_CB8A78CCBB2B128D* Field_5_5; // 0x30
		::System::Int32 cornersLength; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* calculatePath; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_8; // 0x48
		::UnityEngine::Transform* debugPathRoot; // 0x50
		::Class_2_E8C6F87138B2C440* Field_5_10; // 0x58
		::System::Boolean Field_5_11; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER__CTOR_OFFSET))(this);
		}

		::Class_3_846182BC37DE078E_1_Class_1_CB8A78CCBB2B128D* get_movePathDebugger()
		{
			return ((::Class_3_846182BC37DE078E_1_Class_1_CB8A78CCBB2B128D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_MOVEPATHDEBUGGER_OFFSET))(this);
		}

		::System::Int32 get_PathIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_PATHINDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_DebugPathRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_DEBUGPATHROOT_OFFSET))(this);
		}

		::Class_2_E8C6F87138B2C440* get_navmeshHelper()
		{
			return ((::Class_2_E8C6F87138B2C440*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_NAVMESHHELPER_OFFSET))(this);
		}

		::System::Void CalculatePath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_CALCULATEPATH_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_F5447CD65612575D_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_5_CCAB1FEBC1E7CB11()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_CCAB1FEBC1E7CB11_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
