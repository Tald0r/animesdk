#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F76884FC39FD584;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendSystemWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_14B8F1A93C1DC200_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x69FB000)
#define CLASS_2_14B8F1A93C1DC200_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x69FB240)
#define CLASS_2_14B8F1A93C1DC200_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x69FB310)
#define CLASS_2_14B8F1A93C1DC200__CTOR_OFFSET UNITYSDK_OFFSET(0x69FB300)

inline static constexpr unsigned int Class_2_14B8F1A93C1DC200_TypeDefinitionIndex = 65254;

class Class_2_14B8F1A93C1DC200 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UITabButton* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UITabButton* Field_2_4; // 0x28
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIFriendSystemWidgetController*>* Field_2_1; // 0x30
	::Class_2_1F76884FC39FD584* Field_2_2; // 0x38
	::UnityEngine::UI::Extension::UITabButton* Field_2_3; // 0x40
	::UnityEngine::UI::Extension::UITabButton* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
