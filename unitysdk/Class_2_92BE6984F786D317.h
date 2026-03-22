#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_92BE6984F786D317_METHOD_2_51D75D66AB0E1B00_OFFSET UNITYSDK_OFFSET(0x8C90450)
#define CLASS_2_92BE6984F786D317_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x8C90630)
#define CLASS_2_92BE6984F786D317_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8C90720)
#define CLASS_2_92BE6984F786D317__CTOR_OFFSET UNITYSDK_OFFSET(0x8C90710)

inline static constexpr unsigned int Class_2_92BE6984F786D317_TypeDefinitionIndex = 68715;

class Class_2_92BE6984F786D317 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x28
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92BE6984F786D317__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_51D75D66AB0E1B00(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_92BE6984F786D317_METHOD_2_51D75D66AB0E1B00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92BE6984F786D317_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_92BE6984F786D317_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
