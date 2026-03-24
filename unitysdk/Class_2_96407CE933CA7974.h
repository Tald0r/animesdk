#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_96407CE933CA7974_Class_2_657FCF08AA744B3D_2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_96407CE933CA7974_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x9C82EC0)
#define CLASS_2_96407CE933CA7974_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9C82F90)
#define CLASS_2_96407CE933CA7974_METHOD_2_E29396CF1CC8FD8D_OFFSET UNITYSDK_OFFSET(0x9C82CC0)
#define CLASS_2_96407CE933CA7974__CTOR_OFFSET UNITYSDK_OFFSET(0x9C82F80)

inline static constexpr unsigned int Class_2_96407CE933CA7974_TypeDefinitionIndex = 75104;

class Class_2_96407CE933CA7974 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x18
	::MoleMole::MonoGamepadModule* Field_2_1; // 0x20
	::MoleMole::UIGeneralButtonController* Field_2_0; // 0x28
	::MoleMole::MonoInputKey* Field_2_2; // 0x30
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_96407CE933CA7974_Class_2_657FCF08AA744B3D_2*>* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E29396CF1CC8FD8D(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974_METHOD_2_E29396CF1CC8FD8D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_96407CE933CA7974_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
