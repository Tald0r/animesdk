#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_119;
namespace MoleMole { class UIGeneralRealAuthenticationDialogPopWindowController; }
namespace System { class String; }

#define CUSTOMSKIN_MODIFYREALNAME_BACK_OFFSET UNITYSDK_OFFSET(0x9C3EB30)
#define CUSTOMSKIN_MODIFYREALNAME_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C3DF70)
#define CUSTOMSKIN_MODIFYREALNAME_MEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x9C3EBD0)
#define CUSTOMSKIN_MODIFYREALNAME_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9C3E0F0)
#define CUSTOMSKIN_MODIFYREALNAME_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x9C3EF10)
#define CUSTOMSKIN_MODIFYREALNAME_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9C3E160)
#define CUSTOMSKIN_MODIFYREALNAME_SETLISTENER_OFFSET UNITYSDK_OFFSET(0x9C3E790)
#define CUSTOMSKIN_MODIFYREALNAME_SETTEXT_OFFSET UNITYSDK_OFFSET(0x9C3E4A0)
#define CUSTOMSKIN_MODIFYREALNAME_SUBMIT_OFFSET UNITYSDK_OFFSET(0x9C3EC70)
#define CUSTOMSKIN_MODIFYREALNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x9C3E070)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_0_OFFSET UNITYSDK_OFFSET(0x9C3F0A0)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_1_OFFSET UNITYSDK_OFFSET(0x9C3F0E0)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_2_OFFSET UNITYSDK_OFFSET(0x9C3F120)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_3_OFFSET UNITYSDK_OFFSET(0x9C3F1A0)

inline static constexpr unsigned int CustomSkin_ModifyRealName_TypeDefinitionIndex = 65766;

class CustomSkin_ModifyRealName : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_ModifyRealName** StaticGet__instance()
	{
		return (::CustomSkin_ModifyRealName**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_ModifyRealName_TypeDefinitionIndex)->GetStaticField(0x40E60);
	}
	::Class_2_79F6D62CE30E3F8E_119* _view; // 0x18
	::MoleMole::UIGeneralRealAuthenticationDialogPopWindowController* realName; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_ModifyRealName* Instance()
	{
		return ((::CustomSkin_ModifyRealName*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_ONSHOW_OFFSET))(this);
	}

	::System::Void SetText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_SETTEXT_OFFSET))(this);
	}

	::System::Void SetListener()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_SETLISTENER_OFFSET))(this);
	}

	::System::Void Back()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_BACK_OFFSET))(this);
	}

	::System::Void MeetProblem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_MEETPROBLEM_OFFSET))(this);
	}

	::System::Void Submit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_SUBMIT_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _SetListener_b__7_0(::System::String* str)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_0_OFFSET))(this, str);
	}

	::System::Void _SetListener_b__7_1(::System::String* str)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_1_OFFSET))(this, str);
	}

	::System::Void _SetListener_b__7_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_2_OFFSET))(this);
	}

	::System::Void _SetListener_b__7_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_3_OFFSET))(this);
	}
};
