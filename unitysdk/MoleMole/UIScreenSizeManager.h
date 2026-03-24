#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ScreenOrientation.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIScreenSizeManager_Class_3_340DA576D305E267; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UISCREENSIZEMANAGER_ADD_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xB53CA00)
#define MOLEMOLE_UISCREENSIZEMANAGER_ADD_UPDATE_OFFSET UNITYSDK_OFFSET(0xB53CBC0)
#define MOLEMOLE_UISCREENSIZEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB53CD00)
#define MOLEMOLE_UISCREENSIZEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB53CDF0)
#define MOLEMOLE_UISCREENSIZEMANAGER_MARKLAYOUTFORREBUILD_OFFSET UNITYSDK_OFFSET(0xB53D350)
#define MOLEMOLE_UISCREENSIZEMANAGER_METHOD_5_40F587DEB29CE952_OFFSET UNITYSDK_OFFSET(0xB53D110)
#define MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xB53CAE0)
#define MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB53CC60)
#define MOLEMOLE_UISCREENSIZEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB53D3F0)
#define MOLEMOLE_UISCREENSIZEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB53D3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScreenSizeManager_TypeDefinitionIndex = 67342;

	class UIScreenSizeManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267** StaticGet_Field_5_0()
		{
			return (::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267**)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x41DE0);
		}
		static ::System::Action** StaticGet_Field_5_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x41DE8);
		}
		static ::System::String** StaticGet_Field_5_4()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x41DF0);
		}
		static ::UnityEngine::ScreenOrientation* StaticGet_Field_5_3()
		{
			return (::UnityEngine::ScreenOrientation*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0xFD60);
		}
		static ::System::Boolean* StaticGet_RightClickOpenView()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0xFD64);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0xFD68);
		}
		static ::UnityEngine::Vector2* StaticGet_Field_5_2()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0xFD6C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void add_onScreenSizeChanged(::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267* a1)
		{
			return ((::System::Void(*)(::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_ADD_ONSCREENSIZECHANGED_OFFSET))(a1);
		}

		static ::System::Void remove_onScreenSizeChanged(::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267* a1)
		{
			return ((::System::Void(*)(::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_ONSCREENSIZECHANGED_OFFSET))(a1);
		}

		static ::System::Void add_update(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_ADD_UPDATE_OFFSET))(a1);
		}

		static ::System::Void remove_update(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_UPDATE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_LATEUPDATE_OFFSET))(this);
		}

		static ::System::Void MarkLayoutForRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_MARKLAYOUTFORREBUILD_OFFSET))();
		}

		static ::System::Void Method_5_40F587DEB29CE952(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_METHOD_5_40F587DEB29CE952_OFFSET))(a1, a2);
		}
	};
}
