#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CFD622191BF76048_Struct_2_680BF1744D60EED9.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALCONVERSIONTIPSPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA298590)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralConversionTipsPopWindowContext_TypeDefinitionIndex = 57644;

	class UIGeneralConversionTipsPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_CFD622191BF76048_Struct_2_680BF1744D60EED9>* conversionResultMaterialDataList; // 0x28
		::System::Action* OnConversion; // 0x30
		::System::Collections::Generic::List_1<::Class_2_CFD622191BF76048_Struct_2_680BF1744D60EED9>* conversionMaterialDataList; // 0x38
		::System::Int32 adaptiveUseCount; // 0x40
		::System::Int32 adaptiveItemCount; // 0x44
		::System::Int32 needTargetCount; // 0x48
		::System::Int32 adaptiveItemID; // 0x4C
		::System::Int32 costNum; // 0x50
		::System::Int32 targetId; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONVERSIONTIPSPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
