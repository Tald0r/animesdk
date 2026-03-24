#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"

class Class_2_A8F5ABF31E066ED4;
class Class_2_CA67A9CEB871FFD3;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class GradientColor; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_GETSHEETURL_OFFSET UNITYSDK_OFFSET(0xB501E00)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xB501C80)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_REFRESHLANGUAGE_OFFSET UNITYSDK_OFFSET(0xB501D70)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETAVATAR_OFFSET UNITYSDK_OFFSET(0xB501F20)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETCOLORBYID_OFFSET UNITYSDK_OFFSET(0xB502060)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB502350)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB502330)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeEntranceController_TypeDefinitionIndex = 69067;

	class UIMindscapeEntranceController : public ::MoleMole::UIMonoController
	{
	public:
		static ::System::Int32* StaticGet__Hue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0xFD30);
		}
		static ::System::Int32* StaticGet__Saturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0xFD34);
		}
		static ::System::Int32* StaticGet__Brightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0xFD38);
		}
		static ::System::Int32* StaticGet__Gamma()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0xFD3C);
		}
		// static const ::System::String* numPath; // 0x0
		// static const ::System::String* sheetRawPath; // 0x0
		::UnityEngine::UI::Image* NumImage; // 0x80
		::UnityEngine::UI::RawImage* SheetRawImage; // 0x88
		::MoleMole::GradientColor* LightBg; // 0x90
		::Class_2_A8F5ABF31E066ED4* _numImage; // 0x98
		::Class_2_CA67A9CEB871FFD3* _sheetRawImage; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void RefreshLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_REFRESHLANGUAGE_OFFSET))(this);
		}

		::System::Void SetAvatar(::Class_2_D89CCC627A66D0AD* avatarItem, ::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETAVATAR_OFFSET))(this, avatarItem, withAni);
		}

		::System::Void SetColorByID(::Class_2_D89CCC627A66D0AD* avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETCOLORBYID_OFFSET))(this, avatarID);
		}

		::System::String* GetSheetUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_GETSHEETURL_OFFSET))(this);
		}
	};
}
