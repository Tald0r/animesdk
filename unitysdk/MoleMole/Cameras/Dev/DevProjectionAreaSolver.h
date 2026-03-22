#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_METHOD_5_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8EA30C0)
#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_METHOD_5_DEB34FC345AD9EFC_OFFSET UNITYSDK_OFFSET(0x8E9E660)
#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_METHOD_5_E706F0BD6744DAFE_OFFSET UNITYSDK_OFFSET(0x8E9F460)
#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x8EA2E60)
#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8E9E3E0)
#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA3040)

namespace MoleMole::Cameras::Dev
{
	inline static constexpr unsigned int DevProjectionAreaSolver_TypeDefinitionIndex = 41844;

	class DevProjectionAreaSolver : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* objectRenderer; // 0x18
		::UnityEngine::Collider* objectCollider; // 0x20
		::System::Single renderRatio; // 0x28
		::System::Single colliderRatio; // 0x2C
		::System::Single colliderRatio2; // 0x30
		::System::Boolean Field_5_5; // 0x34
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_5_6; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Single Method_5_DEB34FC345AD9EFC(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_METHOD_5_DEB34FC345AD9EFC_OFFSET))(this, a1);
		}

		::System::Single Method_5_E706F0BD6744DAFE(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_METHOD_5_E706F0BD6744DAFE_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_METHOD_5_95780ED94B90ED36_OFFSET))(this);
		}
	};
}
