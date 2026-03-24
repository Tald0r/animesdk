#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class OutlineEx; }

#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1B475890)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B4755E0)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B475120)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1B475830)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B475B50)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B475380)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_START_OFFSET UNITYSDK_OFFSET(0x1B475260)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_UPDATERECT_OFFSET UNITYSDK_OFFSET(0x1B4754C0)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B475C10)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B475BE0)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B475C60)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B475CF0)
#define UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER___BASE_START_OFFSET UNITYSDK_OFFSET(0x1B475D80)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextureOffsetModifier_TypeDefinitionIndex = 70463;

	class UITextureOffsetModifier : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Int32* StaticGet_MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureOffsetModifier_TypeDefinitionIndex)->GetStaticField(0xE3C0);
		}
		static ::System::Int32* StaticGet_MainTexSt1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureOffsetModifier_TypeDefinitionIndex)->GetStaticField(0xE3C4);
		}
		::UnityEngine::Rect _uvRect; // 0x18
		::UnityEngine::UI::Graphic* _graphic; // 0x28
		::UnityEngine::Material* _material; // 0x30
		::UnityEngine::UI::OutlineEx* m_OutlineEx; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER__CCTOR_OFFSET))();
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateRect(::UnityEngine::Rect uvRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_UPDATERECT_OFFSET))(this, uvRect);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_MODIFIERSORTORDER_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTUREOFFSETMODIFIER___BASE_START_OFFSET))(this);
		}
	};
}
