#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_50D1236DCB8AC3F7_Class_2_657FCF08AA744B3D_2;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_50D1236DCB8AC3F7_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x762FC10)
#define CLASS_2_50D1236DCB8AC3F7_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x762FE60)
#define CLASS_2_50D1236DCB8AC3F7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x762FF50)
#define CLASS_2_50D1236DCB8AC3F7__CTOR_OFFSET UNITYSDK_OFFSET(0x762FF40)

inline static constexpr unsigned int Class_2_50D1236DCB8AC3F7_TypeDefinitionIndex = 44199;

class Class_2_50D1236DCB8AC3F7 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoInputKey* Field_2_2; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x28
	::MoleMole::UIGeneralButtonController* Field_2_0; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_50D1236DCB8AC3F7_Class_2_657FCF08AA744B3D_2*>* Field_2_6; // 0x38
	::MoleMole::MonoGamepadModule* Field_2_1; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50D1236DCB8AC3F7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_50D1236DCB8AC3F7_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_50D1236DCB8AC3F7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50D1236DCB8AC3F7_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
