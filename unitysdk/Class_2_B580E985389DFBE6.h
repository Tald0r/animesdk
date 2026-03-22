#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_185CF183A4DBE553.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_FA793AB1D49D0132;
namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIContainer; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace MoleMole { class UIGeneralSDKLoginDialogPopWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B580E985389DFBE6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x771E5E0)
#define CLASS_2_B580E985389DFBE6_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x771E700)
#define CLASS_2_B580E985389DFBE6_METHOD_2_1DD0C1D5868509DB_OFFSET UNITYSDK_OFFSET(0x77205C0)
#define CLASS_2_B580E985389DFBE6_METHOD_2_2D5CDC7AA6C1E8CC_OFFSET UNITYSDK_OFFSET(0x771FA20)
#define CLASS_2_B580E985389DFBE6_METHOD_2_30D230463E666B0B_OFFSET UNITYSDK_OFFSET(0x77203F0)
#define CLASS_2_B580E985389DFBE6_METHOD_2_33AC7FC6F98CD847_OFFSET UNITYSDK_OFFSET(0x771FA90)
#define CLASS_2_B580E985389DFBE6_METHOD_2_378D23FEE140863D_OFFSET UNITYSDK_OFFSET(0x771F490)
#define CLASS_2_B580E985389DFBE6_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x771F700)
#define CLASS_2_B580E985389DFBE6_METHOD_2_4E4621980C955843_OFFSET UNITYSDK_OFFSET(0x771F110)
#define CLASS_2_B580E985389DFBE6_METHOD_2_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0x771EC70)
#define CLASS_2_B580E985389DFBE6_METHOD_2_9485146A80B926B7_OFFSET UNITYSDK_OFFSET(0x771FF90)
#define CLASS_2_B580E985389DFBE6_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x771F770)
#define CLASS_2_B580E985389DFBE6_METHOD_2_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x77204E0)
#define CLASS_2_B580E985389DFBE6_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x771FC60)
#define CLASS_2_B580E985389DFBE6_METHOD_2_B15E763C95CF0A5B_OFFSET UNITYSDK_OFFSET(0x771FDD0)
#define CLASS_2_B580E985389DFBE6_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x7720730)
#define CLASS_2_B580E985389DFBE6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7720560)
#define CLASS_2_B580E985389DFBE6_METHOD_2_DA915AA9D331912B_OFFSET UNITYSDK_OFFSET(0x771F830)
#define CLASS_2_B580E985389DFBE6_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x771F5C0)
#define CLASS_2_B580E985389DFBE6_METHOD_2_F11A967D4A30B25B_OFFSET UNITYSDK_OFFSET(0x7720120)
#define CLASS_2_B580E985389DFBE6_ONCREATE_OFFSET UNITYSDK_OFFSET(0x771E640)
#define CLASS_2_B580E985389DFBE6__CTOR_OFFSET UNITYSDK_OFFSET(0x771F0E0)

inline static constexpr unsigned int Class_2_B580E985389DFBE6_TypeDefinitionIndex = 55225;

class Class_2_B580E985389DFBE6 : public ::Foundation::SingletonDisposable_1<::Class_2_B580E985389DFBE6*>
{
public:
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Field_2_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* Field_2_10; // 0x18
	::System::Action* Field_2_9; // 0x20
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Field_2_1; // 0x28
	::System::Action_2<::System::Action_1<::System::String*>*, ::System::Boolean>* Field_2_11; // 0x30
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Field_2_0; // 0x38
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Field_2_3; // 0x40
	::Foundation::Coroutine::CoroutineHandle Field_2_13; // 0x48
	::System::Boolean Field_2_12; // 0x4C
	::System::Boolean Field_2_7; // 0x4D
	::System::Boolean Field_2_5; // 0x4E
	::System::Boolean Field_2_8; // 0x4F
	::System::Int32 Field_2_6; // 0x50
	::System::Single Field_2_4; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_4E4621980C955843(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_4E4621980C955843_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_DA915AA9D331912B(::System::String* a1, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer*))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_DA915AA9D331912B_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Method_2_2D5CDC7AA6C1E8CC()
	{
		return ((::MoleMole::UIGeneralSDKLoginDialogPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_2D5CDC7AA6C1E8CC_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_2_B15E763C95CF0A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_B15E763C95CF0A5B_OFFSET))(this);
	}

	::System::Void Method_2_378D23FEE140863D(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_378D23FEE140863D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9485146A80B926B7(::Enum_3_185CF183A4DBE553 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_185CF183A4DBE553, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_9485146A80B926B7_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* Method_2_33AC7FC6F98CD847(::System::Boolean a1)
	{
		return ((::MoleMole::UIGeneralSDKLoginDialogPopWindowController*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_33AC7FC6F98CD847_OFFSET))(this, a1);
	}

	::System::Void Method_2_F11A967D4A30B25B(::System::Action_1<::MoleMole::UIGeneralSDKLoginDialogPopWindowController*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIGeneralSDKLoginDialogPopWindowController*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_F11A967D4A30B25B_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_30D230463E666B0B(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_30D230463E666B0B_OFFSET))(a1);
	}

	::System::Void Method_2_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* Method_2_1DD0C1D5868509DB()
	{
		return ((::MoleMole::UIGeneralLoginCheckDialogPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_1DD0C1D5868509DB_OFFSET))(this);
	}

	::System::Void Method_2_705FFC79B57F4953(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_705FFC79B57F4953_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B580E985389DFBE6_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}
};
