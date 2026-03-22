#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControlReference.h"

namespace System { class String; }

#define MOLEMOLE_UIVIEWMODELREFERENCE_COPYFROMOTHERREFERENCE_OFFSET UNITYSDK_OFFSET(0xA771E60)
#define MOLEMOLE_UIVIEWMODELREFERENCE_GET_BINDCLASSNAME_OFFSET UNITYSDK_OFFSET(0xA771DE0)
#define MOLEMOLE_UIVIEWMODELREFERENCE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA7721A0)
#define MOLEMOLE_UIVIEWMODELREFERENCE_SHOWEXPORTDIR_OFFSET UNITYSDK_OFFSET(0xA771DF0)
#define MOLEMOLE_UIVIEWMODELREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA772210)
#define MOLEMOLE_UIVIEWMODELREFERENCE___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA772250)
#define MOLEMOLE_UIVIEWMODELREFERENCE___BASE_SHOWEXPORTDIR_OFFSET UNITYSDK_OFFSET(0xA772260)

namespace MoleMole
{
	inline static constexpr unsigned int UIViewModelReference_TypeDefinitionIndex = 72857;

	class UIViewModelReference : public ::MoleMole::UIControlReference
	{
	public:
		::System::Boolean ExportController; // 0xD0
		::System::String* UIBindClassName; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE__CTOR_OFFSET))(this);
		}

		::System::String* get_BindClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_GET_BINDCLASSNAME_OFFSET))(this);
		}

		::System::Boolean ShowExportDir()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_SHOWEXPORTDIR_OFFSET))(this);
		}

		::System::Void CopyFromOtherReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_COPYFROMOTHERREFERENCE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean __base_ShowExportDir()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE___BASE_SHOWEXPORTDIR_OFFSET))(this);
		}
	};
}
