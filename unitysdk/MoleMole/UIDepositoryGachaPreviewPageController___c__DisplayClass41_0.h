#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__DISPLAYCLASS41_0__CREATEFILTERANDSORTDATA_B__0_OFFSET UNITYSDK_OFFSET(0xC0E8B70)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E8B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryGachaPreviewPageController___c__DisplayClass41_0_TypeDefinitionIndex = 63190;

	class UIDepositoryGachaPreviewPageController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC41950C_13<::Class_1_1685EC66FBD28897*>* slotFilterGroup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateFilterAndSortData_b__0(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__DISPLAYCLASS41_0__CREATEFILTERANDSORTDATA_B__0_OFFSET))(this, index);
		}
	};
}
