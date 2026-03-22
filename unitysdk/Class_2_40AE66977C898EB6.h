#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_40AE66977C898EB6_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xBA23560)
#define CLASS_2_40AE66977C898EB6_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xBA23760)
#define CLASS_2_40AE66977C898EB6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBA238C0)
#define CLASS_2_40AE66977C898EB6__CTOR_OFFSET UNITYSDK_OFFSET(0xBA238B0)

inline static constexpr unsigned int Class_2_40AE66977C898EB6_TypeDefinitionIndex = 48746;

class Class_2_40AE66977C898EB6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_4; // 0x40
	::MonoUITableScrollV2* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40AE66977C898EB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_40AE66977C898EB6_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40AE66977C898EB6_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_40AE66977C898EB6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
