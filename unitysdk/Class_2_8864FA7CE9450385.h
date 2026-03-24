#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_8864FA7CE9450385_Class_2_055747CC6D90DE4C;
class Class_2_8864FA7CE9450385_Class_2_F07F0A447E516ADA;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_8864FA7CE9450385_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x69AAB30)
#define CLASS_2_8864FA7CE9450385_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x69AA8B0)
#define CLASS_2_8864FA7CE9450385_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x69AAC50)
#define CLASS_2_8864FA7CE9450385__CTOR_OFFSET UNITYSDK_OFFSET(0x69AAC40)

inline static constexpr unsigned int Class_2_8864FA7CE9450385_TypeDefinitionIndex = 37666;

class Class_2_8864FA7CE9450385 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_8864FA7CE9450385_Class_2_F07F0A447E516ADA*>* Field_2_5; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_3; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_8864FA7CE9450385_Class_2_055747CC6D90DE4C*>* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8864FA7CE9450385__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8864FA7CE9450385_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8864FA7CE9450385_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8864FA7CE9450385_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
