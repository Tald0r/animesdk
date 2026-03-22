#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
class Class_2_7D61104C59A2F8F6;

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8040D0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS68_0__SETMINISCAPETASKCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0xA8040E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass68_0_TypeDefinitionIndex = 67816;

	class UILineupSelectContext___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::Class_2_7D61104C59A2F8F6* questTemp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetMiniscapeTaskContext_b__0(::Class_1_44EFB945CAE441A3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS68_0__SETMINISCAPETASKCONTEXT_B__0_OFFSET))(this, data);
		}
	};
}
