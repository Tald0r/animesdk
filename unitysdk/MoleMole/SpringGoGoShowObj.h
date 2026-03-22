#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_SPRINGGOGOSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xB3C7800)
#define MOLEMOLE_SPRINGGOGOSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C77C0)

namespace MoleMole
{
	inline static constexpr unsigned int SpringGoGoShowObj_TypeDefinitionIndex = 74432;

	class SpringGoGoShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _id; // 0x28

		::System::Void _ctor(::System::Int32 id, ::Enum_3_205E43D40B9E7AEA showPage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_205E43D40B9E7AEA))((::PBYTE)hIl2Cpp + MOLEMOLE_SPRINGGOGOSHOWOBJ__CTOR_OFFSET))(this, id, showPage);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPRINGGOGOSHOWOBJ_ONPROCESS_OFFSET))(this);
		}
	};
}
