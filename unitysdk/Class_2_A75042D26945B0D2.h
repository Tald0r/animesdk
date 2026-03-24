#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace MoleMole { class UIVideoSetDetailWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_A75042D26945B0D2_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x1531FDF0)
#define CLASS_2_A75042D26945B0D2_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x153200A0)
#define CLASS_2_A75042D26945B0D2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15320200)
#define CLASS_2_A75042D26945B0D2__CTOR_OFFSET UNITYSDK_OFFSET(0x153201F0)

inline static constexpr unsigned int Class_2_A75042D26945B0D2_TypeDefinitionIndex = 67751;

class Class_2_A75042D26945B0D2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_2; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38
	::Class_3_647A206587033F4E<::MoleMole::UIVideoSetDetailWidgetController*>* Field_2_8; // 0x40
	::MonoUITableScrollV2* Field_2_1; // 0x48
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralSortWidgetController*>* Field_2_7; // 0x50
	::MoleMole::MonoGamepadNavigatableList* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75042D26945B0D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A75042D26945B0D2_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A75042D26945B0D2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75042D26945B0D2_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
