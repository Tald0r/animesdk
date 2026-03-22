#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41536F26CBEE8D4C.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UIRESOURCELOADWIDGETCONTEXT_GET_ISFULLDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xC841A10)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTEXT_GET_ISPACKAGEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xC841A30)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTEXT_SET_ISFULLDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xC841A20)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTEXT_SET_ISPACKAGEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xC841A40)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC841A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIResourceLoadWidgetContext_TypeDefinitionIndex = 42024;

	class UIResourceLoadWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::ValueTuple_2<::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*> packagesInfo; // 0x28
		::System::Boolean _IsFullDownload_k__BackingField; // 0x38
		::System::Boolean _IsPackageDownload_k__BackingField; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFullDownload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTEXT_GET_ISFULLDOWNLOAD_OFFSET))(this);
		}

		::System::Void set_IsFullDownload(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTEXT_SET_ISFULLDOWNLOAD_OFFSET))(this, value);
		}

		::System::Boolean get_IsPackageDownload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTEXT_GET_ISPACKAGEDOWNLOAD_OFFSET))(this);
		}

		::System::Void set_IsPackageDownload(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTEXT_SET_ISPACKAGEDOWNLOAD_OFFSET))(this, value);
		}
	};
}
