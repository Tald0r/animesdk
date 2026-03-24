#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIVHSPlayerRoleWidgetController; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_7E0B8A0505C257C2_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x6434470)
#define CLASS_2_7E0B8A0505C257C2_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x64345E0)
#define CLASS_2_7E0B8A0505C257C2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x64346D0)
#define CLASS_2_7E0B8A0505C257C2__CTOR_OFFSET UNITYSDK_OFFSET(0x64346C0)

inline static constexpr unsigned int Class_2_7E0B8A0505C257C2_TypeDefinitionIndex = 37671;

class Class_2_7E0B8A0505C257C2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIVHSPlayerRoleWidgetController*>* Field_2_0; // 0x18
	::UnityEngine::CanvasGroup* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E0B8A0505C257C2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
