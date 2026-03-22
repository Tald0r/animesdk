#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1A240060)
#define FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A23FA00)
#define FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETHANDLESIZE_1_OFFSET UNITYSDK_OFFSET(0x1A23FE20)
#define FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETHANDLESIZE_OFFSET UNITYSDK_OFFSET(0x1A23FA20)
#define FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETHELPURL_1_OFFSET UNITYSDK_OFFSET(0x1A23FF90)
#define FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETHELPURL_OFFSET UNITYSDK_OFFSET(0x1A23FF60)
#define FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GET_ISEDITORSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1A23FA10)
#define FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GET_ISINEDITMODE_OFFSET UNITYSDK_OFFSET(0x1A2401B0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_RANDOMSIGN_OFFSET UNITYSDK_OFFSET(0x1A23FF40)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTUtility_TypeDefinitionIndex = 24502;

	class DTUtility : public ::System::Object
	{
	public:
		// static const ::System::String* HelpUrlBase; // 0x0

		static ::UnityEngine::Material* GetDefaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETDEFAULTMATERIAL_OFFSET))();
		}

		static ::System::Boolean get_IsEditorStateChange()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GET_ISEDITORSTATECHANGE_OFFSET))();
		}

		static ::System::Single GetHandleSize(::UnityEngine::Vector3 position)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETHANDLESIZE_OFFSET))(position);
		}

		static ::System::Single GetHandleSize_1(::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera, ::System::Single cameraCenterWidth, ::System::Single cameraCenterHeight, ::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraZDirection, ::UnityEngine::Vector3 cameraXDirection)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Camera*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETHANDLESIZE_1_OFFSET))(position, camera, cameraCenterWidth, cameraCenterHeight, cameraPosition, cameraZDirection, cameraXDirection);
		}

		static ::System::Single RandomSign()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_RANDOMSIGN_OFFSET))();
		}

		static ::System::String* GetHelpUrl(::System::Object* forClass)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETHELPURL_OFFSET))(forClass);
		}

		static ::System::String* GetHelpUrl_1(::System::Type* classType)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETHELPURL_1_OFFSET))(classType);
		}

		static ::UnityEngine::Vector3 GetCenterPosition(::UnityEngine::Vector3 fallback, ::Il2CppArray<::UnityEngine::Vector3>* vectors)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GETCENTERPOSITION_OFFSET))(fallback, vectors);
		}

		static ::System::Boolean get_IsInEditMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTUTILITY_GET_ISINEDITMODE_OFFSET))();
		}
	};
}
