#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_A8B97606E71328D6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTEXTITEMDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA946120)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTextItemDetailContext_TypeDefinitionIndex = 66041;

	class UIGeneralTextItemDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* ItemConfigIdList; // 0x28
		::System::String* TipsKey; // 0x30
		::Class_2_A8B97606E71328D6* graph; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTEXTITEMDETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
