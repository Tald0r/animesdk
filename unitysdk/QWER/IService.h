#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define QWER_ISERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA22B40)

namespace QWER
{
	inline static constexpr unsigned int IService_TypeDefinitionIndex = 82111;

	class IService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_ISERVICE__CTOR_OFFSET))(this);
		}
	};
}
