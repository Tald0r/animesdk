#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
class Class_2_F849585F56E9ACD1;

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F16840)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__SETMINISCAPEQUESTCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x8F16850)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass67_0_TypeDefinitionIndex = 55998;

	class UILineupSelectContext___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::Class_2_F849585F56E9ACD1* questTemp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetMiniscapeQuestContext_b__0(::Class_1_44EFB945CAE441A3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__SETMINISCAPEQUESTCONTEXT_B__0_OFFSET))(this, data);
		}
	};
}
