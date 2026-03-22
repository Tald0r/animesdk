#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace MoleMole { class UserLocalDataItem; }
template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xB593EB0)
#define CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C__CTOR_OFFSET UNITYSDK_OFFSET(0xB593F50)

inline static constexpr unsigned int Class_2_085BB97B56356049_Class_2_24D4C3ABA06EE84C_TypeDefinitionIndex = 73468;

class Class_2_085BB97B56356049_Class_2_24D4C3ABA06EE84C : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::MoleMole::UserLocalDataItem*>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_085BB97B56356049_CLASS_2_24D4C3ABA06EE84C_ONCREATEPROPERTY_OFFSET))(this);
	}
};
