#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class String; }

#define MOLEMOLE_GENERALTIPSSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x6E28610)
#define MOLEMOLE_GENERALTIPSSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x6E28660)
#define MOLEMOLE_GENERALTIPSSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x6E28620)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralTipsShow_TypeDefinitionIndex = 68596;

	class GeneralTipsShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::String* message; // 0x28

		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTIPSSHOW__CTOR_OFFSET))(this, message);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTIPSSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALTIPSSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
