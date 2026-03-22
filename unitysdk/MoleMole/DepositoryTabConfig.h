#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DEPOSITORYTABCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCD33B70)

namespace MoleMole
{
	inline static constexpr unsigned int DepositoryTabConfig_TypeDefinitionIndex = 50189;

	class DepositoryTabConfig : public ::System::Object
	{
	public:
		::System::String* SubName; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* TabClassTypes; // 0x18
		::System::String* Name; // 0x20
		::System::String* TabImgPath; // 0x28
		::System::Boolean ShowCompose; // 0x30
		::System::Boolean ShowRecycle; // 0x31
		::System::Boolean ShowDismantle; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEPOSITORYTABCONFIG__CTOR_OFFSET))(this);
		}
	};
}
