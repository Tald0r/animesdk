#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSimpleAvatarRenderHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_UIAVATARGRAPHICS_CLEARRENDERERS_OFFSET UNITYSDK_OFFSET(0xC8F7FE0)
#define MOLEMOLE_UIAVATARGRAPHICS_DISABLEOVERRIDEHAIRSHADOWMAINLIGHT_OFFSET UNITYSDK_OFFSET(0xC8F7E60)
#define MOLEMOLE_UIAVATARGRAPHICS_DISABLEOVERRIDEMAINLIGHT_OFFSET UNITYSDK_OFFSET(0xC8F7930)
#define MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEHAIRSHADOWMAINLIGHT_OFFSET UNITYSDK_OFFSET(0xC8F7AF0)
#define MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEMAINLIGHT_1_OFFSET UNITYSDK_OFFSET(0xC8F75F0)
#define MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEMAINLIGHT_OFFSET UNITYSDK_OFFSET(0xC8F7200)
#define MOLEMOLE_UIAVATARGRAPHICS_GETHAIRSHADOWOFFSETS_OFFSET UNITYSDK_OFFSET(0xC8F6590)
#define MOLEMOLE_UIAVATARGRAPHICS_GETOVERRIDEMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0xC8F6CB0)
#define MOLEMOLE_UIAVATARGRAPHICS_GETOVERRIDEMAINLIGHT_OFFSET UNITYSDK_OFFSET(0xC8F7060)
#define MOLEMOLE_UIAVATARGRAPHICS_GET_ALLINSTANCEDMATS_OFFSET UNITYSDK_OFFSET(0xC8F6110)
#define MOLEMOLE_UIAVATARGRAPHICS_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0xC8F5EE0)
#define MOLEMOLE_UIAVATARGRAPHICS_METHOD_6_95CD76A019E3B038_OFFSET UNITYSDK_OFFSET(0xC8F6F50)
#define MOLEMOLE_UIAVATARGRAPHICS_METHOD_6_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xC8F6030)
#define MOLEMOLE_UIAVATARGRAPHICS_METHOD_6_CEFD29ABDF75549A_OFFSET UNITYSDK_OFFSET(0xC8F73B0)
#define MOLEMOLE_UIAVATARGRAPHICS_RESETHAIRSHADOWOFFSETS_OFFSET UNITYSDK_OFFSET(0xC8F69E0)
#define MOLEMOLE_UIAVATARGRAPHICS_SETHAIRSHADOWOFFSETS_OFFSET UNITYSDK_OFFSET(0xC8F6280)
#define MOLEMOLE_UIAVATARGRAPHICS__CTOR_OFFSET UNITYSDK_OFFSET(0xC8F8050)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarGraphics_TypeDefinitionIndex = 78861;

	class UIAvatarGraphics : public ::MoleMole::MonoSimpleAvatarRenderHandle
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* Field_6_0; // 0x20
		::System::Boolean Field_6_1; // 0x28
		::System::Boolean Field_6_2; // 0x29
		::System::Boolean Field_6_3; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_renderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_GET_RENDERERS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_allInstancedMats()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_GET_ALLINSTANCEDMATS_OFFSET))(this);
		}

		::System::Void SetHairShadowOffsets(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_SETHAIRSHADOWOFFSETS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GetHairShadowOffsets()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_GETHAIRSHADOWOFFSETS_OFFSET))(this);
		}

		::System::Void ResetHairShadowOffsets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_RESETHAIRSHADOWOFFSETS_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> GetOverrideMainLightDir(::UnityEngine::Vector4 a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_GETOVERRIDEMAINLIGHTDIR_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion> GetOverrideMainLight(::UnityEngine::Vector4 a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_GETOVERRIDEMAINLIGHT_OFFSET))(this, a1);
		}

		::System::Void EnableOverrideMainLight(::System::Boolean a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEMAINLIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void EnableOverrideMainLight_1(::System::Boolean a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEMAINLIGHT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DisableOverrideMainLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_DISABLEOVERRIDEMAINLIGHT_OFFSET))(this);
		}

		::System::Void EnableOverrideHairShadowMainLight(::System::Boolean a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_ENABLEOVERRIDEHAIRSHADOWMAINLIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void DisableOverrideHairShadowMainLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_DISABLEOVERRIDEHAIRSHADOWMAINLIGHT_OFFSET))(this);
		}

		::System::Void ClearRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_CLEARRENDERERS_OFFSET))(this);
		}

		::System::Void Method_6_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_METHOD_6_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Void Method_6_CEFD29ABDF75549A(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_METHOD_6_CEFD29ABDF75549A_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_6_95CD76A019E3B038(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGRAPHICS_METHOD_6_95CD76A019E3B038_OFFSET))(this, a1, a2);
		}
	};
}
