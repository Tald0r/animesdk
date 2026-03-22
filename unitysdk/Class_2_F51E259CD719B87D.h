#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F51E259CD719B87D_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x7163880)
#define CLASS_2_F51E259CD719B87D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7163970)
#define CLASS_2_F51E259CD719B87D_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x71636E0)
#define CLASS_2_F51E259CD719B87D__CTOR_OFFSET UNITYSDK_OFFSET(0x7163960)

inline static constexpr unsigned int Class_2_F51E259CD719B87D_TypeDefinitionIndex = 37699;

class Class_2_F51E259CD719B87D : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadNavigatableList* Field_2_3; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x28
	::MonoUITableScrollV2* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F51E259CD719B87D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F51E259CD719B87D_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F51E259CD719B87D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F51E259CD719B87D_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
