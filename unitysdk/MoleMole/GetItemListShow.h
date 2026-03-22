#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_61B3BCD70D19C820;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GETITEMLISTSHOW_DIRECTSHOW_OFFSET UNITYSDK_OFFSET(0xC223EF0)
#define MOLEMOLE_GETITEMLISTSHOW_DOPROCESS_OFFSET UNITYSDK_OFFSET(0xC223F60)
#define MOLEMOLE_GETITEMLISTSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xC223A90)
#define MOLEMOLE_GETITEMLISTSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xC223E80)
#define MOLEMOLE_GETITEMLISTSHOW_SETDETAILANDTTITLE_OFFSET UNITYSDK_OFFSET(0xC224360)
#define MOLEMOLE_GETITEMLISTSHOW_SETGOBTN_OFFSET UNITYSDK_OFFSET(0xC2242E0)
#define MOLEMOLE_GETITEMLISTSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0xC223E10)
#define MOLEMOLE_GETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET UNITYSDK_OFFSET(0xC223FD0)
#define MOLEMOLE_GETITEMLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0xC223AA0)
#define MOLEMOLE_GETITEMLISTSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0xC2243E0)

namespace MoleMole
{
	inline static constexpr unsigned int GetItemListShow_TypeDefinitionIndex = 57494;

	class GetItemListShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::String* detail; // 0x28
		::System::String* GainTitle; // 0x30
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x38
		::Class_1_61B3BCD70D19C820* _context; // 0x40
		::System::String* title; // 0x48
		::System::String* goText; // 0x50
		::System::Action* goCallback; // 0x58
		::System::Boolean ShowCustomGainText; // 0x60
		::System::Boolean showGoBtn; // 0x61
		::System::Boolean showCustomDetailTitle; // 0x62

		::System::Void _ctor(::Class_1_61B3BCD70D19C820* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_61B3BCD70D19C820*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void DirectShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_DIRECTSHOW_OFFSET))(this);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_DOPROCESS_OFFSET))(this);
		}

		::System::Void ShowRewardWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET))(this);
		}

		::System::Void SetGoBtn(::System::String* key, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SETGOBTN_OFFSET))(this, key, callback);
		}

		::System::Void SetDetailAndTtitle(::System::String* title, ::System::String* detail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SETDETAILANDTTITLE_OFFSET))(this, title, detail);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
