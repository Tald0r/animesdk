#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPAREAGROUPPOINTWIDGETCONTEXT_GETTITLEICON_OFFSET UNITYSDK_OFFSET(0xCA83460)
#define MOLEMOLE_UIURBANMAPAREAGROUPPOINTWIDGETCONTEXT_GETTITLEKEY_OFFSET UNITYSDK_OFFSET(0xCA834E0)
#define MOLEMOLE_UIURBANMAPAREAGROUPPOINTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xCA83420)
#define MOLEMOLE_UIURBANMAPAREAGROUPPOINTWIDGETCONTEXT___BASE_GETTITLEICON_OFFSET UNITYSDK_OFFSET(0xCA83540)
#define MOLEMOLE_UIURBANMAPAREAGROUPPOINTWIDGETCONTEXT___BASE_GETTITLEKEY_OFFSET UNITYSDK_OFFSET(0xCA83710)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapAreaGroupPointWidgetContext_TypeDefinitionIndex = 68657;

	class UIUrbanMapAreaGroupPointWidgetContext : public ::MoleMole::UIUrbanMapPointWidgetContext
	{
	public:
		::System::String* Title; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* Area3DIdList; // 0x58
		::System::Int32 GroupId; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREAGROUPPOINTWIDGETCONTEXT__CTOR_OFFSET))(this);
		}

		::Foundation::AssetPath GetTitleIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREAGROUPPOINTWIDGETCONTEXT_GETTITLEICON_OFFSET))(this);
		}

		::System::String* GetTitleKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREAGROUPPOINTWIDGETCONTEXT_GETTITLEKEY_OFFSET))(this);
		}

		::Foundation::AssetPath __base_GetTitleIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREAGROUPPOINTWIDGETCONTEXT___BASE_GETTITLEICON_OFFSET))(this);
		}

		::System::String* __base_GetTitleKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREAGROUPPOINTWIDGETCONTEXT___BASE_GETTITLEKEY_OFFSET))(this);
		}
	};
}
