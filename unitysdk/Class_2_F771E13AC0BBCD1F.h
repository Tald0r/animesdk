#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_F771E13AC0BBCD1F_Class_2_8AF8272AE2304074;
class Class_2_F771E13AC0BBCD1F_Class_2_CEDEE32CDEEE0E54_2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_F771E13AC0BBCD1F_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x98EDED0)
#define CLASS_2_F771E13AC0BBCD1F_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x98EE120)
#define CLASS_2_F771E13AC0BBCD1F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x98EE210)
#define CLASS_2_F771E13AC0BBCD1F__CTOR_OFFSET UNITYSDK_OFFSET(0x98EE200)

inline static constexpr unsigned int Class_2_F771E13AC0BBCD1F_TypeDefinitionIndex = 50922;

class Class_2_F771E13AC0BBCD1F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_F771E13AC0BBCD1F_Class_2_8AF8272AE2304074*>* Field_2_1; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_3; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_F771E13AC0BBCD1F_Class_2_CEDEE32CDEEE0E54_2*>* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_6; // 0x30
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x40
	::UnityEngine::RectTransform* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F771E13AC0BBCD1F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F771E13AC0BBCD1F_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F771E13AC0BBCD1F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F771E13AC0BBCD1F_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
