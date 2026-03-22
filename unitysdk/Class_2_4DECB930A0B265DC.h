#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_4DECB930A0B265DC_Class_2_1840CB525912D373_1;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIVHSStoreWidgetWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_4DECB930A0B265DC_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x6DE5F50)
#define CLASS_2_4DECB930A0B265DC_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x6DE6180)
#define CLASS_2_4DECB930A0B265DC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6DE6300)
#define CLASS_2_4DECB930A0B265DC__CTOR_OFFSET UNITYSDK_OFFSET(0x6DE62F0)

inline static constexpr unsigned int Class_2_4DECB930A0B265DC_TypeDefinitionIndex = 52173;

class Class_2_4DECB930A0B265DC : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_4DECB930A0B265DC_Class_2_1840CB525912D373_1*>* Field_2_3; // 0x20
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIVHSStoreWidgetWidgetController*>* Field_2_1; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DECB930A0B265DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4DECB930A0B265DC_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DECB930A0B265DC_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4DECB930A0B265DC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
