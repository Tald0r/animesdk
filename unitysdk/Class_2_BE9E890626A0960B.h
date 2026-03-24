#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIVHSStoreLimitBtnsWidgetController; }
namespace MoleMole { class UIVHSStoreLimitRoleInfoWidgetController; }
namespace MoleMole { class UIVHSStoreRecommandWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_BE9E890626A0960B_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xA3C0220)
#define CLASS_2_BE9E890626A0960B_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0xA3BFFC0)
#define CLASS_2_BE9E890626A0960B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA3C0360)
#define CLASS_2_BE9E890626A0960B__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C0350)

inline static constexpr unsigned int Class_2_BE9E890626A0960B_TypeDefinitionIndex = 42848;

class Class_2_BE9E890626A0960B : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadModule* Field_2_7; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UIVHSStoreLimitRoleInfoWidgetController*>* Field_2_1; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIVHSStoreLimitBtnsWidgetController*>* Field_2_2; // 0x28
	::Class_3_647A206587033F4E<::MoleMole::UIVHSStoreRecommandWidgetController*>* Field_2_3; // 0x30
	::MoleMole::MonoGamepadRegion* Field_2_5; // 0x38
	::MonoUITableScrollV2* Field_2_4; // 0x40
	::MoleMole::MonoGamepadModule* Field_2_6; // 0x48
	::UnityEngine::GameObject* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE9E890626A0960B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BE9E890626A0960B_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE9E890626A0960B_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BE9E890626A0960B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
