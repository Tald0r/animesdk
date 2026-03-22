#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_68D38DAD1613A778_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x9F54610)
#define CLASS_2_68D38DAD1613A778_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9F54700)
#define CLASS_2_68D38DAD1613A778_METHOD_2_F485ED5438CB5FFD_OFFSET UNITYSDK_OFFSET(0x9F544A0)
#define CLASS_2_68D38DAD1613A778__CTOR_OFFSET UNITYSDK_OFFSET(0x9F546F0)

inline static constexpr unsigned int Class_2_68D38DAD1613A778_TypeDefinitionIndex = 40556;

class Class_2_68D38DAD1613A778 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::MonoUITableScrollV2* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D38DAD1613A778__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F485ED5438CB5FFD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_68D38DAD1613A778_METHOD_2_F485ED5438CB5FFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_68D38DAD1613A778_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68D38DAD1613A778_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
