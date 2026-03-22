#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_TIPSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0xD844EB0)

namespace MoleMole
{
	inline static constexpr unsigned int TipShowObj_TypeDefinitionIndex = 52999;

	class TipShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 Group; // 0x28

		::System::Void _ctor(::Enum_3_205E43D40B9E7AEA showPage)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_205E43D40B9E7AEA))((::PBYTE)hIl2Cpp + MOLEMOLE_TIPSHOWOBJ__CTOR_OFFSET))(this, showPage);
		}
	};
}
