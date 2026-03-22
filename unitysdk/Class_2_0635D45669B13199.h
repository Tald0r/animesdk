#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_0635D45669B13199_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x9C689A0)
#define CLASS_2_0635D45669B13199_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x9C68BE0)
#define CLASS_2_0635D45669B13199_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9C68CB0)
#define CLASS_2_0635D45669B13199__CTOR_OFFSET UNITYSDK_OFFSET(0x9C68CA0)

inline static constexpr unsigned int Class_2_0635D45669B13199_TypeDefinitionIndex = 47673;

class Class_2_0635D45669B13199 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x28
	::MoleMole::MonoGamepadCustomList* Field_2_5; // 0x30
	::Class_2_9E3E3CDA608A4F58* Field_2_7; // 0x38
	::Class_2_9E3E3CDA608A4F58* Field_2_3; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x48
	::MoleMole::NotificationBadgeEx* Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0635D45669B13199__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0635D45669B13199_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0635D45669B13199_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0635D45669B13199_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
